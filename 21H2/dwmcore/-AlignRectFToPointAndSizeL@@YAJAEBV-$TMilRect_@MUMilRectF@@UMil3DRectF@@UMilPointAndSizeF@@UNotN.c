/*
 * XREFs of ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPointAndSizeL@@@Z @ 0x180212234
 * Callers:
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z @ 0x180174B40 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@@Z @ 0x18017806C (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C2938 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180077274 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C9964 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall AlignRectFToPointAndSizeL(float *a1)
{
  unsigned int v1; // ebx
  float *v2; // rcx
  float v3; // xmm0_4
  float v4; // xmm4_4
  int v5; // eax
  _DWORD *v6; // r11
  int v7; // edx
  float v8; // xmm4_4
  int v9; // eax
  __int64 v10; // r10
  float v11; // xmm0_4
  __int64 v12; // r11
  int v13; // eax
  __int64 v14; // r10
  float v15; // xmm0_4
  int v16; // r8d
  __int64 v17; // r11
  int v18; // edx
  int v19; // eax
  int v20; // r9d
  __int64 v21; // r11

  v1 = 0;
  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsWellOrdered(a1)
    && (v3 = *v2, *v2 >= -2147483600.0)
    && v3 <= 2147483600.0
    && (v4 = v2[1], v4 >= -2147483600.0)
    && v4 <= 2147483600.0
    && v2[2] <= 2147483600.0
    && v2[3] <= 2147483600.0 )
  {
    v5 = PixelAlign(v3, 0);
    *v6 = v5;
    v9 = PixelAlign(v8, v7);
    v11 = *(float *)(v10 + 8);
    *(_DWORD *)(v12 + 4) = v9;
    v13 = PixelAlign(v11, 1);
    v15 = *(float *)(v14 + 12);
    *(_DWORD *)(v17 + 8) = v13 - v16;
    v19 = PixelAlign(v15, v18);
    *(_DWORD *)(v21 + 12) = v19 - v20;
  }
  else
  {
    v1 = -2003304438;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v2, 0LL, 0, -2003304438, 0xE2u, 0LL);
  }
  return v1;
}
