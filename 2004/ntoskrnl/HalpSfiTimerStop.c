/*
 * XREFs of HalpSfiTimerStop @ 0x1404D0A50
 * Callers:
 *     <none>
 * Callees:
 *     HalpSfiTimerInitialize @ 0x1404D0900 (HalpSfiTimerInitialize.c)
 */

__int64 __fastcall HalpSfiTimerStop(LARGE_INTEGER *a1)
{
  return HalpSfiTimerInitialize(a1);
}
