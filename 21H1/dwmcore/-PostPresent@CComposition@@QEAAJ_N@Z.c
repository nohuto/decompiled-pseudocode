/*
 * XREFs of ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180043940
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18003E980 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18004384C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?ProcessRoundTripRequest@CComposition@@AEAA_NXZ @ 0x180044868 (-ProcessRoundTripRequest@CComposition@@AEAA_NXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800546C4 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180057CE4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800A38D8 (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1800A4DC0 (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B5618 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800C8FBC (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800CA598 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x1800CE318 (-Flush@CD3DDevice@@QEAAXXZ.c)
 *     ?EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ @ 0x1800D2698 (-EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ.c)
 *     ??$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z @ 0x1800D4088 (--$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@details@wil@@QEAA_NXZ @ 0x1800E5E04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@detail.c)
 *     ?RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ @ 0x1800EAEAC (-RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180155DC4 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0qqxx_EventWriteTransfer @ 0x180167A98 (McTemplateU0qqxx_EventWriteTransfer.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18016D5AC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 *     ??$emplace_back@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x1801FC3A8 (--$emplace_back@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com_.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18021850C (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x18023DCA0 (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 *     ?erase@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCUnpinResource@CD3DDevice@@@2@V?$basic_iterator@$$CBVCUnpinResource@CD3DDevice@@@2@@Z @ 0x180241D8C (-erase@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDevice@@$0.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x18024CC70 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x18024CE1C (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 */

