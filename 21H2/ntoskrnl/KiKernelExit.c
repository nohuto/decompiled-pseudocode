/*
 * XREFs of KiKernelExit @ 0x140A15B80
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
 *     KiBoundFault @ 0x14040B9C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040C040 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040DD00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14040F200 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040FC00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140410280 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140411A00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412C80 (KiFastFailDispatch.c)
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
