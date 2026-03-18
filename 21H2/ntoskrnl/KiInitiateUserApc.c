/*
 * XREFs of KiInitiateUserApc @ 0x140425700
 * Callers:
 *     NtContinueEx @ 0x14041FB10 (NtContinueEx.c)
 *     NtRaiseException @ 0x14041FF90 (NtRaiseException.c)
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
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 */

char __fastcall KiInitiateUserApc()
{
  __int64 v0; // rbp
  __int64 v2; // [rsp+0h] [rbp-138h] BYREF

  return KiDeliverApc(1, (__int64)&v2, v0 - 128);
}
