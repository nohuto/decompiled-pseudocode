/*
 * XREFs of ??1CSaDeviceProxy@@MEAA@XZ @ 0x18004FBF0
 * Callers:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x18004FBB0 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052DD0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800540E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180067D3C (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     atexit @ 0x18006AB38 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x18006D68C (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BBD48 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x1800E3820 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$CComHeapPtr@G@ATL@@@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAV?$CComHeapPtr@G@ATL@@@Z @ 0x1800E3C00 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$CComHeapPtr@G.c)
 *     ?ReleaseAudioResourceHandle@@YAX_K@Z @ 0x1800EDB4C (-ReleaseAudioResourceHandle@@YAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
void __fastcall CSaDeviceProxy::~CSaDeviceProxy(CSaDeviceProxy *this)
{
  char *v2; // r15
  __int64 v3; // rcx
  unsigned __int64 v4; // r14
  DWORD LastError; // ebx
  __int64 v6; // r10
  __int64 v7; // rcx
  _WORD *v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  std::_Ref_count_base *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  struct _RTL_CRITICAL_SECTION *v17; // r15
  _QWORD *p_Type; // rcx
  _QWORD *v19; // rbx
  void *v20; // rcx
  LPVOID *v21; // rbx
  __int64 v22; // r10
  int v23; // [rsp+20h] [rbp-138h]
  WINBOOL fPending; // [rsp+30h] [rbp-128h] BYREF
  int v25; // [rsp+34h] [rbp-124h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-120h] BYREF
  __int64 v27; // [rsp+40h] [rbp-118h] BYREF
  std::_Ref_count_base *v28; // [rsp+48h] [rbp-110h]
  _QWORD *v29; // [rsp+50h] [rbp-108h]
  _QWORD v30[2]; // [rsp+58h] [rbp-100h] BYREF
  _DWORD v31[2]; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-E8h]
  _QWORD v33[10]; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int16 *v34; // [rsp+D0h] [rbp-88h]
  int v35; // [rsp+D8h] [rbp-80h]
  int v36; // [rsp+DCh] [rbp-7Ch]
  void *v37; // [rsp+E0h] [rbp-78h]
  int v38; // [rsp+E8h] [rbp-70h]
  int v39; // [rsp+ECh] [rbp-6Ch]
  _QWORD *v40; // [rsp+F0h] [rbp-68h]
  __int64 v41; // [rsp+F8h] [rbp-60h]
  _WORD *v42; // [rsp+100h] [rbp-58h]
  int v43; // [rsp+108h] [rbp-50h]
  int v44; // [rsp+10Ch] [rbp-4Ch]
  __int64 v45; // [rsp+110h] [rbp-48h]
  __int64 v46; // [rsp+118h] [rbp-40h]
  int *v47; // [rsp+120h] [rbp-38h]
  __int64 v48; // [rsp+128h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v30[1] = this;
  *(_QWORD *)this = &CSaDeviceProxy::`vftable'{for `IInspectable'};
  v2 = (char *)this + 8;
  *((_QWORD *)this + 1) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 2) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    LastError = GetLastError();
    ReleaseAudioResourceHandle(v4);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 8) = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18019F838;
    qword_18019F838[0] = &wil::details::FeatureLogging::`vftable';
    qword_18019F850 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)qword_18019F838,
      qword_18019F850,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18019F838);
  }
  v6 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 4u )
  {
    v7 = *((_QWORD *)this + 6);
    v25 = *(_DWORD *)(v7 + 8);
    v8 = *(_WORD **)v7;
    v30[0] = v2;
    v47 = &v25;
    v48 = 4LL;
    v45 = v7 + 48;
    v46 = 16LL;
    if ( v8 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v8[v9] );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v8 = &unk_18015D744;
      v10 = 2;
    }
    v42 = v8;
    v43 = v10;
    v44 = 0;
    v40 = v30;
    v41 = 8LL;
    v31[0] = 184549376;
    v31[1] = 4;
    v32 = 0LL;
    v34 = *(unsigned __int16 **)(v6 + 8);
    v35 = *v34;
    v36 = 2;
    v37 = &unk_180168AA4;
    v38 = 64;
    v39 = 1;
    LODWORD(v29) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    v23 = 6;
    EtwEventWriteTransfer(*(_QWORD *)(v6 + 32), v31, 0LL);
  }
  if ( *((_BYTE *)this + 72) )
  {
    std::make_shared<std::wstring,ATL::CComHeapPtr<unsigned short> &>(&v27, *((_QWORD *)this + 6));
    v29 = v33;
    v11 = v28;
    if ( v28 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v28 + 2);
      v11 = v28;
    }
    v33[0] = off_18014B438;
    v33[1] = v27;
    v33[2] = v11;
    v33[7] = v33;
    v12 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
    v13 = CSerialWorkQueue::QueueWorkItem(v12, v33);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x824,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v13,
        v23);
      __debugbreak();
      JUMPOUT(0x1800500F8LL);
    }
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
  }
  v14 = *((_QWORD *)this + 14);
  if ( v14 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 10);
  if ( v15 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 8);
  if ( v16 )
    ReleaseAudioResourceHandle(v16);
  v17 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 7);
  if ( v17 )
  {
    p_Type = &v17[1].DebugInfo->Type;
    v19 = (_QWORD *)p_Type[1];
    if ( !*((_BYTE *)v19 + 25) )
    {
      do
      {
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>>(
          &v17[1],
          &v17[1],
          v19[2]);
        v20 = v19;
        v19 = (_QWORD *)*v19;
        std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)0x28);
      }
      while ( !*((_BYTE *)v19 + 25) );
      p_Type = &v17[1].DebugInfo->Type;
    }
    operator delete(p_Type, (const struct std::nothrow_t *)0x28);
    DeleteCriticalSection(v17);
    operator delete(v17, (const struct std::nothrow_t *)0x40);
  }
  *((_QWORD *)this + 7) = 0LL;
  v21 = (LPVOID *)*((_QWORD *)this + 6);
  if ( v21 )
  {
    CoTaskMemFree(v21[3]);
    v21[3] = 0LL;
    CoTaskMemFree(v21[2]);
    v21[2] = 0LL;
    CoTaskMemFree(*v21);
    *v21 = 0LL;
    operator delete(v21, (const struct std::nothrow_t *)0x60);
  }
  *((_QWORD *)this + 6) = 0LL;
  if ( *((__int64 *)this + 5) < 0 && !ATL::SafeDecrementReferenceMultiThread((int *)(2LL * *((_QWORD *)this + 5) + 12)) )
  {
    if ( v22 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
}
