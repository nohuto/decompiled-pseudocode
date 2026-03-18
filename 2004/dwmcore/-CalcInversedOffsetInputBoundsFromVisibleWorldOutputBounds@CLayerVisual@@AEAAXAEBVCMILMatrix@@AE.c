/*
 * XREFs of ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801D32F8
 * Callers:
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801D35B8 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800075BC (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008D6F0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

char __fastcall CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        __int64 a6)
{
  __int128 v6; // xmm1
  int v8; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  char result; // al
  _OWORD *v14; // r11
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  float v22; // xmm6_4
  float v23[4]; // [rsp+28h] [rbp-79h]
  _OWORD v24[4]; // [rsp+38h] [rbp-69h] BYREF
  int v25; // [rsp+78h] [rbp-29h]
  __int128 v26; // [rsp+88h] [rbp-19h] BYREF

  v6 = *(_OWORD *)(a2 + 16);
  v8 = *(_DWORD *)(a2 + 64);
  *(_QWORD *)v23 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 104LL);
  v26 = 0LL;
  v25 = v8;
  v10 = *(_OWORD *)a2;
  v24[1] = v6;
  v11 = *(_OWORD *)(a2 + 48);
  v24[0] = v10;
  v12 = *(_OWORD *)(a2 + 32);
  v24[3] = v11;
  v24[2] = v12;
  result = CMILMatrix::Get2DBoundsUsing2DInverse((CMILMatrix *)v24, a3);
  if ( result )
  {
    *((float *)&v26 + 1) = *((float *)&v26 + 1) + COERCE_FLOAT(LODWORD(v23[1]) ^ _xmm);
    *(float *)&v26 = *(float *)&v26 + COERCE_FLOAT(LODWORD(v23[0]) ^ _xmm);
    *((float *)&v26 + 3) = *((float *)&v26 + 3) + COERCE_FLOAT(LODWORD(v23[1]) ^ _xmm);
    *((float *)&v26 + 2) = *((float *)&v26 + 2) + COERCE_FLOAT(LODWORD(v23[0]) ^ _xmm);
    result = (unsigned __int8)CMILMatrix::Transform2DBoundsHelper<1>(a2, (float *)&v26, a5);
    if ( *a4 > *a5 )
      *a5 = *a4;
    v15 = a4[1];
    if ( v15 > a5[1] )
      a5[1] = v15;
    v16 = a4[2];
    v17 = a5[2];
    if ( v17 > v16 )
    {
      a5[2] = v16;
      v17 = v16;
    }
    v18 = a4[3];
    v19 = a5[3];
    if ( v19 > v18 )
    {
      a5[3] = v18;
      v19 = v18;
      v17 = a5[2];
    }
    if ( v17 <= *a5 || v19 <= a5[1] )
    {
      a5[3] = 0.0;
      a5[2] = 0.0;
      a5[1] = 0.0;
      *a5 = 0.0;
    }
    *(_OWORD *)a6 = *(_OWORD *)a5;
    v20 = v23[0] + *(float *)(a6 + 8);
    v21 = v23[1] + *(float *)(a6 + 4);
    v22 = v23[1] + *(float *)(a6 + 12);
    *(float *)a6 = v23[0] + *(float *)a6;
    *(float *)(a6 + 8) = v20;
    *(float *)(a6 + 4) = v21;
    *(float *)(a6 + 12) = v22;
  }
  else
  {
    *(_OWORD *)a5 = *v14;
    *(_OWORD *)a6 = *v14;
  }
  return result;
}
