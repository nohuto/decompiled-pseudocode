/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00978D8
 * Callers:
 *     GreExcludeClipRect @ 0x1C0067A70 (GreExcludeClipRect.c)
 *     GreRectVisible @ 0x1C009775C (GreRectVisible.c)
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C009F2E0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00A6200 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     GreMaskBlt @ 0x1C0102C4C (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C014B4C0 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0097914 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2)
{
  __int64 result; // rax

  result = EXFORMOBJ::bXform(this, a2, 2uLL);
  if ( *((_DWORD *)this + 3) )
  {
    ++a2->x;
    ++a2[1].x;
  }
  return result;
}
