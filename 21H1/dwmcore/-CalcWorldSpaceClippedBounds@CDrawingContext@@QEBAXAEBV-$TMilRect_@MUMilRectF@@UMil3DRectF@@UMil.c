/*
 * XREFs of ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800469E8
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18000DF50 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180017334 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x1800303C0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?IsDrawListCacheDirty@CBrush@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180045D60 (-IsDrawListCacheDirty@CBrush@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEB.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18006DE6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180046B20 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A6070 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::CalcWorldSpaceClippedBounds(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  void *v6; // rcx
  void (__fastcall ***v7)(_QWORD, _DWORD *); // rcx
  __int64 result; // rax
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  _DWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+28h] [rbp-28h]
  int v15; // [rsp+38h] [rbp-18h]
  int v16; // [rsp+3Ch] [rbp-14h]
  float v17; // [rsp+40h] [rbp-10h]
  float v18; // [rsp+44h] [rbp-Ch]

  v3 = *(_DWORD *)(a1 + 408);
  v14 = 0LL;
  if ( v3 )
    v6 = (void *)(*(_QWORD *)(a1 + 424) + 68LL * (unsigned int)(v3 - 1));
  else
    v6 = &CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<1>(v6, a2, a3);
  v7 = (void (__fastcall ***)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 32)
                                               + 8LL
                                               + *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 16LL));
  (**v7)(v7, v13);
  v15 = 0;
  v16 = 0;
  v17 = (float)v13[0];
  v18 = (float)v13[1];
  result = CScopedClipStack::GetClipBoundsWorld((CScopedClipStack *)(a1 + 936));
  if ( *(float *)&v14 > *(float *)a3 )
    *(_DWORD *)a3 = v14;
  if ( *((float *)&v14 + 1) > *(float *)(a3 + 4) )
    *(_DWORD *)(a3 + 4) = DWORD1(v14);
  v9 = *(float *)(a3 + 8);
  v10 = *((float *)&v14 + 2);
  if ( v9 > *((float *)&v14 + 2) )
  {
    *(_DWORD *)(a3 + 8) = DWORD2(v14);
    v9 = v10;
  }
  v11 = *(float *)(a3 + 12);
  v12 = *((float *)&v14 + 3);
  if ( v11 > *((float *)&v14 + 3) )
  {
    *(_DWORD *)(a3 + 12) = HIDWORD(v14);
    v11 = v12;
    v9 = *(float *)(a3 + 8);
  }
  if ( v9 <= *(float *)a3 || v11 <= *(float *)(a3 + 4) )
  {
    *(_DWORD *)(a3 + 12) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 4) = 0;
    *(_DWORD *)a3 = 0;
  }
  return result;
}
