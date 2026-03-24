/*
 * XREFs of ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800784A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18000F910 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z @ 0x180012090 (-AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z.c)
 *     ??$TakeItemFromCache@VCStateSettingDrawListEntry@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableReferenceArray@PEAVCStateSettingDrawListEntry@@@@PEAPEAVCStateSettingDrawListEntry@@@Z @ 0x1800131FC (--$TakeItemFromCache@VCStateSettingDrawListEntry@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableRef.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@std@@V?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@0@0V12@@Z @ 0x18001A7E8 (--$uninitialized_copy@V-$move_iterator@PEAUFrameData@CDrawListEntry@@@std@@V-$checked_array_iter.c)
 *     ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAPEAVCDrawListEntryBatch@@@Z @ 0x18002B210 (-OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAPEAVCDrawListEntryBatch@@@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x18002C990 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x18002C9D0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x18002CAD0 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ??$emplace_back@AEAPEAVCHWDrawListEntry@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAAEAVCMegaRect@@AEAPEAVCHWDrawListEntry@@@Z @ 0x18003A584 (--$emplace_back@AEAPEAVCHWDrawListEntry@@@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@st.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800520D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180061594 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x180078BC0 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18007A148 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18007A1E4 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180090B3C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800C208C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C8F10 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180152A88 (McTemplateU0qq_EventWriteTransfer.c)
 *     ??$move_backward@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@std@@V?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUFrameData@CDrawListEntry@@@stdext@@V?$move_iterator@PEAUFrameData@CDrawListEntry@@@0@0V12@@Z @ 0x1801A1880 (--$move_backward@V-$move_iterator@PEAUFrameData@CDrawListEntry@@@std@@V-$checked_array_iterator@.c)
 *     ?pop_back@?$vector_facade@UFrameData@CDrawListEntry@@V?$buffer_impl@UFrameData@CDrawListEntry@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801A2A5C (-pop_back@-$vector_facade@UFrameData@CDrawListEntry@@V-$buffer_impl@UFrameData@CDrawListEntry@@$.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1801A39E4 (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?BatchDrawListEntry@CDrawListBatchManager@@QEAAJPEAVCBaseDrawListEntry@@@Z @ 0x1801AAABC (-BatchDrawListEntry@CDrawListBatchManager@@QEAAJPEAVCBaseDrawListEntry@@@Z.c)
 */

