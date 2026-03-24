/*
 * XREFs of HalpTimerSetProfilingHandler @ 0x1404C19A4
 * Callers:
 *     HalpSetSystemInformation @ 0x1407333E0 (HalpSetSystemInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpTimerSetProfilingHandler(__int64 (*a1)(void))
{
  HalpTimerProfilingCallback = a1;
}
