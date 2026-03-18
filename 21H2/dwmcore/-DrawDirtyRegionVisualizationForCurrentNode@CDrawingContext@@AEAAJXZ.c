/*
 * XREFs of ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x1801B0228
 * Callers:
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009C330 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180004548 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUMilRectF@@$0-0@gsl@@AEBU_D3D.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1801018BC (_o_ceilf_0.c)
 *     floorf @ 0x1801018F8 (floorf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x18019316C (-CurrentRedrawRegionColor@CComposition@@QEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ??$?0$0?0V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@$0A@@?$span@UMilRectF@@$0?0@gsl@@QEAA@AEAV?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@Z @ 0x1801AEEDC (--$-0$0-0V-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@$0A@@-$span@UMilRectF@@$0-0@gs.c)
 *     ??$?0E$0?0$0?0$0A@@?$span@$$CBE$0?0@gsl@@QEAA@AEBV?$span@E$0?0@1@@Z @ 0x1801AEF2C (--$-0E$0-0$0-0$0A@@-$span@$$CBE$0-0@gsl@@QEAA@AEBV-$span@E$0-0@1@@Z.c)
 *     ??0?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801AF36C (--0-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1801AF784 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@XZ @ 0x1801B2AD4 (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ?_Tidy@?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@AEAAXXZ @ 0x1801B46A0 (-_Tidy@-$vector@UMilRectF@@V-$allocator@UMilRectF@@@std@@@std@@AEAAXXZ.c)
 *     ?pop_front@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1801B46DC (-pop_front@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801F6D64 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawDirtyRegionVisualizationForCurrentNode(CDrawingContext *this)
{
  unsigned int v2; // ebx
  CComposition *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v11; // r8
  __int64 v12; // r9
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  gsl::details *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _QWORD *i; // rsi
  _QWORD *DirtyRegionVisualizationData; // rdi
  unsigned int v26; // esi
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // r10
  __int64 *v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  _QWORD v35[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v36; // [rsp+48h] [rbp-C0h]
  int v37; // [rsp+4Ch] [rbp-BCh]
  unsigned int v38; // [rsp+50h] [rbp-B8h]
  struct _D3DCOLORVALUE v39; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v40; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v41[4]; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v42[4]; // [rsp+98h] [rbp-70h] BYREF
  int v43; // [rsp+D8h] [rbp-30h]
  __int128 X; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v45; // [rsp+F8h] [rbp-10h] BYREF

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 991) + 184LL))(*((_QWORD *)this + 991)) )
  {
    CComposition::CurrentRedrawRegionColor(v3, &v39);
    v36 = 0;
    v4 = *((_QWORD *)this + 3);
    v37 = 0;
    v38 = 0;
    v45 = 0LL;
    X = 0LL;
    *(_OWORD *)&v35[1] = 0LL;
    v5 = (*(__int64 (__fastcall **)(char *))(v4 + 32))((char *)this + 24);
    CDrawingContext::CalcClippedNodeWorldSpaceBounds((__int64)this, v5, &v45);
    v6 = *((_OWORD *)this + 6);
    v7 = *((_OWORD *)this + 7);
    v43 = *((_DWORD *)this + 40);
    v42[0] = v6;
    v8 = *((_OWORD *)this + 8);
    v42[1] = v7;
    v9 = *((_OWORD *)this + 9);
    v42[2] = v8;
    v42[3] = v9;
    CMILMatrix::Invert((CMILMatrix *)v42, v10, v11);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v42, (__int64)&v45, (float *)&X, v12);
    v13 = *(float *)&X;
    if ( COERCE_FLOAT(X & _xmm) < 8388608.0 )
      v13 = (float)(int)floorf(*(float *)&X);
    *(float *)&X = v13;
    v14 = *((float *)&X + 1);
    if ( COERCE_FLOAT(DWORD1(X) & _xmm) < 8388608.0 )
      v14 = (float)(int)floorf(*((float *)&X + 1));
    v15 = *((float *)&X + 2);
    *((float *)&X + 1) = v14;
    if ( COERCE_FLOAT(DWORD2(X) & _xmm) < 8388608.0 )
      v15 = (float)(int)o_ceilf_0(*((float *)&X + 2));
    v16 = *((float *)&X + 3);
    *((float *)&X + 2) = v15;
    if ( COERCE_FLOAT(HIDWORD(X) & _xmm) < 8388608.0 )
      v16 = (float)(int)o_ceilf_0(*((float *)&X + 3));
    *((float *)&X + 3) = v16;
    v17 = CDrawingContext::PushTransformInternal(this, 0LL, (CDrawingContext *)((char *)this + 96), 0, 0);
    v2 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x18E6u);
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v35[1]);
    }
    else
    {
      LOBYTE(v19) = (*(_BYTE *)(v5 + 101) & 8) != 0;
      (*(void (__fastcall **)(_QWORD, __int128 *, __int64, _QWORD *))(**((_QWORD **)this + 991) + 216LL))(
        *((_QWORD *)this + 991),
        &X,
        v19,
        &v35[1]);
      if ( (*(_BYTE *)(v5 + 101) & 8) != 0 )
      {
        if ( (**(_DWORD **)(v5 + 232) & 0x80000) != 0 )
        {
          for ( i = (_QWORD *)CVisual::GetDirtyRegionVisualizationData(v5);
                i[4] && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i[1] + 8 * (i[3] & (i[2] - 1LL))) + 32LL) + 572LL) & 1) == 0;
                std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::pop_front(i) )
          {
            ;
          }
        }
        if ( v38 )
          CVisual::AppendDirtyRegionVisualizationRects(v5, &v35[1]);
        if ( (**(_DWORD **)(v5 + 232) & 0x80000) != 0 )
        {
          DirtyRegionVisualizationData = (_QWORD *)CVisual::GetDirtyRegionVisualizationData(v5);
          if ( DirtyRegionVisualizationData[4] )
          {
            v26 = 0;
            v27 = 0LL;
            while ( 1 )
            {
              v28 = DirtyRegionVisualizationData[3];
              v29 = DirtyRegionVisualizationData[2];
              v30 = DirtyRegionVisualizationData[1];
              v40 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(*(_QWORD *)(v30 + 8
                                                                                          * ((v29 - 1) & (v27 + v28)))
                                                                        + 24LL)
                                                            + 88LL));
              if ( _mm_shuffle_ps(v40, v40, 255).m128_f32[0] > 0.0 )
              {
                std::vector<MilRectF>::vector<MilRectF>(v41, *(_QWORD *)(v30 + 8 * ((v29 - 1) & (v27 + v28))));
                v31 = (__int64 *)gsl::span<MilRectF,-1>::span<MilRectF,-1>((gsl::details *)&v45, v41);
                gsl::span<unsigned char const,-1>::span<unsigned char const,-1>(&v39, v31);
                v32 = CDrawingContext::FillRectanglesWithSolidColor(this, (__int64)&v39, (__int64)&v40);
                v2 = v32;
                if ( v32 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, v32, 0x191Au);
                  std::vector<MilRectF>::_Tidy(v41);
                  break;
                }
                std::vector<MilRectF>::_Tidy(v41);
              }
              v27 = ++v26;
              if ( (unsigned __int64)v26 >= DirtyRegionVisualizationData[4] )
              {
                *((_BYTE *)g_pComposition + 1276) = 1;
                break;
              }
            }
          }
        }
      }
      else
      {
        v20 = v35[1];
        gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v45, v38);
        *((_QWORD *)&v45 + 1) = v20;
        if ( (_QWORD)v45 == -1LL || !v20 && (_QWORD)v45 )
        {
          gsl::details::terminate(v21);
          __debugbreak();
        }
        gsl::span<unsigned char const,-1>::span<unsigned char const,-1>(&v40, (__int64 *)&v45);
        v22 = CDrawingContext::FillRectanglesWithSolidColor(this, (__int64)&v40, (__int64)&v39);
        v2 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0x18F1u);
      }
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v35[1]);
      CDrawingContext::PopTransformInternal(this, 0);
    }
  }
  return v2;
}
