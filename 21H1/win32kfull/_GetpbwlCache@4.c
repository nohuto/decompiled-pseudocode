/*
 * XREFs of _GetpbwlCache@4 @ 0xD4DFC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall GetpbwlCache(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = &pbwlCache;
  return result;
}
