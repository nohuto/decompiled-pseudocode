/*
 * XREFs of _MagContextDestroy@4 @ 0xD4C94
 * Callers:
 *     <none>
 * Callees:
 *     _MagContextThreadCallout@16 @ 0x13C87A (_MagContextThreadCallout@16.c)
 */

int __stdcall MagContextDestroy(_DWORD *a1)
{
  _DWORD *v1; // edi
  _DWORD *v2; // eax
  int result; // eax

  v1 = (_DWORD *)*a1;
  while ( v1 != a1 )
  {
    v2 = v1;
    v1 = (_DWORD *)*v1;
    result = MagContextThreadCallout(a1, v2[2], v2, 1);
  }
  a1[1] = a1;
  *a1 = a1;
  return result;
}
