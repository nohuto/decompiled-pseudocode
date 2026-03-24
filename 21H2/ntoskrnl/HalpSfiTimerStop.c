/*
 * XREFs of HalpSfiTimerStop @ 0x1404D59C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpSfiTimerInitialize @ 0x1404D5870 (HalpSfiTimerInitialize.c)
 */

__int64 __fastcall HalpSfiTimerStop(LARGE_INTEGER *a1)
{
  return HalpSfiTimerInitialize(a1);
}
