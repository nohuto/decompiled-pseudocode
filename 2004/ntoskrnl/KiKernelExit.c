/*
 * XREFs of KiKernelExit @ 0x140A12B80
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
 *     KiBoundFault @ 0x140402E80 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1404033C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140404F00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140406280 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140406B00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140407000 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1404085C0 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404093C0 (KiFastFailDispatch.c)
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
