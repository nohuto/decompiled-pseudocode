/*
 * XREFs of ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180045FA0
 * Callers:
 *     ?SetProperty@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18022FDD0 (-SetProperty@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIW4DCO.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18004561C (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x1800460F4 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180047600 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1800E11F0 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x1800E129C (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x1800E69D0 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800E941C (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800E9540 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z @ 0x1801F863C (-SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z.c)
 */

__int64 __fastcall CVisual::SetProperty(float *a1, unsigned int a2, int a3, __int64 a4)
{
  CVisual *v4; // rbx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  unsigned int v11; // ebx
  float v13; // xmm6_4
  float z; // xmm3_4
  float v15; // xmm2_4
  float x; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm1_4
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
    if ( a2 == 27 )
    {
      CVisual::SetPixelSnappingEnabled((CVisual *)a1, *(_BYTE *)a4);
      return 0;
    }
    if ( a2 == 38 )
    {
      CVisual::SetVisible((CVisual *)a1, *(_BYTE *)a4);
      return 0;
    }
    goto LABEL_46;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v13 = *(float *)a4;
    if ( a2 <= 0x1A )
    {
      if ( a2 == 26 )
      {
        CVisual::SetOpacity((CVisual *)a1, *(float *)a4);
        return 0;
      }
      if ( !a2 )
      {
        v8 = a1[30];
        v10 = *(float *)a4;
        v9 = a1[29];
        goto LABEL_7;
      }
      v21 = a2 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 22;
          if ( v23 )
          {
            if ( v23 != 1 )
              goto LABEL_46;
            v20 = a1[33];
            v19 = *(float *)a4;
          }
          else
          {
            v19 = a1[34];
            v20 = *(float *)a4;
          }
          goto LABEL_36;
        }
        v9 = a1[29];
        v8 = *(float *)a4;
      }
      else
      {
        v8 = a1[30];
        v9 = *(float *)a4;
      }
      v10 = a1[28];
      goto LABEL_7;
    }
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
              goto LABEL_46;
            v17 = *(float *)a4;
            v18 = **(float **)&CVisual::GetRelativeLayoutSizeInternal((CVisual *)a1);
            goto LABEL_26;
          }
        }
        else
        {
          y = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v30)->y;
          RelativeOffsetInternal = CVisual::GetRelativeOffsetInternal(v4, &v31);
          CVisual::SetRelativeOffset(v4, RelativeOffsetInternal->x, y, v13);
        }
        v18 = v13;
        v17 = *(float *)(*(_QWORD *)&CVisual::GetRelativeLayoutSizeInternal(v4) + 4LL);
LABEL_26:
        a1 = (float *)v4;
        goto LABEL_27;
      }
      z = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v31)->z;
      v15 = v13;
      x = CVisual::GetRelativeOffsetInternal(v4, &v30)->x;
    }
    else
    {
      z = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v31)->z;
      x = v13;
      v15 = CVisual::GetRelativeOffsetInternal(v4, &v30)->y;
    }
    a1 = (float *)v4;
    goto LABEL_21;
  }
  v7 = v6 - 17;
  if ( !v7 )
  {
    if ( a2 != 29 )
    {
      if ( a2 != 31 )
        goto LABEL_46;
      v17 = *(float *)(a4 + 4);
      v18 = *(float *)a4;
LABEL_27:
      CVisual::SetRelativeSize((CVisual *)a1, v18, v17);
      return 0;
    }
    v19 = *(float *)(a4 + 4);
    v20 = *(float *)a4;
LABEL_36:
    CVisual::SetSize((CVisual *)a1, v20, v19);
    return 0;
  }
  if ( v7 != 17 )
    goto LABEL_46;
  if ( a2 != 28 )
  {
    if ( a2 == 30 )
    {
      z = *(float *)(a4 + 8);
      v15 = *(float *)(a4 + 4);
      x = *(float *)a4;
LABEL_21:
      CVisual::SetRelativeOffset((CVisual *)a1, x, v15, z);
      return 0;
    }
LABEL_46:
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024809, 0x96Au, 0LL);
    return v11;
  }
  v8 = *(float *)(a4 + 8);
  v9 = *(float *)(a4 + 4);
  v10 = *(float *)a4;
LABEL_7:
  CVisual::SetOffset((CVisual *)a1, v10, v9, v8);
  return 0;
}
