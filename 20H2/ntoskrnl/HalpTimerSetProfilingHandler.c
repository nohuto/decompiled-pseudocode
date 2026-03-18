/*
 * XREFs of HalpTimerSetProfilingHandler @ 0x1404BFFD4
 * Callers:
 *     HalpSetSystemInformation @ 0x14072F190 (HalpSetSystemInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpTimerSetProfilingHandler(__int64 (*a1)(void))
{
  HalpTimerProfilingCallback = a1;
}
