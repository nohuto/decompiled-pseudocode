/*
 * XREFs of ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180010F0C
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180010AFC (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 * Callees:
 *     ??0CTreeEffectLayer@@IEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800111A8 (--0CTreeEffectLayer@@IEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@P.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x180011240 (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x180011284 (-HasBlurEffectNode@CEffectBrush@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003C90C (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::Create(
        __int64 a1,
        __int64 a2,
        CEffectBrush *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  float v9; // xmm6_4
  void (__fastcall ***v12)(_QWORD, _BYTE *); // rcx
  int v13; // edi
  __m128i v14; // xmm1
  __int64 v15; // rax
  unsigned __int64 v16; // xmm0_8
  int v17; // r13d
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // ecx
  float v21; // xmm0_4
  signed int v22; // ecx
  float v23; // xmm0_4
  int v24; // eax
  __int64 (__fastcall **v25)(__int64, _BYTE *); // rax
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // ebx
  void *v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // rax
  __m128 v34; // xmm2
  __m128 v35; // xmm2
  __int64 v36; // [rsp+48h] [rbp-71h] BYREF
  __m128i v37; // [rsp+50h] [rbp-69h] BYREF
  __int64 v38; // [rsp+60h] [rbp-59h]
  const char *v39; // [rsp+68h] [rbp-51h] BYREF
  int v40; // [rsp+70h] [rbp-49h]
  _BYTE v41[24]; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v42[4]; // [rsp+90h] [rbp-29h] BYREF
  int v43; // [rsp+94h] [rbp-25h]

  v9 = *(float *)&FLOAT_1_0;
  v38 = a5;
  *(_QWORD *)a7 = 0LL;
  v12 = (void (__fastcall ***)(_QWORD, _BYTE *))(a1 + *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + 8LL);
  (**v12)(v12, v42);
  v13 = 1;
  v43 = 1;
  v14 = *(__m128i *)CTreeEffectLayer::GetLayerPointAndSize(&v39, a3, a2, a5);
  v15 = *(_QWORD *)(a1 + 8);
  v37 = v14;
  v16 = _mm_srli_si128(v14, 8).m128i_u64[0];
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 8));
  v18 = HIDWORD(v16);
  if ( (unsigned int)v17 > HIDWORD(v16) )
    LODWORD(v18) = v17;
  v19 = a1 + *(int *)(v15 + 8) + 8LL;
  v20 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19) + 968);
  if ( (unsigned int)v18 > v20 )
    v9 = (float)v20 / (float)(int)v18;
  v21 = (float)v17 * v9;
  *(float *)&v36 = v21;
  if ( COERCE_UNSIGNED_INT(fabs(v21)) > 0x497FFFF0 )
  {
    v34 = 0LL;
    v34.m128_f32[0] = (float)(int)v21 - v21;
    v22 = (int)v21 - _mm_cmple_ss(v34, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    *(float *)&v36 = v21 + 6291456.25;
    v22 = (int)((_DWORD)v36 << 10) >> 11;
  }
  v37.m128i_i32[2] = v22;
  v23 = (float)v37.m128i_i32[3] * v9;
  *(float *)&v36 = v23;
  if ( COERCE_UNSIGNED_INT(fabs(v23)) > 0x497FFFF0 )
  {
    v35 = 0LL;
    v35.m128_f32[0] = (float)(int)v23 - v23;
    LODWORD(v36) = _mm_cmple_ss(v35, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    v24 = (int)v23 - v36;
  }
  else
  {
    *(float *)&v36 = v23 + 6291456.25;
    v24 = (int)((_DWORD)v36 << 10) >> 11;
  }
  v37.m128i_i32[3] = v24;
  if ( v22 <= 0 || v24 <= 0 )
  {
    v29 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024809, 0x86u, 0LL);
  }
  else
  {
    if ( a3 && CEffectBrush::HasBlurEffectNode(a3) )
      v13 = 2;
    v25 = *(__int64 (__fastcall ***)(__int64, _BYTE *))a1;
    v36 = 0LL;
    v26 = (*v25)(a1, v41);
    v40 = 44;
    v39 = "DWM Scratch Rendertarget (tree effect layer)";
    v27 = CExternalLayer::CreateBitmap(&v39, &v37, v42, v26, v13, &v36);
    v29 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x70u, 0LL);
    }
    else
    {
      v30 = operator new(0x120uLL);
      if ( v30 )
        v32 = CTreeEffectLayer::CTreeEffectLayer(v30, &v37, v38, v36, a3, a6, LODWORD(v9));
      else
        v32 = 0LL;
      *(_QWORD *)a7 = v32;
      if ( v32 )
      {
        if ( a4 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 56LL))(a4, 91LL) )
          *(_QWORD *)(*(_QWORD *)a7 + 256LL) = a4;
      }
      else
      {
        v29 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2147024882, 0x78u, 0LL);
      }
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v36);
  }
  return v29;
}
