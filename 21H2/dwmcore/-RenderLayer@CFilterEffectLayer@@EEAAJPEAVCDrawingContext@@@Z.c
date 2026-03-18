/*
 * XREFs of ?RenderLayer@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801DBF40
 * Callers:
 *     <none>
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000FD9C (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180015658 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18009759C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x180204BC0 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 */

__int64 __fastcall CFilterEffectLayer::RenderLayer(CFilterEffectLayer *this, struct CDrawingContext *a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v5)(__int64, struct ID2D1Bitmap1 **, _QWORD); // rbx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  CFilterEffect *v11; // rcx
  struct ID2D1Effect *v12; // rdi
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  FLOAT v16; // xmm3_4
  float v17; // xmm0_4
  FLOAT v18; // xmm1_4
  float v19; // xmm0_4
  int v20; // xmm1_4
  __int64 v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-40h]
  struct ID2D1Bitmap1 *v24; // [rsp+30h] [rbp-30h] BYREF
  struct ID2D1Effect *v25; // [rsp+38h] [rbp-28h] BYREF
  float v26; // [rsp+40h] [rbp-20h]
  float v27; // [rsp+44h] [rbp-1Ch]
  struct D2D_RECT_F v28; // [rsp+48h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 1);
  v24 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, struct ID2D1Bitmap1 **, _QWORD))(*(_QWORD *)v2 + 72LL);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v24);
  v6 = v5(v2, &v24, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    v23 = 96;
    goto LABEL_10;
  }
  if ( g_LockAndReadLayer )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
    v10 = *(int *)(*(_QWORD *)(v9 + 8) + 16LL) + v9 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 24LL))(
      v10,
      ((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  }
  v11 = (CFilterEffect *)*((_QWORD *)this + 15);
  v25 = 0LL;
  CFilterEffect::GetD2DEffectNoRef(v11, a2, v24, &v25);
  v12 = v25;
  if ( v25 )
  {
    v13 = *((float *)this + 33);
    v14 = *((float *)this + 34);
    v15 = (float)*((int *)this + 4);
    LODWORD(v25) = *((_DWORD *)this + 32);
    v16 = *(float *)&v25 - v15;
    *((float *)&v25 + 1) = v13;
    v17 = (float)*((int *)this + 5);
    v28.left = v16;
    v18 = v13 - v17;
    v19 = *((float *)this + 35);
    v28.right = v16 + v14;
    v28.top = v18;
    v26 = v14 + *(float *)&v25;
    v28.bottom = v18 + v19;
    v27 = v19 + v13;
    v6 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (__int64)&v25, D2D1_ANTIALIAS_MODE_ALIASED, 0);
    v8 = v6;
    if ( v6 >= 0 )
    {
      v20 = *((_DWORD *)this + 33);
      LODWORD(v25) = *((_DWORD *)this + 32);
      HIDWORD(v25) = v20;
      v8 = CDrawingContext::FillEffect(a2, v12, &v28, (const struct D2D_POINT_2F *)&v25, 1);
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v8, 0x90u);
      goto LABEL_11;
    }
    v23 = 130;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, v23);
  }
LABEL_11:
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v24);
  return (unsigned int)v8;
}
