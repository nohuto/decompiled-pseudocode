/*
 * XREFs of KiBugCheckDispatch @ 0x140412840
 * Callers:
 *     KxIsrLinkage @ 0x140401D20 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x14040AF40 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14040BAC0 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x14040C780 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14040CA80 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14040CD80 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14040D080 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14040D380 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x14040DE00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14040E5C0 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x14040F940 (KiXmmException.c)
 *     KiVirtualizationException @ 0x14040FD00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140410380 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x140411980 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x140411B00 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x140412D80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140413200 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
