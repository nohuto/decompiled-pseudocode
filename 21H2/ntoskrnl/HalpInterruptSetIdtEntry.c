/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x1403A27FC
 * Callers:
 *     HalpTimerClockActivate @ 0x1403A25C0 (HalpTimerClockActivate.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A26D4 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeClock @ 0x1403A91E4 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeProfiling @ 0x1403A95E0 (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeClockPn @ 0x1403A97A0 (HalpTimerInitializeClockPn.c)
 *     HalpInitializeInterruptsPn @ 0x1403A9F48 (HalpInitializeInterruptsPn.c)
 *     HalpTimerTestHypervisorTimer @ 0x1404C1D6C (HalpTimerTestHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x1404D17F0 (HalpConnectThermalInterrupt.c)
 *     HalpIommuInitInterrupts @ 0x14099CBB8 (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140A3A6FC (HalpInitializeInterrupts.c)
 *     IommupHvInitializeLibrary @ 0x140A8E764 (IommupHvInitializeLibrary.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x1403A2834 (HalpCreateInterrupt.c)
 */

__int64 __fastcall HalpInterruptSetIdtEntry(unsigned __int8 a1, int a2, char a3, __int64 a4, __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return HalpCreateInterrupt(a2, a1, a3, a2, a5);
}
