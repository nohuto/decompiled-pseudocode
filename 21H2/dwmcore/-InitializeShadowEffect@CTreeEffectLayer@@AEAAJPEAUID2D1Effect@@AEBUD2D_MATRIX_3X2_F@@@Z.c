/*
 * XREFs of ?InitializeShadowEffect@CTreeEffectLayer@@AEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801D9B3C
 * Callers:
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x1801DB194 (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::InitializeShadowEffect(
        CTreeEffectLayer *this,
        struct ID2D1Effect *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  CTreeEffectLayer *v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = this;
  if ( !a2 )
    return 2147942487LL;
  v6 = *(_QWORD *)a2;
  LODWORD(v17) = 1;
  v7 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, CTreeEffectLayer **, int))(v6 + 72))(
         a2,
         0LL,
         0LL,
         &v17,
         4);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x4AEu);
  }
  else
  {
    LODWORD(v17) = 0;
    v10 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, CTreeEffectLayer **, int))(*(_QWORD *)a2 + 72LL))(
            a2,
            1LL,
            0LL,
            &v17,
            4);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x4B1u);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, const struct D2D_MATRIX_3X2_F *, int))(*(_QWORD *)a2 + 72LL))(
              a2,
              2LL,
              0LL,
              a3,
              24);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x4B4u);
      }
      else
      {
        v14 = *(_QWORD *)a2;
        *(float *)&v17 = FLOAT_0_5;
        v15 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, CTreeEffectLayer **, int))(v14 + 72))(
                a2,
                3LL,
                0LL,
                &v17,
                4);
        v9 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x4B6u);
      }
    }
  }
  return v9;
}
