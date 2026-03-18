/*
 * XREFs of ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180006BF4
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000A914 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000B668 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18000D628 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::GenerateFastShadowIntermediate(CProjectedShadow *this, struct CDrawingContext *a2)
{
  __int64 v2; // rax
  __int64 v4; // r9
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v12; // rcx
  struct D2D_POINT_2F *v13; // [rsp+30h] [rbp-21h]
  struct IRenderTargetBitmap *v14; // [rsp+48h] [rbp-9h] BYREF
  _DWORD v15[2]; // [rsp+50h] [rbp-1h] BYREF
  _DWORD v16[2]; // [rsp+58h] [rbp+7h] BYREF
  const char *v17; // [rsp+60h] [rbp+Fh] BYREF
  int v18; // [rsp+68h] [rbp+17h]
  __int128 v19; // [rsp+70h] [rbp+1Fh] BYREF

  v2 = *((_QWORD *)this + 2);
  v14 = 0LL;
  v15[0] = 1107558400;
  v15[1] = 1107558400;
  v19 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v4 = *(_QWORD *)(v2 + 176);
  v16[0] = 1115815936;
  v16[1] = 1115815936;
  v17 = "DWM ProjectedShadow FastShadow";
  v18 = 30;
  v5 = ShadowHelpers::GenerateMaskIntermediate(&v17, a2, v15, v4, 0LL, 0, &v19);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x334u, 0LL);
  }
  else
  {
    v8 = *(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate;
    *(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate = 0LL;
    *(_QWORD *)&v19 = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_16_0, (__m128)(unsigned int)FLOAT_16_0).m128_u64[0];
    if ( v8 )
    {
      v12 = v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v17 = "DWM ProjectedShadow FastShadow";
    LODWORD(v13) = (_DWORD)FLOAT_16_0;
    v18 = 30;
    v9 = ShadowHelpers::GenerateBlurIntermediate(
           (ShadowHelpers *)&v17,
           a2,
           (struct CDrawingContext *)v16,
           0LL,
           (struct IBitmapRealization *)&v19,
           v13,
           COERCE_FLOAT(&CProjectedShadow::s_cpFastShadowIntermediate),
           &v14);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x33Eu, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v14);
  return v7;
}
