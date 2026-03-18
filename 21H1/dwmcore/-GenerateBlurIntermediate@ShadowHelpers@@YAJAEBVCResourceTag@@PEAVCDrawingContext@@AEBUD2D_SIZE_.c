/*
 * XREFs of ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000B668
 * Callers:
 *     ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180006BF4 (-GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000A914 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18000CBA4 (-GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000B850 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x18000B950 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18007059C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18007183C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShadowHelpers::GenerateBlurIntermediate(
        ShadowHelpers *this,
        const struct CResourceTag *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        struct IBitmapRealization *a5,
        const struct D2D_POINT_2F *a6,
        _QWORD *a7)
{
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  struct D2D_SIZE_F v12; // rax
  __int64 (__fastcall *v13)(const struct D2D_SIZE_F *, char *, __int64 *, _QWORD); // rbx
  int v14; // eax
  unsigned int v15; // ecx
  int CachedEffectNoRef; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdi
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  char v25; // [rsp+20h] [rbp-30h]
  unsigned int v26; // [rsp+20h] [rbp-30h]
  __int64 v27; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-10h] BYREF

  v25 = 0;
  v29[0] = 0LL;
  v9 = CDrawingContext::PushOffScreenRenderingLayer(a2, this, a3, DisplayId::None, v25, v29);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x129u, 0LL);
    goto LABEL_11;
  }
  v12 = *a4;
  v28 = 0LL;
  v13 = *(__int64 (__fastcall **)(const struct D2D_SIZE_F *, char *, __int64 *, _QWORD))(*(_QWORD *)&v12 + 56LL);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v28);
  v14 = v13(a4, (char *)a2 + 56, &v28, 0LL);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x131u, 0LL);
    goto LABEL_10;
  }
  CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(*((_QWORD *)a2 + 5) + 16LL, 6LL, &v27);
  v11 = CachedEffectNoRef;
  if ( CachedEffectNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, CachedEffectNoRef, 0x136u, 0LL);
    goto LABEL_10;
  }
  v18 = v27;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v27 + 112LL))(v27, 0LL, v28, 1LL);
  *(float *)&v27 = *(float *)&a6 / 3.0;
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *, int))(*(_QWORD *)v18 + 72LL))(
          v18,
          0LL,
          0LL,
          &v27,
          4);
  v11 = v19;
  if ( v19 < 0 )
  {
    v26 = 321;
    goto LABEL_16;
  }
  LODWORD(v27) = 1;
  v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *, int))(*(_QWORD *)v18 + 72LL))(
          v18,
          1LL,
          0LL,
          &v27,
          4);
  v11 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x144u, 0LL);
    goto LABEL_9;
  }
  LODWORD(v27) = 0;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *, int))(*(_QWORD *)v18 + 72LL))(
          v18,
          2LL,
          0LL,
          &v27,
          4);
  v11 = v19;
  if ( v19 < 0 )
  {
    v26 = 327;
    goto LABEL_16;
  }
  v19 = CDrawingContext::FillEffect(a2, 1);
  v11 = v19;
  if ( v19 < 0 )
  {
    v26 = 332;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, v26, 0LL);
    goto LABEL_9;
  }
  v23 = v29[0];
  v29[0] = 0LL;
  *a7 = v23;
LABEL_9:
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v18 + 112LL))(v18, 0LL, 0LL, 1LL);
LABEL_10:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v28);
  CDrawingContext::PopLayer(a2);
LABEL_11:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v29);
  return v11;
}
