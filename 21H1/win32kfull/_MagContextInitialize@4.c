/*
 * XREFs of _MagContextInitialize@4 @ 0xEC9FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall MagContextInitialize(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1;
  a1[1] = a1;
  *a1 = a1;
  return result;
}
