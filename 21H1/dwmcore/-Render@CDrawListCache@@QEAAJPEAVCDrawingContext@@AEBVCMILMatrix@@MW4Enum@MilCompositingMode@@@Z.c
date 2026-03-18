/*
 * XREFs of ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180050610
 * Callers:
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18001E8EC (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18004D5B4 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800502F0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801A1E48 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180019CB0 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18002B208 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18004D540 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18005A300 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800683F0 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006EC40 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006F1A4 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18007183C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800A8544 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7A7C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BEBE0 (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800CF338 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18025EA24 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18025EAD0 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CDrawListCache::Render(__int64 a1, _QWORD *a2, float *a3, float a4)
{
  bool v4; // cc
  __int64 v5; // rax
  int v6; // edi
  float *v7; // r12
  bool v10; // zf
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r14
  int v14; // eax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  __int128 *v22; // r12
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
  char v51; // [rsp+40h] [rbp-C0h]
  CMILMatrix *v52; // [rsp+48h] [rbp-B8h]
  float v53; // [rsp+48h] [rbp-B8h]
  float v54; // [rsp+48h] [rbp-B8h]
  __int128 v55; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v56[8]; // [rsp+60h] [rbp-A0h] BYREF
  struct ID2D1Geometry *v57; // [rsp+68h] [rbp-98h] BYREF
  struct ID2D1Geometry *v58; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-88h]
  float *v60; // [rsp+80h] [rbp-80h]
  _OWORD v61[4]; // [rsp+90h] [rbp-70h] BYREF
  int v62; // [rsp+D0h] [rbp-30h]
  __int128 v63; // [rsp+E0h] [rbp-20h]
  __int128 v64; // [rsp+F0h] [rbp-10h]
  __int128 v65; // [rsp+100h] [rbp+0h]
  _BYTE v66[16]; // [rsp+110h] [rbp+10h] BYREF
  void *retaddr; // [rsp+1E8h] [rbp+E8h]

  v4 = *(float *)(a1 + 48) <= *(float *)(a1 + 40);
  v5 = a2[5];
  v6 = 0;
  v51 = 0;
  v7 = a3;
  v60 = a3;
  v59 = v5;
  v58 = 0LL;
  v57 = 0LL;
  if ( v4 || *(float *)(a1 + 52) <= *(float *)(a1 + 44) || a4 <= 0.0 )
    return (unsigned int)v6;
  v10 = (*(_BYTE *)(a1 + 92) & 0x10) == 0;
  v62 = 0;
  if ( v10 )
  {
    v32 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a2, 0);
    v6 = v32;
    if ( v32 >= 0 )
    {
LABEL_6:
      v13 = *(_QWORD *)(a1 + 32);
      v14 = v13 & 3;
      if ( (v13 & 3) != 0 )
      {
        if ( v14 == 1 )
        {
          v15 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
          goto LABEL_34;
        }
        if ( v14 == 2 )
        {
          v15 = 0LL;
          goto LABEL_34;
        }
        if ( v14 != 3 )
          ModuleFailFastForHRESULT(2147549183LL, retaddr);
      }
      v15 = a1 + 32;
      if ( (v13 & 3) == 0 )
      {
LABEL_8:
        v16 = a1 + 32;
        goto LABEL_9;
      }
LABEL_34:
      if ( v14 == 1 )
      {
        v16 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        if ( v14 != 2 )
          goto LABEL_8;
        v16 = 0LL;
      }
LABEL_9:
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          v17 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first((_QWORD *)(a1 + 32)) - 16);
        }
        else
        {
          if ( (unsigned int)(v14 - 2) > 1 )
            ModuleFailFastForHRESULT(2147549183LL, retaddr);
          v17 = 0LL;
        }
      }
      else
      {
        v17 = 1LL;
      }
      v18 = v16 + 8 * v17;
      while ( v15 != v18 )
      {
        v19 = *(_QWORD *)v15;
        if ( (*(_DWORD *)(*(_QWORD *)v15 + 168LL) & 0x400) != 0
          && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v7) )
        {
          v34 = (float)((float)(*(float *)(v19 + 60) * v7[4]) + (float)(*(float *)(v19 + 56) * *v7)) + v7[12];
          v35 = (float)((float)(*(float *)(v19 + 60) * v7[5]) + (float)(*(float *)(v19 + 56) * v7[1])) + v7[13];
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
          if ( COERCE_UNSIGNED_INT(fabs((float)((float)(*(float *)(v19 + 60) * v7[5])
                                              + (float)(*(float *)(v19 + 56) * v7[1])) + v7[13])) > 0x497FFFF0 )
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
          v41 = *((_OWORD *)v7 + 1);
          v42 = *(_OWORD *)v7;
          v62 = *((_DWORD *)v7 + 16);
          v61[1] = v41;
          v43 = *((_OWORD *)v7 + 3);
          v61[0] = v42;
          v44 = *((_OWORD *)v7 + 2);
          v61[3] = v43;
          v61[2] = v44;
          CMILMatrix::Translate((CMILMatrix *)v61, (float)v36 - v34, (float)v38 - v35, 0.0);
          v52 = (CMILMatrix *)v61;
        }
        else
        {
          v52 = (CMILMatrix *)v7;
        }
        v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 24LL))(v19, v66);
        v21 = 0LL;
        v22 = (__int128 *)v20;
        v63 = 0LL;
        v23 = *(_DWORD *)(v59 + 416);
        if ( v23 )
          v21 = *(_QWORD *)(*(_QWORD *)(v59 + 392) + 8LL * (unsigned int)(v23 - 1));
        v10 = *(_DWORD *)(v21 + 76) == 1;
        v55 = *(_OWORD *)(v21 + 60);
        if ( v10 )
        {
          v27 = (float)(int)CFloatFPU::CeilingSat(*(float *)&v55 - 0.5);
          v26 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v55 + 1) - 0.5);
          v25 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v55 + 2) - 0.5);
          v24 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v55 + 3) - 0.5);
        }
        else
        {
          v24 = *((float *)&v55 + 3);
          v25 = *((float *)&v55 + 2);
          v26 = *((float *)&v55 + 1);
          v27 = *(float *)&v55;
        }
        v64 = *v22;
        CMILMatrix::Transform2DBoundsHelper<0>(v52);
        if ( v25 > *(float *)&v63
          && v24 > *((float *)&v63 + 1)
          && *((float *)&v63 + 2) > v27
          && *((float *)&v63 + 3) > v26 )
        {
          v28 = *(struct ID2D1Geometry **)(v19 + 176);
          if ( v58 != v28 )
          {
            v58 = *(struct ID2D1Geometry **)(v19 + 176);
            if ( v51 )
            {
              v45 = CDrawingContext::PopLayer((CDrawingContext *)a2);
              v6 = v45;
              if ( v45 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0xFCu, 0LL);
                break;
              }
              v51 = 0;
              ReleaseInterface<ID2D1Geometry>((__int64 *)&v57);
              v28 = *(struct ID2D1Geometry **)(v19 + 176);
              v58 = v28;
            }
            if ( v28 )
            {
              CComplexShape::CComplexShape((CComplexShape *)&v55, v28);
              D2DGeometry = CComplexShape::GetD2DGeometry((CComplexShape *)&v55, v52, &v57);
              v6 = D2DGeometry;
              if ( D2DGeometry < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, D2DGeometry, 0x10Cu, 0LL);
LABEL_71:
                Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(v56);
                if ( *((_QWORD *)&v55 + 1) )
                  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v55 + 1) + 16LL))(*((_QWORD *)&v55 + 1));
                break;
              }
              v63 = 0LL;
              v65 = *(_OWORD *)(a1 + 40);
              CMILMatrix::Transform2DBoundsHelper<0>(v52);
              v49 = CDrawingContext::PushD2DLayer((CDrawingContext *)a2, 0LL, 1.0, 0, 0);
              v6 = v49;
              if ( v49 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x112u, 0LL);
                goto LABEL_71;
              }
              v51 = 1;
              Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(v56);
              if ( *((_QWORD *)&v55 + 1) )
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v55 + 1) + 16LL))(*((_QWORD *)&v55 + 1));
            }
          }
          v29 = (*(__int64 (__fastcall **)(__int64, _QWORD *, CMILMatrix *))(*(_QWORD *)v19 + 32LL))(v19, a2, v52);
          v6 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x117u, 0LL);
            break;
          }
        }
        v7 = v60;
        v15 += 8LL;
      }
      if ( v51 )
        CDrawingContext::PopLayer((CDrawingContext *)a2);
      if ( v57 )
        (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v57 + 16LL))(v57);
      goto LABEL_30;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xDFu, 0LL);
  }
  else
  {
    v11 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a2, 1);
    v6 = v11;
    if ( v11 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xDBu, 0LL);
  }
LABEL_30:
  if ( v6 < 0 && (*((_BYTE *)CDrawingContext::GetCurrentVisual((CDrawingContext *)(a2 + 3)) + 264) & 1) != 0 )
  {
    CDrawListCache::Invalidate((CDrawListCache *)a1);
    CRenderTargetManager::ForceFullRender(*((CRenderTargetManager **)g_pComposition + 11));
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)g_pComposition + 63) + 96LL))(
      *((_QWORD *)g_pComposition + 63),
      0LL,
      128LL);
  }
  return (unsigned int)v6;
}
