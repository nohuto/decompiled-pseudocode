/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00193E8
 * Callers:
 *     GreMaskBlt @ 0x1C001456C (GreMaskBlt.c)
 *     GreRectVisible @ 0x1C001788C (GreRectVisible.c)
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     GreExcludeClipRect @ 0x1C001C804 (GreExcludeClipRect.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C007AD40 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0085DA0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     NtGdiTransparentBlt @ 0x1C0148ED0 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00199EC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
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
