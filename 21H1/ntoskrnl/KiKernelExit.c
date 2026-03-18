/*
 * XREFs of KiKernelExit @ 0x140A12B80
 * Callers:
 *     NtContinueEx @ 0x1403F6580 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403F6840 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1403F70E0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403F7900 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403F7B90 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403F7E20 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1403F80B0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403F8330 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1403F8E10 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1403F9EB0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1403FB2B0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1403FB550 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1403FBA90 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1403FC050 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1403FC540 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1403FD780 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1403FEAB0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x140401B80 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1404020C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140403C00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140404F80 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140405800 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140405D00 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1404072C0 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404080C0 (KiFastFailDispatch.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall KiKernelExit(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // sp
  bool v6; // cf
  _BYTE v7[40]; // [rsp-10h] [rbp-28h] BYREF

  __writegsqword(0x9010u, (unsigned __int64)v7);
  if ( (KeGetPcr()->Prcb.ShadowFlags & 2) == 0 )
  {
    v6 = (v5 & 1) != 0;
    if ( v6 && (KeGetPcr()->Prcb.ShadowFlags & 1) != 0 )
      __writegsdword(0x9018u, KeGetPcr()->Prcb.ShadowFlags & 0xFFFFFFFE);
    __writecr3((unsigned __int64)v7);
  }
  if ( (KeGetPcr()->Prcb.ShadowFlags & 2) == 0 )
    __asm { verw    [rsp+arg_18] }
  __asm
  {
    swapgs
    iretq
  }
}
