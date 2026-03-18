/*
 * XREFs of ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x18019FFB8
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180031184 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C8EC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
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
  float *result; // rax
  _OWORD v13[4]; // [rsp+20h] [rbp-29h] BYREF
  __int16 v14; // [rsp+60h] [rbp+17h]
  float v15; // [rsp+70h] [rbp+27h] BYREF
  float v16; // [rsp+74h] [rbp+2Bh]
  float v17; // [rsp+78h] [rbp+2Fh]
  float v18; // [rsp+7Ch] [rbp+33h]
  __int128 v19; // [rsp+80h] [rbp+37h] BYREF

  v3 = *a3;
  v4 = *(float *)(a1 + 212) / 96.0;
  v14 = 32085;
  v6 = (float)v3;
  v7 = (float)a3[1];
  v8 = a3[2];
  v15 = v6;
  v9 = (float)v8;
  v10 = a3[3];
  v16 = v7;
  v17 = v9;
  v18 = (float)v10;
  v13[1] = _xmm;
  v13[3] = _xmm;
  v11 = *(float *)(a1 + 208);
  v13[0] = _xmm;
  v13[2] = _xmm;
  CMILMatrix::Scale((CMILMatrix *)v13, v11 / 96.0, v4, 1.0);
  v19 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v13, (__int64)&v15, (float *)&v19);
  PixelAlign((int *)&v15, &v19);
  result = a2;
  *a2 = v15;
  a2[1] = v16;
  a2[2] = v17;
  a2[3] = v18;
  return result;
}
