/*
 * XREFs of HalpBlkFatalErrorHalt @ 0x140A1B0B0
 * Callers:
 *     HalpBlkDivideErrorFault @ 0x140A1B100 (HalpBlkDivideErrorFault.c)
 *     HalpBlkDebugExceptionTrap @ 0x140A1B180 (HalpBlkDebugExceptionTrap.c)
 *     HalpBlkBreakpointTrap @ 0x140A1B200 (HalpBlkBreakpointTrap.c)
 *     HalpBlkOverflowTrap @ 0x140A1B280 (HalpBlkOverflowTrap.c)
 *     HalpBlkBoundRangeExceededFault @ 0x140A1B300 (HalpBlkBoundRangeExceededFault.c)
 *     HalpBlkInvalidOpcodeFault @ 0x140A1B380 (HalpBlkInvalidOpcodeFault.c)
 *     HalpBlkDeviceNotAvailableFault @ 0x140A1B400 (HalpBlkDeviceNotAvailableFault.c)
 *     HalpBlkDoubleFaultAbort @ 0x140A1B480 (HalpBlkDoubleFaultAbort.c)
 *     HalpBlkCoprocessorSegmentOverrunFault @ 0x140A1B500 (HalpBlkCoprocessorSegmentOverrunFault.c)
 *     HalpBlkInvalidTssFault @ 0x140A1B580 (HalpBlkInvalidTssFault.c)
 *     HalpBlkSegmentNotPresentFault @ 0x140A1B600 (HalpBlkSegmentNotPresentFault.c)
 *     HalpBlkStackSegmentFault @ 0x140A1B680 (HalpBlkStackSegmentFault.c)
 *     HalpBlkGeneralProtectionFault @ 0x140A1B700 (HalpBlkGeneralProtectionFault.c)
 *     HalpBlkPageFault @ 0x140A1B780 (HalpBlkPageFault.c)
 *     HalpBlkFloatingPointErrorFault @ 0x140A1B800 (HalpBlkFloatingPointErrorFault.c)
 *     HalpBlkAlignmentFault @ 0x140A1B880 (HalpBlkAlignmentFault.c)
 *     HalpBlkFloatingPointFault @ 0x140A1B900 (HalpBlkFloatingPointFault.c)
 *     HalpBlkVirtualizationFault @ 0x140A1B980 (HalpBlkVirtualizationFault.c)
 *     HalpBlkReservedVector21 @ 0x140A1BA00 (HalpBlkReservedVector21.c)
 *     HalpBlkReservedVector22 @ 0x140A1BA80 (HalpBlkReservedVector22.c)
 *     HalpBlkReservedVector23 @ 0x140A1BB00 (HalpBlkReservedVector23.c)
 *     HalpBlkReservedVector24 @ 0x140A1BB80 (HalpBlkReservedVector24.c)
 *     HalpBlkReservedVector25 @ 0x140A1BC00 (HalpBlkReservedVector25.c)
 *     HalpBlkReservedVector26 @ 0x140A1BC80 (HalpBlkReservedVector26.c)
 *     HalpBlkReservedVector27 @ 0x140A1BD00 (HalpBlkReservedVector27.c)
 *     HalpBlkReservedVector28 @ 0x140A1BD80 (HalpBlkReservedVector28.c)
 *     HalpBlkReservedVector29 @ 0x140A1BE00 (HalpBlkReservedVector29.c)
 *     HalpBlkReservedVector30 @ 0x140A1BE80 (HalpBlkReservedVector30.c)
 *     HalpBlkReservedVector31 @ 0x140A1BF00 (HalpBlkReservedVector31.c)
 *     HalpBlkNmiInterrupt @ 0x140A1C400 (HalpBlkNmiInterrupt.c)
 *     HalpBlkHandleMachineCheckAbort @ 0x140A1D1B0 (HalpBlkHandleMachineCheckAbort.c)
 *     HalpBlkMceFastForward @ 0x140A1D2B0 (HalpBlkMceFastForward.c)
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