__int64 __fastcall CHWDrawListEntry::Render(__int64 a1, __int64 a2, __int128 *a3, float a4, int a5)
{
  int v6; // ebx
  bool v8; // r13
  __m128 *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r8
  __int128 v15; // xmm7
  __int128 v16; // xmm8
  __int128 v17; // xmm9
  __int128 v18; // xmm10
  int v19; // edi
  unsigned __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // edi
  int v29; // eax
  CLightStack *v30; // rcx
  __int64 v31; // rax
  struct ClipPlaneInfoRef *v32; // rbx
  char *v33; // r14
  __int64 v34; // r15
  CDrawListEntry *v35; // r13
  __int64 v36; // rax
  __int64 v37; // r8
  CBatchOptimizer *v38; // rcx
  int v40; // ebx
  char *v41; // r14
  unsigned int v42; // edi
  __int64 v43; // r13
  __int64 v44; // r15
  struct CHwLightCollectionBuffer *v45; // rdx
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rax
  CBatchOptimizer *v50; // rcx
  __int64 v51; // rcx
  unsigned int v52; // eax
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // eax
  __int64 v56; // rcx
  struct CDrawListEntryBatch *v57; // r15
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rcx
  struct CStateSettingDrawListEntry *v64; // rbx
  struct CDrawListEntryBatch *v65; // rcx
  __int64 v66; // rax
  CBatchOptimizer *v67; // rcx
  unsigned int v68; // edi
  CD2DTarget *v69; // r13
  CD2DTarget *v70; // r15
  int v71; // ebx
  unsigned __int64 v72; // rdi
  LPVOID v73; // rax
  __int64 v74; // r8
  __int64 v75; // rdx
  LPVOID v76; // rbx
  void *v77; // rcx
  __int64 v78; // rcx
  __m128 v79; // xmm2
  CDrawListPrimitive *v80; // rcx
  float v81; // xmm3_4
  float v82; // xmm1_4
  D3DVALUE v83; // xmm0_4
  float v84; // xmm1_4
  D3DVALUE v85; // xmm3_4
  D3DVALUE v86; // xmm1_4
  unsigned __int64 v87; // r11
  __int64 v88; // r10
  bool v89; // sf
  struct ClipPlaneInfoRef *v90; // rax
  struct CBaseDrawListEntry *v91; // rdx
  int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // rcx
  int v95; // eax
  struct CBaseDrawListEntry *v96; // rdx
  struct CBaseDrawListEntry *v97; // rdx
  int v98; // eax
  __int64 v99; // rcx
  int v100; // [rsp+38h] [rbp-D0h]
  CDrawListEntry *v101; // [rsp+40h] [rbp-C8h] BYREF
  struct CDrawListEntryBatch *v102; // [rsp+48h] [rbp-C0h] BYREF
  struct _D3DCOLORVALUE v103; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v104; // [rsp+68h] [rbp-A0h]
  int v105; // [rsp+78h] [rbp-90h]
  struct ClipPlaneInfoRef *v106; // [rsp+88h] [rbp-80h]
  struct _D3DCOLORVALUE v107; // [rsp+98h] [rbp-70h] BYREF
  __int64 v108; // [rsp+A8h] [rbp-60h]

  v6 = a5;
  v102 = *(struct CDrawListEntryBatch **)(a2 + 40);
  v8 = 0;
  v101 = 0LL;
  v106 = 0LL;
  if ( a4 == 1.0 )
    v8 = a5 == 0;
  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 && v8 )
    v6 = 1;
  v11 = *(__m128 **)(a1 + 32);
  if ( v11 )
  {
    v79 = v11[7];
    v80 = *(CDrawListPrimitive **)(a1 + 184);
    v81 = _mm_shuffle_ps(v79, v79, 255).m128_f32[0];
    v82 = _mm_shuffle_ps(v79, v79, 85).m128_f32[0];
    v83 = (float)(v81 * v79.m128_f32[0]) * *(float *)(a1 + 40);
    v79.m128_f32[0] = (float)(_mm_shuffle_ps(v79, v79, 170).m128_f32[0] * v81) * *(float *)(a1 + 48);
    v84 = v82 * v81;
    v85 = v81 * *(float *)(a1 + 52);
    v86 = v84 * *(float *)(a1 + 44);
    LODWORD(v107.b) = v79.m128_i32[0];
    v107.r = v83;
    v107.g = v86;
    v107.a = v85;
    CDrawListPrimitive::UpdatePremultipliedColor(v80, &v107);
  }
  if ( !v6 )
    goto LABEL_7;
  v40 = v6 - 1;
  if ( v40 )
  {
    v71 = v40 - 1;
    if ( v71 )
    {
      if ( v71 != 2 )
      {
LABEL_7:
        v100 = 0;
        goto LABEL_8;
      }
      v100 = 22;
    }
    else
    {
      v100 = 21;
    }
  }
  else
  {
    v100 = 5;
  }
