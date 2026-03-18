/*
 * XREFs of HalpSfiTimerStop @ 0x1404D3FF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpSfiTimerInitialize @ 0x1404D3EA0 (HalpSfiTimerInitialize.c)
 */

__int64 __fastcall HalpSfiTimerStop(LARGE_INTEGER *a1)
{
  return HalpSfiTimerInitialize(a1);
}
