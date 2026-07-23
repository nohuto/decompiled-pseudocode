/*
 * XREFs of HalpTimerSetProfilingHandler @ 0x1404C1BE4
 * Callers:
 *     HalpSetSystemInformation @ 0x1407335A0 (HalpSetSystemInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpTimerSetProfilingHandler(__int64 (*a1)(void))
{
  HalpTimerProfilingCallback = a1;
}
