/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x140413B80
 * Callers:
 *     KxIsrLinkage @ 0x140401B40 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140402EF0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x140403600 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1404038F0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140403BE0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140403ED0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1404041C0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140404F60 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140405690 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140405CF0 (KiIpiInterrupt.c)
 *     KyStartUserThread @ 0x140406F10 (KyStartUserThread.c)
 *     KiDivideErrorFault @ 0x14040A600 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14040AA00 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x14040B340 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14040B680 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14040B9C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040C040 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14040C680 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14040C980 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14040CC80 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14040CF80 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14040D280 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14040D640 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14040D9C0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14040DD00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14040E4C0 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x14040E880 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x14040F200 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x14040F840 (KiXmmException.c)
 *     KiVirtualizationException @ 0x14040FC00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140410280 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1404108C0 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x140410C00 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140410F40 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x140411280 (KiSystemService.c)
 *     KiSystemCall32 @ 0x140411500 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140411A00 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140A15E40 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140A161C0 (KiSystemCall64Shadow.c)
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
