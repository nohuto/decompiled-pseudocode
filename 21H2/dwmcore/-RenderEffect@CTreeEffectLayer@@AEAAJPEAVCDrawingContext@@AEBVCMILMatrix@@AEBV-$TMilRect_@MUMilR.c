/*
 * XREFs of ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1801D9F74
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801DA300 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180015658 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18009759C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1800D0448 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D8514 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x1800DF9B0 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x1801AFC58 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x1801B2D58 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x1801D9CDC (-PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x1801D9E88 (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderEffect(
        CTreeEffectLayer *this,
        CDrawingContext *a2,
        struct CMILMatrix *a3,
        __int64 a4,
        unsigned int *a5)
{
  char v8; // r12
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  _QWORD *v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  CDropShadow *v23; // rcx
  unsigned int v24; // xmm1_4
  unsigned int v25; // xmm0_4
  float v26; // xmm2_4
  __int64 v27; // rdx
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  char v34; // r9
  __int128 v36; // [rsp+40h] [rbp-31h] BYREF
  float v37; // [rsp+50h] [rbp-21h] BYREF
  float v38; // [rsp+54h] [rbp-1Dh]
  float v39; // [rsp+58h] [rbp-19h]
  float v40; // [rsp+5Ch] [rbp-15h]

  v8 = 0;
  v36 = 0LL;
  if ( *((_QWORD *)this + 32) )
  {
    v10 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, a4, D2D1_ANTIALIAS_MODE_ALIASED, 0);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x2BDu);
    }
    else
    {
      CDrawingContext::GetClipBoundsWorld((__int64)a2);
      if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v36) )
      {
        v12 = CDrawingContext::PushTransformInternal(a2, 0LL, a3, 0, 1);
        v9 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x2CAu);
        }
        else
        {
          v8 = 1;
          v14 = CDrawingContext::PushEffectiveAlphaForNode(a2, 0LL, 1.0, 1);
          v9 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x2CDu);
          }
          else
          {
            ++*((_DWORD *)a2 + 156);
            if ( g_LockAndReadLayer )
            {
              v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
              v17 = v16 + *(int *)(*(_QWORD *)(v16 + 8) + 16LL);
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v17 + 8) + 24LL))(
                v17 + 8,
                ((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
            }
            v18 = (_QWORD *)*((_QWORD *)this + 32);
            if ( *((_QWORD *)this + 31) )
            {
              v19 = (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 216LL))(v18);
              if ( v19 )
              {
                CTreeEffectLayer::PushLayerTransformOnExplicitSurfaceInput(this);
                *(_QWORD *)(v19 + 8) = this;
                v20 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 31) + 64LL) + 8LL) + *((_QWORD *)this + 31) + 64LL;
                v21 = (*(__int64 (__fastcall **)(__int64, CDrawingContext *, unsigned int *, _QWORD))(*(_QWORD *)v20 + 16LL))(
                        v20,
                        a2,
                        a5,
                        0LL);
                *(_QWORD *)(v19 + 8) = 0LL;
                v9 = v21;
                CTreeEffectLayer::PopLayerTransformFromExplicitSurfaceInput(this);
                if ( v9 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v9, 0x2E9u);
              }
            }
            else
            {
              v23 = (CDropShadow *)v18[91];
              if ( v23 && !CDropShadow::GetMaskForLayerVisualNoRef(v23) )
              {
                v24 = *a5;
                v25 = a5[1];
                v26 = *((float *)this + 58);
                *(_QWORD *)&v36 = 0LL;
                v27 = *((_QWORD *)this + 1);
                *((_QWORD *)&v36 + 1) = __PAIR64__(v25, v24);
                v28 = (float)*((int *)this + 4);
                v29 = *((float *)this + 57);
                v38 = v26 - (float)*((int *)this + 5);
                v37 = v29 - v28;
                v30 = v38 + *((float *)this + 60);
                v39 = (float)(v29 - v28) + *((float *)this + 59);
                v40 = v30;
                v31 = v27 ? *(int *)(*(_QWORD *)(v27 + 8) + 16LL) + v27 + 8 : 0LL;
                v32 = CDrawingContext::DrawBitmapRealization(
                        (__int64)a2,
                        v31,
                        (float *)&v36,
                        &v37,
                        0,
                        0,
                        (int)FLOAT_1_0);
                v9 = v32;
                if ( v32 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, v32, 0x306u);
              }
            }
          }
        }
      }
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      if ( v34 )
      {
        --*((_DWORD *)a2 + 156);
        CDrawingContext::PopAlpha(a2, 1);
      }
      if ( v8 )
        CDrawingContext::PopTransformInternal(a2, 1);
    }
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024809, 0x2BAu);
  }
  return (unsigned int)v9;
}
