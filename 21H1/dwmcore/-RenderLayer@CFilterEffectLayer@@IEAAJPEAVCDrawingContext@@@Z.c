/*
 * XREFs of ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000C020
 * Callers:
 *     ?RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18000C9E0 (-RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000B850 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x18000C1D4 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18002B000 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800CE830 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffectLayer::RenderLayer(CFilterEffectLayer *this, struct CDrawingContext *a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v5)(__int64, struct ID2D1Bitmap1 **, _QWORD); // rbx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ebx
  CFilterEffect *v9; // rcx
  __int64 v10; // r8
  struct ID2D1Effect *v11; // rdi
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  FLOAT v15; // xmm3_4
  float v16; // xmm0_4
  FLOAT v17; // xmm1_4
  float v18; // xmm0_4
  int v19; // xmm1_4
  unsigned int v20; // ecx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-40h]
  struct ID2D1Bitmap1 *v25; // [rsp+30h] [rbp-30h] BYREF
  struct ID2D1Effect *v26; // [rsp+38h] [rbp-28h] BYREF
  float v27; // [rsp+40h] [rbp-20h]
  float v28; // [rsp+44h] [rbp-1Ch]
  struct D2D_RECT_F v29; // [rsp+48h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 1);
  v25 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, struct ID2D1Bitmap1 **, _QWORD))(*(_QWORD *)v2 + 72LL);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v25);
  v6 = v5(v2, &v25, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    v24 = 112;
    goto LABEL_13;
  }
  if ( g_LockAndReadLayer )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
    v23 = *(int *)(*(_QWORD *)(v22 + 8) + 16LL) + v22 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 24LL))(
      v23,
      ((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  }
  v9 = (CFilterEffect *)*((_QWORD *)this + 15);
  v26 = 0LL;
  CFilterEffect::GetD2DEffectNoRef(v9, a2, v25, &v26);
  v11 = v26;
  if ( !v26 )
    goto LABEL_7;
  v12 = *((float *)this + 33);
  v13 = *((float *)this + 34);
  v14 = (float)*((int *)this + 4);
  LODWORD(v26) = *((_DWORD *)this + 32);
  v15 = *(float *)&v26 - v14;
  *((float *)&v26 + 1) = v12;
  v16 = (float)*((int *)this + 5);
  v29.left = v15;
  v17 = v12 - v16;
  v18 = *((float *)this + 35);
  v29.right = v15 + v13;
  v29.top = v17;
  v27 = v13 + *(float *)&v26;
  v29.bottom = v17 + v18;
  v28 = v18 + v12;
  v6 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v26, 1, 0);
  v8 = v6;
  if ( v6 < 0 )
  {
    v24 = 146;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v24, 0LL);
    goto LABEL_9;
  }
  v19 = *((_DWORD *)this + 33);
  LODWORD(v26) = *((_DWORD *)this + 32);
  HIDWORD(v26) = v19;
  v8 = CDrawingContext::FillEffect(a2, v11, &v29, (const struct D2D_POINT_2F *)&v26, 1);
  CDrawingContext::PopGpuClipRectInternal(a2, 0);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v8, 0xA0u, 0LL);
    goto LABEL_9;
  }
LABEL_7:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop,
      v10,
      1LL,
      &v29);
LABEL_9:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v25);
  return (unsigned int)v8;
}
