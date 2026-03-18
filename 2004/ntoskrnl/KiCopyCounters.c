/*
 * XREFs of KiCopyCounters @ 0x1405169B0
 * Callers:
 *     NtContinueEx @ 0x1403F7810 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403F7AD0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1403F8370 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403F8B90 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403F8E20 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403F90B0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1403F9340 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403F95C0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1403FA0A0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1403FB140 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1403FC540 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1403FC7E0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1403FCD20 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1403FD2E0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1403FD7D0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1403FEA10 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1403FFD40 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x140402340 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x140402E80 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1404033C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140404F00 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140405C40 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x140406280 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140406B00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140407000 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1404085C0 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404093C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1404096C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCopyCountersWorker @ 0x1408B8D68 (KiCopyCountersWorker.c)
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