LABEL_8:
  v12 = *(_QWORD *)(a1 + 72);
  v13 = *(_QWORD *)(a1 + 64);
  v14 = *(_QWORD *)(a1 + 80);
  v15 = *a3;
  v16 = a3[1];
  v17 = a3[2];
  v18 = a3[3];
  v19 = *((_DWORD *)a3 + 16);
  v105 = v19;
  v20 = (v12 - v13) / 76;
  if ( !((v14 - v12) / 76) )
  {
    if ( v20 + 1 < v20 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_91:
      v87 = v108;
      v88 = *(_QWORD *)&v103.r + 76LL;
      while ( 1 )
      {
        v12 -= 76LL;
        if ( !*(_QWORD *)&v107.r )
          goto LABEL_136;
        if ( !v87 )
          goto LABEL_136;
        --v87;
        v88 -= 76LL;
        if ( v87 >= *(_QWORD *)&v107.b )
          goto LABEL_136;
        *(_OWORD *)v88 = *(_OWORD *)v12;
        *(_OWORD *)(v88 + 16) = *(_OWORD *)(v12 + 16);
        *(_OWORD *)(v88 + 32) = *(_OWORD *)(v12 + 32);
        *(_OWORD *)(v88 + 48) = *(_OWORD *)(v12 + 48);
        *(_QWORD *)(v88 + 64) = *(_QWORD *)(v12 + 64);
        *(_DWORD *)(v88 + 72) = *(_DWORD *)(v12 + 72);
        if ( v12 == v22 )
          goto LABEL_13;
      }
    }
    v72 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)(v20 + 1),
            (v14 - v13) / 76,
            v20 + 1);
    v73 = operator new(saturated_mul(v72, 0x4CuLL));
    v74 = *(_QWORD *)(a1 + 72);
    v75 = *(_QWORD *)(a1 + 64);
    v108 = 0LL;
    v76 = v73;
    *(_QWORD *)&v107.r = v73;
    *(_QWORD *)&v107.b = v20;
    v104 = 0LL;
    *(struct _D3DCOLORVALUE *)&v103.r = *(struct _D3DCOLORVALUE *)&v107.r;
    std::uninitialized_copy<std::move_iterator<CDrawListEntry::FrameData *>,stdext::checked_array_iterator<CDrawListEntry::FrameData *>>(
      (__int64)&v107,
      v75,
      v74,
      &v103);
    v77 = *(void **)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v76;
    if ( v77 == (void *)(a1 + 88) )
      v77 = 0LL;
    operator delete(v77);
    v13 = *(_QWORD *)(a1 + 64);
    v78 = 76 * v72;
    v19 = v105;
    v12 = v13 + 76 * v20;
    *(_QWORD *)(a1 + 72) = v12;
    *(_QWORD *)(a1 + 80) = v13 + v78;
  }
  *(_QWORD *)&v107.b = 1LL;
  v21 = (v12 - v13) / 76;
  v108 = 0LL;
  v22 = v13 + 76 * v21;
  *(_QWORD *)&v107.r = v22;
  v23 = v21 - v20;
  v104 = 0LL;
  *(struct _D3DCOLORVALUE *)&v103.r = *(struct _D3DCOLORVALUE *)&v107.r;
  if ( !v22 )
    goto LABEL_136;
  v104 = 1LL;
  v24 = (v12 - v13) / 76 - v20;
  if ( v23 > 1 )
    v24 = 1LL;
  v25 = 76 * v24;
  v108 = 1LL;
  v22 = v12 - v25;
  if ( v12 != v12 - v25 )
    goto LABEL_91;
LABEL_13:
  if ( v23 <= 1 )
    goto LABEL_14;
  *(_QWORD *)&v103.r = v13;
  *(_QWORD *)&v103.b = v21;
  v89 = v21 < 0;
  if ( v21 )
  {
    if ( !v13 )
      goto LABEL_136;
    v89 = v21 < 0;
  }
  if ( v89 && v21 )
  {
LABEL_136:
    _o__invalid_parameter_noinfo_noreturn(v22, v23);
    __debugbreak();
    JUMPOUT(0x180121741LL);
  }
  v104 = v21;
  *(struct _D3DCOLORVALUE *)&v107.r = *(struct _D3DCOLORVALUE *)&v103.r;
  v108 = v21;
  std::move_backward<std::move_iterator<CDrawListEntry::FrameData *>,stdext::checked_array_iterator<CDrawListEntry::FrameData *>>(
    &v103,
    v13 + 76 * v20,
    v13 + 76 * v21 - 76,
    &v107);
