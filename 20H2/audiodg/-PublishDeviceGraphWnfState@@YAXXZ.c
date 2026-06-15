/*
 * XREFs of ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000F210
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400029D0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x1400049F0 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007AD0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14000F990 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140010110 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140010200 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140010740 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140045B10 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     AudioDGGetDeviceGraphWnfStateName @ 0x14004B520 (AudioDGGetDeviceGraphWnfStateName.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14004CF30 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DD6C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14003DFC8 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?FreePlexes@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAXXZ @ 0x14003F1AC (-FreePlexes@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElement.c)
 *     ?InitHashTable@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAA_NI_N@Z @ 0x14003F680 (-InitHashTable@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x14003FF64 (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?FreeNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140041A28 (-FreeNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x140041B4C (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     ?Rehash@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXI@Z @ 0x140041CA8 (-Rehash@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140041DE0 (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x14004B744 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 *     ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14004B950 (-DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDi.c)
 *     ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x14004C71C (-LinkDisplayNodes@@YAXAEAV-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDispl.c)
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x14004CC9C (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 */

// Hidden C++ exception states: #wind=5
void PublishDeviceGraphWnfState(void)
{
  float v0; // xmm1_4
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  float v3; // xmm0_4
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  void *v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  int v10; // esi
  unsigned int v11; // edi
  _QWORD *ValueAt; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  int v15; // eax
  CDisplayNode *v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // esi
  unsigned int i; // edx
  __int64 v21; // r14
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // esi
  unsigned int j; // edx
  __int64 v29; // r14
  __int64 v30; // rdi
  _QWORD *v31; // rbx
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // eax
  void *Block; // [rsp+30h] [rbp-99h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-91h]
  int v37; // [rsp+40h] [rbp-89h]
  int v38; // [rsp+44h] [rbp-85h]
  int v39; // [rsp+48h] [rbp-81h]
  int v40; // [rsp+4Ch] [rbp-7Dh]
  unsigned __int64 v41; // [rsp+50h] [rbp-79h]
  unsigned __int64 v42; // [rsp+58h] [rbp-71h]
  int v43; // [rsp+60h] [rbp-69h]
  int v44; // [rsp+64h] [rbp-65h]
  ATL::CAtlPlex *v45; // [rsp+68h] [rbp-61h]
  __int64 v46; // [rsp+70h] [rbp-59h]
  void *v47; // [rsp+80h] [rbp-49h] BYREF
  unsigned __int64 v48; // [rsp+88h] [rbp-41h]
  int v49; // [rsp+90h] [rbp-39h]
  int v50; // [rsp+94h] [rbp-35h]
  int v51; // [rsp+98h] [rbp-31h]
  int v52; // [rsp+9Ch] [rbp-2Dh]
  unsigned __int64 v53; // [rsp+A0h] [rbp-29h]
  unsigned __int64 v54; // [rsp+A8h] [rbp-21h]
  int v55; // [rsp+B0h] [rbp-19h]
  int v56; // [rsp+B4h] [rbp-15h]
  ATL::CAtlPlex *v57; // [rsp+B8h] [rbp-11h]
  __int64 v58; // [rsp+C0h] [rbp-9h]
  __int128 v59; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v60; // [rsp+E0h] [rbp+17h]
  ATL::CAtlPlex *v61[2]; // [rsp+E8h] [rbp+1Fh]
  int v62; // [rsp+F8h] [rbp+2Fh]
  struct _RTL_CRITICAL_SECTION *v63; // [rsp+130h] [rbp+67h] BYREF
  void *v64; // [rsp+138h] [rbp+6Fh] BYREF

  v59 = 0LL;
  v60 = 0LL;
  *(_OWORD *)v61 = 0LL;
  v62 = 10;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 17;
  v55 = 0;
  v56 = 10;
  v57 = 0LL;
  v58 = 0LL;
  v50 = 1061158912;
  v51 = 1048576000;
  v52 = 1074790400;
  v0 = 17.0 * 2.25;
  v1 = 0LL;
  if ( (float)(17.0 * 2.25) >= 9.223372e18 )
  {
    v0 = v0 - 9.223372e18;
    if ( v0 < 9.223372e18 )
      v1 = 0x8000000000000000uLL;
  }
  v2 = v1 + (unsigned int)(int)v0;
  v53 = v2;
  v3 = 17.0 * 0.25;
  v4 = 0LL;
  if ( (float)(17.0 * 0.25) >= 9.223372e18 )
  {
    v3 = v3 - 9.223372e18;
    if ( v3 < 9.223372e18 )
      v4 = 0x8000000000000000uLL;
  }
  v5 = v4 + (unsigned int)(int)v3;
  v54 = v5;
  if ( v5 < 0x11 )
    v54 = 0LL;
  Block = 0LL;
  v36 = 0LL;
  v37 = 17;
  v43 = 0;
  v44 = 10;
  v45 = 0LL;
  v46 = 0LL;
  v38 = 1061158912;
  v39 = 1048576000;
  v40 = 1074790400;
  v41 = v2;
  v42 = v4 + (unsigned int)(int)v3;
  if ( v5 < 0x11 )
    v42 = 0LL;
  v6 = 0LL;
  v64 = 0LL;
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    EnterCriticalSection(&g_CritSecSadMap);
    v63 = &g_CritSecSadMap;
    v10 = qword_140090378;
    v11 = 0;
    if ( (int)qword_140090378 <= 0 )
    {
LABEL_28:
      LeaveCriticalSection(&g_CritSecSadMap);
      EnterCriticalSection(&g_CritSecSubmixList);
      v63 = &g_CritSecSubmixList;
      v13 = (_QWORD *)SubmixList;
      if ( SubmixList )
      {
        while ( 1 )
        {
          v14 = v13[2];
          v13 = (_QWORD *)*v13;
          if ( (int)DumpDeviceGraph(v14, &v59, &v47, &Block) < 0 )
            break;
          if ( !v13 )
            goto LABEL_31;
        }
        LeaveCriticalSection(&g_CritSecSubmixList);
      }
      else
      {
LABEL_31:
        LeaveCriticalSection(&g_CritSecSubmixList);
        LinkDisplayNodes(&v47, &Block);
        v15 = SerializeDeviceGraphs(&v59, &v64, &v63);
        v6 = v64;
        if ( v15 >= 0 )
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
            g_DeviceGraphWnfStateName,
            0LL,
            v64,
            (unsigned int)v63,
            0LL);
      }
    }
    else
    {
      while ( 1 )
      {
        ValueAt = (_QWORD *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
                              v9,
                              v11);
        if ( (*(int (__fastcall **)(_QWORD, __int128 *, void **, void **))(*(_QWORD *)*ValueAt + 192LL))(
               *ValueAt,
               &v59,
               &v47,
               &Block) < 0 )
          break;
        if ( (int)++v11 >= v10 )
          goto LABEL_28;
      }
      LeaveCriticalSection(&g_CritSecSadMap);
    }
    while ( v60 )
    {
      if ( !(_QWORD)v59 )
        ATL::AtlThrowImpl(-2147467259);
      v16 = *(CDisplayNode **)(v59 + 16);
      v17 = *(_QWORD *)v59;
      *(_QWORD *)&v59 = v17;
      if ( v17 )
        *(_QWORD *)(v17 + 8) = 0LL;
      else
        v59 = 0uLL;
      ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode(&v59);
      if ( v16 )
        CDisplayNode::`scalar deleting destructor'(v16, v18);
    }
  }
  operator delete(v6);
  ++v43;
  v7 = Block;
  if ( Block )
  {
    v19 = 0;
    for ( i = v37; v19 < i; ++v19 )
    {
      v21 = v7[v19];
      if ( v21 )
      {
        do
        {
          v22 = v21;
          v23 = (_QWORD *)(v21 + 56);
          v21 = *(_QWORD *)(v21 + 56);
          ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v22 + 8);
          *v23 = v46;
          v46 = v22;
          v24 = v36 - 1;
          v36 = v24;
          if ( v24 < v42 && !v43 )
          {
            v25 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &Block,
              v25);
            v24 = v36;
          }
          if ( !v24 )
            ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::FreePlexes(&Block);
        }
        while ( v21 );
        i = v37;
        v7 = Block;
      }
    }
  }
  operator delete(v7);
  Block = 0LL;
  v36 = 0LL;
  if ( !v43 )
  {
    v26 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::InitHashTable(
      &Block,
      v26,
      0LL);
  }
  v46 = 0LL;
  if ( v45 )
  {
    ATL::CAtlPlex::FreeDataChain(v45);
    v45 = 0LL;
  }
  --v43;
  ++v55;
  v8 = v47;
  if ( v47 )
  {
    v27 = 0;
    for ( j = v49; v27 < j; ++v27 )
    {
      v29 = v8[v27];
      if ( v29 )
      {
        do
        {
          v30 = v29;
          v31 = (_QWORD *)(v29 + 56);
          v29 = *(_QWORD *)(v29 + 56);
          ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v30 + 8);
          *v31 = v58;
          v58 = v30;
          v32 = v48 - 1;
          v48 = v32;
          if ( v32 < v54 && !v55 )
          {
            v33 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v47);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &v47,
              v33);
            v32 = v48;
          }
          if ( !v32 )
            ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::FreePlexes(&v47);
        }
        while ( v29 );
        j = v49;
        v8 = v47;
      }
    }
  }
  operator delete(v8);
  v47 = 0LL;
  v48 = 0LL;
  if ( !v55 )
  {
    v34 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v47);
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::InitHashTable(
      &v47,
      v34,
      0LL);
  }
  v58 = 0LL;
  if ( v57 )
  {
    ATL::CAtlPlex::FreeDataChain(v57);
    v57 = 0LL;
  }
  --v55;
  while ( v60 )
  {
    if ( !(_QWORD)v59 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)&v59 = *(_QWORD *)v59;
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode(&v59);
  }
  v59 = 0LL;
  v61[1] = 0LL;
  if ( v61[0] )
    ATL::CAtlPlex::FreeDataChain(v61[0]);
}
