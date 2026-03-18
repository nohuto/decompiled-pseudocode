/*
 * XREFs of HalpTimerSetProfilingHandler @ 0x1404BC3D4
 * Callers:
 *     HalpSetSystemInformation @ 0x14071F2E0 (HalpSetSystemInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpTimerSetProfilingHandler(__int64 (*a1)(void))
{
  HalpTimerProfilingCallback = a1;
}
