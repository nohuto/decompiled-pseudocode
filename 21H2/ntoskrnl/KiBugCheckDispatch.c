/*
 * XREFs of KiBugCheckDispatch @ 0x140412740
 * Callers:
 *     KxIsrLinkage @ 0x140401B40 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x14040AE40 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14040B9C0 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x14040C680 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14040C980 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14040CC80 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14040CF80 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14040D280 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x14040DD00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14040E4C0 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x14040F840 (KiXmmException.c)
 *     KiVirtualizationException @ 0x14040FC00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140410280 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x140411880 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x140411A00 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x140412C80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140413100 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
