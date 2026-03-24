/*
 * XREFs of KiCopyCounters @ 0x14051BE60
 * Callers:
 *     NtContinueEx @ 0x1403FE630 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403FEA60 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1403FF5C0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FFF40 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140400330 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140400720 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140400B10 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140400F00 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140401B40 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140402EF0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1404044B0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1404048B0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140404F60 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140405690 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140405CF0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1404071F0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140408680 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x14040AE40 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14040B9C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040C040 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040DD00 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14040EBC0 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x14040F200 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040FC00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140410280 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140411A00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412C80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140413100 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCopyCountersWorker @ 0x1408BC268 (KiCopyCountersWorker.c)
 */

struct _KPRCB *__fastcall KiCopyCounters(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rsi
  int v5; // eax
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  struct _KPRCB *result; // rax

  v1 = *(_QWORD *)(a1 + 360);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  do
  {
    v4 = *(_QWORD *)(a1 + 72);
    _enable();
    v5 = KiCopyCountersWorker(a1, v1);
    _disable();
  }
  while ( !v5 && v4 != *(_QWORD *)(a1 + 72) );
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  result = KeGetCurrentPrcb();
  if ( (result->PairRegister & 2) != 0 )
    return (struct _KPRCB *)KiUpdateStibpPairing(0LL);
  return result;
}
