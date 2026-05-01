/*
 * XREFs of ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180029E30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180014918 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180014958 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001F1DC (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7d6eb40baac9abfbe063305bce0ea30_____lambda_c7d6eb40baac9abfbe063305bce0ea30___ @ 0x180022358 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c7d6eb40baac9.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180022534 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180022534.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180025718 (--4-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002A5A0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002A660 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800623A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800727A0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800743C8 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800743C8.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008BD90 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801217A4 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     WPP_SF_qd @ 0x180136024 (WPP_SF_qd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::PresentWindow(
        CFrameApplicationPresentation *this,
        struct ITaskWindow *a2)
{
  struct ITaskWindow *v4; // rbx
  char v5; // r15
  __int64 v6; // r14
  __int64 *v7; // rbx
  __int64 v9; // r12
  int v10; // r13d
  int *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // r14d
  __int64 *v15; // rax
  __int64 v16; // rbx
  int v17; // r14d
  const GUID *v18; // rax
  int v19; // ebx
  int v20; // ebx
  __int64 v21; // rax
  void (*v22)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void (*v23)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v24; // rbx
  HANDLE ProcessHeap; // rax
  void (*v26)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v27; // rbx
  HANDLE v28; // rax
  void (*v29)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v30; // rdi
  void *v31; // rbx
  HANDLE v32; // rax
  void *v33; // rbx
  HANDLE v34; // rax
  void (*v35)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int UserDataCount; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v38; // [rsp+34h] [rbp-CCh] BYREF
  int v39; // [rsp+38h] [rbp-C8h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-C4h] BYREF
  WINBOOL v41; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v42; // [rsp+44h] [rbp-BCh] BYREF
  WINBOOL v43; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v47; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v48; // [rsp+70h] [rbp-90h] BYREF
  LPVOID v49; // [rsp+78h] [rbp-88h] BYREF
  LPVOID v50; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v52; // [rsp+90h] [rbp-70h]
  PSRWLOCK SRWLock; // [rsp+98h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-50h] BYREF
  CFrameApplicationPresentation *v57; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C0h] [rbp-40h] BYREF
  struct ITaskWindow *v59; // [rsp+D0h] [rbp-30h] BYREF
  CFrameApplicationPresentation *v60; // [rsp+D8h] [rbp-28h]
  void **v61; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v62[3]; // [rsp+E8h] [rbp-18h] BYREF
  int v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  int *v65; // [rsp+110h] [rbp+10h]
  int v66; // [rsp+118h] [rbp+18h] BYREF
  char v67; // [rsp+11Ch] [rbp+1Ch]
  char v68[32]; // [rsp+120h] [rbp+20h] BYREF
  int v69; // [rsp+140h] [rbp+40h]
  LPVOID v70[2]; // [rsp+148h] [rbp+48h]
  char v71; // [rsp+158h] [rbp+58h]
  __int64 v72; // [rsp+160h] [rbp+60h]
  char v73[144]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v74; // [rsp+1F8h] [rbp+F8h] BYREF
  __int128 v75; // [rsp+200h] [rbp+100h]
  _QWORD v76[2]; // [rsp+210h] [rbp+110h] BYREF
  void **v77; // [rsp+220h] [rbp+120h] BYREF
  _QWORD v78[3]; // [rsp+228h] [rbp+128h] BYREF
  int v79; // [rsp+240h] [rbp+140h]
  int *v80; // [rsp+248h] [rbp+148h]
  int *v81; // [rsp+250h] [rbp+150h]
  int v82; // [rsp+258h] [rbp+158h] BYREF
  char v83; // [rsp+25Ch] [rbp+15Ch]
  char v84[32]; // [rsp+260h] [rbp+160h] BYREF
  int v85; // [rsp+280h] [rbp+180h] BYREF
  const char *v86; // [rsp+288h] [rbp+188h]
  LPVOID v87; // [rsp+290h] [rbp+190h]
  char v88; // [rsp+298h] [rbp+198h]
  __int64 v89; // [rsp+2A0h] [rbp+1A0h]
  char v90[144]; // [rsp+2A8h] [rbp+1A8h] BYREF
  LPVOID v91; // [rsp+338h] [rbp+238h]
  __int128 v92; // [rsp+340h] [rbp+240h]
  void *v93; // [rsp+350h] [rbp+250h]
  _QWORD v94[2]; // [rsp+360h] [rbp+260h] BYREF
  _QWORD v95[2]; // [rsp+370h] [rbp+270h] BYREF
  void **v96; // [rsp+380h] [rbp+280h] BYREF
  char v97[24]; // [rsp+388h] [rbp+288h] BYREF
  int v98; // [rsp+3A0h] [rbp+2A0h]
  int v99; // [rsp+3B8h] [rbp+2B8h]
  char v100[48]; // [rsp+3C0h] [rbp+2C0h] BYREF
  LPVOID lpMem; // [rsp+3F0h] [rbp+2F0h]
  char v102; // [rsp+3F8h] [rbp+2F8h]
  char v103[24]; // [rsp+498h] [rbp+398h] BYREF
  char v104[16]; // [rsp+4B0h] [rbp+3B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+4C0h] [rbp+3C0h] BYREF
  void *v106; // [rsp+4D0h] [rbp+3D0h]
  int v107; // [rsp+4D8h] [rbp+3D8h]
  int v108; // [rsp+4DCh] [rbp+3DCh]
  __int64 *v109; // [rsp+4E0h] [rbp+3E0h]
  __int64 v110; // [rsp+4E8h] [rbp+3E8h]
  DWORD *p_CurrentThreadId; // [rsp+4F0h] [rbp+3F0h]
  __int64 v112; // [rsp+4F8h] [rbp+3F8h]
  int *v113; // [rsp+500h] [rbp+400h]
  __int64 v114; // [rsp+508h] [rbp+408h]
  __int64 *v115; // [rsp+510h] [rbp+410h]
  __int64 v116; // [rsp+518h] [rbp+418h]
  __int64 *v117; // [rsp+520h] [rbp+420h]
  __int64 v118; // [rsp+528h] [rbp+428h]
  wil::details::in1diag3 *retaddr; // [rsp+578h] [rbp+478h]

  v4 = (struct ITaskWindow *)**((_QWORD **)this + 13);
  if ( !a2 || !v4 )
    goto LABEL_54;
  if ( a2 == v4 )
  {
    v5 = 1;
    goto LABEL_5;
  }
  v45 = 0LL;
  v44 = 0LL;
  if ( (**(int (__fastcall ***)(struct ITaskWindow *, GUID *, __int64 *))a2)(
         a2,
         &GUID_00000000_0000_0000_c000_000000000046,
         &v45) < 0 )
    goto LABEL_54;
  v19 = (**(__int64 (__fastcall ***)(struct ITaskWindow *, GUID *, __int64 *))v4)(
          v4,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v44);
  if ( v19 >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  if ( v19 < 0 || (v5 = 1, v45 != v44) )
LABEL_54:
    v5 = 0;
LABEL_5:
  v6 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v76[1] = v6;
  v7 = (__int64 *)*((_QWORD *)this + 14);
  if ( !v5 || v6 != *v7 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v20 = *((_DWORD *)this + 12);
      v21 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
      UserDataCount = v20;
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_5ec67ad958ea315cfc78e4414cad3743_Traceguids, v21);
      v7 = (__int64 *)*((_QWORD *)this + 14);
    }
    v78[0] = 0LL;
    v78[1] = &v77;
    v78[2] = 0LL;
    v79 = 0;
    v80 = &v85;
    v81 = &v82;
    v82 = 0;
    v83 = 0;
    v88 = 0;
    v85 = 0;
    v86 = "PresentWindow";
    v87 = 0LL;
    v89 = 1LL;
    v91 = 0LL;
    memset_0(v90, 0, sizeof(v90));
    v92 = 0LL;
    v93 = 0LL;
    v77 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    v9 = *v7;
    v10 = *((_DWORD *)this + 12);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)&v77,
      &SRWLock);
    v11 = v81;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_18059FE50;
      qword_18059FE50[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FE68 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FE50, qword_18059FE68, v22);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18059FE50);
    }
    if ( **((_DWORD **)Context + 1) > 5u )
      EventActivityIdControl(3u, (LPGUID)(v11 + 2));
    else
      *(_OWORD *)(v11 + 2) = 0LL;
    *v11 = 1;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v47 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v38, &v47) && v38 )
    {
      v47 = qword_18059FE50;
      qword_18059FE50[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FE68 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FE50, qword_18059FE68, v23);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18059FE50);
    }
    v12 = *((_QWORD *)v47 + 1);
    if ( *(_DWORD *)v12 > 5u )
    {
      v54 = v6;
      v55 = v9;
      v39 = v10;
      CurrentThreadId = GetCurrentThreadId();
      v56 = 0LL;
      v18 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v77);
      v117 = &v54;
      v118 = 8LL;
      v115 = &v55;
      v116 = 8LL;
      v113 = &v39;
      v114 = 4LL;
      p_CurrentThreadId = &CurrentThreadId;
      v112 = 4LL;
      v109 = &v56;
      v110 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 261;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v12 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v106 = &unk_1804D49DF;
      v107 = 94;
      v108 = 1;
      v52 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v12 + 32), &EventDescriptor, (LPCGUID)(v81 + 2), v18, 7u, &UserData);
    }
    if ( !v79 )
      wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v78);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 78) + 536LL))(*((_QWORD *)this + 78));
    (*(void (__fastcall **)(struct ITaskWindow *, _QWORD, __int64))(*(_QWORD *)a2 + 208LL))(
      a2,
      *((_QWORD *)this + 16),
      3LL);
    v13 = **((_QWORD **)this + 13);
    if ( v13 && !v5 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 208LL))(v13, *((_QWORD *)this + 16), 1LL);
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v59 = a2;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v60 = this;
    v61 = &wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v62[0] = 0LL;
    v62[1] = &v61;
    v62[2] = 0LL;
    v63 = 0;
    v64 = 0LL;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v62);
    v65 = &v66;
    v66 = 0;
    v67 = 0;
    v71 = 0;
    v69 = 0;
    *(_OWORD *)v70 = 0LL;
    v72 = 1LL;
    v74 = 0LL;
    memset_0(v73, 0, sizeof(v73));
    v75 = 0LL;
    v76[0] = 0LL;
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
      (__int64)&v61,
      (__int64)&v77);
    v61 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    if ( *((_DWORD *)this + 14) == 2 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7FE,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)0x8007139FLL,
        UserDataCount);
      v61 = &CFramePresentationTelemetry::PresentWindow::`vftable';
      wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v61);
      wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)&v61);
    }
    else
    {
      v57 = this;
      if ( this )
        (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
      v94[0] = this;
      (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
      v94[1] = this;
      v95[0] = v59;
      if ( v59 )
        (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v59 + 8LL))(v59);
      v95[1] = v60;
      wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)&v96,
        &v61);
      v96 = &CFramePresentationTelemetry::PresentWindow::`vftable';
      v14 = *((_DWORD *)this + 12);
      v15 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7d6eb40baac9abfbe063305bce0ea30_____lambda_c7d6eb40baac9abfbe063305bce0ea30___(
              &v51,
              v94);
      v16 = *v15;
      *v15 = 0LL;
      if ( v51 )
      {
        v51 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
      }
      v17 = SHTaskPoolQueueTask(3LL, 2LL, v14);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v96 = &CFramePresentationTelemetry::PresentWindow::`vftable';
      wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v96);
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v104);
      wil::details::shared_buffer::reset((wil::details::shared_buffer *)v103);
      if ( v102 )
      {
        v24 = lpMem;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v24);
        v102 = 0;
      }
      lpMem = 0LL;
      if ( v99 == 1 )
      {
        v99 = 2;
        v48 = 0LL;
        if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v41, &v48) && v41 )
        {
          v48 = qword_18059FE50;
          qword_18059FE50[0] = &ShellScreenClippingLogging::`vftable';
          qword_18059FE68 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FE50, qword_18059FE68, v26);
          InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18059FE50);
        }
        _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)v48 + 1), v100);
      }
      v99 = 3;
      if ( v98 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v97);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v95);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v94);
      if ( v17 >= 0 )
        ++*((_DWORD *)this + 53);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v57);
      v61 = &CFramePresentationTelemetry::PresentWindow::`vftable';
      wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v61);
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v76);
      wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v74);
      if ( v71 )
      {
        v27 = v70[1];
        v28 = GetProcessHeap();
        HeapFree(v28, 0, v27);
        v71 = 0;
      }
      v70[1] = 0LL;
      if ( v66 == 1 )
      {
        v66 = 2;
        v49 = 0LL;
        if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v42, &v49) && v42 )
        {
          v49 = qword_18059FE50;
          qword_18059FE50[0] = &ShellScreenClippingLogging::`vftable';
          qword_18059FE68 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FE50, qword_18059FE68, v29);
          InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18059FE50);
        }
        _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)v49 + 1), v68);
      }
      v66 = 3;
      if ( v63 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v62);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v59);
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 16LL))(a2);
    v77 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v77);
    if ( v93 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v93, 0xFFFFFFFF) == 1 )
      {
        v30 = v93;
        if ( v93 )
        {
          wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)v93 + 2);
          operator delete(v30, (const struct std::nothrow_t *)0x100);
        }
      }
      v93 = 0LL;
    }
    if ( v91 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v91, 0xFFFFFFFF) == 1 )
      {
        v31 = v91;
        v32 = GetProcessHeap();
        HeapFree(v32, 0, v31);
      }
      v91 = 0LL;
      *(_QWORD *)&v92 = 0LL;
    }
    if ( v88 )
    {
      v33 = v87;
      v34 = GetProcessHeap();
      HeapFree(v34, 0, v33);
      v88 = 0;
    }
    v87 = 0LL;
    if ( v82 == 1 )
    {
      v82 = 2;
      v50 = 0LL;
      if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v43, &v50) && v43 )
      {
        v50 = qword_18059FE50;
        qword_18059FE50[0] = &ShellScreenClippingLogging::`vftable';
        qword_18059FE68 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FE50, qword_18059FE68, v35);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18059FE50);
      }
      _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)v50 + 1), v84);
    }
    v82 = 3;
    if ( v79 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v78);
  }
  return 0LL;
}
