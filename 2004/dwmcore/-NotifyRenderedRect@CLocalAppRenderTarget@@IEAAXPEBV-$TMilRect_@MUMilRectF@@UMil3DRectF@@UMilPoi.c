/*
 * XREFs of ?NotifyRenderedRect@CLocalAppRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018BDD4
 * Callers:
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z @ 0x18018C080 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180049364 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800803F8 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CLocalAppRenderTarget::NotifyRenderedRect(__int64 a1, float *a2)
{
  int v2; // eax
  float v3; // xmm6_4
  float v4; // xmm1_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm2_4
  float v8; // xmm7_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  char result; // al
  int v13; // edx
  int v14; // r9d
  float v15; // xmm5_4
  int v16; // edx
  float v17; // xmm4_4
  float v18; // eax
  __int64 v19; // r8
  __int64 v20; // rcx
  float v21; // [rsp+20h] [rbp-40h] BYREF
  int v22; // [rsp+24h] [rbp-3Ch]
  float v23; // [rsp+28h] [rbp-38h]
  float v24; // [rsp+2Ch] [rbp-34h]

  v2 = *(_DWORD *)(a1 + 80);
  v21 = 0.0;
  v3 = 0.0;
  v22 = 0;
  v4 = 0.0;
  v5 = (float)*(int *)(a1 + 84);
  v23 = (float)v2;
  v24 = v5;
  if ( a2 )
  {
    v6 = *a2;
    if ( *a2 > 0.0 )
    {
      v21 = *a2;
      v4 = v6;
    }
    v7 = a2[1];
    v8 = 0.0;
    if ( v7 > 0.0 )
    {
      v22 = *((_DWORD *)a2 + 1);
      v3 = v7;
      v8 = v7;
    }
    v9 = (float)v2;
    if ( (float)v2 > a2[2] )
    {
      v23 = a2[2];
      v9 = v23;
    }
    v10 = a2[3];
    if ( v5 > v10 )
    {
      v24 = a2[3];
      v5 = v10;
    }
    if ( v9 <= v4 || v5 <= v8 )
    {
      v24 = 0.0;
      v21 = 0.0;
      v3 = 0.0;
      v23 = 0.0;
      v4 = 0.0;
      v22 = 0;
    }
  }
  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v21);
  if ( !result )
  {
    LODWORD(v21) = PixelAlign(v4, 0);
    v22 = PixelAlign(v3, v13);
    LODWORD(v23) = PixelAlign(v15, v14);
    LODWORD(v18) = PixelAlign(v17, v16);
    v20 = *(_QWORD *)(v19 + 152);
    v24 = v18;
    return (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v20 + 16LL))(v20, &v21);
  }
  return result;
}
