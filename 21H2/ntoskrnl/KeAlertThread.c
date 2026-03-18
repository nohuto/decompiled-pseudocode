/*
 * XREFs of KeAlertThread @ 0x1402ECB90
 * Callers:
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140253C70 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     KeRequestTerminationThread @ 0x1402ECD10 (KeRequestTerminationThread.c)
 *     IoDecrementKeepAliveCount @ 0x140558640 (IoDecrementKeepAliveCount.c)
 *     KeAlertResumeThread @ 0x14056B0EC (KeAlertResumeThread.c)
 *     NtAlertThread @ 0x1409B2D50 (NtAlertThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x1402F6ED0 (KiSignalThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeAlertThread(__int64 a1, char a2)
{
  __int64 v2; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *v6; // rcx
  char v7; // si
  _DWORD *SchedulerAssist; // r9
  char v10; // al
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v11[6] - 1;
        v11[6] = v13;
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
      || (v10 = KiSignalThread(CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v10) )
    {
      *(_BYTE *)(v2 + a1 + 114) = 1;
    }
  }
  KiReleaseThreadLockSafe(a1);
  KiExitDispatcher((__int64)CurrentPrcb, 0, 1, 2, CurrentIrql);
  return v7;
}
