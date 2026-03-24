/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x1403A26AC
 * Callers:
 *     HalpTimerClockActivate @ 0x1403A2470 (HalpTimerClockActivate.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A2584 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeClock @ 0x1403A8454 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeProfiling @ 0x1403A8850 (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeClockPn @ 0x1403A8A10 (HalpTimerInitializeClockPn.c)
 *     HalpInitializeInterruptsPn @ 0x1403A91B8 (HalpInitializeInterruptsPn.c)
 *     HalpTimerTestHypervisorTimer @ 0x1404C1B2C (HalpTimerTestHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x1404D15B0 (HalpConnectThermalInterrupt.c)
 *     HalpIommuInitInterrupts @ 0x14099BBB8 (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140A396FC (HalpInitializeInterrupts.c)
 *     IommupHvInitializeLibrary @ 0x140A8D764 (IommupHvInitializeLibrary.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x1403A26E4 (HalpCreateInterrupt.c)
 */

__int64 __fastcall HalpInterruptSetIdtEntry(unsigned __int8 a1, int a2, char a3, __int64 a4, __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return HalpCreateInterrupt(a2, a1, a3, a2, a5);
}
