/*
 * XREFs of HalpSfiTimerStop @ 0x1404D05A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpSfiTimerInitialize @ 0x1404D0450 (HalpSfiTimerInitialize.c)
 */

__int64 __fastcall HalpSfiTimerStop(LARGE_INTEGER *a1)
{
  return HalpSfiTimerInitialize(a1);
}