LABEL_14:
  *(_QWORD *)(a1 + 72) += 76LL;
  v26 = 76 * v20;
  *(_OWORD *)(v26 + v13 + 8) = v15;
  *(_DWORD *)(v26 + v13) = v100;
  *(_OWORD *)(v26 + v13 + 24) = v16;
  *(_OWORD *)(v26 + v13 + 40) = v17;
  *(_OWORD *)(v26 + v13 + 56) = v18;
  *(_DWORD *)(v26 + v13 + 72) = v19;
  *(float *)(v26 + v13 + 4) = a4;
  v28 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 192) + 56LL))(*(_QWORD *)(a1 + 192), a2);
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v28, 0x70u, 0LL);
    goto LABEL_135;
  }
  v29 = *(_DWORD *)(a1 + 168);
  if ( (v29 & 0x200) != 0 )
  {
    v52 = D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a2 + 272));
    (*(void (__fastcall **)(__int64, _QWORD))(v53 + 64))(v54, v52);
    v29 = *(_DWORD *)(a1 + 168);
  }
  if ( (v29 & 4) != 0 )
    *(_BYTE *)(a2 + 5951) = 1;
  v30 = (CLightStack *)(a2 + 600);
  if ( !*(_DWORD *)(a2 + 696) )
  {
    if ( *(_DWORD *)(a2 + 624) )
    {
      v28 = CLightStack::RetrieveCurrentLightBufferForContextNoRef(
              v30,
              (struct CDrawingContext *)a2,
              (const struct CMILMatrix *)(a2 + 96),
              &v101);
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v30, 0LL, 0, v28, 0x81u, 0LL);
LABEL_135:
        detail::vector_facade<CDrawListEntry::FrameData,detail::buffer_impl<CDrawListEntry::FrameData,1,1,detail::liberal_expansion_policy>>::pop_back(a1 + 64);
        return (unsigned int)v28;
      }
    }
  }
  v31 = *(_QWORD *)(a2 + 3480);
  v32 = v106;
  if ( v31 )
  {
    v90 = *(struct ClipPlaneInfoRef **)(v31 + 256);
    if ( v90 )
      v32 = v90;
  }
  if ( (*(_BYTE *)(a1 + 168) & 8) == 0 || !v8 )
  {
    v33 = (char *)v102 + 16;
    if ( !*((_BYTE *)v102 + 501) )
    {
      v68 = 0;
      v69 = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWEVENT_Start,
          16LL,
          0LL);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v33 + 30) + 384LL))(*((_QWORD *)v33 + 30));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWEVENT_Stop,
          16LL,
          0LL);
      if ( *((_DWORD *)v33 + 100) )
      {
        do
        {
          v70 = *(CD2DTarget **)(*((_QWORD *)v33 + 47) + 8LL * v68);
          if ( v69 )
            *((_BYTE *)v69 + 48) = 0;
          CD2DTarget::ApplyState(v70, (struct CD2DContext *)v33);
          ++v68;
          v69 = v70;
        }
        while ( v68 < *((_DWORD *)v33 + 100) );
      }
      v33[485] = 1;
    }
    v34 = *((_QWORD *)v33 + 22);
    v33[486] = 1;
    v102 = (struct CDrawListEntryBatch *)v34;
    if ( !v34 )
    {
      v55 = CDrawListBatchManager::OpenDrawListEntryBatch((CDrawListBatchManager *)(v33 + 8), &v102);
      v28 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x1CFu, 0LL);
      }
      else
      {
        v57 = v102;
        v58 = CDrawListEntryBatch::SetLightingCollection(v102, v101);
        v28 = v58;
        if ( v58 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x1D1u, 0LL);
        }
        else
        {
          v60 = *((_QWORD *)v57 + 4);
          if ( (struct ClipPlaneInfoRef *)v60 != v32 )
          {
            if ( v32 )
            {
              (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))v32)(v32);
              v60 = *((_QWORD *)v57 + 4);
            }
            *((_QWORD *)v57 + 4) = v32;
            if ( v60 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
          }
        }
      }
      goto LABEL_58;
    }
    if ( *(struct ClipPlaneInfoRef **)(v34 + 32) != v32 )
    {
      CD2DContext::FlushDrawList((CD2DContext *)v33);
      v95 = CD2DContext::EnsureDrawListBatch((CD2DContext *)v33, v101, v32);
      v28 = v95;
      if ( v95 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v95, 0x1DEu, 0LL);
      goto LABEL_58;
    }
    v35 = v101;
    v28 = 0;
    if ( v101 == *(CDrawListEntry **)(v34 + 40) )
    {
LABEL_27:
      if ( v28 >= 0 )
        goto LABEL_28;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v30, 0LL, 0, v28, 0x1E2u, 0LL);
LABEL_58:
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v28, 0x1F7u, 0LL);
LABEL_132:
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0, v28, 0x93u, 0LL);
          goto LABEL_135;
        }
        return (unsigned int)v28;
      }
