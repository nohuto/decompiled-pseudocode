/*
 * XREFs of _NtGdiSetFontXform@12 @ 0x214353
 * Callers:
 *     <none>
 * Callees:
 *     _GreSetFontXform@12 @ 0x1EBDFB (_GreSetFontXform@12.c)
 */

int __stdcall NtGdiSetFontXform(HDC a1, unsigned int a2, unsigned int a3)
{
  int v3; // esi
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h] BYREF

  v3 = 0;
  v5 = 0;
  v6 = 0;
  if ( bConvertDwordToFloat(a2, (unsigned int *)&v5) && bConvertDwordToFloat(a3, (unsigned int *)&v6) )
    return GreSetFontXform(a1, v5, v6);
  return v3;
}
