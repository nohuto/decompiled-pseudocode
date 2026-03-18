/*
 * XREFs of ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18008AB80
 * Callers:
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18005430C (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18008A630 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008A870 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801E56E8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1802524EC (-RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180011E70 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180096690 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18009A920 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18009AEB4 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800AF3A8 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800D2A70 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800D5448 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x180191964 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801919A0 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawListCache::Render(__int64 a1, struct CDrawingContext *a2, CMILMatrix *a3, float a4)
{
  __int64 v4; // rsi
  bool v5; // cc
  __int64 v6; // rax
  struct ID2D1Geometry *v7; // rbx
  struct CDrawingContext *v8; // r13
  unsigned int v10; // r15d
  bool v11; // zf
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // eax
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  struct ID2D1Geometry *v18; // r12
  __int64 v19; // r14
  CMILMatrix *v20; // r13
  __int128 *v21; // r13
  __int64 v22; // rcx
  int v23; // eax
  float v24; // xmm6_4
  float v25; // xmm8_4
  float v26; // xmm9_4
  float v27; // xmm7_4
  struct ID2D1Geometry *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  int v32; // eax
  __int64 v33; // rcx
  float v34; // xmm4_4
  float v35; // xmm3_4
  int v36; // eax
  __m128 v37; // xmm2
  int v38; // ecx
  __m128 v39; // xmm2
  __m128 v40; // rt1
  __int128 v41; // xmm2
  __int128 v42; // xmm0
  __int128 v43; // xmm2
  __int128 v44; // xmm0
  int v45; // eax
  __int64 v46; // rcx
  int D2DGeometry; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  char v51; // [rsp+48h] [rbp-C0h]
  struct CMILMatrix *v52; // [rsp+50h] [rbp-B8h]
  float v53; // [rsp+50h] [rbp-B8h]
  float v54; // [rsp+50h] [rbp-B8h]
  struct ID2D1Geometry *v55; // [rsp+58h] [rbp-B0h] BYREF
  struct ID2D1Geometry *v56[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+70h] [rbp-98h] BYREF
  CDrawingContext *v58; // [rsp+78h] [rbp-90h]
  struct ID2D1Geometry *v59; // [rsp+80h] [rbp-88h]
  CMILMatrix *v60; // [rsp+88h] [rbp-80h]
  __int64 v61; // [rsp+90h] [rbp-78h]
  _OWORD v62[4]; // [rsp+98h] [rbp-70h] BYREF
  int v63; // [rsp+D8h] [rbp-30h]
  __int128 v64; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v65; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v66; // [rsp+108h] [rbp+0h] BYREF
  void *retaddr; // [rsp+1E0h] [rbp+D8h]

  v4 = 0LL;
  v5 = *(float *)(a1 + 72) <= *(float *)(a1 + 64);
  v6 = *((_QWORD *)a2 + 5);
  v7 = 0LL;
  v55 = 0LL;
  v8 = a2;
  v51 = 0;
  v60 = a3;
  v10 = 0;
  v58 = a2;
  v61 = v6;
  v59 = 0LL;
  if ( !v5 && *(float *)(a1 + 76) > *(float *)(a1 + 68) && a4 > 0.0 )
  {
    v11 = (*(_BYTE *)(a1 + 92) & 0x10) == 0;
    v63 = 0;
    if ( v11 )
    {
      v32 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)a2 + 2) + 112LL))((_QWORD *)a2 + 2);
      v10 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, v32, 0xE3u);
        return v10;
      }
    }
    else
    {
      v12 = CDrawingContext::ApplyRenderStateInternal(a2, 1);
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xDFu);
        return v10;
      }
    }
    v14 = *(_QWORD *)(a1 + 48);
    v15 = v14 & 3;
    if ( (v14 & 3) != 0 )
    {
      if ( v15 == 1 )
      {
        v7 = (struct ID2D1Geometry *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_36;
      }
      if ( v15 == 2 )
      {
LABEL_49:
        v16 = 0LL;
LABEL_9:
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            v17 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1 + 48) - 16);
          }
          else
          {
            if ( (unsigned int)(v15 - 2) > 1 )
              ModuleFailFastForHRESULT(2147549183LL, retaddr);
            v17 = 0LL;
          }
        }
        else
        {
          v17 = 1LL;
        }
        v18 = (struct ID2D1Geometry *)(v16 + 8 * v17);
        while ( 1 )
        {
          if ( v7 == v18 )
          {
            v7 = v55;
            goto LABEL_27;
          }
          v19 = *(_QWORD *)v7;
          v20 = v60;
          if ( (*(_DWORD *)(*(_QWORD *)v7 + 48LL) & 0x400) != 0 && CMILMatrix::Is2DAxisAlignedPreserving(v60) )
          {
            v34 = (float)((float)(*(float *)(v19 + 44) * *((float *)v20 + 4))
                        + (float)(*(float *)(v19 + 40) * *(float *)v20))
                + *((float *)v20 + 12);
            v35 = (float)((float)(*(float *)(v19 + 40) * *((float *)v20 + 1))
                        + (float)(*(float *)(v19 + 44) * *((float *)v20 + 5)))
                + *((float *)v20 + 13);
            if ( COERCE_UNSIGNED_INT(fabs(v34)) > 0x497FFFF0 )
            {
              v37 = 0LL;
              v37.m128_f32[0] = (float)(int)v34 - v34;
              v36 = (int)v34 - _mm_cmple_ss(v37, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
            }
            else
            {
              v53 = v34 + 6291456.25;
              v36 = (int)(LODWORD(v53) << 10) >> 11;
            }
            if ( COERCE_UNSIGNED_INT(
                   fabs(
                     (float)((float)(*(float *)(v19 + 40) * *((float *)v20 + 1))
                           + (float)(*(float *)(v19 + 44) * *((float *)v20 + 5)))
                   + *((float *)v20 + 13))) > 0x497FFFF0 )
            {
              v39 = 0LL;
              v39.m128_f32[0] = (float)(int)v35 - v35;
              v40.m128_f32[0] = FLOAT_N0_5;
              v38 = (int)v35 - _mm_cmple_ss(v39, v40).m128_u32[0];
            }
            else
            {
              v54 = v35 + 6291456.25;
              v38 = (int)(LODWORD(v54) << 10) >> 11;
            }
            v41 = *((_OWORD *)v20 + 1);
            v42 = *(_OWORD *)v20;
            v63 = *((_DWORD *)v20 + 16);
            v62[1] = v41;
            v43 = *((_OWORD *)v20 + 3);
            v62[0] = v42;
            v44 = *((_OWORD *)v20 + 2);
            v62[3] = v43;
            v62[2] = v44;
            CMILMatrix::Translate((CMILMatrix *)v62, (float)v36 - v34, (float)v38 - v35, 0.0);
            v52 = (struct CMILMatrix *)v62;
          }
          else
          {
            v52 = v20;
          }
          v21 = (__int128 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19);
          v22 = 0LL;
          v64 = 0LL;
          v23 = *(_DWORD *)(v61 + 368);
          if ( v23 )
            v22 = *(_QWORD *)(*(_QWORD *)(v61 + 344) + 8LL * (unsigned int)(v23 - 1));
          v11 = *(_DWORD *)(v22 + 68) == 1;
          *(_OWORD *)v56 = *(_OWORD *)(v22 + 52);
          if ( v11 )
          {
            v27 = (float)(int)CFloatFPU::CeilingSat(*(float *)v56 - 0.5);
            v26 = (float)(int)CFloatFPU::CeilingSat(*((float *)v56 + 1) - 0.5);
            v25 = (float)(int)CFloatFPU::CeilingSat(*(float *)&v56[1] - 0.5);
            v24 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v56[1] + 1) - 0.5);
          }
          else
          {
            v24 = *((float *)&v56[1] + 1);
            v25 = *(float *)&v56[1];
            v26 = *((float *)v56 + 1);
            v27 = *(float *)v56;
          }
          v65 = *v21;
          CMILMatrix::Transform2DBoundsHelper<0>(v52, &v65, &v64);
          if ( v25 > *(float *)&v64
            && v24 > *((float *)&v64 + 1)
            && *((float *)&v64 + 2) > v27
            && *((float *)&v64 + 3) > v26 )
          {
            v28 = *(struct ID2D1Geometry **)(v19 + 56);
            v8 = v58;
            if ( v59 != v28 )
            {
              v59 = *(struct ID2D1Geometry **)(v19 + 56);
              if ( v51 )
              {
                v45 = CDrawingContext::PopLayer(v58);
                v10 = v45;
                if ( v45 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0LL, v45, 0x100u);
                  v7 = v55;
                  goto LABEL_69;
                }
                v51 = 0;
                ReleaseInterface<ID2D1Geometry>((__int64 *)&v55);
                v28 = *(struct ID2D1Geometry **)(v19 + 56);
                v59 = v28;
              }
              if ( v28 )
              {
                CComplexShape::CComplexShape((CComplexShape *)v56, v28);
                D2DGeometry = CComplexShape::GetD2DGeometry((CComplexShape *)v56, v52, &v55);
                v10 = D2DGeometry;
                if ( D2DGeometry < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0LL, D2DGeometry, 0x110u);
                  goto LABEL_72;
                }
                v64 = 0LL;
                v66 = *(_OWORD *)(a1 + 64);
                CMILMatrix::Transform2DBoundsHelper<0>(v52, &v66, &v64);
                v49 = CDrawingContext::PushD2DLayer(v8, 0LL, (_DWORD)FLOAT_1_0, 0, 0);
                v10 = v49;
                if ( v49 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0LL, v49, 0x116u);
LABEL_72:
                  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v57);
                  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v56[1]);
                  goto LABEL_74;
                }
                v51 = 1;
                Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v57);
                Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v56[1]);
              }
            }
            v29 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, struct CMILMatrix *))(*(_QWORD *)v19 + 56LL))(
                    v19,
                    v8,
                    v52);
            v10 = v29;
            if ( v29 < 0 )
              break;
          }
          v8 = v58;
          v7 = (struct ID2D1Geometry *)((char *)v7 + 8);
        }
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, 0x11Bu);
LABEL_74:
        v7 = v55;
        goto LABEL_30;
      }
      if ( v15 != 3 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
    v7 = (struct ID2D1Geometry *)(a1 + 48);
    if ( (v14 & 3) == 0 )
    {
LABEL_8:
      v16 = a1 + 48;
      goto LABEL_9;
    }
    if ( v15 != 1 )
    {
      if ( v15 != 2 )
        goto LABEL_8;
      goto LABEL_49;
    }
LABEL_36:
    v16 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_9;
  }
LABEL_27:
  if ( g_pComposition )
    v4 = *((_QWORD *)g_pComposition + 62);
  *(_QWORD *)(a1 + 24) = v4;
LABEL_30:
  if ( v51 )
LABEL_69:
    CDrawingContext::PopLayer(v8);
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v7 + 16LL))(v7);
  return v10;
}
