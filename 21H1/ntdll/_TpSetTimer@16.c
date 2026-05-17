/*
 * XREFs of _TpSetTimer@16 @ 0x4B2B4560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall TpSetTimer(int a1, int a2, int a3, int a4)
{
  return TpSetTimerEx(a1, a2, a3, a4);
}
