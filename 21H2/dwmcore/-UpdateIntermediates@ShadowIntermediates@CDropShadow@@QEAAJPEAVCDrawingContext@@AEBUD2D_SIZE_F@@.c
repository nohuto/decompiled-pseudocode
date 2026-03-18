/*
 * XREFs of ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000F744
 * Callers:
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18000F6B4 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z @ 0x18000F984 (-CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z.c)
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x18000F9CC (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000FB3C (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001014C (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18005D034 (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180212B8C (-UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180212DC4 (-UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::UpdateIntermediates(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        float a4)
{
  float v7; // xmm7_4
  int (__fastcall ***v8)(_QWORD); // rcx
  int (__fastcall ***v9)(_QWORD); // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  struct IBitmapRealization *v18; // r8
  int v19; // eax
  unsigned int v20; // ecx
  float v21; // xmm0_4
  int updated; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  struct D2D_SIZE_F v26; // [rsp+30h] [rbp-30h] BYREF

  v7 = *(float *)&FLOAT_1_0;
  if ( CDropShadow::ShadowIntermediates::CanUseFastShadow(this, a3, a4) )
  {
    if ( !CDropShadow::ShadowIntermediates::s_cpFastShadowMask
      || (v8 = (int (__fastcall ***)(_QWORD))((char *)CDropShadow::ShadowIntermediates::s_cpFastShadowMask
                                            + *(int *)(*((_QWORD *)CDropShadow::ShadowIntermediates::s_cpFastShadowMask
                                                       + 1)
                                                     + 8LL)
                                            + 8),
          (**v8)(v8) < 0) )
    {
      v26.width = 33.0;
      v26.height = 33.0;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&CDropShadow::ShadowIntermediates::s_cpFastShadowMask);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&CDropShadow::ShadowIntermediates::s_cpFastShadowMask);
      v16 = CDropShadow::ShadowIntermediates::GenerateMaskIntermediate(
              a2,
              &v26,
              0LL,
              &CDropShadow::ShadowIntermediates::s_cpFastShadowMask);
      v13 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x304u, 0LL);
        return v13;
      }
    }
    if ( !CDropShadow::ShadowIntermediates::s_cpFastShadowBlur
      || (v9 = (int (__fastcall ***)(_QWORD))((char *)CDropShadow::ShadowIntermediates::s_cpFastShadowBlur
                                            + *(int *)(*((_QWORD *)CDropShadow::ShadowIntermediates::s_cpFastShadowBlur
                                                       + 1)
                                                     + 8LL)
                                            + 8),
          (**v9)(v9) < 0) )
    {
      v26.width = 65.0;
      v26.height = 65.0;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&CDropShadow::ShadowIntermediates::s_cpFastShadowBlur);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&CDropShadow::ShadowIntermediates::s_cpFastShadowBlur);
      v18 = CDropShadow::ShadowIntermediates::s_cpFastShadowMask
          ? (struct IRenderTargetBitmap *)((char *)CDropShadow::ShadowIntermediates::s_cpFastShadowMask
                                         + *(int *)(*((_QWORD *)CDropShadow::ShadowIntermediates::s_cpFastShadowMask + 1)
                                                  + 16LL)
                                         + 8)
          : 0LL;
      v19 = CDropShadow::ShadowIntermediates::GenerateBlurIntermediate(
              a2,
              &v26,
              v18,
              16.0,
              &CDropShadow::ShadowIntermediates::s_cpFastShadowBlur);
      v13 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x30Cu, 0LL);
        return v13;
      }
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(
      (char *)this + 16,
      CDropShadow::ShadowIntermediates::s_cpFastShadowMask);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(
      (char *)this + 24,
      CDropShadow::ShadowIntermediates::s_cpFastShadowBlur);
    *((_DWORD *)this + 8) = 1098907648;
  }
  else
  {
    v26 = *a3;
    if ( CDropShadow::ShadowIntermediates::IsRectangularShadow(this) )
    {
      v21 = (float)(a4 + a4) + 1.0;
      if ( v21 <= v26.width )
        v26.width = (float)(a4 + a4) + 1.0;
      if ( v21 <= v26.height )
        v26.height = (float)(a4 + a4) + 1.0;
    }
    updated = CDropShadow::ShadowIntermediates::UpdateMaskIntermediate(this, a2, &v26);
    v13 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, updated, 0x320u, 0LL);
      return v13;
    }
    v24 = CDropShadow::ShadowIntermediates::UpdateBlurIntermediate(this, a2, &v26, a4);
    v13 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x321u, 0LL);
      return v13;
    }
  }
  if ( *((float *)this + 8) == 0.0 )
    v10 = *((_QWORD *)this + 2);
  else
    v10 = *((_QWORD *)this + 3);
  v11 = *((_QWORD *)this + 1);
  if ( v11 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, 20LL) )
    v7 = *(float *)(*((_QWORD *)this + 1) + 100LL);
  if ( v10 )
    v12 = *(int *)(*(_QWORD *)(v10 + 8) + 16LL) + v10 + 8;
  else
    v12 = 0LL;
  if ( *((_QWORD *)this + 5) != v12 || *((float *)this + 12) != v7 )
  {
    if ( v10 )
      v15 = *(int *)(*(_QWORD *)(v10 + 8) + 16LL) + v10 + 8;
    else
      v15 = 0LL;
    *((float *)this + 12) = v7;
    *((_QWORD *)this + 5) = v15;
    *((_QWORD *)this + 7) = GetCurrentFrameId();
  }
  return 0;
}
