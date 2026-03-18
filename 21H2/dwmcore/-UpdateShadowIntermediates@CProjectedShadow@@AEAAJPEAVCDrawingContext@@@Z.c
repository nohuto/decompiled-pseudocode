/*
 * XREFs of ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180235174
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180233140 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ @ 0x18020179C (-EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x180201E44 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x180202304 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ @ 0x180233348 (-EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ.c)
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802334E4 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18023437C (-GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowReceiver@@QEAAXXZ @ 0x1802354CC (-EnsureNoInvalidIntermediates@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x1802A9724 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 */

__int64 __fastcall CProjectedShadow::UpdateShadowIntermediates(CProjectedShadow *this, struct CDrawingContext *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  int ApproxBlur; // eax
  __int64 v7; // rcx
  int updated; // eax
  __int64 v9; // rcx
  __int64 *v10; // rcx
  __int64 v11; // rbx
  void (__fastcall ***v12)(_QWORD, int *); // rcx
  __m128 v13; // xmm7
  float v14; // xmm0_4
  int v15; // eax
  __m128 v16; // xmm2
  __m128 v17; // rt1
  __m128 v18; // xmm5
  float v19; // xmm0_4
  int v20; // eax
  __m128 v21; // xmm2
  __m128 v22; // rt1
  __int64 v23; // r9
  int BlurIntermediate; // eax
  __int64 v25; // rcx
  int FastShadowIntermediate; // eax
  __int64 v27; // rcx
  struct D2D_POINT_2F *v29; // [rsp+28h] [rbp-38h]
  struct IRenderTargetBitmap **v30; // [rsp+38h] [rbp-28h]
  const char *v31; // [rsp+40h] [rbp-20h] BYREF
  int v32; // [rsp+48h] [rbp-18h]
  __int128 v33; // [rsp+90h] [rbp+30h] BYREF
  int v34; // [rsp+A0h] [rbp+40h] BYREF
  int v35; // [rsp+A4h] [rbp+44h]
  unsigned __int64 v36; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0;
  CProjectedShadow::EnsureNoInvalidIntermediates(this);
  CProjectedShadowCaster::EnsureNoInvalidIntermediates(*((CProjectedShadowCaster **)this + 10));
  CProjectedShadowReceiver::EnsureNoInvalidIntermediates(*((CProjectedShadowReceiver **)this + 11));
  v5 = *((_DWORD *)this + 82);
  if ( v5 == 1 )
  {
    if ( !*(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate )
    {
      FastShadowIntermediate = CProjectedShadow::GenerateFastShadowIntermediate(this, a2);
      v4 = FastShadowIntermediate;
      if ( FastShadowIntermediate < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, FastShadowIntermediate, 0x17Eu);
    }
  }
  else if ( (unsigned int)(v5 - 2) > 3 )
  {
    if ( !*((_QWORD *)this + 46) || *(_QWORD *)(*((_QWORD *)this + 10) + 88LL) > 1uLL )
    {
      updated = CProjectedShadowCaster::UpdateMaskIntermediate(*((CProjectedShadowCaster **)this + 10), a2);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, updated, 0x191u);
      }
      else
      {
        v10 = (__int64 *)(*((_QWORD *)this + 10) + 80LL);
        *(_QWORD *)&v33 = *((_QWORD *)a2 + 991);
        v11 = *(_QWORD *)(std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at(
                            v10,
                            (unsigned __int64 *)&v33)
                        + 40);
        v12 = (void (__fastcall ***)(_QWORD, int *))(v11 + *(int *)(*(_QWORD *)(v11 + 8) + 16LL) + 8LL);
        (**v12)(v12, &v34);
        v13 = (__m128)*((unsigned int *)this + 24);
        v14 = (float)v35 + (float)(v13.m128_f32[0] + v13.m128_f32[0]);
        *(float *)&v33 = v14;
        if ( COERCE_UNSIGNED_INT(fabs(v14)) > 0x497FFFF0 )
        {
          v16 = 0LL;
          v16.m128_f32[0] = (float)(int)v14 - v14;
          v17.m128_f32[0] = FLOAT_N0_5;
          LODWORD(v33) = _mm_cmple_ss(v16, v17).m128_u32[0];
          v15 = (int)v14 - v33;
        }
        else
        {
          *(float *)&v33 = v14 + 6291456.25;
          v15 = (int)((_DWORD)v33 << 10) >> 11;
        }
        v18 = (__m128)COERCE_UNSIGNED_INT((float)v15);
        v19 = (float)v34 + (float)(v13.m128_f32[0] + v13.m128_f32[0]);
        *(float *)&v33 = v19;
        if ( COERCE_UNSIGNED_INT(fabs(v19)) > 0x497FFFF0 )
        {
          v21 = 0LL;
          v21.m128_f32[0] = (float)(int)v19 - v19;
          v22.m128_f32[0] = FLOAT_N0_5;
          LODWORD(v33) = _mm_cmple_ss(v21, v22).m128_u32[0];
          v20 = (int)v19 - v33;
        }
        else
        {
          *(float *)&v33 = v19 + 6291456.25;
          v20 = (int)((_DWORD)v33 << 10) >> 11;
        }
        v36 = _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v20), v18).m128_u64[0];
        *(_QWORD *)&v33 = _mm_unpacklo_ps(v13, v13).m128_u64[0];
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)this + 46);
        LODWORD(v29) = *((_DWORD *)this + 24);
        v23 = *(int *)(*(_QWORD *)(v11 + 8) + 16LL);
        v31 = "DWM ProjectedShadow Blur";
        v32 = 24;
        BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                             (ShadowHelpers *)&v31,
                             a2,
                             (struct CDrawingContext *)&v36,
                             (const struct D2D_SIZE_F *)(v11 + v23 + 8),
                             (struct IBitmapRealization *)&v33,
                             v29,
                             COERCE_FLOAT((_DWORD)this + 368),
                             v30);
        v4 = BlurIntermediate;
        if ( BlurIntermediate < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, BlurIntermediate, 0x1A2u);
      }
    }
  }
  else
  {
    ApproxBlur = CProjectedShadow::GenerateApproxBlur(this, a2);
    v4 = ApproxBlur;
    if ( ApproxBlur < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, ApproxBlur, 0x186u);
  }
  return v4;
}
