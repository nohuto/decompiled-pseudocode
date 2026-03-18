/*
 * XREFs of ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18000CBA4
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1800072B0 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000B668 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18000D628 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::GenerateApproxBlurIntermediate(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        float a3,
        struct D2D_SIZE_F *a4,
        struct IRenderTargetBitmap **a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  struct IRenderTargetBitmap *v13; // rax
  __int64 v14; // rdx
  const struct D2D_SIZE_F *v15; // r9
  int BlurIntermediate; // eax
  unsigned int v17; // ecx
  __int64 v19; // rcx
  struct D2D_POINT_2F *v20; // [rsp+28h] [rbp-39h]
  struct IRenderTargetBitmap *v21; // [rsp+40h] [rbp-21h] BYREF
  const char *v22; // [rsp+48h] [rbp-19h] BYREF
  int v23; // [rsp+50h] [rbp-11h]
  __int128 v24; // [rsp+58h] [rbp-9h] BYREF

  *a5 = 0LL;
  v7 = CProjectedShadow::s_cpMaskForBlur;
  if ( !CProjectedShadow::s_cpMaskForBlur )
  {
    v21 = 0LL;
    v8 = *((_QWORD *)this + 2);
    v24 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v9 = *(_QWORD *)(v8 + 176);
    v22 = "DWM ProjectedShadow ApproxBlur";
    v23 = 30;
    v10 = ShadowHelpers::GenerateMaskIntermediate(&v22, a2, &unk_18028C470, v9, 0LL, 0, &v24);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x366u, 0LL);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v21);
      return v12;
    }
    v13 = v21;
    v14 = CProjectedShadow::s_cpMaskForBlur;
    v21 = 0LL;
    CProjectedShadow::s_cpMaskForBlur = (__int64)v13;
    if ( v14 )
    {
      v19 = v14 + 8 + *(int *)(*(_QWORD *)(v14 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v21);
    v7 = CProjectedShadow::s_cpMaskForBlur;
  }
  v21 = (struct IRenderTargetBitmap *)_mm_unpacklo_ps((__m128)LODWORD(FLOAT_64_0), (__m128)LODWORD(FLOAT_64_0)).m128_u64[0];
  if ( v7 )
    v15 = (const struct D2D_SIZE_F *)(v7 + *(int *)(*(_QWORD *)(v7 + 8) + 16LL) + 8LL);
  else
    v15 = 0LL;
  *(float *)&v20 = a3;
  v22 = "DWM ProjectedShadow ApproxBlur";
  v23 = 30;
  BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                       (ShadowHelpers *)&v22,
                       a2,
                       (struct CDrawingContext *)a4,
                       v15,
                       (struct IBitmapRealization *)&v21,
                       v20,
                       a5);
  v12 = BlurIntermediate;
  if ( BlurIntermediate < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, BlurIntermediate, 0x376u, 0LL);
  return v12;
}