__int64 __fastcall CComposition::PostPresent(CComposition *this, char a2)
{
  CRenderTargetManager *v2; // rbx
  __int64 v3; // r15
  CComposition *v4; // r13
  unsigned int v5; // edi
  _DWORD *v6; // rbx
  int v7; // ecx
  bool v8; // al
  int v9; // r12d
  unsigned int v10; // r15d
  char v11; // si
  char v12; // di
  __int64 i; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  bool v18; // cl
  unsigned int v19; // ebx
  unsigned __int8 v20; // r14
  __int64 *v21; // r12
  __int64 *v22; // rdi
  volatile signed __int32 *v23; // rsi
  __int64 v24; // r13
  char v25; // r14
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // ebx
  int v30; // eax
  bool v31; // zf
  int v32; // eax
  CD2DContext *v33; // rcx
  char IsHardwareProtectionDisabled; // al
  __int64 v35; // rcx
  __int64 v36; // r8
  char v37; // dl
  __int64 v38; // rcx
  struct CComposition *v39; // rax
  _QWORD *v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // r14
  __int64 v43; // rbx
  __int64 v44; // r14
  CAtlasManager *v45; // r15
  __int64 *v46; // r10
  __int64 *j; // r9
  __int64 v48; // r8
  int v49; // eax
  unsigned int v50; // edx
  __int64 v51; // rax
  __int64 v52; // rbx
  unsigned __int64 v53; // rax
  void *v54; // rbx
  int v55; // eax
  __int64 v56; // rcx
  unsigned int v57; // esi
  PSLIST_ENTRY k; // rax
  __int64 v59; // rcx
  struct _SLIST_ENTRY *Next; // rbx
  __int64 v61; // rbx
  int v62; // r9d
  char *v63; // r11
  unsigned int v64; // r9d
  char *v65; // r8
  unsigned int v66; // r10d
  char *m; // rdx
  __int64 v68; // rax
  int v69; // ecx
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r8
  struct CComposition *v74; // rdx
  __int64 v75; // rcx
  _QWORD *v76; // r12
  __int64 v77; // rdi
  __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  _QWORD *v80; // rsi
  __int64 v81; // rbx
  char v82; // di
  HANDLE *v83; // rbx
  volatile signed __int32 **v84; // rax
  volatile signed __int32 *v85; // rdi
  int v86; // esi
  int v87; // eax
  int v88; // ebx
  BOOL v89; // eax
  CHAR v90; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  volatile signed __int32 *v93; // rax
  volatile signed __int32 *v94; // rbx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rbx
  __int64 v98; // rcx
  __int64 v99; // rax
  int (__fastcall ***v100)(_QWORD, GUID *, CComposition **); // rcx
  __int64 v101; // r8
  __int64 v102; // rcx
  __int64 v103; // rcx
  int v104; // eax
  __int64 v105; // rcx
  unsigned int v106; // r15d
  __int64 v107; // rax
  int v108; // eax
  __int64 v109; // rcx
  unsigned int v110; // ebx
  int v111; // r14d
  unsigned int n; // esi
  __int64 v113; // rdi
  int v114; // eax
  __int64 v115; // rcx
  int v116; // ebx
  void *v117; // rcx
  CHAR Response[4]; // [rsp+64h] [rbp-9Ch] BYREF
  bool v121; // [rsp+68h] [rbp-98h] BYREF
  char v122; // [rsp+69h] [rbp-97h]
  volatile signed __int32 *v123; // [rsp+70h] [rbp-90h] BYREF
  CRenderTargetManager *v124; // [rsp+78h] [rbp-88h]
  CComposition *v125; // [rsp+80h] [rbp-80h] BYREF
  int v126; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v127; // [rsp+8Ch] [rbp-74h]
  void *v128[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v129; // [rsp+A0h] [rbp-60h]
  __int64 v130; // [rsp+A8h] [rbp-58h] BYREF
  char v131[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v132; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v133; // [rsp+C8h] [rbp-38h]
  __int128 v134; // [rsp+D8h] [rbp-28h]
  __int128 v135; // [rsp+E8h] [rbp-18h]
  __int128 v136; // [rsp+F8h] [rbp-8h]
  char v137[16]; // [rsp+110h] [rbp+10h] BYREF

  v2 = (CRenderTargetManager *)*((_QWORD *)this + 11);
  v3 = 0LL;
  v4 = this;
  v125 = this;
  v127 = 0;
  v124 = v2;
  if ( !*((_BYTE *)v2 + 132) || *((_BYTE *)v2 + 133) )
  {
    if ( *((_BYTE *)this + 289) )
    {
      v5 = 0;
      if ( *((_DWORD *)this + 80) )
      {
        do
        {
          v6 = *(_DWORD **)(*((_QWORD *)v4 + 37) + 8LL * v5);
          if ( v6 )
          {
            v7 = v6[21];
            if ( v7 || v6[19] )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
              {
                McTemplateU0qqxx_EventWriteTransfer(
                  v7,
                  (unsigned int)&CHANNELANIMATIONS_ACTIVE,
                  v6[4],
                  v6[5],
                  v7,
                  v6[19]);
                v7 = v6[21];
              }
              dword_180349320 += v7;
              dword_180349324 += v6[19];
              v6[21] = 0;
              v6[19] = 0;
            }
          }
          ++v5;
        }
        while ( v5 < *((_DWORD *)v4 + 80) );
      }
      *((_BYTE *)v4 + 289) = 0;
    }
    v8 = CComposition::ProcessRoundTripRequest(v4);
    v9 = 0;
    v10 = *((_DWORD *)v4 + 140);
    if ( v8 )
      v9 = 256;
    v11 = 0;
    v12 = BYTE1(Microsoft_Windows_Dwm_CoreEnableBits) & 0x40;
    for ( i = 0LL; (!v11 || v12) && (unsigned int)i < v10; i = (unsigned int)(i + 1) )
    {
      v14 = *(_QWORD *)(8 * i + *((_QWORD *)v4 + 67));
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14) )
      {
        v11 = 1;
        if ( v12 )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(8 * i + *((_QWORD *)v4 + 67)) + 24LL))(*(_QWORD *)(8 * i + *((_QWORD *)v4 + 67)));
          if ( v15 )
          {
            ++*(_DWORD *)(v15 + 84);
            *((_BYTE *)v4 + 289) = 1;
          }
        }
      }
    }
    v16 = *((_QWORD *)v4 + 34);
    v17 = v9 | 0x10;
    if ( !v11 )
      v17 = v9;
    v18 = *(_DWORD *)(v16 + 256) || (*(_BYTE *)(v16 + 416) & 2) != 0 || *(_DWORD *)(v16 + 160);
    v19 = v17 | 0x20;
    if ( !v18 )
      v19 = v17;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 12) + 48LL))(*((_QWORD *)v4 + 12)) )
      v19 |= 0x40u;
    if ( v19 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)v4 + 63) + 96LL))(*((_QWORD *)v4 + 63), 0LL, v19);
    v2 = (CRenderTargetManager *)*((_QWORD *)v4 + 11);
    v3 = 0LL;
    CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved = 0;
    v124 = v2;
  }
  v20 = *((_BYTE *)v2 + 130);
  Response[0] = v20;
  *((_BYTE *)v2 + 130) = 0;
  EnterCriticalSection(&CriticalSection);
  v21 = (__int64 *)xmmword_18034D610;
  v22 = (__int64 *)qword_18034D608;
  if ( qword_18034D608 != (_QWORD)xmmword_18034D610 )
  {
    while ( 1 )
    {
      v23 = 0LL;
      v24 = *v22;
      v123 = 0LL;
      if ( g_pComposition )
      {
        v23 = (volatile signed __int32 *)*((_QWORD *)g_pComposition + 44);
        v123 = v23;
      }
      v25 = *(_BYTE *)(v24 + 1435);
      v122 = v25;
      if ( v23 != *(volatile signed __int32 **)(v24 + 1408) )
        break;
LABEL_63:
      if ( *(volatile signed __int32 **)(v24 + 1392) == v23 )
        goto LABEL_127;
      v39 = g_pComposition;
      *(_QWORD *)(v24 + 1392) = v23;
      v40 = (_QWORD *)(v24 + 512);
      if ( v39 )
        v3 = *((_QWORD *)v39 + 44);
      LODWORD(v41) = *(_DWORD *)(v24 + 536);
      if ( (_DWORD)v41 )
      {
        do
        {
          v41 = (unsigned int)(v41 - 1);
          v42 = *(_QWORD *)(*v40 + 8 * v41);
          if ( (unsigned __int64)(v3 - *(_QWORD *)(v42 + 168)) >= 0x20 )
          {
            DynArray<CCursorVisualReference *,0>::RemoveAt(v24 + 512, (unsigned int)v41);
            *(_BYTE *)(v42 + 176) = 0;
            CRenderTargetBitmap::Release((CRenderTargetBitmap *)v42);
          }
        }
        while ( (_DWORD)v41 );
        LODWORD(v43) = *(_DWORD *)(v24 + 536);
        while ( (_DWORD)v43 )
        {
          if ( *(_DWORD *)(v24 + 536) <= 0x20u )
            break;
          v43 = (unsigned int)(v43 - 1);
          v44 = *(_QWORD *)(*v40 + 8 * v43);
          if ( v3 != *(_QWORD *)(v44 + 168) )
          {
            DynArray<CCursorVisualReference *,0>::RemoveAt(v24 + 512, (unsigned int)v43);
            *(_BYTE *)(v44 + 176) = 0;
            CRenderTargetBitmap::Release((CRenderTargetBitmap *)v44);
          }
        }
      }
      v45 = (CAtlasManager *)(v24 + 560);
      v46 = *(__int64 **)(v24 + 568);
      for ( j = *(__int64 **)(v24 + 560); j != v46; ++j )
      {
        v48 = *j;
        v49 = *(_DWORD *)(*j + 32);
        if ( v49 )
        {
          v50 = 0;
          if ( *(_DWORD *)(v48 + 24) )
          {
            do
            {
              v51 = *(_QWORD *)(v48 + 16);
              if ( *(_QWORD *)(v51 + 8LL * v50) == -1LL )
                *(_QWORD *)(v51 + 8LL * v50) = 0LL;
              ++v50;
            }
            while ( v50 < *(_DWORD *)(v48 + 24) );
            v49 = *(_DWORD *)(v48 + 32);
          }
          *(_DWORD *)(v48 + 28) += v49;
          *(_DWORD *)(v48 + 32) = 0;
        }
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::GetImpl'::`2'::impl) )
        CD3DDevice::RemoveStaleCheckMPOCaches((CD3DDevice *)v24);
      if ( a2 || *(volatile signed __int32 **)(v24 + 1400) == v123 )
      {
        v72 = *(_QWORD *)(v24 + 1232);
        v73 = *(_QWORD *)(v24 + 1240);
        v74 = g_pComposition;
        while ( v72 != v73 )
        {
          v75 = 0LL;
          if ( v74 )
            v75 = *((_QWORD *)v74 + 44);
          *(_QWORD *)(v72 + 8) = v75 + 1;
          v72 += 16LL;
        }
      }
      else
      {
        v52 = *(_QWORD *)(v24 + 1232);
        *(_OWORD *)v128 = 0LL;
        v129 = 0LL;
        while ( v52 != *(_QWORD *)(v24 + 1240) )
        {
          v53 = 0LL;
          if ( g_pComposition )
            v53 = *((_QWORD *)g_pComposition + 44);
          if ( *(_QWORD *)(v52 + 8) <= v53 )
          {
            std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
              v128,
              v52);
            v130 = v52;
            v52 = *(_QWORD *)detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::erase(
                               v24 + 1232,
                               v131,
                               &v130);
          }
          else
          {
            v52 += 16LL;
          }
        }
        v54 = v128[0];
        v45 = (CAtlasManager *)(v24 + 560);
        if ( v128[0] != v128[1] )
        {
          v55 = (*(__int64 (__fastcall **)(_QWORD, void *, signed __int64))(**(_QWORD **)(v24 + 584) + 32LL))(
                  *(_QWORD *)(v24 + 584),
                  v128[0],
                  ((char *)v128[1] - (char *)v128[0]) >> 3);
          v57 = v55;
          if ( v55 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0xF9Bu, 0LL);
          CD3DDevice::TranslateDXGIorD3DErrorInContext(v24, v57, 0LL);
        }
        if ( v54 )
        {
          std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(v54);
          std::_Deallocate<16,0>(v54, (v129 - (_QWORD)v54) & 0xFFFFFFFFFFFFFFF8uLL);
          v129 = 0LL;
          *(_OWORD *)v128 = 0LL;
        }
      }
      for ( k = InterlockedFlushSList((PSLIST_HEADER)(v24 + 1152));
            k;
            k = InterlockedFlushSList((PSLIST_HEADER)(v24 + 1152)) )
      {
        do
        {
          Next = k->Next;
          CD3DResourceManager::DestroyResource((CD3DResourceManager *)(v24 + 1136), (struct CD3DResource *)&k[-4]);
          k = Next;
        }
        while ( Next );
      }
      if ( *(volatile signed __int32 **)(v24 + 1416) == v123 )
      {
        v25 = v122;
        v3 = 0LL;
      }
      else
      {
        v61 = v24;
        if ( !v45 )
          v61 = 0LL;
        v62 = *(_DWORD *)(v61 + 1128);
        if ( v62 < 0 )
        {
          v3 = 0LL;
          MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v62, 0x44u, 0LL);
          v25 = 1;
        }
        else
        {
          v63 = *(char **)v45;
          v64 = 0;
          v65 = (char *)*((_QWORD *)v45 + 1);
          v66 = 0;
          for ( m = *(char **)v45; m != v65; v66 += v69 - *(_DWORD *)(v68 + 28) )
          {
            v68 = *(_QWORD *)m;
            m += 8;
            v69 = *(_DWORD *)(v68 + 24);
            v64 += v69;
          }
          if ( v66 >= v64 / 3 )
          {
            v3 = 0LL;
          }
          else
          {
            v121 = 0;
            if ( ((v65 - v63) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
            {
              v70 = CAtlasManager::CompactSingleAtlas(v45, &v121);
              if ( v70 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, 0x54u, 0LL);
            }
            else
            {
              CAtlasManager::MergeAtlases(v45, &v121);
            }
            v3 = 0LL;
            if ( v121 && *(int *)(v61 + 1128) >= 0 )
            {
              *(_BYTE *)(v61 + 1435) = 1;
              v25 = 1;
              goto LABEL_127;
            }
          }
          v25 = 1;
        }
      }
LABEL_127:
      if ( *(_BYTE *)(v24 + 1435) )
      {
        CD3DDevice::Flush((CD3DDevice *)v24);
LABEL_130:
        if ( *(int *)(v24 + 1128) < 0 )
          goto LABEL_136;
        if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v24 + 592) + 312LL))(*(_QWORD *)(v24 + 592)) < 0 )
          *(_DWORD *)(v24 + 1128) = -2003304307;
        goto LABEL_133;
      }
      if ( v25 )
        goto LABEL_130;
