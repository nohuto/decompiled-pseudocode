/*
 * XREFs of KiKernelExit @ 0x140AB6B80
 * Callers:
 *     NtContinueEx @ 0x14041FB10 (NtContinueEx.c)
 *     NtRaiseException @ 0x14041FF90 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1404206B0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x140420C10 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1404215E0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140421A20 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140421E60 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1404222A0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404226D0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140423360 (KxIsrLinkage.c)
 *     KxStartUserThread @ 0x140424840 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x140425050 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140426820 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140426C70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140427360 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140427B30 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140428220 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x14042A6B0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14042DB00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042E1C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140430000 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140431640 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140432080 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432780 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140434000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140434E40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140435300 (KiFastFailDispatch.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall KiKernelExit(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // sp
  bool v6; // cf
  _BYTE v7[40]; // [rsp-10h] [rbp-28h] BYREF

  __writegsqword(0xA010u, (unsigned __int64)v7);
  if ( (KeGetPcr()->Prcb.ShadowFlags & 2) == 0 )
  {
    v6 = (v5 & 1) != 0;
    if ( v6 && (KeGetPcr()->Prcb.ShadowFlags & 1) != 0 )
      __writegsdword(0xA018u, KeGetPcr()->Prcb.ShadowFlags & 0xFFFFFFFE);
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
