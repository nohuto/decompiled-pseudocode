/*
 * XREFs of ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000E454
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000B490 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000ADA8 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x18000C330 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ @ 0x18000E4F4 (-EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ @ 0x18000E53C (-EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000EC2C (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000F1A8 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18001148C (-GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801E569C (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::UpdateShadowIntermediates(
        CProjectedShadowCaster **this,
        struct CDrawingContext *a2)
{
  unsigned int v4; // ebx
  CProjectedShadowReceiver *v5; // r14
  __int64 v6; // r8
  int v7; // eax
  int ApproxBlur; // eax
  unsigned int v10; // ecx
  int FastShadowIntermediate; // eax
  unsigned int v12; // ecx
  int (__fastcall ***v13)(_QWORD); // rcx
  __int64 *v14; // r14
  int updated; // eax
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rbx
  void (__fastcall ***v19)(_QWORD, int *); // rcx
  __m128 v20; // xmm4
  float v21; // xmm0_4
  int v22; // eax
  __m128 v23; // xmm2
  __m128 v24; // rt1
  __m128 v25; // xmm5
  float v26; // xmm0_4
  int v27; // eax
  __m128 v28; // xmm2
  __m128 v29; // rt1
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  int BlurIntermediate; // eax
  unsigned int v34; // ecx
  struct D2D_POINT_2F *v35; // [rsp+28h] [rbp-38h]
  struct IRenderTargetBitmap **v36; // [rsp+38h] [rbp-28h]
  const char *v37; // [rsp+40h] [rbp-20h] BYREF
  int v38; // [rsp+48h] [rbp-18h]
  __int128 v39; // [rsp+90h] [rbp+30h] BYREF
  int v40; // [rsp+A0h] [rbp+40h] BYREF
  int v41; // [rsp+A4h] [rbp+44h]
  unsigned __int64 v42; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0;
  CProjectedShadow::EnsureNoInvalidIntermediates((CProjectedShadow *)this);
  CProjectedShadowCaster::EnsureNoInvalidIntermediates(this[9]);
  v5 = this[10];
  v6 = *((_QWORD *)v5 + 13);
  if ( v6 )
  {
    v13 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v6 + 8) + 8LL) + v6 + 8);
    if ( (**v13)(v13) < 0 )
      CProjectedShadowReceiver::InvalidateMaskContent(v5);
  }
  v7 = *((_DWORD *)this + 80);
  if ( v7 == 1 )
  {
    if ( !*(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate )
    {
      FastShadowIntermediate = CProjectedShadow::GenerateFastShadowIntermediate((CProjectedShadow *)this, a2);
      v4 = FastShadowIntermediate;
      if ( FastShadowIntermediate < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, FastShadowIntermediate, 0x17Eu, 0LL);
    }
  }
  else if ( (unsigned int)(v7 - 2) > 3 )
  {
    v14 = (__int64 *)(this + 45);
    if ( !this[45] || *((_QWORD *)this[9] + 10) > 1uLL )
    {
      updated = CProjectedShadowCaster::UpdateMaskIntermediate(this[9], a2);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, updated, 0x191u, 0LL);
      }
      else
      {
        v17 = (__int64)this[9] + 72;
        *(_QWORD *)&v39 = *((_QWORD *)a2 + 741);
        v18 = *(_QWORD *)(std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at(
                            v17,
                            (__int64)&v39)
                        + 40);
        v19 = (void (__fastcall ***)(_QWORD, int *))(v18 + *(int *)(*(_QWORD *)(v18 + 8) + 16LL) + 8LL);
        (**v19)(v19, &v40);
        v20 = (__m128)*((unsigned int *)this + 22);
        v21 = (float)v41 + (float)(v20.m128_f32[0] + v20.m128_f32[0]);
        *(float *)&v39 = v21;
        if ( COERCE_UNSIGNED_INT(fabs(v21)) > 0x497FFFF0 )
        {
          v23 = 0LL;
          v23.m128_f32[0] = (float)(int)v21 - v21;
          v24.m128_f32[0] = FLOAT_N0_5;
          LODWORD(v39) = _mm_cmple_ss(v23, v24).m128_u32[0];
          v22 = (int)v21 - v39;
        }
        else
        {
          *(float *)&v39 = v21 + 6291456.25;
          v22 = (int)((_DWORD)v39 << 10) >> 11;
        }
        v25 = (__m128)COERCE_UNSIGNED_INT((float)v22);
        v26 = (float)v40 + (float)(v20.m128_f32[0] + v20.m128_f32[0]);
        *(float *)&v39 = v26;
        if ( COERCE_UNSIGNED_INT(fabs(v26)) > 0x497FFFF0 )
        {
          v28 = 0LL;
          v28.m128_f32[0] = (float)(int)v26 - v26;
          v29.m128_f32[0] = FLOAT_N0_5;
          LODWORD(v39) = _mm_cmple_ss(v28, v29).m128_u32[0];
          v27 = (int)v26 - v39;
        }
        else
        {
          *(float *)&v39 = v26 + 6291456.25;
          v27 = (int)((_DWORD)v39 << 10) >> 11;
        }
        v30 = *v14;
        *v14 = 0LL;
        v42 = _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v27), v25).m128_u64[0];
        *(_QWORD *)&v39 = _mm_unpacklo_ps(v20, v20).m128_u64[0];
        if ( v30 )
        {
          v31 = v30 + 8 + *(int *)(*(_QWORD *)(v30 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        }
        LODWORD(v35) = *((_DWORD *)this + 22);
        v32 = *(int *)(*(_QWORD *)(v18 + 8) + 16LL);
        v37 = "DWM ProjectedShadow Blur";
        v38 = 24;
        BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                             (ShadowHelpers *)&v37,
                             a2,
                             (struct CDrawingContext *)&v42,
                             (const struct D2D_SIZE_F *)(v18 + v32 + 8),
                             (struct IBitmapRealization *)&v39,
                             v35,
                             COERCE_FLOAT((_DWORD)this + 360),
                             v36);
        v4 = BlurIntermediate;
        if ( BlurIntermediate < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, BlurIntermediate, 0x1A2u, 0LL);
      }
    }
  }
  else
  {
    ApproxBlur = CProjectedShadow::GenerateApproxBlur((CProjectedShadow *)this, a2);
    v4 = ApproxBlur;
    if ( ApproxBlur < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ApproxBlur, 0x186u, 0LL);
  }
  return v4;
}
