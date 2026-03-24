/*
 * XREFs of ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180008844
 * Callers:
 *     ?PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800087B0 (-PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z @ 0x180008A94 (-CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z.c)
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x180008ADC (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000F6E8 (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001F730 (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18005FEDC (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180090244 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1801BF6F0 (-UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801BF950 (-UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::UpdateIntermediates(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        float a4)
{
  float v7; // xmm7_4
  struct IRenderTargetBitmap *v8; // r8
  int (__fastcall ***v9)(_QWORD); // rcx
  struct IRenderTargetBitmap *v10; // rdx
  int (__fastcall ***v11)(_QWORD); // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edi
  __int64 v17; // rax
  struct IRenderTargetBitmap *v18; // rdx
  int v19; // eax
  unsigned int v20; // ecx
  struct IRenderTargetBitmap *v21; // r8
  struct IBitmapRealization *v22; // r8
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  float v29; // xmm0_4
  int updated; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  struct D2D_SIZE_F v34; // [rsp+30h] [rbp-30h] BYREF

  v7 = *(float *)&FLOAT_1_0;
  if ( !CDropShadow::ShadowIntermediates::CanUseFastShadow(this, a3, a4) )
  {
    v34 = *a3;
    if ( CDropShadow::ShadowIntermediates::IsRectangularShadow(this) )
    {
      v29 = (float)(a4 + a4) + 1.0;
      if ( v29 <= v34.width )
        v34.width = (float)(a4 + a4) + 1.0;
      if ( v29 <= v34.height )
        v34.height = (float)(a4 + a4) + 1.0;
    }
    updated = CDropShadow::ShadowIntermediates::UpdateMaskIntermediate(this, a2, &v34);
    v15 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, updated, 0x2F1u, 0LL);
      return v15;
    }
    v32 = CDropShadow::ShadowIntermediates::UpdateBlurIntermediate(this, a2, &v34, a4);
    v15 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x2F2u, 0LL);
      return v15;
    }
    goto LABEL_7;
  }
  v8 = CDropShadow::ShadowIntermediates::s_cpFastShadowMask;
  if ( CDropShadow::ShadowIntermediates::s_cpFastShadowMask )
  {
    v9 = (int (__fastcall ***)(_QWORD))((char *)CDropShadow::ShadowIntermediates::s_cpFastShadowMask
                                      + *(int *)(*((_QWORD *)CDropShadow::ShadowIntermediates::s_cpFastShadowMask + 1)
                                               + 8LL)
                                      + 8);
    if ( (**v9)(v9) >= 0 )
      goto LABEL_4;
    v8 = CDropShadow::ShadowIntermediates::s_cpFastShadowMask;
  }
  v18 = 0LL;
  v34.width = 33.0;
  v34.height = 33.0;
  CDropShadow::ShadowIntermediates::s_cpFastShadowMask = 0LL;
  if ( v8 )
  {
    v25 = (__int64)v8 + *(int *)(*((_QWORD *)v8 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    v18 = CDropShadow::ShadowIntermediates::s_cpFastShadowMask;
  }
  CDropShadow::ShadowIntermediates::s_cpFastShadowMask = 0LL;
  if ( v18 )
  {
    v26 = (__int64)v18 + *(int *)(*((_QWORD *)v18 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v19 = CDropShadow::ShadowIntermediates::GenerateMaskIntermediate(
          a2,
          &v34,
          0LL,
          &CDropShadow::ShadowIntermediates::s_cpFastShadowMask);
  v15 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2D5u, 0LL);
    return v15;
  }
LABEL_4:
  v10 = CDropShadow::ShadowIntermediates::s_cpFastShadowBlur;
  if ( !CDropShadow::ShadowIntermediates::s_cpFastShadowBlur )
    goto LABEL_25;
  v11 = (int (__fastcall ***)(_QWORD))((char *)CDropShadow::ShadowIntermediates::s_cpFastShadowBlur
                                     + *(int *)(*((_QWORD *)CDropShadow::ShadowIntermediates::s_cpFastShadowBlur + 1)
                                              + 8LL)
                                     + 8);
  if ( (**v11)(v11) < 0 )
  {
    v10 = CDropShadow::ShadowIntermediates::s_cpFastShadowBlur;
LABEL_25:
    v21 = 0LL;
    v34.width = 65.0;
    v34.height = 65.0;
    CDropShadow::ShadowIntermediates::s_cpFastShadowBlur = 0LL;
    if ( v10 )
    {
      v27 = (__int64)v10 + *(int *)(*((_QWORD *)v10 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v21 = CDropShadow::ShadowIntermediates::s_cpFastShadowBlur;
    }
    CDropShadow::ShadowIntermediates::s_cpFastShadowBlur = 0LL;
    if ( v21 )
    {
      v28 = (__int64)v21 + *(int *)(*((_QWORD *)v21 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    if ( CDropShadow::ShadowIntermediates::s_cpFastShadowMask )
      v22 = (struct IRenderTargetBitmap *)((char *)CDropShadow::ShadowIntermediates::s_cpFastShadowMask
                                         + *(int *)(*((_QWORD *)CDropShadow::ShadowIntermediates::s_cpFastShadowMask + 1)
                                                  + 16LL)
                                         + 8);
    else
      v22 = 0LL;
    v23 = CDropShadow::ShadowIntermediates::GenerateBlurIntermediate(
            a2,
            &v34,
            v22,
            16.0,
            &CDropShadow::ShadowIntermediates::s_cpFastShadowBlur);
    v15 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x2DDu, 0LL);
      return v15;
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(
    (char *)this + 16,
    CDropShadow::ShadowIntermediates::s_cpFastShadowMask);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(
    (char *)this + 24,
    CDropShadow::ShadowIntermediates::s_cpFastShadowBlur);
  *((_DWORD *)this + 8) = 1098907648;
LABEL_7:
  if ( *((float *)this + 8) == 0.0 )
    v12 = *((_QWORD *)this + 2);
  else
    v12 = *((_QWORD *)this + 3);
  v13 = *((_QWORD *)this + 1);
  if ( v13 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 56LL))(v13, 20LL) )
    v7 = *(float *)(*((_QWORD *)this + 1) + 92LL);
  if ( v12 )
    v14 = *(int *)(*(_QWORD *)(v12 + 8) + 16LL) + v12 + 8;
  else
    v14 = 0LL;
  if ( *((_QWORD *)this + 5) != v14 || *((float *)this + 12) != v7 )
  {
    if ( v12 )
      v17 = *(int *)(*(_QWORD *)(v12 + 8) + 16LL) + v12 + 8;
    else
      v17 = 0LL;
    *((float *)this + 12) = v7;
    *((_QWORD *)this + 5) = v17;
    *((_QWORD *)this + 7) = GetCurrentFrameId();
  }
  return 0;
}
