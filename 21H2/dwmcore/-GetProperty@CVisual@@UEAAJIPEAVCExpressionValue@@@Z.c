/*
 * XREFs of ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800C9750
 * Callers:
 *     ?GetProperty@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18022F740 (-GetProperty@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIPEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x1800E129C (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800E9540 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 */

__int64 __fastcall CVisual::GetProperty(CVisual *this, int a2, struct CExpressionValue *a3)
{
  bool v3; // cl
  __int64 result; // rax
  __int64 v5; // rax
  int v6; // edx
  int *v7; // rcx
  int v8; // xmm0_4
  int v9; // xmm0_4
  int v10; // xmm1_4
  int v11; // xmm2_4
  char v12; // al
  __int64 v13; // r11
  FLOAT v14; // eax
  __int64 v15; // r11
  struct D2D_VECTOR_3F v16; // [rsp+30h] [rbp-28h] BYREF
  FLOAT z; // [rsp+48h] [rbp-10h]
  unsigned int v18; // [rsp+78h] [rbp+20h]
  unsigned int v19; // [rsp+7Ch] [rbp+24h]

  if ( a2 == 38 )
  {
    v3 = (*((_BYTE *)this + 103) & 2) != 0;
    *((_DWORD *)a3 + 18) = 17;
    *(_BYTE *)a3 = v3;
    *((_BYTE *)a3 + 76) = 1;
    return 0LL;
  }
  else
  {
    switch ( a2 )
    {
      case 26:
        v5 = *((_QWORD *)this + 28);
        if ( (*(_DWORD *)(v5 + 4) & 0x8000000) != 0 )
        {
          v6 = *(_DWORD *)(v5 + 12);
          v7 = (int *)(v5 + 12);
          if ( (v6 & 0x7F000000) != 0x5000000 )
          {
            do
            {
              v7 = (int *)((char *)v7 + (v6 & 0xFFFFFF) + 4);
              v6 = *v7;
            }
            while ( (*v7 & 0x7F000000) != 0x5000000 );
          }
          v8 = v7[1];
        }
        else
        {
          v8 = (int)FLOAT_1_0;
        }
        *(_DWORD *)a3 = v8;
        result = 0LL;
        *((_DWORD *)a3 + 18) = 18;
        *((_BYTE *)a3 + 76) = 1;
        break;
      case 27:
        v12 = *((_BYTE *)this + 102) & 1;
        *((_DWORD *)a3 + 18) = 17;
        *(_BYTE *)a3 = v12;
        *((_BYTE *)a3 + 76) = 1;
        return 0LL;
      case 28:
        v9 = *((_DWORD *)this + 28);
        result = 0LL;
        v10 = *((_DWORD *)this + 29);
        v11 = *((_DWORD *)this + 30);
        *((_DWORD *)a3 + 18) = 52;
        *(_DWORD *)a3 = v9;
        *((_DWORD *)a3 + 1) = v10;
        *((_DWORD *)a3 + 2) = v11;
        *((_BYTE *)a3 + 76) = 1;
        break;
      case 29:
        *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 33), (__m128)*((unsigned int *)this + 34)).m128_u64[0];
        *((_DWORD *)a3 + 18) = 35;
        *((_BYTE *)a3 + 76) = 1;
        return 0LL;
      case 30:
        CVisual::GetRelativeOffsetInternal(this, &v16);
        z = v16.z;
        v14 = v16.z;
        *(_QWORD *)v15 = _mm_unpacklo_ps((__m128)LODWORD(v16.x), (__m128)LODWORD(v16.y)).m128_u64[0];
        *(FLOAT *)(v15 + 8) = v14;
        *(_DWORD *)(v15 + 72) = 52;
        *(_BYTE *)(v15 + 76) = 1;
        return 0LL;
      case 31:
        CVisual::GetRelativeLayoutSizeInternal(this);
        *(_QWORD *)v13 = _mm_unpacklo_ps((__m128)v18, (__m128)v19).m128_u64[0];
        *(_DWORD *)(v13 + 72) = 35;
        *(_BYTE *)(v13 + 76) = 1;
        return 0LL;
      default:
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024809, 0x1736u);
        result = 2147942487LL;
        break;
    }
  }
  return result;
}
