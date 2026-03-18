/*
 * XREFs of ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x1802A71B4
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18006A054 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800882E4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

float *__fastcall CSecondaryD2DBitmap::GetPrefilteredRect(__int64 a1, float *a2, int *a3)
{
  int v3; // eax
  float v4; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  int v8; // eax
  float v9; // xmm0_4
  int v10; // eax
  float v11; // xmm1_4
  __int64 v12; // r9
  float *result; // rax
  _OWORD v14[4]; // [rsp+20h] [rbp-29h] BYREF
  char v15; // [rsp+60h] [rbp+17h]
  char v16; // [rsp+61h] [rbp+18h]
  float v17; // [rsp+70h] [rbp+27h] BYREF
  float v18; // [rsp+74h] [rbp+2Bh]
  float v19; // [rsp+78h] [rbp+2Fh]
  float v20; // [rsp+7Ch] [rbp+33h]
  __int128 v21; // [rsp+80h] [rbp+37h] BYREF

  v3 = *a3;
  v4 = *(float *)(a1 + 212) / 96.0;
  v15 = 85;
  v6 = (float)v3;
  v7 = (float)a3[1];
  v8 = a3[2];
  v17 = v6;
  v9 = (float)v8;
  v10 = a3[3];
  v18 = v7;
  v16 = v16 & 0xC0 | 0x17;
  v19 = v9;
  v20 = (float)v10;
  v14[1] = _xmm;
  v14[3] = _xmm;
  v11 = *(float *)(a1 + 208);
  v14[0] = _xmm;
  v14[2] = _xmm;
  CMILMatrix::Scale((CMILMatrix *)v14, v11 / 96.0, v4, 1.0);
  v21 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v14, (__int64)&v17, (float *)&v21, v12);
  PixelAlign(&v17, (__int64)&v21);
  result = a2;
  *a2 = v17;
  a2[1] = v18;
  a2[2] = v19;
  a2[3] = v20;
  return result;
}
