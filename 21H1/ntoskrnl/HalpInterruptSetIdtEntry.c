/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x14039F18C
 * Callers:
 *     HalpTimerClockActivate @ 0x14039EF50 (HalpTimerClockActivate.c)
 *     HalpTimerConfigureInterrupt @ 0x14039F064 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeClock @ 0x1403A4DE8 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeProfiling @ 0x1403A51F0 (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeClockPn @ 0x1403A53B0 (HalpTimerInitializeClockPn.c)
 *     HalpInitializeInterruptsPn @ 0x1403A5B60 (HalpInitializeInterruptsPn.c)
 *     HalpTimerTestHypervisorTimer @ 0x1404BC55C (HalpTimerTestHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x1404CC1D0 (HalpConnectThermalInterrupt.c)
 *     HalpIommuInitInterrupts @ 0x140997228 (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140A3667C (HalpInitializeInterrupts.c)
 *     IommupHvInitializeLibrary @ 0x140A8B664 (IommupHvInitializeLibrary.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x14039F1C4 (HalpCreateInterrupt.c)
 */

__int64 __fastcall HalpInterruptSetIdtEntry(unsigned __int8 a1, int a2, char a3, __int64 a4, __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return HalpCreateInterrupt(a2, a1, a3, a2, a5);
}
