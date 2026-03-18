/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x14039F91C
 * Callers:
 *     HalpTimerClockActivate @ 0x14039F6E0 (HalpTimerClockActivate.c)
 *     HalpTimerConfigureInterrupt @ 0x14039F7F4 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeClock @ 0x1403ABEA8 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeProfiling @ 0x1403AC2B0 (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeClockPn @ 0x1403AC470 (HalpTimerInitializeClockPn.c)
 *     HalpInitializeInterruptsPn @ 0x1403ACC20 (HalpInitializeInterruptsPn.c)
 *     HalpTimerTestHypervisorTimer @ 0x1404BCC3C (HalpTimerTestHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x1404CC680 (HalpConnectThermalInterrupt.c)
 *     HalpIommuInitInterrupts @ 0x14099B798 (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140A3FA0C (HalpInitializeInterrupts.c)
 *     IommupHvInitializeLibrary @ 0x140A8ABF4 (IommupHvInitializeLibrary.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x14039F954 (HalpCreateInterrupt.c)
 */

__int64 __fastcall HalpInterruptSetIdtEntry(unsigned __int8 a1, int a2, char a3, __int64 a4, __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return HalpCreateInterrupt(a2, a1, a3, a2, a5);
}
