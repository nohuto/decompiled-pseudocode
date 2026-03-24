/*
 * XREFs of ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18007FF00
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800051C4 (-RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000D480 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x1800201B0 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003EBC0 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180041590 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18008D4E0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800F0800 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18016200C (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180175740 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180175B10 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x180176198 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801770C8 (-DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1801772E0 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1801788A4 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18018E210 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F9C00 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18002C600 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800520D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x180090C38 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180090FE8 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?QueueForRender@CDrawListEntryBatch@@QEAAXPEAVIDeviceTarget@@@Z @ 0x1800910A8 (-QueueForRender@CDrawListEntryBatch@@QEAAXPEAVIDeviceTarget@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800C0048 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C5704 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800F4757 (ceilf_0.c)
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::ApplyRenderStateInternal(CDrawingContext *this, char a2)
{
  char v2; // si
  unsigned int v3; // r14d
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // r8d
  __m128 v10; // xmm6
  int v11; // eax
  float v12; // xmm10_4
  float v13; // xmm9_4
  __m128 v14; // xmm8
  float v15; // xmm7_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  __m128 v19; // xmm6
  float v20; // xmm11_4
  unsigned int v21; // r12d
  __m128 v22; // xmm6
  __m128 v23; // xmm6
  __int64 v24; // rbx
  __int64 v25; // r15
  int v26; // eax
  __int64 v27; // rcx
  bool v28; // zf
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int128 v31; // xmm0
  int v32; // ebx
  float v33; // xmm8_4
  int v34; // eax
  float v35; // xmm9_4
  int v36; // eax
  float v37; // xmm10_4
  int v38; // eax
  float v39; // xmm7_4
  int v40; // eax
  __int64 v41; // r15
  __int64 v42; // r12
  char *v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  float v47; // xmm3_4
  float v48; // xmm2_4
  float v49; // xmm1_4
  __int64 v50; // r13
  int v51; // eax
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rcx
  unsigned int v55; // r12d
  unsigned int v56; // r12d
  __int128 v57; // [rsp+30h] [rbp-69h] BYREF
  __int64 v58; // [rsp+40h] [rbp-59h]
  __m128 v59; // [rsp+48h] [rbp-51h]

  v2 = 0;
  v3 = 0;
  if ( *(_BYTE *)(84LL * (unsigned int)(*((_DWORD *)this + 240) - 1) + *((_QWORD *)this + 117) + 80) )
    v2 = a2;
  if ( !v2 )
  {
    v41 = 0LL;
    v42 = 0LL;
    if ( *((_DWORD *)this + 140) )
    {
      v43 = (char *)this + 536;
      while ( 1 )
      {
        v53 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v43 + 8 * v42), this);
        v3 = v53;
        if ( v53 < 0 )
          break;
        v41 = (unsigned int)(v41 + 1);
        v42 = (unsigned int)(v42 + 1);
        if ( (unsigned int)v42 >= *((_DWORD *)this + 140) )
          goto LABEL_50;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x1005u, 0LL);
    }
    else
    {
LABEL_50:
      v43 = (char *)this + 536;
      *((_DWORD *)this + 140) = 0;
      DynArrayImpl<0>::ShrinkToSize((char *)this + 536, 8LL);
    }
    if ( (unsigned int)v41 < *((_DWORD *)this + 140) && (_DWORD)v41 )
    {
      v55 = *((_DWORD *)v43 + 6);
      if ( (unsigned int)v41 > v55 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, -2147024809, 0x23Du, 0LL);
      }
      else
      {
        v56 = v55 - v41;
        if ( v56 )
          memmove_0(*(void **)v43, (const void *)(*(_QWORD *)v43 + 8 * v41), 8LL * v56);
        *((_DWORD *)v43 + 6) = v56;
      }
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v3, 0xFF0u, 0LL);
    }
    else if ( *((_BYTE *)this + 5955) )
    {
      *((_WORD *)this + 2977) = 1;
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v3, 0x1B6u, 0LL);
      return v3;
    }
  }
  if ( *((_BYTE *)this + 5953) )
  {
    v5 = *((_DWORD *)this + 102);
    if ( v5 )
    {
      v6 = (unsigned int)(v5 - 1);
      v7 = *((_QWORD *)this + 53);
      *((_OWORD *)this + 19) = *(_OWORD *)(68 * v6 + v7);
      *((_OWORD *)this + 20) = *(_OWORD *)(68 * v6 + v7 + 16);
      *((_OWORD *)this + 21) = *(_OWORD *)(68 * v6 + v7 + 32);
      *((_OWORD *)this + 22) = *(_OWORD *)(68 * v6 + v7 + 48);
      *((_DWORD *)this + 92) = *(_DWORD *)(68 * v6 + v7 + 64);
    }
    else
    {
      *((_QWORD *)this + 38) = 1065353216LL;
      *((_QWORD *)this + 39) = 0LL;
      *((_DWORD *)this + 80) = 0;
      *(_QWORD *)((char *)this + 324) = 1065353216LL;
      *(_QWORD *)((char *)this + 332) = 0LL;
      *((_DWORD *)this + 85) = 0;
      *((_QWORD *)this + 43) = 1065353216LL;
      *((_QWORD *)this + 44) = 0LL;
      *((_DWORD *)this + 90) = 0;
      *((_DWORD *)this + 91) = 1065353216;
      *((_WORD *)this + 184) = 32085;
    }
    *((_BYTE *)this + 5953) = 0;
  }
  if ( !*((_BYTE *)this + 5954) )
    return v3;
  v9 = *((_DWORD *)this + 240);
  v10 = 0LL;
  v57 = 0LL;
  v59 = 0LL;
  if ( v9
    && *(_DWORD *)(84LL * (unsigned int)(v9 - 1) + *((_QWORD *)this + 117))
    && (v11 = *((_DWORD *)this + 800)) != 0 )
  {
    v59 = *(__m128 *)(*((_QWORD *)this + 402) + 16LL * (unsigned int)(v11 - 1));
    v12 = v59.m128_f32[2];
    v13 = v59.m128_f32[1];
    v14 = (__m128)v59.m128_u32[0];
    LODWORD(v15) = _mm_shuffle_ps(v59, v59, 255).m128_u32[0];
  }
  else
  {
    v15 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v12 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v13 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v14 = (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v2 || !v9 || !*(_DWORD *)(84LL * (unsigned int)(v9 - 1) + *((_QWORD *)this + 117) + 4) )
    goto LABEL_17;
  v45 = 136LL * (unsigned int)(*((_DWORD *)this + 458) - 1);
  v46 = *((_QWORD *)this + 226);
  if ( *(float *)(v45 + v46 + 96) > v14.m128_f32[0] )
    v14 = (__m128)*(unsigned int *)(v45 + v46 + 96);
  v47 = v13;
  if ( *(float *)(v45 + v46 + 100) > v13 )
  {
    v13 = *(float *)(v45 + v46 + 100);
    v47 = v13;
  }
  v48 = v12;
  if ( v12 > *(float *)(v45 + v46 + 104) )
  {
    v12 = *(float *)(v45 + v46 + 104);
    v48 = v12;
  }
  v49 = v15;
  if ( v15 > *(float *)(v45 + v46 + 108) )
  {
    v15 = *(float *)(v45 + v46 + 108);
    v49 = v15;
  }
  if ( v48 <= v14.m128_f32[0] || v49 <= v47 )
  {
    v15 = 0.0;
    v12 = 0.0;
    v13 = 0.0;
    v14.m128_i32[0] = 0;
  }
  else
  {
LABEL_17:
    if ( v12 > v14.m128_f32[0] && v15 > v13 )
    {
      v16 = v14.m128_f32[0];
      v17 = v13;
      v18 = v12;
      v19 = _mm_shuffle_ps(v14, v14, 225);
      v20 = v15;
      v19.m128_f32[0] = v13;
      v21 = 0;
      v22 = _mm_shuffle_ps(v19, v19, 198);
      v22.m128_f32[0] = v12;
      v23 = _mm_shuffle_ps(v22, v22, 39);
      v23.m128_f32[0] = v15;
      v10 = _mm_shuffle_ps(v23, v23, 57);
      v57 = (__int128)v10;
      goto LABEL_19;
    }
  }
  v20 = *((float *)&v57 + 3);
  v21 = 1;
  v18 = *((float *)&v57 + 2);
  v17 = *((float *)&v57 + 1);
  v16 = *(float *)&v57;
LABEL_19:
  v24 = *((_QWORD *)this + 5);
  v25 = 0LL;
  v26 = *(_DWORD *)(v24 + 416);
  if ( v26 )
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 392) + 8LL * (unsigned int)(v26 - 1));
  if ( !*(_BYTE *)(v24 + 501)
    || *(_BYTE *)(v24 + 503)
    || v21 != *(_DWORD *)(v24 + 480)
    || v16 != *(float *)(v24 + 464)
    || v17 != *(float *)(v24 + 468)
    || v18 != *(float *)(v24 + 472)
    || v20 != *(float *)(v24 + 476) )
  {
    v27 = *(_QWORD *)(v24 + 192);
    if ( v27 )
    {
      if ( *(_QWORD *)(v24 + 200) )
      {
        CBatchOptimizer::Flush(*(CBatchOptimizer **)(v24 + 200));
        v27 = *(_QWORD *)(v24 + 192);
      }
      *(_DWORD *)(v27 + 52) = *(_DWORD *)(v24 + 48);
      v50 = *(_QWORD *)(v24 + 192);
      *(_QWORD *)(v24 + 192) = 0LL;
      if ( v50 )
      {
        v51 = *(_DWORD *)(v24 + 416);
        v52 = 0LL;
        if ( v51 )
          v52 = *(_QWORD *)(*(_QWORD *)(v24 + 392) + 8LL * (unsigned int)(v51 - 1));
        CDrawListEntryBatch::QueueForRender((CDrawListEntryBatch *)v50, *(struct IDeviceTarget **)(v52 + 24));
        CD2DContext::EnsureBeginDraw((CD2DContext *)(v24 + 16));
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v24 + 264) + 120LL))(*(_QWORD *)(v24 + 264), v50);
        CDrawListEntry::Release((CDrawListEntry *)(v50 + 8));
      }
    }
    v28 = *(_BYTE *)(v25 + 48) == 0;
    *(__m128 *)(v25 + 60) = v10;
    *(_DWORD *)(v25 + 76) = v21;
    if ( !v28 )
    {
      v29 = *(_QWORD *)(v25 + 16);
      v57 = _xmm;
      v58 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v29 + 240) + 240LL))(*(_QWORD *)(v29 + 240), &v57);
      v30 = *(_QWORD *)(v29 + 248);
      *(_BYTE *)(v29 + 487) = 0;
      v31 = *(_OWORD *)(v25 + 60);
      *(_DWORD *)(v29 + 464) = v21;
      *(_OWORD *)(v29 + 448) = v31;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v30 + 80LL))(v30, v25 + 60, v21);
    }
    *(_BYTE *)(v25 + 56) = 1;
  }
  v32 = 0x7FFFFFFF;
  v33 = v14.m128_f32[0] - 0.5;
  LODWORD(v57) = 0;
  if ( v33 < -2147483600.0 )
  {
    v34 = 0x80000000;
  }
  else if ( v33 >= 2147483600.0 )
  {
    v34 = 0x7FFFFFFF;
  }
  else
  {
    v34 = (int)ceilf_0(v33);
  }
  v35 = v13 - 0.5;
  *((float *)&v57 + 1) = (float)v34;
  if ( v35 < -2147483600.0 )
  {
    v36 = 0x80000000;
  }
  else if ( v35 >= 2147483600.0 )
  {
    v36 = 0x7FFFFFFF;
  }
  else
  {
    v36 = (int)ceilf_0(v35);
  }
  v37 = v12 - 0.5;
  *((float *)&v57 + 2) = (float)v36;
  if ( v37 < -2147483600.0 )
  {
    v38 = 0x80000000;
  }
  else if ( v37 >= 2147483600.0 )
  {
    v38 = 0x7FFFFFFF;
  }
  else
  {
    v38 = (int)ceilf_0(v37);
  }
  v39 = v15 - 0.5;
  *((float *)&v57 + 3) = (float)v38;
  if ( v39 < -2147483600.0 )
  {
    v32 = 0x80000000;
  }
  else if ( v39 < 2147483600.0 )
  {
    v32 = (int)ceilf_0(v39);
  }
  *((_BYTE *)this + 5954) = 0;
  *(_OWORD *)((char *)this + 164) = v57;
  *(float *)&v58 = (float)v32;
  *((float *)this + 45) = (float)v32;
  if ( !v2 )
    return v3;
  v40 = *((_DWORD *)this + 240);
  if ( !v40 || !*(_DWORD *)(84LL * (unsigned int)(v40 - 1) + *((_QWORD *)this + 117) + 4) )
    return v3;
  v28 = (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(*((_QWORD *)this + 226)
                                                                                                 + 96LL + 136LL * (unsigned int)(*((_DWORD *)this + 458) - 1)) == 0;
  result = v3;
  if ( v28 )
    *((_BYTE *)this + 5955) = 1;
  return result;
}
