/*
 * XREFs of ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18009B130
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180067780 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18009BBA4 (--$IsAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AE6D8 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D1D9C (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetTightBounds(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r11
  _OWORD *v6; // rbx
  float v8; // xmm2_4
  float v9; // xmm1_4
  char v11; // al
  float v12; // xmm4_4
  int v13; // xmm5_4
  int v14; // xmm0_4
  char v15; // al
  float v16; // xmm0_4
  char v17; // al
  float v18; // xmm0_4
  char v19; // al
  int TightBounds; // eax
  __int64 v21; // rcx
  __int128 v22; // [rsp+30h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 16);
  v5 = a3;
  v6 = a2;
  if ( *(_BYTE *)(v4 + 68) )
  {
    if ( (float)(*(float *)(v4 + 32) + *(float *)(v4 + 32)) > (float)((float)(*(float *)(v4 + 16) + *(float *)(v4 + 24))
                                                                    - *(float *)(v4 + 16))
      || (float)(*(float *)(v4 + 36) + *(float *)(v4 + 36)) > (float)((float)(*(float *)(v4 + 20) + *(float *)(v4 + 28))
                                                                    - *(float *)(v4 + 20)) )
    {
      goto LABEL_33;
    }
  }
  else
  {
    v8 = *(float *)(v4 + 24) - *(float *)(v4 + 16);
    if ( (float)(*(float *)(v4 + 40) + *(float *)(v4 + 32)) > v8 )
      goto LABEL_33;
    if ( (float)(*(float *)(v4 + 56) + *(float *)(v4 + 48)) > v8 )
      goto LABEL_33;
    v9 = *(float *)(v4 + 28) - *(float *)(v4 + 20);
    if ( (float)(*(float *)(v4 + 60) + *(float *)(v4 + 36)) > v9
      || (float)(*(float *)(v4 + 52) + *(float *)(v4 + 44)) > v9 )
    {
      goto LABEL_33;
    }
  }
  if ( !a3 )
    goto LABEL_7;
  if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a3, a2, a3, a4)
    || (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(v5) )
  {
    v4 = *(_QWORD *)(a1 + 16);
LABEL_7:
    if ( *(_BYTE *)(v4 + 68) )
    {
      *(_QWORD *)&v22 = *(_QWORD *)(v4 + 16);
      *((float *)&v22 + 2) = *(float *)&v22 + *(float *)(v4 + 24);
      *((float *)&v22 + 3) = *((float *)&v22 + 1) + *(float *)(v4 + 28);
    }
    else
    {
      v22 = *(_OWORD *)(v4 + 16);
    }
    *v6 = v22;
    if ( v5 )
    {
      if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v5 + 12) & _xmm) * 61440.0)
                         + (float)(COERCE_FLOAT(*(_DWORD *)(v5 + 28) & _xmm) * 61440.0))
                 + COERCE_FLOAT(*(_DWORD *)(v5 + 60) & _xmm)) == 1.0 )
      {
        *(_BYTE *)(v5 + 65) &= ~0x20u;
        v11 = 1;
        *(_BYTE *)(v5 + 65) |= 0x10u;
      }
      else
      {
        v11 = 0;
      }
      if ( (((float)(COERCE_FLOAT(*(_DWORD *)(v5 + 44) & _xmm) * 61440.0) == 0.0) & (unsigned __int8)v11) == 0 )
        goto LABEL_28;
      if ( *(float *)(v5 + 32) != 0.0 )
        goto LABEL_28;
      if ( *(float *)(v5 + 36) != 0.0 )
        goto LABEL_28;
      *(_BYTE *)(v5 + 65) &= ~8u;
      LOBYTE(a2) = 1;
      *(_BYTE *)(v5 + 65) |= 4u;
      if ( !(unsigned __int8)CMILMatrix::IsAffine<0>(v5, a2) )
        goto LABEL_28;
      if ( *(float *)(v5 + 8) != v12 )
        goto LABEL_28;
      if ( *(float *)(v5 + 24) != v12 )
        goto LABEL_28;
      *(_BYTE *)(v5 + 64) &= ~8u;
      v14 = *(_DWORD *)(v5 + 28);
      *(_BYTE *)(v5 + 64) |= 4u;
      v15 = *(_BYTE *)(v5 + 64);
      if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v5 + 12) & v13) * 61440.0)
                         + (float)(COERCE_FLOAT(v14 & v13) * 61440.0))
                 + COERCE_FLOAT(*(_DWORD *)(v5 + 60) & v13)) != 1.0 )
        goto LABEL_28;
      *(_BYTE *)(v5 + 65) &= ~0x20u;
      *(_BYTE *)(v5 + 65) |= 0x10u;
      if ( *(float *)(v5 + 4) != v12 )
        goto LABEL_28;
      if ( *(float *)(v5 + 16) == v12
        && (v16 = *(float *)v5, v17 = v15 & 0x3F | 0x40, *(_BYTE *)(v5 + 64) = v17, v16 == 1.0)
        && *(float *)(v5 + 20) == 1.0
        && (v18 = *(float *)(v5 + 40), v19 = v17 & 0xCF | 0x10, *(_BYTE *)(v5 + 64) = v19, v18 == 1.0)
        && *(float *)(v5 + 48) == v12
        && *(float *)(v5 + 52) == v12
        && *(float *)(v5 + 56) == v12 )
      {
        *(_BYTE *)(v5 + 64) = v19 & 0xFC | 1;
      }
      else
      {
LABEL_28:
        CMILMatrix::Transform2DBoundsHelper<0>(v5, v6, v6);
      }
    }
    return 0LL;
  }
LABEL_33:
  TightBounds = CShape::GetTightBounds(a1, (__int64)v6, (CMILMatrix *)v5);
  if ( TightBounds < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, TightBounds, 0x6Bu);
  return 0LL;
}