LABEL_133:
      if ( *(int *)(v24 + 1128) < 0 )
      {
LABEL_136:
        if ( !*(_BYTE *)(v24 + 1434) )
        {
          *(_BYTE *)(v24 + 1434) = 1;
          CD3DDevice::DestroyAllResources((CD3DDevice *)v24);
        }
        goto LABEL_138;
      }
      if ( *(_BYTE *)(v24 + 1436) )
        CD3DDevice::Trim((CD3DDevice *)v24);
LABEL_138:
      v22 += 2;
      if ( v22 == v21 )
      {
        v76 = (_QWORD *)xmmword_18034D610;
        v77 = qword_18034D608;
        v4 = v125;
        v20 = Response[0];
        while ( (_QWORD *)v77 != v76 )
        {
          v78 = *(_QWORD *)v77;
          if ( *(int *)(*(_QWORD *)v77 + 1128LL) < 0 )
            goto LABEL_149;
          if ( *(_DWORD *)(v78 + 8) != 1 || *(_DWORD *)(*(_QWORD *)(v78 + 224) + 16LL) || *(_DWORD *)(v78 + 1208) )
            goto LABEL_148;
          v79 = 0LL;
          if ( g_pComposition )
            v79 = *((_QWORD *)g_pComposition + 44);
          if ( v79 < *(_QWORD *)(v78 + 1424) )
          {
LABEL_148:
            v77 += 16LL;
          }
          else
          {
LABEL_149:
            v80 = (_QWORD *)(v77 + 16);
            if ( (_QWORD *)(v77 + 16) != v76 )
            {
              v81 = v77;
              do
              {
                if ( (_QWORD *)v81 != v80 )
                {
                  ReleaseInterface<CD3DDevice>(v81);
                  *(_QWORD *)v81 = *v80;
                  *(_BYTE *)(v81 + 8) = *(_BYTE *)(v81 + 24);
                  *v80 = 0LL;
                }
                v80 += 2;
                v81 += 16LL;
              }
              while ( v80 != v76 );
              v76 = (_QWORD *)xmmword_18034D610;
            }
            ReleaseInterface<CD3DDevice>(v76 - 2);
            v76 = (_QWORD *)(xmmword_18034D610 - 16);
            *(_QWORD *)&xmmword_18034D610 = xmmword_18034D610 - 16;
          }
        }
        goto LABEL_156;
      }
    }
    v26 = *(_QWORD *)(v24 + 616);
    *(_BYTE *)(v24 + 1435) = 0;
    v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, volatile signed __int32 *))(**(_QWORD **)(v24 + 264) + 152LL))(
            *(_QWORD *)(v24 + 264),
            v26,
            v23);
    v29 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xE9Eu, 0LL);
    if ( !*(_DWORD *)(v24 + 1128)
      && (v29 == -2005532292 || v29 == -2147024882 || v29 == -2005270523)
      && *(_DWORD *)(v24 + 496) )
    {
      if ( v29 == -2005270523 )
      {
        v30 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v24 + 592) + 312LL))(*(_QWORD *)(v24 + 592));
        *(_DWORD *)(v24 + 1128) = -2003304307;
        v31 = v30 == -2005270480;
        v32 = -2003304307;
        if ( !v31 )
          goto LABEL_56;
      }
      CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(v24 + 16));
      *((_BYTE *)v33 + 484) = 1;
      IsHardwareProtectionDisabled = CD2DContext::IsHardwareProtectionDisabled(v33);
      if ( v37 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0q_EventWriteTransfer(v35, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, v36);
    }
    if ( v29 >= 0 )
      goto LABEL_57;
    v32 = *(_DWORD *)(v24 + 1128);
