/*
 * XREFs of ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x18008BD78
 * Callers:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x1800B93B4 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 *     ?CalcOcclusion@CVisualTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800DCA60 (-CalcOcclusion@CVisualTree@@UEBAJAEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800857DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?CheckOverlayCandidateCollectionEnabled@COcclusionContext@@AEAAXXZ @ 0x180088BCC (-CheckOverlayCandidateCollectionEnabled@COcclusionContext@@AEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x18008B8C0 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ?IsGraphWalkRootInProgress@CThreadContext@@SA_NPEBX@Z @ 0x18008BAD4 (-IsGraphWalkRootInProgress@CThreadContext@@SA_NPEBX@Z.c)
 *     ?GetBounds@CVisualTree@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18008BB30 (-GetBounds@CVisualTree@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x18008BB4C (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18008C2EC (-Clear@CLightStack@@QEAAXXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18009C700 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180111E98 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ??_GCVisualTreePath@@QEAAPEAXI@Z @ 0x1801942BC (--_GCVisualTreePath@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall COcclusionContext::Compute(COcclusionContext *this, __int64 a2, _QWORD *a3, float a4, _OWORD *a5)
{
  float v9; // xmm6_4
  bool v10; // r14
  int v11; // eax
  gsl::details *v12; // rcx
  unsigned int v13; // esi
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int128 *Bounds; // rax
  __int64 v17; // rdx
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  int v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rsi
  const void *v29; // rsi
  detail::liberal_expansion_policy *v30; // rax
  unsigned int v31; // edx
  CVisualTreePath *v32; // rdi
  CVisualTreePath **v33; // rax
  CVisualTreePath *v34; // rcx
  struct CComposition *v35; // rcx
  __int64 v36; // rax
  char **v37; // rdi
  char *v38; // rcx
  __int64 v39; // rax
  __int64 result; // rax
  unsigned int v41; // [rsp+20h] [rbp-68h]
  __int128 v42; // [rsp+30h] [rbp-58h]
  char v43; // [rsp+90h] [rbp+8h] BYREF

  v9 = 0.0;
  v10 = COERCE_FLOAT(LODWORD(a4) & _xmm) < 0.0000011920929;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(this, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, a2, 0LL);
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 179) = 0LL;
  *((_DWORD *)this + 118) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 448, 36LL);
  *((_DWORD *)this + 357) = 0;
  v11 = COcclusionContext::SetDeviceTransform(this, 0LL);
  v13 = v11;
  if ( v11 < 0 )
  {
    v41 = 131;
    goto LABEL_59;
  }
  *((_QWORD *)this + 128) = 0LL;
  v14 = 0;
  if ( *(_DWORD *)a3 )
  {
    v15 = 0LL;
    do
    {
      if ( (unsigned __int64)v14 >= *a3 )
      {
        gsl::details::terminate(v12);
        JUMPOUT(0x18008C1F9LL);
      }
      *(_OWORD *)((char *)this + 16 * v15 + 1032) = *(_OWORD *)(a3[1] + 16LL * v14);
      Bounds = CVisualTree::GetBounds(a2);
      if ( *(float *)Bounds > *((float *)this + 2 * v17 + 258) )
        *((_DWORD *)this + 2 * v17 + 258) = *(_DWORD *)Bounds;
      v18 = *((float *)Bounds + 1);
      v19 = *((float *)this + 2 * v17 + 259);
      if ( v18 > v19 )
      {
        *((float *)this + 2 * v17 + 259) = v18;
        v19 = v18;
      }
      v20 = *((float *)this + 2 * v17 + 260);
      v21 = *((float *)Bounds + 2);
      v22 = v20;
      if ( v20 > v21 )
      {
        *((float *)this + 2 * v17 + 260) = v21;
        v20 = v21;
        v22 = v21;
      }
      v23 = *((float *)Bounds + 3);
      v24 = *((float *)this + 2 * v17 + 261);
      if ( v24 > v23 )
      {
        *((float *)this + 2 * v17 + 261) = v23;
        v20 = v22;
        v24 = v23;
      }
      if ( v20 <= *((float *)this + 2 * v17 + 258) || v24 <= v19 )
      {
        *((_QWORD *)this + v17 + 130) = 0LL;
        *((_QWORD *)this + v17 + 129) = 0LL;
      }
      if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((char *)this + 16 * *((_QWORD *)this + 128) + 1032) )
      {
        if ( !v10 )
        {
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(
            (float *)((char *)this + v26 + 1032),
            a4,
            a4);
          v15 = *((_QWORD *)this + 128);
        }
        *((float *)this + v15 + 290) = (float)(*((float *)this + 4 * v15 + 261) - *((float *)this + 4 * v15 + 259))
                                     * (float)(*((float *)this + 4 * v15 + 260) - *((float *)this + 4 * v15 + 258));
        v27 = *((_QWORD *)this + 128);
        v9 = v9 + *((float *)this + v27 + 290);
        v15 = v27 + 1;
        *((_QWORD *)this + 128) = v27 + 1;
      }
      v14 = v25 + 1;
    }
    while ( v14 < *(_DWORD *)a3 );
  }
  **((_DWORD **)this + 168) = 0;
  if ( *((_QWORD *)this + 128) && COERCE_FLOAT(LODWORD(v9) & _xmm) >= 0.0000011920929
    || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 96LL) & 0x8000) != 0 )
  {
    v28 = *((_QWORD *)this + 177);
    if ( v28 )
      v29 = *(const void **)(v28 + 1784);
    else
      v29 = *(const void **)(a2 + 64);
    if ( !CThreadContext::IsGraphWalkRootInProgress(v29) )
    {
      *((_OWORD *)this + 96) = *a5;
      COcclusionContext::CheckOverlayCandidateCollectionEnabled(this);
      *((_BYTE *)this + 1424) = 0;
      v30 = (detail::liberal_expansion_policy *)operator new(0x38uLL);
      v32 = v30;
      if ( v30 )
      {
        *(_QWORD *)&v42 = 0LL;
        *(_QWORD *)v30 = (char *)v30 + 24;
        *((_QWORD *)v30 + 1) = (char *)v30 + 24;
        *((_QWORD *)v30 + 2) = (char *)v30 + 56;
        *((_QWORD *)&v42 + 1) = a2;
        *(_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                     v30,
                     0LL,
                     1uLL) = v42;
      }
      else
      {
        v32 = 0LL;
      }
      v33 = (CVisualTreePath **)((char *)this + 16);
      if ( (char *)this + 16 == &v43 )
      {
        if ( !v32 )
          goto LABEL_31;
        v34 = v32;
      }
      else
      {
        v34 = *v33;
        *v33 = v32;
        if ( !v34 )
        {
LABEL_31:
          *((_QWORD *)this + 16) = a2;
          v11 = CVisualTreeIterator::WalkSubtree<COcclusionContext>((char *)this + 64, *(_QWORD *)(a2 + 64), v29, this);
          v13 = v11;
          if ( v11 >= 0 )
          {
            if ( *((_QWORD *)this + 177) && !*((_BYTE *)this + 1424) )
            {
              v13 = -2147418113;
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0LL, -2147418113, 0xC4u);
              goto LABEL_36;
            }
            goto LABEL_33;
          }
          v41 = 188;
LABEL_59:
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0LL, v11, v41);
          goto LABEL_36;
        }
      }
      CVisualTreePath::`scalar deleting destructor'(v34, v31);
      goto LABEL_31;
    }
    v13 = -2147467260;
  }
LABEL_33:
  v35 = g_pComposition;
  v36 = 0LL;
  if ( g_pComposition )
    v36 = *((_QWORD *)g_pComposition + 62);
  *((_QWORD *)this + 3) = v36;
LABEL_36:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(v35, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, a2, 0LL);
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 44) = 0;
  CLightStack::Clear((COcclusionContext *)((char *)this + 208));
  **((_DWORD **)this + 168) = 0;
  v37 = (char **)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v37 )
  {
    v38 = *v37;
    v39 = (v37[1] - *v37) >> 4;
    if ( v39 )
      v37[1] -= 16 * v39;
    *v37 = 0LL;
    if ( v38 == (char *)(v37 + 3) )
      v38 = 0LL;
    DefaultHeap::Free(v38);
    operator delete(v37, 0x38uLL);
  }
  result = v13;
  *((_OWORD *)this + 96) = 0u;
  return result;
}
