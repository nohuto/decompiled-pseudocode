/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x1403AEF08
 * Callers:
 *     HalpTimerClockActivate @ 0x1403AE810 (HalpTimerClockActivate.c)
 *     HalpTimerConfigureInterrupt @ 0x1403AEA08 (HalpTimerConfigureInterrupt.c)
 *     HalpInitializeInterruptsPn @ 0x1403B8BF8 (HalpInitializeInterruptsPn.c)
 *     HalpTimerInitializeClock @ 0x1403BAF00 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeProfiling @ 0x1403BB340 (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeClockPn @ 0x1403BB500 (HalpTimerInitializeClockPn.c)
 *     HalpTimerTestHypervisorTimer @ 0x14050E088 (HalpTimerTestHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x14051DB60 (HalpConnectThermalInterrupt.c)
 *     HalpIommuInitInterrupts @ 0x140A55474 (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140AF82A8 (HalpInitializeInterrupts.c)
 *     IommupHvInitializeLibrary @ 0x140B4D2C4 (IommupHvInitializeLibrary.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x1403AEF40 (HalpCreateInterrupt.c)
 */

__int64 __fastcall HalpInterruptSetIdtEntry(unsigned __int8 a1, int a2, char a3, __int64 a4, __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return HalpCreateInterrupt(a2, a1, a3, a2, a5);
}
