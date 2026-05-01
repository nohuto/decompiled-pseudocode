/*
 * XREFs of ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800284A0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     _lambda_8f853f3308fdbebd25aa75747bd09082_::_lambda_8f853f3308fdbebd25aa75747bd09082_ @ 0x180025B70 (_lambda_8f853f3308fdbebd25aa75747bd09082_--_lambda_8f853f3308fdbebd25aa75747bd09082_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0b125c00b27fbf4663240ba082ce6596___ @ 0x180025CE0 (Windows--Internal--ComTaskPool--QueueTask__lambda_0b125c00b27fbf4663240ba082ce6596___.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180026100 (--4-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1800272D8 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800277FC (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002A5CC (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002AEA0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18002AFA4 (--1-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002B014 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z @ 0x180071CD8 (-Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180072EC0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800804A4 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800804A4.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008C450 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180145EB0 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180146E74 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180146E74.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801517E0 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     WPP_SF_Ld @ 0x180164DF8 (WPP_SF_Ld.c)
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180166B2C (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@434AEBU?$_tlgWrapSz@G@@@Z @ 0x1801888D0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U-$_tlgWrapSz@G@@@-$_tlgWrit.c)
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x1801892F0 (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x18018A864 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation::SetSystemVisual(__int64 a1, unsigned int a2)
{
  __int64 *v4; // rbx
  char v5; // r13
  __int64 v6; // rdi
  __int64 v7; // r14
  int v8; // r12d
  int *v9; // rbx
  _DWORD *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  bool v13; // r12
  unsigned int *v14; // r14
  __int64 *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  char v22; // di
  volatile signed __int32 *v23; // rdx
  void (*v25)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void (*v26)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v27; // rdi
  HANDLE ProcessHeap; // rax
  void (*v29)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v30; // rbx
  int v31; // eax
  __int64 v32; // rdx
  void *v33; // rbx
  void *v34; // rbx
  HANDLE v35; // rax
  void *v36; // rbx
  HANDLE v37; // rax
  void (*v38)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v39; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL v41; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v42; // [rsp+58h] [rbp-A8h] BYREF
  int v43; // [rsp+5Ch] [rbp-A4h] BYREF
  DWORD CurrentThreadId; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL v45; // [rsp+64h] [rbp-9Ch] BYREF
  int v46; // [rsp+68h] [rbp-98h] BYREF
  WINBOOL v47; // [rsp+6Ch] [rbp-94h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-90h] BYREF
  LPVOID v49; // [rsp+78h] [rbp-88h] BYREF
  LPVOID v50; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  LPVOID v52; // [rsp+90h] [rbp-70h] BYREF
  __int64 v53; // [rsp+98h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-58h] BYREF
  PSRWLOCK v56; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v57; // [rsp+B8h] [rbp-48h]
  PSRWLOCK SRWLock; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v61[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-18h]
  unsigned int v63; // [rsp+F0h] [rbp-10h] BYREF
  bool v64; // [rsp+F4h] [rbp-Ch]
  char v65; // [rsp+F5h] [rbp-Bh]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  void **v67; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v68[3]; // [rsp+108h] [rbp+8h] BYREF
  int v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  int *v71; // [rsp+130h] [rbp+30h]
  int v72; // [rsp+138h] [rbp+38h] BYREF
  char v73; // [rsp+13Ch] [rbp+3Ch]
  int v74; // [rsp+160h] [rbp+60h]
  __int128 v75; // [rsp+168h] [rbp+68h]
  char v76; // [rsp+178h] [rbp+78h]
  __int64 v77; // [rsp+180h] [rbp+80h]
  _BYTE v78[144]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v79; // [rsp+218h] [rbp+118h]
  __int128 v80; // [rsp+220h] [rbp+120h]
  __int64 v81; // [rsp+230h] [rbp+130h]
  void **v82; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v83[3]; // [rsp+248h] [rbp+148h] BYREF
  int v84; // [rsp+260h] [rbp+160h]
  int *v85; // [rsp+268h] [rbp+168h]
  int *v86; // [rsp+270h] [rbp+170h]
  int v87; // [rsp+278h] [rbp+178h] BYREF
  char v88; // [rsp+27Ch] [rbp+17Ch]
  _BYTE v89[32]; // [rsp+280h] [rbp+180h] BYREF
  int v90; // [rsp+2A0h] [rbp+1A0h] BYREF
  const char *v91; // [rsp+2A8h] [rbp+1A8h]
  LPVOID v92; // [rsp+2B0h] [rbp+1B0h]
  char v93; // [rsp+2B8h] [rbp+1B8h]
  __int64 v94; // [rsp+2C0h] [rbp+1C0h]
  _BYTE v95[144]; // [rsp+2C8h] [rbp+1C8h] BYREF
  LPVOID v96; // [rsp+358h] [rbp+258h]
  __int128 v97; // [rsp+360h] [rbp+260h]
  void *v98; // [rsp+370h] [rbp+270h]
  void **v99; // [rsp+380h] [rbp+280h] BYREF
  _BYTE v100[24]; // [rsp+388h] [rbp+288h] BYREF
  int v101; // [rsp+3A0h] [rbp+2A0h]
  int v102; // [rsp+3B8h] [rbp+2B8h]
  _BYTE v103[48]; // [rsp+3C0h] [rbp+2C0h] BYREF
  LPVOID lpMem; // [rsp+3F0h] [rbp+2F0h]
  char v105; // [rsp+3F8h] [rbp+2F8h]
  _BYTE v106[24]; // [rsp+498h] [rbp+398h] BYREF
  _BYTE v107[16]; // [rsp+4B0h] [rbp+3B0h] BYREF
  _QWORD v108[2]; // [rsp+4C0h] [rbp+3C0h] BYREF
  _BYTE v109[16]; // [rsp+4D0h] [rbp+3D0h] BYREF
  _QWORD v110[40]; // [rsp+4E0h] [rbp+3E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+668h] [rbp+568h]

  v57 = a2;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15LL,
      &WPP_5ec67ad958ea315cfc78e4414cad3743_Traceguids,
      a2,
      *(_DWORD *)(a1 + 48));
  v4 = *(__int64 **)(a1 + 112);
  v5 = 0;
  v83[0] = 0LL;
  v83[1] = &v82;
  v83[2] = 0LL;
  v84 = 0;
  v85 = &v90;
  v86 = &v87;
  v87 = 0;
  v88 = 0;
  v93 = 0;
  v90 = 0;
  v91 = "SetSystemVisual";
  v92 = 0LL;
  v94 = 1LL;
  v96 = 0LL;
  memset_0(v95, 0, sizeof(v95));
  v97 = 0LL;
  v98 = 0LL;
  v82 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  v6 = *(_QWORD *)(a1 + 600);
  v7 = *v4;
  v8 = *(_DWORD *)(a1 + 48);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    &v82,
    &SRWLock);
  v9 = v86;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CD110;
    qword_1805CD110[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD128 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD110, qword_1805CD128, v25);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CD110);
  }
  v10 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v10 > 5u && tlgKeywordOn((__int64)v10, 0x200000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v9 + 2));
  else
    *(_OWORD *)(v9 + 2) = 0LL;
  *v9 = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v49 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v41, &v49) && v41 )
  {
    v49 = qword_1805CD110;
    qword_1805CD110[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD128 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD110, qword_1805CD128, v26);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CD110);
  }
  v11 = *((_QWORD *)v49 + 1);
  if ( *(_DWORD *)v11 > 5u
    && (*(_QWORD *)(v11 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v11 + 24) & 0x200000000000LL) == *(_QWORD *)(v11 + 24) )
  {
    v59 = v6;
    v42 = a2;
    v60 = v7;
    v43 = v8;
    CurrentThreadId = GetCurrentThreadId();
    v61[0] = 0LL;
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v82);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v11,
      (int)&dword_1804FBEC2,
      (__int64)v61,
      (__int64)&CurrentThreadId,
      (__int64)&v43,
      (__int64)&v60,
      (__int64)&v42,
      (__int64)&v59);
  }
  if ( !v84 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v83);
  v12 = **(_QWORD **)(a1 + 104);
  if ( v12 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v12 + 208LL))(v12, *(_QWORD *)(a1 + 128), 3LL);
  if ( *(_DWORD *)(a1 + 228) != 1 || a2 == 1 )
  {
    v13 = 0;
  }
  else
  {
    v13 = *(_BYTE *)(a1 + 52) != 0;
    if ( *(_DWORD *)(a1 + 552) == 1 )
      v5 = 1;
  }
  v14 = (unsigned int *)(a1 + 224);
  v61[1] = a1;
  v62 = 0LL;
  v15 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, &v54);
  v16 = 0LL;
  v53 = 0LL;
  if ( &v53 != v15 )
  {
    v16 = *v15;
    v53 = *v15;
    *v15 = 0LL;
  }
  v62 = v16;
  v17 = v54;
  if ( v54 )
  {
    v54 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( a2 != *v14 )
  {
    *(_BYTE *)(a1 + 544) = 0;
    if ( *(_DWORD *)(a1 + 228) == 1 )
    {
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)&v99,
        a1 + 232,
        **(_DWORD **)(a1 + 280) == 1);
      v99 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
      CFramePresentationTelemetry::SplashScreenSuppressed::Stop(
        (CFramePresentationTelemetry::SplashScreenSuppressed *)&v99,
        1u);
      v99 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v99);
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v107);
      wil::details::shared_buffer::reset((wil::details::shared_buffer *)v106);
      if ( v105 )
      {
        v27 = lpMem;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v27);
        v105 = 0;
      }
      lpMem = 0LL;
      if ( v102 == 1 )
      {
        v102 = 2;
        v50 = 0LL;
        if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v45, &v50) && v45 )
        {
          v50 = qword_1805CD110;
          qword_1805CD110[0] = &ShellScreenClippingLogging::`vftable';
          qword_1805CD128 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD110, qword_1805CD128, v29);
          InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CD110);
        }
        _tlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)v50 + 1), v103);
      }
      v102 = 3;
      if ( v101 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v100);
    }
    *(_DWORD *)(a1 + 228) = 0;
  }
  *v14 = a2;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, &v51);
  v18 = v51;
  if ( v51 != v16 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 624) + 520LL))(*(_QWORD *)(a1 + 624));
    v18 = v51;
  }
  if ( v18 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( a2 == 1 && *(_BYTE *)(a1 + 52) && *(_DWORD *)(a1 + 228) != 1 )
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(a1 + 224, 0LL);
  v63 = a2;
  v64 = v13;
  v65 = v5;
  v66 = a1;
  v67 = &wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v68[0] = 0LL;
  v68[1] = &v67;
  v68[2] = 0LL;
  v69 = 0;
  v70 = 0LL;
  wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v68);
  v71 = &v72;
  v72 = 0;
  v73 = 0;
  v76 = 0;
  v74 = 0;
  v75 = 0LL;
  v77 = 1LL;
  v79 = 0LL;
  memset_0(v78, 0, sizeof(v78));
  v80 = 0LL;
  v81 = 0LL;
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (__int64)&v67,
    (__int64)&v82);
  v67 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  if ( *(_DWORD *)(a1 + 56) == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FE,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v39);
    CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual((CFramePresentationTelemetry::SetSystemVisual *)&v67);
  }
  else
  {
    v55 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v55);
    v108[0] = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v108);
    v108[1] = a1;
    lambda_8f853f3308fdbebd25aa75747bd09082_::_lambda_8f853f3308fdbebd25aa75747bd09082_((__int64)v109, (__int64)&v63);
    v21 = Windows::Internal::ComTaskPool::QueueTask__lambda_0b125c00b27fbf4663240ba082ce6596___(
            v20,
            v19,
            *(_DWORD *)(a1 + 48),
            (__int64)v108);
    v110[0] = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v110);
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(v110);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v108);
    if ( v21 >= 0 )
      ++*(_DWORD *)(a1 + 212);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v55);
    v67 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v67);
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(&v67);
  }
  v82 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  v22 = 1;
  v23 = (volatile signed __int32 *)v98;
  if ( !v98 )
    goto LABEL_81;
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    &v82,
    &v56);
  v23 = (volatile signed __int32 *)v98;
  if ( !v98 || *(_DWORD *)v98 != 1 )
  {
    v22 = 0;
    if ( v98 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v98, 0xFFFFFFFF) == 1 )
      {
        v30 = v98;
        if ( v98 )
        {
          wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v98 + 8);
          operator delete(v30, (const struct std::nothrow_t *)0x100);
        }
      }
      v23 = 0LL;
      v98 = 0LL;
    }
  }
  if ( v56 )
  {
    ReleaseSRWLockExclusive(v56);
    v23 = (volatile signed __int32 *)v98;
  }
  if ( v22 )
  {
LABEL_81:
    if ( *v86 == 1 )
    {
      v31 = v86[21];
      v46 = v31;
      v32 = 2147942974LL;
      if ( v31 < 0 )
        v32 = (unsigned int)v31;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v86,
        v32,
        &v46);
      ((void (__fastcall *)(void ***))v82[1])(&v82);
      v23 = (volatile signed __int32 *)v98;
    }
  }
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23, 0xFFFFFFFF) == 1 )
    {
      v33 = v98;
      if ( v98 )
      {
        wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v98 + 8);
        operator delete(v33, (const struct std::nothrow_t *)0x100);
      }
    }
    v98 = 0LL;
  }
  if ( v96 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v96, 0xFFFFFFFF) == 1 )
    {
      v34 = v96;
      v35 = GetProcessHeap();
      HeapFree(v35, 0, v34);
    }
    v96 = 0LL;
    *(_QWORD *)&v97 = 0LL;
  }
  if ( v93 )
  {
    v36 = v92;
    v37 = GetProcessHeap();
    HeapFree(v37, 0, v36);
    v93 = 0;
  }
  v92 = 0LL;
  if ( v87 == 1 )
  {
    v87 = 2;
    v52 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v47, &v52) && v47 )
    {
      v52 = qword_1805CD110;
      qword_1805CD110[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CD128 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD110, qword_1805CD128, v38);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CD110);
    }
    _tlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)v52 + 1), v89);
  }
  v87 = 3;
  if ( v84 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v83);
  return 0LL;
}
