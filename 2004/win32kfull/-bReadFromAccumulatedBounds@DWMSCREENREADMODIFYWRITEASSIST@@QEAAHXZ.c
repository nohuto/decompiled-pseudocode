/*
 * XREFs of ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C029FA08
 * Callers:
 *     GrePolyPolyline @ 0x1C0136000 (GrePolyPolyline.c)
 *     NtGdiRectangle @ 0x1C0137370 (NtGdiRectangle.c)
 *     GrePolyPolygon @ 0x1C0137C80 (GrePolyPolygon.c)
 *     NtGdiLineTo @ 0x1C01381C0 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C013BC40 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x1C02A0B30 (GrePolyBezier.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C013A960 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  _QWORD **v1; // rax
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rdx
  struct _RECTL v7; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD **)*((_QWORD *)this + 3);
  v3 = 0;
  if ( *v1 )
  {
    if ( (unsigned int)GreGetBounds(**v1, &v7, 4LL) )
    {
      v4 = **((_QWORD **)this + 3);
      v5 = *(_DWORD *)(v4 + 40) & 1;
      v7.left -= *(_DWORD *)(v4 + 8 * v5 + 1016);
      v7.right -= *(_DWORD *)(v4 + 8 * v5 + 1016);
      v7.top -= *(_DWORD *)(v4 + 8 * v5 + 1020);
      v7.bottom -= *(_DWORD *)(v4 + 8 * v5 + 1020);
      if ( !ERECTL::bEmpty((ERECTL *)&v7) )
        return (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect(this, &v7);
    }
  }
  return v3;
}
