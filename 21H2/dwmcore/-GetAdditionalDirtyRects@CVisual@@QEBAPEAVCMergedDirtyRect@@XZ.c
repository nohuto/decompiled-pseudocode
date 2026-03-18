/*
 * XREFs of ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedDirtyRect@@XZ @ 0x1800B7358
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5C00 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PE.c)
 * Callees:
 *     <none>
 */

struct CMergedDirtyRect *__fastcall CVisual::GetAdditionalDirtyRects(CVisual *this)
{
  _DWORD *v1; // r8
  __int64 v2; // rdx
  _BYTE *v3; // r9
  __int64 v4; // rcx
  unsigned int v5; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v1 & 0x40000000) != 0 )
  {
    v2 = (unsigned int)v1[1];
    v3 = v1 + 2;
    v4 = 0LL;
    v5 = 0;
    if ( (_DWORD)v2 )
    {
      while ( *v3 != 2 )
      {
        ++v5;
        ++v3;
        if ( v5 >= (unsigned int)v2 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( v5 >= (unsigned int)v2 )
        return *(struct CMergedDirtyRect **)v4;
    }
    v4 = (__int64)v1 + 8LL * v5 - (((_BYTE)v2 + 15) & 7) + v2 + 15;
    return *(struct CMergedDirtyRect **)v4;
  }
  return 0LL;
}
