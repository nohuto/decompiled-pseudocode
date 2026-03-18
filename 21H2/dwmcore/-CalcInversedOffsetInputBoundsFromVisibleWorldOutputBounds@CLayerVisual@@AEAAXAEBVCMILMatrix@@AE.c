/*
 * XREFs of ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180222AD0
 * Callers:
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x180223308 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180260414 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 */

float *__fastcall CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float *a4,
        float *a5,
        __int64 a6)
{
  __int128 v6; // xmm1
  int v8; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  float *result; // rax
  __int64 v14; // r9
  _OWORD *v15; // r11
  float v16; // xmm0_4
  float v17; // xmm5_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm7_4
  float v26; // xmm0_4
  float v27; // xmm6_4
  float v28[4]; // [rsp+28h] [rbp-79h]
  _OWORD v29[4]; // [rsp+38h] [rbp-69h] BYREF
  int v30; // [rsp+78h] [rbp-29h]
  __int128 v31; // [rsp+88h] [rbp-19h] BYREF

  v6 = *(_OWORD *)(a2 + 16);
  v8 = *(_DWORD *)(a2 + 64);
  *(_QWORD *)v28 = *(_QWORD *)(*(_QWORD *)(a1 + 728) + 96LL);
  v31 = 0LL;
  v30 = v8;
  v10 = *(_OWORD *)a2;
  v29[1] = v6;
  v11 = *(_OWORD *)(a2 + 48);
  v29[0] = v10;
  v12 = *(_OWORD *)(a2 + 32);
  v29[3] = v11;
  v29[2] = v12;
  result = (float *)CMILMatrix::Get2DBoundsUsing2DInverse(v29, a3, &v31);
  if ( (_BYTE)result )
  {
    *((float *)&v31 + 1) = *((float *)&v31 + 1) + COERCE_FLOAT(LODWORD(v28[1]) ^ _xmm);
    *(float *)&v31 = *(float *)&v31 + COERCE_FLOAT(LODWORD(v28[0]) ^ _xmm);
    *((float *)&v31 + 3) = *((float *)&v31 + 3) + COERCE_FLOAT(LODWORD(v28[1]) ^ _xmm);
    *((float *)&v31 + 2) = *((float *)&v31 + 2) + COERCE_FLOAT(LODWORD(v28[0]) ^ _xmm);
    result = CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)&v31, a5, v14);
    v16 = *a4;
    v17 = *a5;
    if ( *a4 > *a5 )
    {
      *a5 = v16;
      v17 = v16;
    }
    v18 = a4[1];
    v19 = a5[1];
    if ( v18 > v19 )
    {
      a5[1] = v18;
      v19 = v18;
    }
    v20 = a5[2];
    v21 = a4[2];
    v22 = v20;
    if ( v20 > v21 )
    {
      a5[2] = v21;
      v20 = v21;
      v22 = v21;
    }
    v23 = a4[3];
    v24 = a5[3];
    if ( v24 > v23 )
    {
      a5[3] = v23;
      v20 = v22;
      v24 = v23;
    }
    if ( v20 <= v17 || v24 <= v19 )
    {
      a5[3] = 0.0;
      a5[2] = 0.0;
      a5[1] = 0.0;
      *a5 = 0.0;
    }
    *(_OWORD *)a6 = *(_OWORD *)a5;
    v25 = v28[0] + *(float *)(a6 + 8);
    v26 = v28[1] + *(float *)(a6 + 4);
    v27 = v28[1] + *(float *)(a6 + 12);
    *(float *)a6 = v28[0] + *(float *)a6;
    *(float *)(a6 + 8) = v25;
    *(float *)(a6 + 4) = v26;
    *(float *)(a6 + 12) = v27;
  }
  else
  {
    *(_OWORD *)a5 = *v15;
    *(_OWORD *)a6 = *v15;
  }
  return result;
}
