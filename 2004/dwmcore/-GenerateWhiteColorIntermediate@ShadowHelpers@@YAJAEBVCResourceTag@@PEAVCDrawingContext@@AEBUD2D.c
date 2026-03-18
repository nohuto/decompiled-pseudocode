/*
 * XREFs of ?GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180267850
 * Callers:
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801E569C (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000F390 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x18000F490 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800374A0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003BF94 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18003C5C4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShadowHelpers::GenerateWhiteColorIntermediate(
        ShadowHelpers *this,
        const struct CResourceTag *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        struct IBitmapRealization *a5)
{
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct D2D_SIZE_F v10; // rax
  __int64 (__fastcall *v11)(const struct D2D_SIZE_F *, char *, __int64 *, _QWORD); // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int CachedEffectNoRef; // eax
  __int64 v16; // rcx
  struct ID2D1Effect *v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v27; // [rsp+20h] [rbp-71h]
  __int64 v28; // [rsp+30h] [rbp-61h] BYREF
  struct ID2D1Effect *v29; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-51h] BYREF
  _OWORD v31[3]; // [rsp+50h] [rbp-41h] BYREF
  __int64 v32; // [rsp+80h] [rbp-11h]
  int v33; // [rsp+88h] [rbp-9h]
  __m128i si128; // [rsp+8Ch] [rbp-5h]
  int v35; // [rsp+9Ch] [rbp+Bh]

  v32 = 0LL;
  v33 = 0;
  v35 = 0;
  memset(v31, 0, sizeof(v31));
  LOBYTE(v27) = 0;
  v30[0] = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v7 = CDrawingContext::PushOffScreenRenderingLayer(a2, (__int64)this, (float *)a3, DisplayId::None, v27, v30);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x171u, 0LL);
  }
  else
  {
    v10 = *a4;
    v28 = 0LL;
    v11 = *(__int64 (__fastcall **)(const struct D2D_SIZE_F *, char *, __int64 *, _QWORD))(*(_QWORD *)&v10 + 56LL);
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v28);
    v12 = v11(a4, (char *)a2 + 56, &v28, 0LL);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x17Bu, 0LL);
    }
    else
    {
      v14 = *((_QWORD *)a2 + 5) + 16LL;
      v29 = 0LL;
      CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(v14, 0, &v29);
      v9 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, CachedEffectNoRef, 0x17Fu, 0LL);
      }
      else
      {
        v17 = v29;
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v29 + 112LL))(
          v29,
          0LL,
          v28,
          1LL);
        LODWORD(v29) = 1;
        v18 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v17 + 72LL))(
                v17,
                1LL,
                0LL,
                &v29,
                4);
        v9 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x188u, 0LL);
        }
        else
        {
          v20 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v17 + 72LL))(
                  v17,
                  0LL,
                  0LL,
                  v31,
                  80);
          v9 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x18Bu, 0LL);
          }
          else
          {
            LODWORD(v29) = 1;
            v22 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct ID2D1Effect **, int))(*(_QWORD *)v17 + 72LL))(
                    v17,
                    2LL,
                    0LL,
                    &v29,
                    4);
            v9 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x18Eu, 0LL);
            }
            else
            {
              v24 = CDrawingContext::FillEffect(a2, v17, 0LL, 0LL, 1);
              v9 = v24;
              if ( v24 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x193u, 0LL);
              }
              else
              {
                *(_QWORD *)a5 = v30[0];
                v30[0] = 0LL;
              }
            }
          }
        }
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v17 + 112LL))(
          v17,
          0LL,
          0LL,
          1LL);
      }
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v28);
    CDrawingContext::PopLayer(a2);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v30);
  return v9;
}
