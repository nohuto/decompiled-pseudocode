/*
 * XREFs of HalpSfiTimerStop @ 0x1404D5C00
 * Callers:
 *     <none>
 * Callees:
 *     HalpSfiTimerInitialize @ 0x1404D5AB0 (HalpSfiTimerInitialize.c)
 */

__int64 __fastcall HalpSfiTimerStop(LARGE_INTEGER *a1)
{
  return HalpSfiTimerInitialize(a1);
}
