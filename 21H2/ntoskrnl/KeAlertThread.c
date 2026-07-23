/*
 * XREFs of KeAlertThread @ 0x14029BC80
 * Callers:
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1402484C0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     KeRequestTerminationThread @ 0x14029BB18 (KeRequestTerminationThread.c)
 *     IoDecrementKeepAliveCount @ 0x140506E30 (IoDecrementKeepAliveCount.c)
 *     KeAlertResumeThread @ 0x1405131A0 (KeAlertResumeThread.c)
 *     NtAlertThread @ 0x14090C800 (NtAlertThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiSignalThread @ 0x1402EACF0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeAlertThread(__int64 a1, char a2)
{
  __int64 v2; // r14
  char CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *v6; // rcx
  char v7; // si
  char v9; // al
  _DWORD *v10; // rcx
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( 1 )
  {
    v6 = CurrentPrcb->SchedulerAssist;
    if ( v6 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v6[6];
        v6[6] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v10[6] - 1;
        v10[6] = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v14);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v7 = *(_BYTE *)(v2 + a1 + 114);
  if ( !v7 )
  {
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || (*(_DWORD *)(a1 + 116) & 0x10) == 0
      || (char)v2 > *(char *)(a1 + 391)
      || (v9 = KiSignalThread(CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v9) )
    {
      *(_BYTE *)(v2 + a1 + 114) = 1;
    }
  }
  KiReleaseThreadLockSafe(a1);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 2, CurrentIrql);
  return v7;
}
