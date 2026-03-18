/*
 * XREFs of ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x180086C90
 * Callers:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z @ 0x180058C84 (-TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18008685C (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180086BB4 (-RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008D06C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1800DCD94 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x1800E109C (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBackdropVisualImage::IsValid(CBackdropVisualImage *this)
{
  float v1; // xmm3_4
  float v2; // xmm2_4
  float v3; // xmm0_4
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 18) )
  {
    if ( (float)(*((float *)this + 26) - *((float *)this + 24)) >= 1.0
      && (float)(*((float *)this + 27) - *((float *)this + 25)) >= 1.0 )
    {
      v1 = *((float *)this + 462);
      v2 = *((float *)this + 464);
      if ( v2 >= v1 )
      {
        v3 = *((float *)this + 465);
        if ( v3 >= *((float *)this + 463)
          && (float)(v2 - v1) >= 1.0
          && (float)(v3 - *((float *)this + 463)) >= 1.0
          && *((double *)this + 15) > 0.5
          && *((double *)this + 16) > 0.5 )
        {
          return 1;
        }
      }
    }
  }
  return result;
}
