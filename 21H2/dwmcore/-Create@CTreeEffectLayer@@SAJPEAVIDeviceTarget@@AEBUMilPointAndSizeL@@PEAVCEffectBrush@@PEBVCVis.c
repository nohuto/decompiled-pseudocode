/*
 * XREFs of ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1801D9250
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1801B3660 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA950 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CTreeEffectLayer@@AEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1801D8CD4 (--0CTreeEffectLayer@@AEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@P.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x1801D99FC (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 */

__int64 __fastcall CTreeEffectLayer::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        __int128 *a6,
        __int64 *a7)
{
  __int64 v8; // rdi
  int v9; // xmm6_4
  void (__fastcall ***v13)(_QWORD, _BYTE *); // rcx
  __m128i v14; // xmm1
  __int64 v15; // rax
  unsigned __int64 v16; // xmm0_8
  int v17; // r15d
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // ecx
  float v21; // xmm0_4
  __int64 v22; // rcx
  __m128 v23; // xmm2
  float v24; // xmm0_4
  int v25; // eax
  __m128 v26; // xmm2
  __int64 v27; // rcx
  struct _LUID *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // ebx
  LPVOID v32; // rax
  struct IRenderTargetBitmap *v34; // [rsp+48h] [rbp-71h] BYREF
  __m128i v35; // [rsp+50h] [rbp-69h] BYREF
  __int128 *v36; // [rsp+60h] [rbp-59h]
  const char *v37; // [rsp+68h] [rbp-51h] BYREF
  int v38; // [rsp+70h] [rbp-49h]
  _BYTE v39[24]; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v40[4]; // [rsp+90h] [rbp-29h] BYREF
  int v41; // [rsp+94h] [rbp-25h]

  v8 = 0LL;
  v9 = (int)FLOAT_1_0;
  v36 = a5;
  *a7 = 0LL;
  v13 = (void (__fastcall ***)(_QWORD, _BYTE *))(a1 + *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + 8LL);
  (**v13)(v13, v40);
  v41 = 1;
  v14 = *(__m128i *)CTreeEffectLayer::GetLayerPointAndSize(&v37, a3, a2, a5);
  v15 = *(_QWORD *)(a1 + 8);
  v35 = v14;
  v16 = _mm_srli_si128(v14, 8).m128i_u64[0];
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 8));
  v18 = HIDWORD(v16);
  if ( (unsigned int)v17 > HIDWORD(v16) )
    LODWORD(v18) = v17;
  v19 = a1 + *(int *)(v15 + 8) + 8LL;
  v20 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19) + 928);
  if ( (unsigned int)v18 > v20 )
    *(float *)&v9 = (float)v20 / (float)(int)v18;
  v21 = (float)v17 * *(float *)&v9;
  *(float *)&v34 = v21;
  if ( COERCE_UNSIGNED_INT(fabs(v21)) > 0x497FFFF0 )
  {
    v23 = 0LL;
    v23.m128_f32[0] = (float)(int)v21 - v21;
    v22 = (int)v21 - _mm_cmple_ss(v23, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    *(float *)&v34 = v21 + 6291456.25;
    v22 = (unsigned int)((int)((_DWORD)v34 << 10) >> 11);
  }
  v35.m128i_i32[2] = v22;
  v24 = (float)v35.m128i_i32[3] * *(float *)&v9;
  *(float *)&v34 = v24;
  if ( COERCE_UNSIGNED_INT(fabs(v24)) > 0x497FFFF0 )
  {
    v26 = 0LL;
    v26.m128_f32[0] = (float)(int)v24 - v24;
    LODWORD(v34) = _mm_cmple_ss(v26, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    v25 = (int)v24 - (_DWORD)v34;
  }
  else
  {
    *(float *)&v34 = v24 + 6291456.25;
    v25 = (int)((_DWORD)v34 << 10) >> 11;
  }
  v35.m128i_i32[3] = v25;
  if ( (int)v22 <= 0 || v25 <= 0 )
  {
    v31 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, -2003304309, 0x80u);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 56LL))(a4, 91LL) )
  {
    v34 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v34);
    v28 = (struct _LUID *)(**(__int64 (__fastcall ***)(__int64, _BYTE *))a1)(a1, v39);
    v38 = 44;
    v37 = "DWM Scratch Rendertarget (tree effect layer)";
    v29 = CExternalLayer::CreateBitmap((CDeviceManager *)&v37, &v35, (__int64)v40, v28, 1, (CD3DDevice *)&v34);
    v31 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, 0x6Eu);
    }
    else
    {
      v32 = operator new(0x120uLL);
      if ( v32 )
        v8 = CTreeEffectLayer::CTreeEffectLayer(
               (__int64)v32,
               (const struct MilPointAndSizeL *)&v35,
               v36,
               v34,
               a3,
               a6,
               v9);
      *a7 = v8;
      *(_QWORD *)(v8 + 256) = a4;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
  }
  else
  {
    v31 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, -2147024809, 0x7Bu);
  }
  return v31;
}
