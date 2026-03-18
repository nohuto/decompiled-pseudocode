/*
 * XREFs of ?RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000E158
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000DCA8 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18000E334 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x18000E9C4 (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ.c)
 *     ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x18000EA10 (-PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18002B000 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002F7B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x180030338 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18005A300 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18007190C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008F6EC (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800CE830 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NH@Z @ 0x1801791AC (-DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1801C3090 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderEffect(
        CTreeEffectLayer *this,
        CDrawingContext *a2,
        struct CMILMatrix *a3,
        int a4,
        unsigned int *a5)
{
  char v8; // r14
  char v9; // r13
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // r8
  _QWORD *v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  char v25; // r11
  __int64 v27; // rax
  __int64 v28; // r9
  CDropShadow *v29; // rcx
  unsigned int v30; // xmm1_4
  unsigned int v31; // xmm0_4
  __int64 v32; // rdx
  struct IBitmapRealization *v33; // rdx
  unsigned int v34; // [rsp+20h] [rbp-48h]
  __int128 v35; // [rsp+40h] [rbp-28h] BYREF

  v8 = 0;
  v9 = 0;
  v35 = 0LL;
  if ( !*((_QWORD *)this + 32) )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024809, 0x2B7u, 0LL);
    return v12;
  }
  v10 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, a4, 1, 0);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x2BAu, 0LL);
LABEL_33:
    if ( !v8 )
      return v12;
    goto LABEL_14;
  }
  v8 = 1;
  CDrawingContext::GetClipBoundsWorld(a2, &v35);
  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v35) )
    goto LABEL_33;
  v13 = CDrawingContext::PushTransformInternal(a2, 0LL, a3, 0, 1);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2C7u, 0LL);
    goto LABEL_14;
  }
  v9 = 1;
  v15 = CDrawingContext::PushEffectiveAlphaForNode(a2, 0LL, 1.0, 1);
  v12 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2CAu, 0LL);
    goto LABEL_14;
  }
  ++*((_DWORD *)a2 + 174);
  v17 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
  v12 = v17;
  if ( v17 < 0 )
  {
    v34 = 720;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, v34, 0LL);
    goto LABEL_14;
  }
  if ( g_LockAndReadLayer )
  {
    v27 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
    v28 = v27 + *(int *)(*(_QWORD *)(v27 + 8) + 16LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v28 + 8) + 24LL))(
      v28 + 8,
      ((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  }
  v20 = (_QWORD *)*((_QWORD *)this + 32);
  if ( !*((_QWORD *)this + 31) )
  {
    v29 = (CDropShadow *)v20[77];
    if ( !v29 || CDropShadow::GetMaskForLayerVisualNoRef(v29) )
      goto LABEL_12;
    v30 = *a5;
    v31 = a5[1];
    *(_QWORD *)&v35 = 0LL;
    v32 = *((_QWORD *)this + 1);
    *((_QWORD *)&v35 + 1) = __PAIR64__(v31, v30);
    v33 = v32 ? (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v32 + 8) + 16LL) + v32 + 8) : 0LL;
    v17 = CDrawingContext::DrawBitmapRealization(a2, v33, 0, 0);
    v12 = v17;
    if ( v17 >= 0 )
    {
LABEL_12:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop,
          v19,
          1LL,
          &v35);
      goto LABEL_14;
    }
    v34 = 774;
    goto LABEL_21;
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 232LL))(v20);
  if ( !v21 )
    goto LABEL_12;
  CTreeEffectLayer::PushLayerTransformOnExplicitSurfaceInput(this);
  *(_QWORD *)(v21 + 8) = this;
  v22 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 31) + 56LL) + 8LL) + *((_QWORD *)this + 31) + 56LL;
  v23 = (*(__int64 (__fastcall **)(__int64, CDrawingContext *, unsigned int *, _QWORD))(*(_QWORD *)v22 + 16LL))(
          v22,
          a2,
          a5,
          0LL);
  *(_QWORD *)(v21 + 8) = 0LL;
  v12 = v23;
  CTreeEffectLayer::PopLayerTransformFromExplicitSurfaceInput(this);
  if ( (v12 & 0x80000000) == 0 )
    goto LABEL_12;
  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v12, 0x2EAu, 0LL);
LABEL_14:
  CDrawingContext::PopGpuClipRectInternal(a2, 0);
  if ( v25 )
  {
    --*((_DWORD *)a2 + 174);
    CDrawingContext::PopAlpha(a2, 1);
  }
  if ( v9 )
    CDrawingContext::PopTransformInternal(a2, 1);
  return v12;
}
