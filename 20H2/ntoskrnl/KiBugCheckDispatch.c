/*
 * XREFs of KiBugCheckDispatch @ 0x14040FCC0
 * Callers:
 *     KxIsrLinkage @ 0x1403FF760 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x140408700 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x140409240 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x140409E80 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14040A180 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14040A440 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14040A740 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14040AA40 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x14040B480 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14040BC00 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x14040CF40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x14040D300 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14040D940 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x14040EE80 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x14040F000 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x1404101C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140410600 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
