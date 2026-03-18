/*
 * XREFs of ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@XZ @ 0x180049440
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180098498 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x1801F7BB4 (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetColorTransform(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // eax

  v1 = *(_DWORD **)(a1 + 232);
  if ( (*v1 & 0x2000000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  v6 = 0;
  if ( (_DWORD)v3 )
  {
    while ( *v4 != 7 )
    {
      ++v6;
      ++v4;
      if ( v6 >= (unsigned int)v3 )
        goto LABEL_6;
    }
    goto LABEL_7;
  }
LABEL_6:
  if ( v6 < (unsigned int)v3 )
LABEL_7:
    v5 = (__int64)v1 + 8LL * v6 - (((_BYTE)v3 + 15) & 7) + v3 + 15;
  return *(_QWORD *)v5;
}
