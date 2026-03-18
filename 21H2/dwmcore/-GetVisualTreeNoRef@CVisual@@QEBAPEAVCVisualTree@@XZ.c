/*
 * XREFs of ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1800473B0
 * Callers:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180047320 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180086704 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800EB74C (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ @ 0x1801FB128 (-GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ.c)
 * Callees:
 *     <none>
 */

struct CVisualTree *__fastcall CVisual::GetVisualTreeNoRef(CVisual *this)
{
  _DWORD *v1; // r8
  __int64 v2; // rdx
  _BYTE *v3; // r9
  __int64 v4; // rcx
  unsigned int v5; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v1 & 0x4000000) != 0 )
  {
    v2 = (unsigned int)v1[1];
    v3 = v1 + 2;
    v4 = 0LL;
    v5 = 0;
    if ( (_DWORD)v2 )
    {
      while ( *v3 != 6 )
      {
        ++v5;
        ++v3;
        if ( v5 >= (unsigned int)v2 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( v5 >= (unsigned int)v2 )
        return *(struct CVisualTree **)v4;
    }
    v4 = (__int64)v1 + 8LL * v5 - (((_BYTE)v2 + 15) & 7) + v2 + 15;
    return *(struct CVisualTree **)v4;
  }
  return 0LL;
}
