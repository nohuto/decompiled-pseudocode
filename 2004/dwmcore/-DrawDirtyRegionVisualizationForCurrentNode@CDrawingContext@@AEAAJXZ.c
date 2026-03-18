/*
 * XREFs of ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180176AFC
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180066C70 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4.c)
 * Callees:
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180036874 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18003C064 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180047970 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800828C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x1800869C0 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?front@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAAEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@2@XZ @ 0x1800E5E48 (-front@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$c.c)
 *     ceilf_0 @ 0x1800EEC97 (ceilf_0.c)
 *     floorf_0 @ 0x1800EECAF (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x180156FDC (-CurrentRedrawRegionColor@CComposition@@QEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x18016D4BC (--1-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ??$?0UMilRectF@@$0?0X@?$span@$$CBUMilRectF@@$0?0@gsl@@QEAA@AEBV?$span@UMilRectF@@$0?0@1@@Z @ 0x180175D70 (--$-0UMilRectF@@$0-0X@-$span@$$CBUMilRectF@@$0-0@gsl@@QEAA@AEBV-$span@UMilRectF@@$0-0@1@@Z.c)
 *     ??0?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180175E9C (--0-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??A?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAAEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@1@_K@Z @ 0x180175FCC (--A-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$com_p.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180176194 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180178988 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUMilRectF@@$0-0@gsl@@AEBU_D3D.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@XZ @ 0x180178DFC (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ?pop_front@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x18017A2E0 (-pop_front@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801AE784 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawDirtyRegionVisualizationForCurrentNode(CDrawingContext *this)
{
  unsigned int v2; // ebx
  CComposition *v3; // rcx
  struct CVisual *CurrentVisual; // rdi
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  __int64 i; // r14
  __int64 DirtyRegionVisualizationData; // rdi
  unsigned int v18; // r14d
  __int64 v19; // r10
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  _QWORD v27[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v28; // [rsp+48h] [rbp-C0h]
  int v29; // [rsp+4Ch] [rbp-BCh]
  unsigned int v30; // [rsp+50h] [rbp-B8h]
  struct _D3DCOLORVALUE v31; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v32; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v33[4]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v34[64]; // [rsp+98h] [rbp-70h] BYREF
  int v35; // [rsp+D8h] [rbp-30h]
  __int128 X; // [rsp+E8h] [rbp-20h] BYREF
  __m128 v37; // [rsp+F8h] [rbp-10h] BYREF

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 741) + 200LL))(*((_QWORD *)this + 741)) )
  {
    CComposition::CurrentRedrawRegionColor(v3, &v31);
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v37 = 0LL;
    X = 0LL;
    *(_OWORD *)&v27[1] = 0LL;
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 24));
    CDrawingContext::CalcClippedNodeWorldSpaceBounds((__int64)this, (__int64)CurrentVisual, &v37);
    v35 = 0;
    CMILMatrix::SetToInverse((CMILMatrix *)v34, (CDrawingContext *)((char *)this + 96));
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v34, (__int64)&v37, (float *)&X);
    v5 = *(float *)&X;
    if ( COERCE_FLOAT(X & _xmm) < 8388608.0 )
      v5 = (float)(int)floorf_0(*(float *)&X);
    *(float *)&X = v5;
    v6 = *((float *)&X + 1);
    if ( COERCE_FLOAT(DWORD1(X) & _xmm) < 8388608.0 )
      v6 = (float)(int)floorf_0(*((float *)&X + 1));
    v7 = *((float *)&X + 2);
    *((float *)&X + 1) = v6;
    if ( COERCE_FLOAT(DWORD2(X) & _xmm) < 8388608.0 )
      v7 = (float)(int)ceilf_0(*((float *)&X + 2));
    v8 = *((float *)&X + 3);
    *((float *)&X + 2) = v7;
    if ( COERCE_FLOAT(HIDWORD(X) & _xmm) < 8388608.0 )
      v8 = (float)(int)ceilf_0(*((float *)&X + 3));
    *((float *)&X + 3) = v8;
    v9 = CDrawingContext::PushTransformInternal(this, 0LL, (CDrawingContext *)((char *)this + 96), 0, 0);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x17CDu, 0LL);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v27[1]);
    }
    else
    {
      LOBYTE(v11) = (*((_BYTE *)CurrentVisual + 93) & 0x10) != 0;
      (*(void (__fastcall **)(_QWORD, __int128 *, __int64, _QWORD *))(**((_QWORD **)this + 741) + 232LL))(
        *((_QWORD *)this + 741),
        &X,
        v11,
        &v27[1]);
      if ( (*((_BYTE *)CurrentVisual + 93) & 0x10) != 0 )
      {
        if ( (**((_DWORD **)CurrentVisual + 28) & 0x80000) != 0 )
        {
          for ( i = CVisual::GetDirtyRegionVisualizationData(CurrentVisual, v12, v13);
                *(_QWORD *)(i + 32)
             && (*(_BYTE *)(*(_QWORD *)(std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::front((__int64 **)i)
                                      + 32)
                          + 540LL) & 1) == 0;
                std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::pop_front(i) )
          {
            ;
          }
        }
        if ( v30 )
          CVisual::AppendDirtyRegionVisualizationRects(CurrentVisual, &v27[1]);
        if ( (**((_DWORD **)CurrentVisual + 28) & 0x80000) != 0 )
        {
          DirtyRegionVisualizationData = CVisual::GetDirtyRegionVisualizationData(CurrentVisual, v12, v13);
          if ( *(_QWORD *)(DirtyRegionVisualizationData + 32) )
          {
            v18 = 0;
            v19 = 0LL;
            while ( 1 )
            {
              v32 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::operator[](
                                                                            DirtyRegionVisualizationData,
                                                                            v19)
                                                                        + 24)
                                                            + 80LL));
              if ( _mm_shuffle_ps(v32, v32, 255).m128_f32[0] > 0.0 )
              {
                v21 = std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::operator[](
                        DirtyRegionVisualizationData,
                        v20);
                std::vector<MilRectF>::vector<MilRectF>(v33, v21);
                v22 = v33[0];
                v23 = gsl::narrow<__int64,unsigned __int64>((v33[1] - v33[0]) >> 4);
                v37.m128_u64[0] = v23;
                if ( v23 < 0 )
                  goto LABEL_36;
                v37.m128_u64[1] = v22;
                if ( !v22 )
                {
                  if ( v23 )
                    goto LABEL_36;
                }
                gsl::span<MilRectF const,-1>::span<MilRectF const,-1>((__int64 *)&v31, (__int64 *)&v37);
                v24 = CDrawingContext::FillRectanglesWithSolidColor(this, &v31, &v32);
                v2 = v24;
                if ( v24 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x1801u, 0LL);
                  std::vector<tagRECT>::~vector<tagRECT>((__int64)v33);
                  break;
                }
                std::vector<tagRECT>::~vector<tagRECT>((__int64)v33);
              }
              v19 = ++v18;
              if ( (unsigned __int64)v18 >= *(_QWORD *)(DirtyRegionVisualizationData + 32) )
              {
                *((_BYTE *)g_pComposition + 1131) = 1;
                break;
              }
            }
          }
        }
      }
      else
      {
        v37.m128_u64[0] = v30;
        v37.m128_u64[1] = v27[1];
        if ( !v27[1] && v30 )
        {
LABEL_36:
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        gsl::span<MilRectF const,-1>::span<MilRectF const,-1>((__int64 *)&v32, (__int64 *)&v37);
        v14 = CDrawingContext::FillRectanglesWithSolidColor(this, &v32, &v31);
        v2 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x17D8u, 0LL);
      }
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v27[1]);
      CDrawingContext::PopTransformInternal(this, 0);
    }
  }
  return v2;
}
