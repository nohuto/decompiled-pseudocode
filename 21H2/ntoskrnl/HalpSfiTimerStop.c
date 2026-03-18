/*
 * XREFs of HalpSfiTimerStop @ 0x140522CE0
 * Callers:
 *     <none>
 * Callees:
 *     HalpSfiTimerInitialize @ 0x140522BA0 (HalpSfiTimerInitialize.c)
 */

__int64 __fastcall HalpSfiTimerStop(LARGE_INTEGER *a1)
{
  return HalpSfiTimerInitialize(a1);
}
