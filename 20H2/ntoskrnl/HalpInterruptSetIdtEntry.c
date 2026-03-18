/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x1403A1DEC
 * Callers:
 *     HalpTimerClockActivate @ 0x1403A1BB0 (HalpTimerClockActivate.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A1CC4 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeClock @ 0x1403AE4A4 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeProfiling @ 0x1403AE8A0 (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeClockPn @ 0x1403AEA60 (HalpTimerInitializeClockPn.c)
 *     HalpInitializeInterruptsPn @ 0x1403AF208 (HalpInitializeInterruptsPn.c)
 *     HalpTimerTestHypervisorTimer @ 0x1404C015C (HalpTimerTestHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x1404CFBE0 (HalpConnectThermalInterrupt.c)
 *     HalpIommuInitInterrupts @ 0x1409A1898 (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140A45CAC (HalpInitializeInterrupts.c)
 *     IommupHvInitializeLibrary @ 0x140A90904 (IommupHvInitializeLibrary.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x1403A1E24 (HalpCreateInterrupt.c)
 */

__int64 __fastcall HalpInterruptSetIdtEntry(unsigned __int8 a1, int a2, char a3, __int64 a4, __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return HalpCreateInterrupt(a2, a1, a3, a2, a5);
}
