/*
 * XREFs of KiCopyCounters @ 0x14051A380
 * Callers:
 *     NtContinueEx @ 0x1403FC3E0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403FC7E0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1403FD300 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FDC50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403FE010 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FE3D0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1403FE790 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403FEB50 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1403FF760 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140400A90 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140401FC0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140402390 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140402A10 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140403100 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140403720 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x140404BB0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140406010 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x140408700 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x140409240 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140409880 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040B480 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14040C300 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x14040C940 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040D300 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14040D940 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x14040F000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404101C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140410600 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCopyCountersWorker @ 0x1408BEAC8 (KiCopyCountersWorker.c)
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
