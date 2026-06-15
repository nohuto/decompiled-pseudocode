/*
 * XREFs of ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18004E860
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180027AF0 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AC8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x1800536D4 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800541E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800605D0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     atexit @ 0x18006AC38 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800D5FAC (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$CComHeapPtr@G@ATL@@@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAV?$CComHeapPtr@G@ATL@@@Z @ 0x1800E3CC0 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$CComHeapPtr@G.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800EAD74 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 *     ??_G_RecurringTask@@QEAAPEAXI@Z @ 0x1800EB430 (--_G_RecurringTask@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CAudioResourceManager::DestroyStream(
        CAudioResourceManager *this,
        struct ISubmixProxy *a2,
        struct IAudioStreamInfo *a3)
{
  __int64 v5; // r13
  int v6; // ebx
  __int64 v7; // rdi
  _WORD *v8; // rax
  __int64 v9; // rcx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // ebx
  bool v13; // di
  char v14; // r12
  int v15; // ebx
  unsigned int v16; // r13d
  __int64 v17; // rcx
  bool v18; // r14
  char v19; // al
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r15
  signed int v24; // edi
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  std::_Ref_count_base *v31; // rcx
  struct _TP_WORK *ThreadpoolWork; // r14
  __int64 v33; // rdx
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // rdx
  __int64 v36; // rax
  CAudioResourceManager *v37; // r14
  _RecurringTask **v38; // rdi
  unsigned int v39; // edx
  _RecurringTask *v40; // rcx
  std::_Ref_count_base *v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  PTP_POOL Threadpool; // rax
  signed int LastError; // eax
  signed int v46; // eax
  signed int v47; // eax
  int v48; // [rsp+20h] [rbp-248h]
  __int64 v49; // [rsp+30h] [rbp-238h] BYREF
  __int64 (__fastcall ***v50)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-230h] BYREF
  __int64 v51; // [rsp+40h] [rbp-228h] BYREF
  __int64 v52; // [rsp+48h] [rbp-220h] BYREF
  int v53; // [rsp+50h] [rbp-218h]
  unsigned int v54; // [rsp+54h] [rbp-214h]
  __int64 v55; // [rsp+58h] [rbp-210h] BYREF
  _BYTE *v56; // [rsp+60h] [rbp-208h]
  WINBOOL fPending; // [rsp+68h] [rbp-200h] BYREF
  int v58; // [rsp+6Ch] [rbp-1FCh] BYREF
  LPVOID Context; // [rsp+70h] [rbp-1F8h] BYREF
  __int64 v60; // [rsp+78h] [rbp-1F0h] BYREF
  CAudioResourceManager *v61; // [rsp+80h] [rbp-1E8h]
  __int64 v62; // [rsp+88h] [rbp-1E0h] BYREF
  _QWORD *v63; // [rsp+90h] [rbp-1D8h]
  __int64 v64; // [rsp+98h] [rbp-1D0h] BYREF
  std::_Ref_count_base *v65; // [rsp+A0h] [rbp-1C8h]
  __int64 v66; // [rsp+A8h] [rbp-1C0h] BYREF
  _DWORD v67[2]; // [rsp+B0h] [rbp-1B8h] BYREF
  __int64 v68; // [rsp+B8h] [rbp-1B0h]
  _QWORD v69[7]; // [rsp+C0h] [rbp-1A8h] BYREF
  _QWORD *v70; // [rsp+F8h] [rbp-170h]
  _BYTE v71[56]; // [rsp+100h] [rbp-168h] BYREF
  _BYTE *v72; // [rsp+138h] [rbp-130h]
  _QWORD *v73; // [rsp+140h] [rbp-128h]
  __int64 v74; // [rsp+148h] [rbp-120h] BYREF
  _QWORD v75[11]; // [rsp+158h] [rbp-110h] BYREF
  void *v76[2]; // [rsp+1B0h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+1C0h] [rbp-A8h]
  unsigned __int16 *v78; // [rsp+1D0h] [rbp-98h]
  int v79; // [rsp+1D8h] [rbp-90h]
  int v80; // [rsp+1DCh] [rbp-8Ch]
  void *v81; // [rsp+1E0h] [rbp-88h]
  int v82; // [rsp+1E8h] [rbp-80h]
  int v83; // [rsp+1ECh] [rbp-7Ch]
  __int64 *v84; // [rsp+1F0h] [rbp-78h]
  __int64 v85; // [rsp+1F8h] [rbp-70h]
  _WORD *v86; // [rsp+200h] [rbp-68h]
  int v87; // [rsp+208h] [rbp-60h]
  int v88; // [rsp+20Ch] [rbp-5Ch]
  int *v89; // [rsp+210h] [rbp-58h]
  __int64 v90; // [rsp+218h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v61 = this;
  v51 = 0LL;
  v52 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a3 + 32LL))(a3, &v52) >= 0 )
  {
    if ( v52 )
    {
      v51 = 0LL;
      if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a3 + 24LL))(a3, &v51) >= 0 )
      {
        if ( v52 )
        {
          Context = 0LL;
          if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
            && fPending )
          {
            Context = &qword_18019F828;
            qword_18019F828 = &wil::details::FeatureLogging::`vftable';
            qword_18019F840 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register(
              (wil::TraceLoggingProvider *)&qword_18019F828,
              qword_18019F840,
              (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18019F828);
          }
          v5 = *((_QWORD *)Context + 1);
          if ( *(_DWORD *)v5 > 4u )
          {
            v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 40LL))(v51);
            v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 80LL))(a3);
            v58 = v6;
            v8 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 64LL))(v52);
            v66 = v7;
            v89 = &v58;
            v90 = 4LL;
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
              v8 = &unk_18015D734;
              v10 = 2;
            }
            v86 = v8;
            v87 = v10;
            v88 = 0;
            v84 = &v66;
            v85 = 8LL;
            v67[0] = 184549376;
            v67[1] = 4;
            v68 = 0LL;
            v78 = *(unsigned __int16 **)(v5 + 8);
            v79 = *v78;
            v80 = 2;
            v81 = &unk_18016956D;
            v82 = 62;
            v83 = 1;
            v54 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            v48 = 5;
            EtwEventWriteTransfer(*(_QWORD *)(v5 + 32), v67, 0LL);
          }
        }
      }
    }
  }
  v49 = 0LL;
  v50 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)a2 + 80LL))(
          a2,
          &v50);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x652,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v50);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v52);
    return v12;
  }
  v49 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v50)[24])(v50, &v49);
  v55 = 0LL;
  (**(void (__fastcall ***)(struct ISubmixProxy *, GUID *, __int64 *))a2)(
    a2,
    &GUID_1c09b051_783b_4f90_a426_dc76e6cdb825,
    &v55);
  if ( v49 )
  {
    v13 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v49 + 152LL))(v49)
       || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v49 + 120LL))(v49);
    if ( v49 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 128LL))(v49);
      goto LABEL_21;
    }
  }
  else
  {
    v13 = 0;
  }
  v14 = 0;
LABEL_21:
  if ( v55 )
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 216LL))(v55);
  else
    v15 = 0;
  v53 = v15;
  v16 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL))(a2, a3);
  v54 = v16;
  v17 = v49;
  if ( v49 )
  {
    v18 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v49 + 152LL))(v49)
       || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v49 + 120LL))(v49);
    v17 = v49;
    if ( v49 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 128LL))(v49);
      v17 = v49;
      goto LABEL_29;
    }
  }
  else
  {
    v18 = 0;
  }
  v19 = 0;
LABEL_29:
  if ( v13 && !v18 || v14 && v19 )
  {
    v36 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v50)[16])(v50);
    std::wstring::wstring(v76, v36);
    v37 = v61;
    std::map<std::wstring,std::unique_ptr<_RecurringTask>>::_Try_emplace<std::wstring,>((char *)v61 + 48, &v74, v76);
    v38 = (_RecurringTask **)(v74 + 64);
    v39 = si128.m128i_u32[2];
    if ( si128.m128i_i64[1] >= 8uLL )
      std::_Deallocate<16,0>(v76[0], (const struct std::nothrow_t *)(2 * si128.m128i_i64[1] + 2));
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v76[0]) = 0;
    v40 = *v38;
    *v38 = 0LL;
    if ( v40 )
      _RecurringTask::`scalar deleting destructor'(v40, v39);
    v62 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v50)[16])(v50);
    std::make_shared<std::wstring,ATL::CComHeapPtr<unsigned short> &>(&v64, &v62);
    v61 = (CAudioResourceManager *)v75;
    v41 = v65;
    if ( v65 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v65 + 2);
      v41 = v65;
    }
    v75[0] = off_18014B9E8;
    v75[1] = (char *)v37 - 8;
    v75[2] = v64;
    v75[3] = v41;
    v75[7] = v75;
    v42 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
    v43 = CSerialWorkQueue::QueueRecurringItem(v42, 10000LL, 0LL, v75);
    if ( v43 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x673,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v43,
        (int)v38);
    if ( v65 )
      std::_Ref_count_base::_Decref(v65);
    JUMPOUT(0x18008FD97LL);
  }
  if ( !v15 )
    goto LABEL_69;
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v55 + 216LL))(v55) )
  {
    v60 = 0LL;
    if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v50, &v60) < 0 )
    {
LABEL_66:
      if ( v60 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
      goto LABEL_68;
    }
    v63 = v69;
    v20 = v60;
    if ( v60 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
    v69[0] = off_180147C10;
    v69[1] = v20;
    v70 = v69;
    v61 = (CAudioResourceManager *)v69;
    v21 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
    v23 = v21;
    v24 = 0;
    if ( *(_BYTE *)(v21 + 80) )
    {
LABEL_60:
      if ( v70 )
      {
        if ( v70 == v69 )
          v22 = 0LL;
        else
          LOBYTE(v22) = 1;
        (*(void (__fastcall **)(_QWORD *, __int64))(*v70 + 32LL))(v70, v22);
        v70 = 0LL;
      }
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x688,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v24,
          v48);
      goto LABEL_66;
    }
    if ( !*(_QWORD *)v21 )
    {
      Threadpool = CreateThreadpool(0LL);
      *(_QWORD *)v23 = Threadpool;
      if ( !Threadpool )
      {
        LastError = GetLastError();
        v24 = LastError;
        if ( LastError > 0 )
          v24 = (unsigned __int16)LastError | 0x80070000;
        if ( v24 < 0 )
          goto LABEL_60;
      }
      if ( !SetThreadpoolThreadMinimum(*(PTP_POOL *)v23, 1u) )
      {
        v46 = GetLastError();
        v24 = v46;
        if ( v46 > 0 )
          v24 = (unsigned __int16)v46 | 0x80070000;
        if ( v24 < 0 )
          goto LABEL_60;
      }
      SetThreadpoolThreadMaximum(*(PTP_POOL *)v23, 1u);
      *(_QWORD *)(v23 + 16) = *(_QWORD *)v23;
    }
    v25 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v26 = v25;
    v56 = v25;
    if ( v25 )
    {
      *v25 = 0LL;
      v25[1] = 0LL;
      v25[2] = 0LL;
    }
    else
    {
      v26 = 0LL;
    }
    v73 = v26;
    if ( v26 )
    {
      v56 = v71;
      v72 = 0LL;
      if ( v70 )
        v72 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v70)(v70, v71);
      v56 = v71;
      v26[2] = v23;
      ProcessHeap = GetProcessHeap();
      v28 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      v29 = v28;
      v63 = v28;
      if ( v28 )
      {
        *((_DWORD *)v28 + 2) = 1;
        *((_DWORD *)v28 + 3) = 1;
        *v28 = &std::_Ref_count_obj<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
        v62 = (__int64)(v28 + 2);
        v28[9] = 0LL;
        if ( v72 )
          v28[9] = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v72)(v72, (__int64)(v28 + 2));
      }
      else
      {
        v29 = 0LL;
      }
      v30 = v29 + 2;
      *v26 = v29 + 2;
      v31 = (std::_Ref_count_base *)v26[1];
      v26[1] = v29;
      if ( v31 )
      {
        std::_Ref_count_base::_Decref(v31);
        v30 = (_QWORD *)*v26;
      }
      if ( v30 )
        v24 = 0;
      else
        v24 = -2147024882;
      if ( v72 )
      {
        if ( v72 == v71 )
          v22 = 0LL;
        else
          LOBYTE(v22) = 1;
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v72 + 32LL))(v72, v22);
        v72 = 0LL;
      }
      if ( v24 < 0 )
        goto LABEL_58;
      ThreadpoolWork = CreateThreadpoolWork(
                         (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                         v26,
                         (PTP_CALLBACK_ENVIRON)(v23 + 8));
      if ( ThreadpoolWork )
      {
        v24 = 0;
      }
      else
      {
        v47 = GetLastError();
        v24 = v47;
        if ( v47 > 0 )
          v24 = (unsigned __int16)v47 | 0x80070000;
        if ( v24 < 0 )
          goto LABEL_58;
      }
      v26 = 0LL;
      SubmitThreadpoolWork(ThreadpoolWork);
    }
    else
    {
      v24 = -2147024882;
    }
LABEL_58:
    if ( v26 )
      _WorkTask::`scalar deleting destructor'((_WorkTask *)v26, v22);
    goto LABEL_60;
  }
LABEL_68:
  v17 = v49;
LABEL_69:
  v33 = v55;
  if ( v55 )
  {
    v55 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    v17 = v49;
  }
  v34 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v34)[2])(v34);
    v17 = v49;
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  return v16;
}
