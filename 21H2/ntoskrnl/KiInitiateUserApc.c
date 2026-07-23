/*
 * XREFs of KiInitiateUserApc @ 0x140403700
 * Callers:
 *     NtContinueEx @ 0x1403FE810 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403FEC40 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1403FF7A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140400120 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140400510 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140400900 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140400CF0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404010E0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140401D20 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1404030D0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140404690 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140404A90 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140405140 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140405870 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140405ED0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1404073D0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140408860 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14040BAC0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040C140 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040DE00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14040F300 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040FD00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140410380 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140411B00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412D80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140413200 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 */

char __fastcall KiInitiateUserApc()
{
  __int64 v0; // rbp
  __int64 v2; // [rsp+0h] [rbp-138h] BYREF

  return KiDeliverApc(1, (__int64)&v2, v0 - 128);
}