LABEL_56:
    if ( v32 < 0 )
    {
LABEL_62:
      *(_QWORD *)(v24 + 1408) = v23;
      *(_BYTE *)(v24 + 1435) = 0;
      goto LABEL_63;
    }
LABEL_57:
    if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v29, 15LL, &v126) )
    {
      v29 = v126;
      if ( v126 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v126, 0xD8Bu, 0LL);
    }
    if ( v29 == -2003304307 )
      *(_DWORD *)(v24 + 1128) = -2003304307;
    goto LABEL_62;
  }
LABEL_156:
  LeaveCriticalSection(&CriticalSection);
  v82 = a2;
  v83 = (HANDLE *)v124;
  if ( !a2 || *(int *)(*(_QWORD *)v124 + 952LL) >= 5 )
  {
    v84 = (volatile signed __int32 **)*((_QWORD *)v124 + 1);
    if ( v84 != *((volatile signed __int32 ***)v124 + 2) )
    {
      v85 = *v84;
      v123 = 0LL;
      if ( *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
        && *(_QWORD *)GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
      {
        v123 = v85;
        v86 = 0;
      }
      else
      {
        v86 = (*(__int64 (__fastcall **)(volatile signed __int32 *, GUID *, volatile signed __int32 **))(*(_QWORD *)v85 + 40LL))(
                v85,
                &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
                &v123);
        if ( v86 < 0 )
        {
          v93 = 0LL;
          v123 = 0LL;
LABEL_179:
          v94 = 0LL;
          if ( v86 >= 0 )
            v94 = v93;
          if ( v93 )
          {
            v95 = (__int64)v93 + *(int *)(*((_QWORD *)v93 + 1) + 4LL) + 8;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 16LL))(v95);
          }
          if ( v94 )
          {
            v96 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v94 + 120LL))(v94);
            v97 = v96;
            if ( v96 )
            {
              v98 = v96 + *(int *)(*(_QWORD *)(v96 + 8) + 4LL) + 8LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v98 + 8LL))(v98);
              v99 = *(_QWORD *)(v97 + 8);
              v125 = 0LL;
              v100 = (int (__fastcall ***)(_QWORD, GUID *, CComposition **))(v97 + *(int *)(v99 + 4) + 8LL);
              if ( (**v100)(v100, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v125) >= 0 )
              {
                v132 = 5;
                v133 = 0LL;
                v134 = 0LL;
                v135 = 0LL;
                v136 = 0LL;
                (*(void (__fastcall **)(CComposition *, int *))(*(_QWORD *)v125 + 48LL))(v125, &v132);
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                  McGenEventWrite_EventWriteTransfer(
                    &Microsoft_Windows_Dwm_Core_Provider_Context,
                    &EVTDESC_DETECT_DESKTOP_ENDOFUPDATES,
                    v101,
                    1LL,
                    v137);
              }
              if ( v125 )
              {
                v102 = (__int64)v125 + *(int *)(*((_QWORD *)v125 + 1) + 4LL) + 8;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
              }
              v103 = v97 + 8 + *(int *)(*(_QWORD *)(v97 + 8) + 4LL);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
            }
          }
          v83 = (HANDLE *)v124;
          v82 = a2;
          goto LABEL_192;
        }
      }
      if ( *((int *)v85 + 2) < 0 )
      {
        while ( 1 )
        {
          v87 = IsKernelDebuggerPresent();
          strcpy(Response, "?");
          v88 = v87;
          if ( !v87 )
          {
            v89 = IsDebuggerPresent();
            v90 = Response[0];
            if ( v89 )
              v90 = 103;
            Response[0] = v90;
          }
          DbgPrintEx(
            0x65u,
            0,
            "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
            L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
            word_1802CE738,
            word_1802CE738,
            "Function: ",
            L"CMILCOMBase::InternalAddRef",
            ", ",
            L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
            25);
          if ( v88 )
          {
            DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
          }
          else
          {
            DbgPrintEx(
              0x65u,
              0,
              "(No kernel debugger is present.) Respond with:\n"
              "  g                    -- Go (continue)\n"
              "  eb 0x%p 'p';g  -- terminate Process\n"
              "  eb 0x%p 't';g  -- terminate Thread\n"
              " or regular debugging.\n",
              Response,
              Response);
            __debugbreak();
          }
          switch ( Response[0] )
          {
            case 'B':
            case 'b':
              __debugbreak();
              goto LABEL_177;
            case 'G':
            case 'g':
              goto LABEL_177;
            case 'I':
            case 'i':
              DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
              continue;
            case 'P':
            case 'p':
              CurrentProcess = GetCurrentProcess();
              TerminateProcess(CurrentProcess, 0xC0000001);
              goto LABEL_175;
            case 'T':
            case 't':
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_175;
            default:
LABEL_175:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
LABEL_177:
      _InterlockedIncrement(v85 + 2);
      v93 = v123;
      goto LABEL_179;
    }
  }
LABEL_192:
  if ( v20 && (int)CRenderTargetManager::EnsureDxDisplayModeChangedEvent((CRenderTargetManager *)v83) >= 0 )
    SetEvent(v83[11]);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v4 + 12) + 40LL))(*((_QWORD *)v4 + 12), v20);
  if ( *((_QWORD *)v4 + 44) )
  {
    v104 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 62) + 24LL))(*((_QWORD *)v4 + 62));
    v106 = v104;
    if ( v104 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v105, 0LL, 0, v104, 0x36Cu, 0LL);
      goto LABEL_208;
    }
    v107 = *((_QWORD *)v4 + 43);
    if ( !v107 )
      goto LABEL_200;
    if ( v82 )
    {
      *(_QWORD *)(*(_QWORD *)v107 + 24LL) = 0LL;
LABEL_200:
      v108 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v4 + 62) + 40LL))(
               *((_QWORD *)v4 + 62),
               *((_QWORD *)v4 + 44));
      v106 = v108;
      if ( v108 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v109, 0LL, 0, v108, 0x37Au, 0LL);
        goto LABEL_208;
      }
    }
  }
  else
  {
    v106 = v127;
  }
  if ( *((_DWORD *)v4 + 170) )
  {
    v110 = 0;
    do
      UnmapViewOfFile(*(LPCVOID *)(*((_QWORD *)v4 + 82) + 8LL * v110++));
    while ( v110 < *((_DWORD *)v4 + 170) );
    *((_DWORD *)v4 + 170) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)v4 + 656, 8LL);
  }
LABEL_208:
  v111 = 0;
  for ( n = 0; n < *((_DWORD *)v4 + 158); ++n )
  {
    v113 = *(_QWORD *)(*((_QWORD *)v4 + 76) + 8LL * n);
    v114 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 200LL))(v113);
    v116 = v114;
    if ( v114 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v115, 0LL, 0, v114, 0x294u, 0LL);
    if ( !v111 || v111 >= 0 && v116 < 0 )
      v111 = v116;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v113 + 16LL))(v113);
  }
  v117 = (void *)*((_QWORD *)v4 + 76);
  *((_DWORD *)v4 + 158) = 0;
  if ( v117 != *((void **)v4 + 77) )
  {
    operator delete(v117);
    *((_QWORD *)v4 + 76) = *((_QWORD *)v4 + 77);
    *((_DWORD *)v4 + 157) = *((_DWORD *)v4 + 156);
  }
  return v106;
}
