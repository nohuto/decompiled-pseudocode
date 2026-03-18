/*
 * XREFs of ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CA948
 * Callers:
 *     ?DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z @ 0x1800208D0 (-DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z.c)
 *     ?DrawSolidRectangle@CRenderDataBounds@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180020F40 (-DrawSolidRectangle@CRenderDataBounds@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?TileImage@CRenderDataBounds@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800CA710 (-TileImage@CRenderDataBounds@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?DrawRectangle@CRenderDataBounds@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IM@@@@Z @ 0x1800CA760 (-DrawRectangle@CRenderDataBounds@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?DrawImage@CRenderDataBounds@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IM@@@@Z @ 0x1800CA7B0 (-DrawImage@CRenderDataBounds@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?DrawGeometry@CRenderDataBounds@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800CA800 (-DrawGeometry@CRenderDataBounds@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z @ 0x1800CA870 (-DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawMesh2D@CRenderDataBounds@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180209C30 (-DrawMesh2D@CRenderDataBounds@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?DrawYCbCrBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x180209CA0 (-DrawYCbCrBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180080610 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008D6F0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

char __fastcall CRenderDataBounds::AddBounds(__int64 a1, float *a2)
{
  char v4; // cl
  int v5; // edx
  char result; // al
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_BYTE *)(a1 + 96);
  if ( !v4 )
  {
    v5 = *(_DWORD *)(a1 + 92);
    v7 = 0LL;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        result = (unsigned __int8)CMILMatrix::Transform2DBoundsHelper<1>(a1 + 24, a2, (float *)&v7);
        v4 = *(_BYTE *)(a1 + 96);
      }
      else
      {
        v4 = 1;
        *(_BYTE *)(a1 + 96) = 1;
        *(_OWORD *)(a1 + 8) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
    }
    else
    {
      v7 = *(_OWORD *)a2;
    }
    if ( !v4 )
      return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)(a1 + 8), (float *)&v7);
  }
  return result;
}
