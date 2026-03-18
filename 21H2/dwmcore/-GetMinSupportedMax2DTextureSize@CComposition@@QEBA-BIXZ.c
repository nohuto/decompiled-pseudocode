/*
 * XREFs of ?GetMinSupportedMax2DTextureSize@CComposition@@QEBA?BIXZ @ 0x180086DD4
 * Callers:
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18008685C (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7C08 (-RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::GetMinSupportedMax2DTextureSize(CComposition *this)
{
  int v1; // ecx

  v1 = *((_DWORD *)g_pComposition + 324);
  if ( v1 == 45056 || v1 == 49408 || v1 == 45312 )
    return 0x4000LL;
  if ( v1 == 37632 )
    return 4096LL;
  if ( v1 != 40960 && v1 != 41216 )
  {
    if ( v1 != 49152 && v1 != 49664 )
      return 2048LL;
    return 0x4000LL;
  }
  return 0x2000LL;
}
