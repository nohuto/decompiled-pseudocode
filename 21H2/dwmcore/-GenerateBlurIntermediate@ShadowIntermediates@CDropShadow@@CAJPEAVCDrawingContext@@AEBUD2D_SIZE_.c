/*
 * XREFs of ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000FB3C
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000F744 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180212B8C (-UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000FD9C (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180010070 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA5D0 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800D5448 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDropShadow::ShadowIntermediates::GenerateBlurIntermediate(
        struct CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct IBitmapRealization *a3,
        double a4,
        struct IRenderTargetBitmap **a5)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(struct IBitmapRealization *, __int64, __int64 *, _QWORD); // rbx
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // ecx
  int CachedEffectNoRef; // eax
  unsigned int v17; // ecx
  const char *v18; // rsi
  int v19; // eax
  unsigned int v20; // ecx
  struct IRenderTargetBitmap *v21; // rdx
  const char *v23; // [rsp+30h] [rbp-30h] BYREF
  int v24; // [rsp+38h] [rbp-28h]
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  struct IRenderTargetBitmap *v26; // [rsp+48h] [rbp-18h] BYREF

  v26 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v26);
  v23 = "DWM DropShadow Blur";
  v24 = 19;
  v8 = CDrawingContext::PushOffScreenRenderingLayer(this, &v23, a2, DisplayId::None, 4, &v26);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x3F4u, 0LL);
  }
  else
  {
    v11 = *(_QWORD *)a3;
    v25 = 0LL;
    v12 = *(__int64 (__fastcall **)(struct IBitmapRealization *, __int64, __int64 *, _QWORD))(v11 + 56);
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v25);
    v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 40LL))((char *)this + 24);
    v14 = v12(a3, v13, &v25, 0LL);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x3FEu, 0LL);
    }
    else
    {
      CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(*((_QWORD *)this + 5) + 16LL, 6LL, &v23);
      v10 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, CachedEffectNoRef, 0x403u, 0LL);
      }
      else
      {
        v18 = v23;
        (*(void (__fastcall **)(const char *, _QWORD, __int64, __int64))(*(_QWORD *)v23 + 112LL))(v23, 0LL, v25, 1LL);
        *(float *)&v23 = *(float *)&a4 / 3.0;
        (*(void (__fastcall **)(const char *, _QWORD, _QWORD, const char **, int))(*(_QWORD *)v18 + 72LL))(
          v18,
          0LL,
          0LL,
          &v23,
          4);
        LODWORD(v23) = 1;
        (*(void (__fastcall **)(const char *, __int64, _QWORD, const char **, int))(*(_QWORD *)v18 + 72LL))(
          v18,
          1LL,
          0LL,
          &v23,
          4);
        LODWORD(v23) = 0;
        (*(void (__fastcall **)(const char *, __int64, _QWORD, const char **, int))(*(_QWORD *)v18 + 72LL))(
          v18,
          2LL,
          0LL,
          &v23,
          4);
        v23 = (const char *)_mm_unpacklo_ps(*(__m128 *)&a4, *(__m128 *)&a4).m128_u64[0];
        v19 = CDrawingContext::FillEffect(this, 1);
        v10 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x417u, 0LL);
        }
        else
        {
          v21 = v26;
          v26 = 0LL;
          *a5 = v21;
        }
        (*(void (__fastcall **)(const char *, _QWORD, _QWORD, __int64))(*(_QWORD *)v18 + 112LL))(v18, 0LL, 0LL, 1LL);
      }
    }
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(&v25);
    CDrawingContext::PopLayer(this);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v26);
  return v10;
}
