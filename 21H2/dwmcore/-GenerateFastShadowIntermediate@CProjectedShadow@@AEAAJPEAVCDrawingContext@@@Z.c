/*
 * XREFs of ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18023437C
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180235174 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x1802A9724 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802A9A0C (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 */

__int64 __fastcall CProjectedShadow::GenerateFastShadowIntermediate(CProjectedShadow *this, struct CDrawingContext *a2)
{
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  const struct D2D_SIZE_F *v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  struct D2D_POINT_2F *v13; // [rsp+30h] [rbp-21h]
  struct IRenderTargetBitmap *v14; // [rsp+48h] [rbp-9h] BYREF
  _DWORD v15[2]; // [rsp+50h] [rbp-1h] BYREF
  _DWORD v16[2]; // [rsp+58h] [rbp+7h] BYREF
  const char *v17; // [rsp+60h] [rbp+Fh] BYREF
  int v18; // [rsp+68h] [rbp+17h]
  __int128 v19; // [rsp+70h] [rbp+1Fh] BYREF

  v14 = 0LL;
  v15[0] = 1107558400;
  v15[1] = 1107558400;
  v16[0] = 1115815936;
  v16[1] = 1115815936;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v14);
  v4 = *((_QWORD *)this + 2);
  v17 = "DWM ProjectedShadow FastShadow";
  v19 = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v5 = *(_QWORD *)(v4 + 328);
  v18 = 30;
  v6 = ShadowHelpers::GenerateMaskIntermediate(&v17, a2, v15, v5, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x334u);
  }
  else
  {
    *(_QWORD *)&v19 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_16_0), (__m128)LODWORD(FLOAT_16_0)).m128_u64[0];
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpFastShadowIntermediate);
    if ( v14 )
      v9 = (const struct D2D_SIZE_F *)((char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 16LL) + 8);
    else
      v9 = 0LL;
    *(float *)&v13 = FLOAT_16_0;
    v17 = "DWM ProjectedShadow FastShadow";
    v18 = 30;
    v10 = ShadowHelpers::GenerateBlurIntermediate(
            (ShadowHelpers *)&v17,
            a2,
            (struct CDrawingContext *)v16,
            v9,
            (struct IBitmapRealization *)&v19,
            v13,
            COERCE_FLOAT(&CProjectedShadow::s_cpFastShadowIntermediate),
            &v14);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x33Eu);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v14);
  return v8;
}
