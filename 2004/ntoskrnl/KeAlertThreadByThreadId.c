/*
 * XREFs of KeAlertThreadByThreadId @ 0x14027D880
 * Callers:
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 *     NtAlertThreadByThreadId @ 0x140666720 (NtAlertThreadByThreadId.c)
 *     RtlRunOnceComplete @ 0x1406A4990 (RtlRunOnceComplete.c)
 *     VslCallEnclave @ 0x14088BB04 (VslCallEnclave.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x140282EB0 (KiSignalThread.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeAlertThreadByThreadId(__int64 a1, __int64 a2)
{
  char CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *v5; // rcx
  char v6; // di
  char v7; // al
  _DWORD *v9; // rcx
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+50h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= a2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = 0;
  while ( 1 )
  {
    v5 = CurrentPrcb->SchedulerAssist;
    if ( v5 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v5[6];
        v5[6] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v9[6] - 1;
        v9[6] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v13, a2);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || *(_BYTE *)(a1 + 643) != 37
      || (v7 = KiSignalThread(CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v7) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 4u);
    }
  }
  KiReleaseThreadLockSafe(a1);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
  return v6;
}
