/*
 * XREFs of KiBugCheckDispatch @ 0x140434DC0
 * Callers:
 *     KxIsrLinkage @ 0x140423360 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x14042CF40 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14042DB00 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x14042E840 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14042EBC0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14042EF00 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14042F240 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14042F580 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x140430000 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140430800 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x140431CC0 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140432080 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432780 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x140433E80 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x140434000 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x140435300 (KiFastFailDispatch.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