LABEL_28:
      v36 = *((_QWORD *)v33 + 22);
      ++dword_180347278;
      v37 = *(_QWORD *)(v36 + 24);
      v38 = *(CBatchOptimizer **)(v37 + 200);
      if ( v38 )
      {
        CBatchOptimizer::AddRenderingDrawListEntry(v38, (struct CDrawListEntry *)a1);
        return 0;
      }
      v97 = (struct CBaseDrawListEntry *)(a1 + 16);
      if ( !a1 )
        v97 = 0LL;
      v98 = CDrawListBatchManager::BatchDrawListEntry((CDrawListBatchManager *)(v37 + 24), v97);
      v28 = v98;
      if ( v98 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0, v98, 0x1FAu, 0LL);
      goto LABEL_132;
    }
    ++dword_18034727C;
    v61 = *(_QWORD *)(v34 + 24) + 64LL;
    v101 = 0LL;
    v62 = CDrawListBatchManager::TakeItemFromCache<CStateSettingDrawListEntry>(v61, &v101);
    v28 = v62;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0xC6u, 0LL);
      v30 = v101;
      if ( v101 )
        CDrawListEntry::Release(v101);
      goto LABEL_27;
    }
    v64 = v101;
    v65 = (struct CDrawListEntryBatch *)*((_QWORD *)v101 + 4);
    v102 = v65;
    *((_QWORD *)v101 + 4) = v35;
    if ( v35 )
    {
      (**(void (__fastcall ***)(CDrawListEntry *))v35)(v35);
      v65 = v102;
    }
    if ( v65 )
      (*(void (__fastcall **)(struct CDrawListEntryBatch *))(*(_QWORD *)v65 + 8LL))(v65);
    v66 = *(_QWORD *)(v34 + 24);
    v67 = *(CBatchOptimizer **)(v66 + 200);
    if ( v67 )
    {
      CBatchOptimizer::AddStateSettingDrawListEntry(v67, v64);
    }
    else
    {
      v96 = (struct CStateSettingDrawListEntry *)((char *)v64 + 16);
      if ( !v64 )
        v96 = 0LL;
      v28 = CDrawListBatchManager::BatchDrawListEntry((CDrawListBatchManager *)(v66 + 24), v96);
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v30, 0LL, 0, v28, 0xD0u, 0LL);
LABEL_68:
        if ( v64 )
          CDrawListEntry::Release(v64);
        goto LABEL_27;
      }
    }
    *(_QWORD *)(v34 + 40) = v35;
    goto LABEL_68;
  }
  v41 = (char *)v102 + 16;
  if ( !*((_BYTE *)v102 + 501) )
  {
    v42 = 0;
    v43 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        16LL,
        0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v41 + 30) + 384LL))(*((_QWORD *)v41 + 30));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        16LL,
        0LL);
    if ( *((_DWORD *)v41 + 100) )
    {
      do
      {
        v44 = *(_QWORD *)(*((_QWORD *)v41 + 47) + 8LL * v42);
        if ( v43 )
          *(_BYTE *)(v43 + 48) = 0;
        if ( !*(_BYTE *)(v44 + 48) )
        {
          *(_QWORD *)(v44 + 16) = v41;
          CD2DContext::D2DSetTargetInternal((CD2DContext *)v41, (struct CD2DTarget *)v44);
          *(_BYTE *)(v44 + 48) = 1;
          CD2DTarget::ApplyCurrentClip((CD2DTarget *)v44);
        }
        ++v42;
        v43 = v44;
      }
      while ( v42 < *((_DWORD *)v41 + 100) );
    }
    v41[485] = 1;
  }
  v45 = v101;
  v41[486] = 1;
  v46 = CD2DContext::EnsureDrawListBatch((CD2DContext *)v41, v45, v32);
  v28 = v46;
  if ( v46 >= 0 )
  {
    v48 = *((_QWORD *)v41 + 22);
    ++dword_180347278;
    v49 = *(_QWORD *)(v48 + 24);
    v50 = *(CBatchOptimizer **)(v49 + 200);
    if ( v50 )
    {
      CBatchOptimizer::AddRenderingDrawListEntry(v50, (struct CDrawListEntry *)a1);
      v28 = 0;
    }
    else
    {
      v91 = (struct CBaseDrawListEntry *)(a1 + 16);
      if ( !a1 )
        v91 = 0LL;
      v92 = CDrawListBatchManager::BatchDrawListEntry((CDrawListBatchManager *)(v49 + 24), v91);
      v28 = v92;
      if ( v92 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, v92, 0x75u, 0LL);
LABEL_53:
        if ( v28 >= 0 )
          return (unsigned int)v28;
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v28, 0x212u, 0LL);
        goto LABEL_111;
      }
    }
    if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(*(_QWORD *)(a1 + 64) + 8LL) )
    {
      v102 = (struct CDrawListEntryBatch *)a1;
      std::deque<CMegaRect>::emplace_back<CHWDrawListEntry * &>(v48 + 88, (__int64 *)&v102);
      v28 = 0;
    }
    goto LABEL_53;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x20Fu, 0LL);
LABEL_111:
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v94, 0LL, 0, v28, 0x8Du, 0LL);
    goto LABEL_135;
  }
  return (unsigned int)v28;
}
