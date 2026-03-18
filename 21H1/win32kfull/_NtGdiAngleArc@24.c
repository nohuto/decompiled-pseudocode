/*
 * XREFs of _NtGdiAngleArc@24 @ 0x212189
 * Callers:
 *     <none>
 * Callees:
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 */

int __stdcall NtGdiAngleArc(HDC a1, LONG a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  int v6; // esi
  int v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h] BYREF

  v6 = 0;
  v8 = 0;
  v9 = 0;
  if ( bConvertDwordToFloat(a5, (unsigned int *)&v8) && bConvertDwordToFloat(a6, (unsigned int *)&v9) )
    return GreAngleArc(a1, a2, a3, a4, v8, v9);
  return v6;
}
