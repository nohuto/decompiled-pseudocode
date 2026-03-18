/*
 * XREFs of ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18009BC10
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18009BBA4 (--$IsAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 */

__int64 __fastcall CRectanglesShape::GetTightBounds(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r9
  _OWORD *v4; // r11
  int v5; // r8d
  __int64 v6; // r10
  __int64 result; // rax
  char v8; // al
  float v9; // xmm4_4
  int v10; // xmm5_4
  int v11; // xmm0_4
  char v12; // al
  float v13; // xmm0_4
  char v14; // al
  float v15; // xmm0_4
  char v16; // al

  v3 = a3;
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 40);
  v6 = a1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( !v3 )
      {
LABEL_4:
        result = 0LL;
        *v4 = *(_OWORD *)*(_QWORD *)(v6 + 16);
        return result;
      }
      if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 28) & _xmm) * 61440.0)
                         + (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 12) & _xmm) * 61440.0))
                 + COERCE_FLOAT(*(_DWORD *)(v3 + 60) & _xmm)) == 1.0 )
      {
        *(_BYTE *)(v3 + 65) &= ~0x20u;
        v8 = 1;
        *(_BYTE *)(v3 + 65) |= 0x10u;
      }
      else
      {
        v8 = 0;
      }
      if ( (((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 44) & _xmm) * 61440.0) == 0.0) & (unsigned __int8)v8) != 0
        && *(float *)(v3 + 32) == 0.0
        && *(float *)(v3 + 36) == 0.0 )
      {
        *(_BYTE *)(v3 + 65) &= ~8u;
        *(_BYTE *)(v3 + 65) |= 4u;
        if ( CMILMatrix::IsAffine<0>(v3, 1) )
        {
          if ( *(float *)(v3 + 8) == v9 && *(float *)(v3 + 24) == v9 )
          {
            *(_BYTE *)(v3 + 64) &= ~8u;
            v11 = *(_DWORD *)(v3 + 12);
            *(_BYTE *)(v3 + 64) |= 4u;
            v12 = *(_BYTE *)(v3 + 64);
            if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 28) & v10) * 61440.0)
                               + (float)(COERCE_FLOAT(v11 & v10) * 61440.0))
                       + COERCE_FLOAT(*(_DWORD *)(v3 + 60) & v10)) == 1.0 )
            {
              *(_BYTE *)(v3 + 65) &= ~0x20u;
              *(_BYTE *)(v3 + 65) |= 0x10u;
              if ( *(float *)(v3 + 4) == v9 && *(float *)(v3 + 16) == v9 )
              {
                v13 = *(float *)v3;
                v14 = v12 & 0x3F | 0x40;
                *(_BYTE *)(v3 + 64) = v14;
                if ( v13 == 1.0 && *(float *)(v3 + 20) == 1.0 )
                {
                  v15 = *(float *)(v3 + 40);
                  v16 = v14 & 0xCF | 0x10;
                  *(_BYTE *)(v3 + 64) = v16;
                  if ( v15 == 1.0 && *(float *)(v3 + 48) == v9 && *(float *)(v3 + 52) == v9 && *(float *)(v3 + 56) == v9 )
                  {
                    *(_BYTE *)(v3 + 64) = v16 & 0xFC | 1;
                    goto LABEL_4;
                  }
                }
              }
            }
          }
        }
      }
      CMILMatrix::Transform2DBoundsHelper<0>(v3, *(_QWORD *)(v6 + 16), v4);
      return 0LL;
    }
    else
    {
      return CShape::GetTightBounds(a1, (__int64)a2, (CMILMatrix *)v3);
    }
  }
  else
  {
    a2[1] = 0LL;
    result = 0LL;
    *a2 = 0LL;
  }
  return result;
}
