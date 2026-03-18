/*
 * XREFs of KiBugCheckDispatch @ 0x140409000
 * Callers:
 *     KxIsrLinkage @ 0x1403FA0A0 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x140402340 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x140402E80 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x1404038C0 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x140403BC0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x140403EC0 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1404041C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1404044C0 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x140404F00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140405540 (KiFloatingErrorFault.c)
 *     KiXmmException @ 0x140406740 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140406B00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140407000 (KiControlProtectionFault.c)
 *     KiSystemServiceHandler @ 0x140408440 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x1404085C0 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x1404093C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1404096C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
