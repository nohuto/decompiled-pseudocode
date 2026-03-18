/*
 * XREFs of ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180010C4C
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000DC1C (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000E968 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180010AC4 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::GenerateFastShadowIntermediate(CProjectedShadow *this, struct CDrawingContext *a2)
{
  __int64 v2; // rax
  __int64 v4; // r9
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  const struct D2D_SIZE_F *v9; // r9
  int BlurIntermediate; // eax
  unsigned int v11; // ecx
  __int64 v13; // rcx
  struct D2D_POINT_2F *v14; // [rsp+30h] [rbp-21h]
  __int64 v15; // [rsp+48h] [rbp-9h] BYREF
  _DWORD v16[2]; // [rsp+50h] [rbp-1h] BYREF
  _DWORD v17[2]; // [rsp+58h] [rbp+7h] BYREF
  const char *v18; // [rsp+60h] [rbp+Fh] BYREF
  int v19; // [rsp+68h] [rbp+17h]
  __int128 v20; // [rsp+70h] [rbp+1Fh] BYREF

  v2 = *((_QWORD *)this + 2);
  v15 = 0LL;
  v16[0] = 1107558400;
  v16[1] = 1107558400;
  v20 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v4 = *(_QWORD *)(v2 + 176);
  v17[0] = 1115815936;
  v17[1] = 1115815936;
  v18 = "DWM ProjectedShadow FastShadow";
  v19 = 30;
  v5 = ShadowHelpers::GenerateMaskIntermediate((__int64)&v18, a2, (__int64)v16, v4, 0LL, 0, (float *)&v20, &v15);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x334u, 0LL);
  }
  else
  {
    v8 = *(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate;
    *(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate = 0LL;
    *(_QWORD *)&v20 = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_16_0, (__m128)(unsigned int)FLOAT_16_0).m128_u64[0];
    if ( v8 )
    {
      v13 = v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v15 )
      v9 = (const struct D2D_SIZE_F *)(*(int *)(*(_QWORD *)(v15 + 8) + 16LL) + v15 + 8);
    else
      v9 = 0LL;
    v18 = "DWM ProjectedShadow FastShadow";
    LODWORD(v14) = (_DWORD)FLOAT_16_0;
    v19 = 30;
    BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                         (ShadowHelpers *)&v18,
                         a2,
                         (struct CDrawingContext *)v17,
                         v9,
                         (struct IBitmapRealization *)&v20,
                         v14,
                         &CProjectedShadow::s_cpFastShadowIntermediate);
    v7 = BlurIntermediate;
    if ( BlurIntermediate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, BlurIntermediate, 0x33Eu, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v15);
  return v7;
}
