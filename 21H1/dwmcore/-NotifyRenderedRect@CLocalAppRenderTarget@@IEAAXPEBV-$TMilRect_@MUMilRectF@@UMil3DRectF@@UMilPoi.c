/*
 * XREFs of ?NotifyRenderedRect@CLocalAppRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018EB44
 * Callers:
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z @ 0x18018ED90 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CLocalAppRenderTarget::NotifyRenderedRect(__int64 a1, float *a2)
{
  int v2; // eax
  float v4; // xmm0_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm4_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  char result; // al
  float v13; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+24h] [rbp-2Ch]
  float v15; // [rsp+28h] [rbp-28h]
  float v16; // [rsp+2Ch] [rbp-24h]
  int v17[4]; // [rsp+30h] [rbp-20h] BYREF

  v2 = *(_DWORD *)(a1 + 80);
  v13 = 0.0;
  v14 = 0;
  v4 = 0.0;
  v5 = (float)v2;
  v6 = (float)*(int *)(a1 + 84);
  v15 = (float)v2;
  v16 = v6;
  if ( a2 )
  {
    v7 = *a2;
    v8 = 0.0;
    if ( *a2 > 0.0 )
    {
      v13 = *a2;
      v8 = v7;
    }
    v9 = a2[1];
    if ( v9 > 0.0 )
    {
      v14 = *((_DWORD *)a2 + 1);
      v4 = v9;
    }
    v10 = a2[2];
    if ( v5 > v10 )
    {
      v15 = a2[2];
      v5 = v10;
    }
    v11 = a2[3];
    if ( v6 > v11 )
    {
      v16 = a2[3];
      v6 = v11;
    }
    if ( v5 <= v8 || v6 <= v4 )
    {
      v16 = 0.0;
      v15 = 0.0;
      v14 = 0;
      v13 = 0.0;
    }
  }
  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v13);
  if ( !result )
  {
    PixelAlign(v17, &v13);
    return (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 152) + 16LL))(*(_QWORD *)(a1 + 152), v17);
  }
  return result;
}
