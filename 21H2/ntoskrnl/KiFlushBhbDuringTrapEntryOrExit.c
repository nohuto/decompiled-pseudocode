/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x1404357C0
 * Callers:
 *     KxIsrLinkage @ 0x140423360 (KxIsrLinkage.c)
 *     KyStartUserThread @ 0x140424520 (KyStartUserThread.c)
 *     KiApcInterrupt @ 0x140425050 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1404257E0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140425B20 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140425E60 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1404261A0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1404264E0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140427360 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140427B30 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140428220 (KiIpiInterrupt.c)
 *     KiDivideErrorFault @ 0x14042C600 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14042CB00 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x14042D480 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14042D7C0 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14042DB00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042E1C0 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14042E840 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14042EBC0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14042EF00 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14042F240 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14042F580 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14042F940 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14042FCC0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x140430000 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140430800 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x140430BC0 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x140431640 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x140431CC0 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140432080 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432780 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x140432EC0 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x140433200 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140433540 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x140433880 (KiSystemService.c)
 *     KiSystemCall32 @ 0x140433B00 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140434000 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140AB6E40 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140AB71C0 (KiSystemCall64Shadow.c)
 * Callees:
 *     <none>
 */

char KiFlushBhbDuringTrapEntryOrExit()
{
  char result; // al

  if ( (KeGetPcr()->Prcb.BpbFeatures & 0x30) == 0 )
    __debugbreak();
  result = KeGetPcr()->Prcb.BpbFeatures & 0x30;
  switch ( result )
  {
    case 16:
      return KiFlushBhbDuringTrapEntryOrExitPreAlderLake(56026LL);
    case 32:
      return KiFlushBhbDuringTrapEntryOrExitAlderLake(56026LL);
    case 48:
      return KiFlushBhbDuringTrapEntryOrExitTsx(56026LL);
  }
  __debugbreak();
  return result;
}
