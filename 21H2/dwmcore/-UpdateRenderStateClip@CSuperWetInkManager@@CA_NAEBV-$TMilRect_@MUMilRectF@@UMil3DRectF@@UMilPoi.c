/*
 * XREFs of ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x1801A8E30
 * Callers:
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800BBB7C (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801A8160 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801A8404 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006A3C0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800882E4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

bool __fastcall CSuperWetInkManager::UpdateRenderStateClip(__m128i *a1, __m128i *a2, __int64 a3, __m128i *a4)
{
  unsigned int *v6; // rax
  __m128i v7; // xmm0
  unsigned int v8; // ecx
  bool v9; // cc
  unsigned __int32 v10; // edx
  unsigned __int32 v11; // r8d
  unsigned __int32 v12; // r9d
  unsigned int v13; // eax
  __int32 v14; // eax
  __int32 v15; // eax
  __int32 v16; // eax
  __m128i v18; // [rsp+20h] [rbp-30h] BYREF
  int v19[4]; // [rsp+30h] [rbp-20h] BYREF

  if ( a3 )
    CMILMatrix::Transform2DBoundsHelper<0>(a3, (__int64)a1, (float *)v18.m128i_i32, (__int64)a4);
  else
    v18 = *a1;
  v6 = PixelAlign(v19, (__int64)&v18);
  v7 = *a2;
  v8 = 0;
  v9 = (int)*v6 <= 0;
  v18 = *a2;
  if ( !v9 )
    v8 = *v6;
  v10 = 0;
  if ( (int)v6[1] > 0 )
    v10 = v6[1];
  v11 = 0;
  if ( (int)v6[2] > 0 )
    v11 = v6[2];
  v12 = 0;
  if ( (int)v6[3] > 0 )
    v12 = v6[3];
  v13 = _mm_cvtsi128_si32(v7);
  if ( v8 > v13 )
    v13 = v8;
  v18.m128i_i32[0] = v13;
  v14 = v18.m128i_i32[1];
  if ( v10 > v18.m128i_i32[1] )
    v14 = v10;
  v18.m128i_i32[1] = v14;
  v15 = v18.m128i_i32[2];
  if ( v11 < v18.m128i_i32[2] )
    v15 = v11;
  v18.m128i_i32[2] = v15;
  v16 = v18.m128i_i32[3];
  if ( v12 < v18.m128i_i32[3] )
    v16 = v12;
  v18.m128i_i32[3] = v16;
  if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v18) )
    v18 = 0uLL;
  *a4 = v18;
  return !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v18);
}
