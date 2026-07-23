/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80
 * Callers:
 *     KxIsrLinkage @ 0x140401D20 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1404030D0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1404037E0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140403AD0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140403DC0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1404040B0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1404043A0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140405140 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140405870 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140405ED0 (KiIpiInterrupt.c)
 *     KyStartUserThread @ 0x1404070F0 (KyStartUserThread.c)
 *     KiDivideErrorFault @ 0x14040A700 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14040AB00 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x14040B440 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14040B780 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14040BAC0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040C140 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14040C780 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14040CA80 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14040CD80 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14040D080 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14040D380 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14040D740 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14040DAC0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14040DE00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14040E5C0 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x14040E980 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x14040F300 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x14040F940 (KiXmmException.c)
 *     KiVirtualizationException @ 0x14040FD00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140410380 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1404109C0 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x140410D00 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140411040 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x140411380 (KiSystemService.c)
 *     KiSystemCall32 @ 0x140411600 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140411B00 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140A16E40 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140A171C0 (KiSystemCall64Shadow.c)
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
