/*
 * XREFs of HalpBlkFatalErrorHalt @ 0x140A150B0
 * Callers:
 *     HalpBlkDivideErrorFault @ 0x140A15100 (HalpBlkDivideErrorFault.c)
 *     HalpBlkDebugExceptionTrap @ 0x140A15180 (HalpBlkDebugExceptionTrap.c)
 *     HalpBlkBreakpointTrap @ 0x140A15200 (HalpBlkBreakpointTrap.c)
 *     HalpBlkOverflowTrap @ 0x140A15280 (HalpBlkOverflowTrap.c)
 *     HalpBlkBoundRangeExceededFault @ 0x140A15300 (HalpBlkBoundRangeExceededFault.c)
 *     HalpBlkInvalidOpcodeFault @ 0x140A15380 (HalpBlkInvalidOpcodeFault.c)
 *     HalpBlkDeviceNotAvailableFault @ 0x140A15400 (HalpBlkDeviceNotAvailableFault.c)
 *     HalpBlkDoubleFaultAbort @ 0x140A15480 (HalpBlkDoubleFaultAbort.c)
 *     HalpBlkCoprocessorSegmentOverrunFault @ 0x140A15500 (HalpBlkCoprocessorSegmentOverrunFault.c)
 *     HalpBlkInvalidTssFault @ 0x140A15580 (HalpBlkInvalidTssFault.c)
 *     HalpBlkSegmentNotPresentFault @ 0x140A15600 (HalpBlkSegmentNotPresentFault.c)
 *     HalpBlkStackSegmentFault @ 0x140A15680 (HalpBlkStackSegmentFault.c)
 *     HalpBlkGeneralProtectionFault @ 0x140A15700 (HalpBlkGeneralProtectionFault.c)
 *     HalpBlkPageFault @ 0x140A15780 (HalpBlkPageFault.c)
 *     HalpBlkFloatingPointErrorFault @ 0x140A15800 (HalpBlkFloatingPointErrorFault.c)
 *     HalpBlkAlignmentFault @ 0x140A15880 (HalpBlkAlignmentFault.c)
 *     HalpBlkFloatingPointFault @ 0x140A15900 (HalpBlkFloatingPointFault.c)
 *     HalpBlkVirtualizationFault @ 0x140A15980 (HalpBlkVirtualizationFault.c)
 *     HalpBlkReservedVector21 @ 0x140A15A00 (HalpBlkReservedVector21.c)
 *     HalpBlkReservedVector22 @ 0x140A15A80 (HalpBlkReservedVector22.c)
 *     HalpBlkReservedVector23 @ 0x140A15B00 (HalpBlkReservedVector23.c)
 *     HalpBlkReservedVector24 @ 0x140A15B80 (HalpBlkReservedVector24.c)
 *     HalpBlkReservedVector25 @ 0x140A15C00 (HalpBlkReservedVector25.c)
 *     HalpBlkReservedVector26 @ 0x140A15C80 (HalpBlkReservedVector26.c)
 *     HalpBlkReservedVector27 @ 0x140A15D00 (HalpBlkReservedVector27.c)
 *     HalpBlkReservedVector28 @ 0x140A15D80 (HalpBlkReservedVector28.c)
 *     HalpBlkReservedVector29 @ 0x140A15E00 (HalpBlkReservedVector29.c)
 *     HalpBlkReservedVector30 @ 0x140A15E80 (HalpBlkReservedVector30.c)
 *     HalpBlkReservedVector31 @ 0x140A15F00 (HalpBlkReservedVector31.c)
 *     HalpBlkNmiInterrupt @ 0x140A16400 (HalpBlkNmiInterrupt.c)
 *     HalpBlkHandleMachineCheckAbort @ 0x140A171B0 (HalpBlkHandleMachineCheckAbort.c)
 *     HalpBlkMceFastForward @ 0x140A172B0 (HalpBlkMceFastForward.c)
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
