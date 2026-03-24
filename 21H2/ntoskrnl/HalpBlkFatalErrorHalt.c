/*
 * XREFs of HalpBlkFatalErrorHalt @ 0x140A180B0
 * Callers:
 *     HalpBlkDivideErrorFault @ 0x140A18100 (HalpBlkDivideErrorFault.c)
 *     HalpBlkDebugExceptionTrap @ 0x140A18180 (HalpBlkDebugExceptionTrap.c)
 *     HalpBlkBreakpointTrap @ 0x140A18200 (HalpBlkBreakpointTrap.c)
 *     HalpBlkOverflowTrap @ 0x140A18280 (HalpBlkOverflowTrap.c)
 *     HalpBlkBoundRangeExceededFault @ 0x140A18300 (HalpBlkBoundRangeExceededFault.c)
 *     HalpBlkInvalidOpcodeFault @ 0x140A18380 (HalpBlkInvalidOpcodeFault.c)
 *     HalpBlkDeviceNotAvailableFault @ 0x140A18400 (HalpBlkDeviceNotAvailableFault.c)
 *     HalpBlkDoubleFaultAbort @ 0x140A18480 (HalpBlkDoubleFaultAbort.c)
 *     HalpBlkCoprocessorSegmentOverrunFault @ 0x140A18500 (HalpBlkCoprocessorSegmentOverrunFault.c)
 *     HalpBlkInvalidTssFault @ 0x140A18580 (HalpBlkInvalidTssFault.c)
 *     HalpBlkSegmentNotPresentFault @ 0x140A18600 (HalpBlkSegmentNotPresentFault.c)
 *     HalpBlkStackSegmentFault @ 0x140A18680 (HalpBlkStackSegmentFault.c)
 *     HalpBlkGeneralProtectionFault @ 0x140A18700 (HalpBlkGeneralProtectionFault.c)
 *     HalpBlkPageFault @ 0x140A18780 (HalpBlkPageFault.c)
 *     HalpBlkFloatingPointErrorFault @ 0x140A18800 (HalpBlkFloatingPointErrorFault.c)
 *     HalpBlkAlignmentFault @ 0x140A18880 (HalpBlkAlignmentFault.c)
 *     HalpBlkFloatingPointFault @ 0x140A18900 (HalpBlkFloatingPointFault.c)
 *     HalpBlkVirtualizationFault @ 0x140A18980 (HalpBlkVirtualizationFault.c)
 *     HalpBlkReservedVector21 @ 0x140A18A00 (HalpBlkReservedVector21.c)
 *     HalpBlkReservedVector22 @ 0x140A18A80 (HalpBlkReservedVector22.c)
 *     HalpBlkReservedVector23 @ 0x140A18B00 (HalpBlkReservedVector23.c)
 *     HalpBlkReservedVector24 @ 0x140A18B80 (HalpBlkReservedVector24.c)
 *     HalpBlkReservedVector25 @ 0x140A18C00 (HalpBlkReservedVector25.c)
 *     HalpBlkReservedVector26 @ 0x140A18C80 (HalpBlkReservedVector26.c)
 *     HalpBlkReservedVector27 @ 0x140A18D00 (HalpBlkReservedVector27.c)
 *     HalpBlkReservedVector28 @ 0x140A18D80 (HalpBlkReservedVector28.c)
 *     HalpBlkReservedVector29 @ 0x140A18E00 (HalpBlkReservedVector29.c)
 *     HalpBlkReservedVector30 @ 0x140A18E80 (HalpBlkReservedVector30.c)
 *     HalpBlkReservedVector31 @ 0x140A18F00 (HalpBlkReservedVector31.c)
 *     HalpBlkNmiInterrupt @ 0x140A19400 (HalpBlkNmiInterrupt.c)
 *     HalpBlkHandleMachineCheckAbort @ 0x140A1A1B0 (HalpBlkHandleMachineCheckAbort.c)
 *     HalpBlkMceFastForward @ 0x140A1A2B0 (HalpBlkMceFastForward.c)
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
