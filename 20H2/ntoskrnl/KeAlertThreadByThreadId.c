/*
 * XREFs of KeAlertThreadByThreadId @ 0x14023F1C0
 * Callers:
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 *     NtAlertThreadByThreadId @ 0x14063B510 (NtAlertThreadByThreadId.c)
 *     RtlRunOnceComplete @ 0x1406B4AF0 (RtlRunOnceComplete.c)
 *     VslCallEnclave @ 0x140891654 (VslCallEnclave.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KiSignalThread @ 0x14028D1C0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeAlertThreadByThreadId(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *v4; // rcx
  char v5; // di
  char v6; // al
  _DWORD *v8; // rcx
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+50h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  while ( 1 )
  {
    v4 = CurrentPrcb->SchedulerAssist;
    if ( v4 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = v4[6];
        v4[6] = v10 + 1;
        if ( v10 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v8[6] - 1;
        v8[6] = v11;
        if ( !v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v12);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || *(_BYTE *)(a1 + 643) != 37
      || (v6 = KiSignalThread(CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v6) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 4u);
    }
  }
  KiReleaseThreadLockSafe(a1);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
  return v5;
}
