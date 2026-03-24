/*
 * XREFs of KeAlertThread @ 0x1402EA930
 * Callers:
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1402C9BD0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     KeRequestTerminationThread @ 0x1402EA7C8 (KeRequestTerminationThread.c)
 *     IoDecrementKeepAliveCount @ 0x140506EB0 (IoDecrementKeepAliveCount.c)
 *     KeAlertResumeThread @ 0x140512F60 (KeAlertResumeThread.c)
 *     NtAlertThread @ 0x14090C6A0 (NtAlertThread.c)
 * Callees:
 *     KiSignalThread @ 0x1402464A0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeAlertThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // r14
  char CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *v8; // rcx
  char v9; // si
  char v11; // al
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v4 = (char)a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v15 = 0;
  while ( 1 )
  {
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v8[6];
        v8[6] = v13 + 1;
        if ( v13 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v12[6] - 1;
        v12[6] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v15, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v9 = *(_BYTE *)(v4 + a1 + 114);
  if ( !v9 )
  {
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || (*(_DWORD *)(a1 + 116) & 0x10) == 0
      || (char)v4 > *(char *)(a1 + 391)
      || (v11 = KiSignalThread((__int64)CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v11) )
    {
      *(_BYTE *)(v4 + a1 + 114) = 1;
    }
  }
  KiReleaseThreadLockSafe(a1);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 2, CurrentIrql);
  return v9;
}
