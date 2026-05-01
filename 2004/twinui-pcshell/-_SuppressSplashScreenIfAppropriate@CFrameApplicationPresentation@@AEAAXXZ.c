/*
 * XREFs of ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800274B8
 * Callers:
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x180083D70 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1800272D8 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800277FC (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003044C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@.c)
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x1800509E4 (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z @ 0x180071DB4 (-StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180072EC0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800762AC (--4-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800804A4 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800804A4.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180166B2C (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018A214 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018A298 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindow.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x18018A864 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 */

void __fastcall CFrameApplicationPresentation::_SuppressSplashScreenIfAppropriate(
        CFrameApplicationPresentation *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r15d
  int v7; // eax
  unsigned int v8; // ebx
  HWND v9; // r8
  const unsigned __int16 *v10; // rdx
  bool v11; // zf
  void *v12; // rbx
  HANDLE ProcessHeap; // rax
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v15; // rbx
  HANDLE v16; // rax
  void (*v17)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v18; // rbx
  HANDLE v19; // rax
  void (*v20)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  unsigned int v21; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  void **v24; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v25[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+60h] [rbp-A0h]
  int *v27; // [rsp+68h] [rbp-98h]
  int *v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h] BYREF
  char v30; // [rsp+7Ch] [rbp-84h]
  _BYTE v31[32]; // [rsp+80h] [rbp-80h] BYREF
  int v32; // [rsp+A0h] [rbp-60h] BYREF
  const char *v33; // [rsp+A8h] [rbp-58h]
  LPVOID v34; // [rsp+B0h] [rbp-50h]
  char v35; // [rsp+B8h] [rbp-48h]
  __int64 v36; // [rsp+C0h] [rbp-40h]
  _BYTE v37[144]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v38; // [rsp+158h] [rbp+58h] BYREF
  __int128 v39; // [rsp+160h] [rbp+60h]
  __int64 v40; // [rsp+170h] [rbp+70h] BYREF
  void **v41; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v42[24]; // [rsp+188h] [rbp+88h] BYREF
  int v43; // [rsp+1A0h] [rbp+A0h]
  int v44; // [rsp+1B8h] [rbp+B8h]
  _BYTE v45[48]; // [rsp+1C0h] [rbp+C0h] BYREF
  LPVOID v46; // [rsp+1F0h] [rbp+F0h]
  char v47; // [rsp+1F8h] [rbp+F8h]
  _BYTE v48[24]; // [rsp+298h] [rbp+198h] BYREF
  _BYTE v49[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  void **v50; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v51[24]; // [rsp+2C8h] [rbp+1C8h] BYREF
  int v52; // [rsp+2E0h] [rbp+1E0h]
  int v53; // [rsp+2F8h] [rbp+1F8h]
  _BYTE v54[48]; // [rsp+300h] [rbp+200h] BYREF
  LPVOID lpMem; // [rsp+330h] [rbp+230h]
  char v56; // [rsp+338h] [rbp+238h]
  _BYTE v57[24]; // [rsp+3D8h] [rbp+2D8h] BYREF
  _BYTE v58[16]; // [rsp+3F0h] [rbp+2F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+438h] [rbp+338h]

  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
    a2,
    a3);
  if ( *((_DWORD *)this + 56) != 1 || !*((_BYTE *)this + 556) || *((_DWORD *)this + 57) )
    return;
  if ( !*((_BYTE *)this + 557) )
  {
    LOBYTE(v4) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_WhenWindowExists>::GetImpl'::`2'::impl,
      v4);
  }
  v5 = **((_QWORD **)this + 13);
  if ( v5 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) )
  {
    v6 = 2;
  }
  else
  {
    if ( !*((_BYTE *)this + 557) )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression_AllApps>::GetImpl'::`2'::impl,
        0LL);
      goto LABEL_42;
    }
    v6 = 3;
  }
  v7 = CFrameApplicationPresentation::_QueueUnsuppressSplashScreenAfterTimeout(this);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x78C,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v7,
      v21);
LABEL_42:
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen((char *)this + 224, 0LL);
    return;
  }
  v8 = dword_1805CBA50;
  v25[1] = &v24;
  *((_DWORD *)this + 57) = 1;
  v27 = &v32;
  v25[0] = 0LL;
  v28 = &v29;
  v25[2] = 0LL;
  v33 = "SplashScreenSuppressed";
  v26 = 0;
  v29 = 0;
  v30 = 0;
  v35 = 0;
  v32 = 0;
  v34 = 0LL;
  v36 = 1LL;
  v38 = 0LL;
  memset_0(v37, 0, sizeof(v37));
  v9 = (HWND)*((_QWORD *)this + 16);
  v10 = (const unsigned __int16 *)*((_QWORD *)this + 75);
  v24 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  v39 = 0LL;
  v40 = 0LL;
  CFramePresentationTelemetry::SplashScreenSuppressed::StartActivity(
    (CFramePresentationTelemetry::SplashScreenSuppressed *)&v24,
    v10,
    v9,
    v6,
    v8);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v41,
    (__int64)&v24,
    0);
  v11 = *((_DWORD *)this + 66) == 0;
  v41 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v50,
    (__int64)this + 232,
    !v11);
  v50 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (char *)this + 232,
    &v41);
  v50 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v50);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v58);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v57);
  if ( v56 )
  {
    v12 = lpMem;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v12);
    v56 = 0;
  }
  lpMem = 0LL;
  if ( v53 == 1 )
  {
    v53 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1805CD110;
      qword_1805CD110[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CD128 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD110, qword_1805CD128, v14);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CD110);
    }
    _tlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)Context + 1), v54);
  }
  v53 = 3;
  if ( v52 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v51);
  v41 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v41);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v49);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v48);
  if ( v47 )
  {
    v15 = v46;
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v15);
    v47 = 0;
  }
  v46 = 0LL;
  if ( v44 == 1 )
  {
    v44 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1805CD110;
      qword_1805CD110[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CD128 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD110, qword_1805CD128, v17);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CD110);
    }
    _tlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)Context + 1), v45);
  }
  v44 = 3;
  if ( v43 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v42);
  v24 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v24);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v40);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v38);
  if ( v35 )
  {
    v18 = v34;
    v19 = GetProcessHeap();
    HeapFree(v19, 0, v18);
    v35 = 0;
  }
  v34 = 0LL;
  if ( v29 == 1 )
  {
    v29 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1805CD110;
      qword_1805CD110[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CD128 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD110, qword_1805CD128, v20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CD110);
    }
    _tlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)Context + 1), v31);
  }
  v29 = 3;
  if ( v26 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v25);
}
