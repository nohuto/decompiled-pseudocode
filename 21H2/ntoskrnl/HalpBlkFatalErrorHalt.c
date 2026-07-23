/*
 * XREFs of HalpBlkFatalErrorHalt @ 0x140A190B0
 * Callers:
 *     HalpBlkDivideErrorFault @ 0x140A19100 (HalpBlkDivideErrorFault.c)
 *     HalpBlkDebugExceptionTrap @ 0x140A19180 (HalpBlkDebugExceptionTrap.c)
 *     HalpBlkBreakpointTrap @ 0x140A19200 (HalpBlkBreakpointTrap.c)
 *     HalpBlkOverflowTrap @ 0x140A19280 (HalpBlkOverflowTrap.c)
 *     HalpBlkBoundRangeExceededFault @ 0x140A19300 (HalpBlkBoundRangeExceededFault.c)
 *     HalpBlkInvalidOpcodeFault @ 0x140A19380 (HalpBlkInvalidOpcodeFault.c)
 *     HalpBlkDeviceNotAvailableFault @ 0x140A19400 (HalpBlkDeviceNotAvailableFault.c)
 *     HalpBlkDoubleFaultAbort @ 0x140A19480 (HalpBlkDoubleFaultAbort.c)
 *     HalpBlkCoprocessorSegmentOverrunFault @ 0x140A19500 (HalpBlkCoprocessorSegmentOverrunFault.c)
 *     HalpBlkInvalidTssFault @ 0x140A19580 (HalpBlkInvalidTssFault.c)
 *     HalpBlkSegmentNotPresentFault @ 0x140A19600 (HalpBlkSegmentNotPresentFault.c)
 *     HalpBlkStackSegmentFault @ 0x140A19680 (HalpBlkStackSegmentFault.c)
 *     HalpBlkGeneralProtectionFault @ 0x140A19700 (HalpBlkGeneralProtectionFault.c)
 *     HalpBlkPageFault @ 0x140A19780 (HalpBlkPageFault.c)
 *     HalpBlkFloatingPointErrorFault @ 0x140A19800 (HalpBlkFloatingPointErrorFault.c)
 *     HalpBlkAlignmentFault @ 0x140A19880 (HalpBlkAlignmentFault.c)
 *     HalpBlkFloatingPointFault @ 0x140A19900 (HalpBlkFloatingPointFault.c)
 *     HalpBlkVirtualizationFault @ 0x140A19980 (HalpBlkVirtualizationFault.c)
 *     HalpBlkReservedVector21 @ 0x140A19A00 (HalpBlkReservedVector21.c)
 *     HalpBlkReservedVector22 @ 0x140A19A80 (HalpBlkReservedVector22.c)
 *     HalpBlkReservedVector23 @ 0x140A19B00 (HalpBlkReservedVector23.c)
 *     HalpBlkReservedVector24 @ 0x140A19B80 (HalpBlkReservedVector24.c)
 *     HalpBlkReservedVector25 @ 0x140A19C00 (HalpBlkReservedVector25.c)
 *     HalpBlkReservedVector26 @ 0x140A19C80 (HalpBlkReservedVector26.c)
 *     HalpBlkReservedVector27 @ 0x140A19D00 (HalpBlkReservedVector27.c)
 *     HalpBlkReservedVector28 @ 0x140A19D80 (HalpBlkReservedVector28.c)
 *     HalpBlkReservedVector29 @ 0x140A19E00 (HalpBlkReservedVector29.c)
 *     HalpBlkReservedVector30 @ 0x140A19E80 (HalpBlkReservedVector30.c)
 *     HalpBlkReservedVector31 @ 0x140A19F00 (HalpBlkReservedVector31.c)
 *     HalpBlkNmiInterrupt @ 0x140A1A400 (HalpBlkNmiInterrupt.c)
 *     HalpBlkHandleMachineCheckAbort @ 0x140A1B1B0 (HalpBlkHandleMachineCheckAbort.c)
 *     HalpBlkMceFastForward @ 0x140A1B2B0 (HalpBlkMceFastForward.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HalpBlkFatalErrorHalt(unsigned __int8 a1, unsigned __int64 a2)
{
  __writegsbyte(0x70u, a1);
  _mm_sfence();
  __writegsqword(0x78u, a2);
  _disable();
  __halt();
}
