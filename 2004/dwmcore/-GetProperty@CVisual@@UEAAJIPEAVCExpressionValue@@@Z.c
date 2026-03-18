/*
 * XREFs of ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800401F0
 * Callers:
 *     ?GetProperty@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1801E1BE0 (-GetProperty@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIPEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18004009C (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x180040320 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800CEAFC (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 */

__int64 __fastcall CVisual::GetProperty(CVisual *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  __int64 v5; // r11
  float OpacityInternal; // xmm0_4
  int v8; // edx
  int v9; // xmm0_4
  int v10; // xmm1_4
  int v11; // xmm2_4
  int v12; // edx
  int v13; // edx
  int v14; // edx
  bool v15; // al
  FLOAT v16; // eax
  struct D2D_VECTOR_3F v17; // [rsp+30h] [rbp-28h] BYREF
  FLOAT z; // [rsp+48h] [rbp-10h]
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2 - 26;
  if ( v4 )
  {
    v8 = v4 - 2;
    if ( v8 )
    {
      v12 = v8 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( !v13 )
        {
          CVisual::GetRelativeOffsetInternal(this, &v17);
          z = v17.z;
          v16 = v17.z;
          *(_QWORD *)v5 = _mm_unpacklo_ps((__m128)LODWORD(v17.x), (__m128)LODWORD(v17.y)).m128_u64[0];
          *(FLOAT *)(v5 + 8) = v16;
          *(_DWORD *)(v5 + 72) = 52;
          goto LABEL_3;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          CVisual::GetRelativeLayoutSizeInternal(this, &v19);
          *(_QWORD *)v5 = _mm_unpacklo_ps((__m128)(unsigned int)v19, (__m128)HIDWORD(v19)).m128_u64[0];
          *(_DWORD *)(v5 + 72) = 35;
          goto LABEL_3;
        }
        if ( v14 != 7 )
        {
          v3 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x1684u, 0LL);
          return v3;
        }
        v15 = (*((_BYTE *)this + 95) & 2) != 0;
        *((_DWORD *)a3 + 18) = 17;
        *(_BYTE *)a3 = v15;
      }
      else
      {
        *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 31), (__m128)*((unsigned int *)this + 32)).m128_u64[0];
        *((_DWORD *)a3 + 18) = 35;
      }
    }
    else
    {
      v9 = *((_DWORD *)this + 26);
      v10 = *((_DWORD *)this + 27);
      v11 = *((_DWORD *)this + 28);
      *((_DWORD *)a3 + 18) = 52;
      *(_DWORD *)a3 = v9;
      *((_DWORD *)a3 + 1) = v10;
      *((_DWORD *)a3 + 2) = v11;
    }
    *((_BYTE *)a3 + 76) = 1;
    return v3;
  }
  OpacityInternal = CVisual::GetOpacityInternal(this);
  *(float *)v5 = OpacityInternal;
  *(_DWORD *)(v5 + 72) = 18;
LABEL_3:
  *(_BYTE *)(v5 + 76) = 1;
  return v3;
}
