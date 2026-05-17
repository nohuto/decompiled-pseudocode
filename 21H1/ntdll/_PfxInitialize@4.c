/*
 * XREFs of _PfxInitialize@4 @ 0x4B345200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall PfxInitialize(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = 512;
  a1[1] = a1;
  return result;
}
