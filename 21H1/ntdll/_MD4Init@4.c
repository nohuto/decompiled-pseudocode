/*
 * XREFs of _MD4Init@4 @ 0x4B380140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall MD4Init(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1;
  a1[4] = 0;
  a1[5] = 0;
  *a1 = 1732584193;
  a1[1] = -271733879;
  a1[2] = -1732584194;
  a1[3] = 271733878;
  return result;
}
