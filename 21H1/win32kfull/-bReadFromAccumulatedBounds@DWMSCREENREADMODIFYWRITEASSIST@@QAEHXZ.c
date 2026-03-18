/*
 * XREFs of ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ @ 0x1FDC9E
 * Callers:
 *     _NtGdiRectangle@20 @ 0xBB870 (_NtGdiRectangle@20.c)
 *     _NtGdiLineTo@12 @ 0xBBAF6 (_NtGdiLineTo@12.c)
 *     _NtGdiInvertRgn@8 @ 0x1FEC75 (_NtGdiInvertRgn@8.c)
 *     _GrePolyBezier@12 @ 0x1FFD2A (_GrePolyBezier@12.c)
 *     _GrePolyPolygon@20 @ 0x200428 (_GrePolyPolygon@20.c)
 *     _GrePolyPolyline@20 @ 0x2006C0 (_GrePolyPolyline@20.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QAEHPBU_RECTL@@@Z @ 0x1F4842 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QAEHPBU_RECTL@@@Z.c)
 */

int __thiscall DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  int v2; // ebx
  _DWORD *v3; // eax
  int v4; // esi
  int v5; // edx
  const struct _RECTL *v6; // ecx
  int v8; // [esp+Ch] [ebp-14h] BYREF
  int v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+14h] [ebp-Ch]
  int v11; // [esp+18h] [ebp-8h]

  v2 = 0;
  v3 = (_DWORD *)**((_DWORD **)this + 5);
  if ( v3 )
  {
    if ( GreGetBounds(*v3, &v8, 4) )
    {
      v4 = **((_DWORD **)this + 5);
      v5 = *(_DWORD *)(v4 + 28) & 1;
      v8 -= *(_DWORD *)(v4 + 8 * v5 + 1048);
      v10 -= *(_DWORD *)(v4 + 8 * v5 + 1048);
      v9 -= *(_DWORD *)(v4 + 8 * v5 + 1052);
      v11 -= *(_DWORD *)(v4 + 8 * v5 + 1052);
      if ( !ERECTL::bEmpty((ERECTL *)&v8) )
        return DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect(this, v6);
    }
  }
  return v2;
}
