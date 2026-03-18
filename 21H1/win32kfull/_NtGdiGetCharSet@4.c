/*
 * XREFs of _NtGdiGetCharSet@4 @ 0x496D6
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetCharSet@4 @ 0x496EA (_GreGetCharSet@4.c)
 */

int __stdcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
