/*
 * XREFs of _MD5Init@4 @ 0x4B2F2470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall MD5Init(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 1732584193;
  a1[3] = -271733879;
  a1[4] = -1732584194;
  a1[5] = 271733878;
  return result;
}
