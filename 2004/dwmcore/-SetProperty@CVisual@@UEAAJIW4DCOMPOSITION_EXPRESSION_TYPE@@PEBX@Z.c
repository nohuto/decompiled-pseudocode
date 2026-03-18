/*
 * XREFs of ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18003F9D0
 * Callers:
 *     ?SetProperty@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801E2250 (-SetProperty@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIW4DCO.c)
 * Callees:
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x180020AA0 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18003FFF0 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18004009C (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180040284 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18009FAA8 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x18009FD60 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800CE85C (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800CEAFC (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 */

__int64 __fastcall CVisual::SetProperty(float *a1, unsigned int a2, int a3, __int64 a4)
{
  CVisual *v4; // rbx
  int v5; // r8d
  int v6; // r8d
  float v7; // xmm6_4
  unsigned int v8; // ebx
  int v10; // r8d
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float z; // xmm3_4
  float v17; // xmm2_4
  float x; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // edx
  float y; // xmm2_4
  struct D2D_VECTOR_3F *RelativeOffsetInternal; // rax
  struct D2D_VECTOR_3F v30; // [rsp+30h] [rbp-38h] BYREF
  struct D2D_VECTOR_3F v31; // [rsp+40h] [rbp-28h] BYREF

  v4 = (CVisual *)a1;
  v5 = a3 - 17;
  if ( !v5 )
  {
    if ( a2 == 38 )
    {
      CVisual::SetVisible((CVisual *)a1, *(_BYTE *)a4);
      return 0;
    }
    goto LABEL_42;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v10 = v6 - 17;
    if ( !v10 )
    {
      if ( a2 == 29 )
      {
        v14 = *(float *)(a4 + 4);
        v15 = *(float *)a4;
LABEL_15:
        CVisual::SetSize((CVisual *)a1, v15, v14);
        return 0;
      }
      if ( a2 != 31 )
      {
LABEL_42:
        v8 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x9C3u, 0LL);
        return v8;
      }
      v19 = *(float *)(a4 + 4);
      v20 = *(float *)a4;
LABEL_25:
      CVisual::SetRelativeSize((CVisual *)a1, v20, v19);
      return 0;
    }
    if ( v10 != 17 )
      goto LABEL_42;
    if ( a2 == 28 )
    {
      v11 = *(float *)(a4 + 8);
      v12 = *(float *)(a4 + 4);
      v13 = *(float *)a4;
      goto LABEL_12;
    }
    if ( a2 != 30 )
      goto LABEL_42;
    z = *(float *)(a4 + 8);
    v17 = *(float *)(a4 + 4);
    x = *(float *)a4;
    goto LABEL_20;
  }
  v7 = *(float *)a4;
  if ( a2 > 0x1A )
  {
    v24 = a2 - 32;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            if ( v27 != 1 )
              goto LABEL_42;
            v19 = *(float *)a4;
            v20 = **(float **)&CVisual::GetRelativeLayoutSizeInternal((CVisual *)a1);
            goto LABEL_24;
          }
        }
        else
        {
          y = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v30)->y;
          RelativeOffsetInternal = CVisual::GetRelativeOffsetInternal(v4, &v31);
          CVisual::SetRelativeOffset(v4, RelativeOffsetInternal->x, y, v7);
        }
        v20 = v7;
        v19 = *(float *)(*(_QWORD *)&CVisual::GetRelativeLayoutSizeInternal(v4) + 4LL);
LABEL_24:
        a1 = (float *)v4;
        goto LABEL_25;
      }
      z = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v31)->z;
      v17 = v7;
      x = CVisual::GetRelativeOffsetInternal(v4, &v30)->x;
    }
    else
    {
      z = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v31)->z;
      x = v7;
      v17 = CVisual::GetRelativeOffsetInternal(v4, &v30)->y;
    }
    a1 = (float *)v4;
LABEL_20:
    CVisual::SetRelativeOffset((CVisual *)a1, x, v17, z);
    return 0;
  }
  if ( a2 != 26 )
  {
    if ( a2 )
    {
      v21 = a2 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 22;
          if ( !v23 )
          {
            v14 = a1[32];
            v15 = *(float *)a4;
            goto LABEL_15;
          }
          if ( v23 == 1 )
          {
            v15 = a1[31];
            v14 = *(float *)a4;
            goto LABEL_15;
          }
          goto LABEL_42;
        }
        v12 = a1[27];
        v11 = *(float *)a4;
      }
      else
      {
        v11 = a1[28];
        v12 = *(float *)a4;
      }
      v13 = a1[26];
    }
    else
    {
      v11 = a1[28];
      v13 = *(float *)a4;
      v12 = a1[27];
    }
LABEL_12:
    CVisual::SetOffset((CVisual *)a1, v13, v12, v11);
    return 0;
  }
  CVisual::SetOpacity((CVisual *)a1, *(float *)a4);
  return 0;
}
