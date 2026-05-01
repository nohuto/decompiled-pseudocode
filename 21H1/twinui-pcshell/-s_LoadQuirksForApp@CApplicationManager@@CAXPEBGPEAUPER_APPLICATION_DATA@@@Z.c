/*
 * XREFs of ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18001DFC8
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180046B14 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x18001E974 (-StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002A5A0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180050190 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180061400 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800727A0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800743C8 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800743C8.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801217A4 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall CApplicationManager::s_LoadQuirksForApp(const unsigned __int16 *a1, struct PER_APPLICATION_DATA *a2)
{
  bool *v4; // rsi
  int IsEnabledForPackage4; // eax
  unsigned int v6; // ebx
  void *v7; // rbx
  HANDLE ProcessHeap; // rax
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  void **v12; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+60h] [rbp-A0h]
  int *v15; // [rsp+68h] [rbp-98h]
  int *v16; // [rsp+70h] [rbp-90h]
  int v17; // [rsp+78h] [rbp-88h] BYREF
  char v18; // [rsp+7Ch] [rbp-84h]
  _BYTE v19[32]; // [rsp+80h] [rbp-80h] BYREF
  int v20; // [rsp+A0h] [rbp-60h] BYREF
  const char *v21; // [rsp+A8h] [rbp-58h]
  LPVOID lpMem; // [rsp+B0h] [rbp-50h]
  char v23; // [rsp+B8h] [rbp-48h]
  __int64 v24; // [rsp+C0h] [rbp-40h]
  _BYTE v25[144]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v26; // [rsp+158h] [rbp+58h] BYREF
  __int128 v27; // [rsp+160h] [rbp+60h]
  __int64 v28; // [rsp+170h] [rbp+70h] BYREF
  int v29; // [rsp+180h] [rbp+80h] BYREF
  char *v30; // [rsp+188h] [rbp+88h]
  int v31; // [rsp+190h] [rbp+90h]
  char *v32; // [rsp+198h] [rbp+98h]
  int v33; // [rsp+1A0h] [rbp+A0h]
  char *v34; // [rsp+1A8h] [rbp+A8h]
  int v35; // [rsp+1B0h] [rbp+B0h]
  char *v36; // [rsp+1B8h] [rbp+B8h]
  int v37; // [rsp+1C0h] [rbp+C0h]
  char *v38; // [rsp+1C8h] [rbp+C8h]
  int v39; // [rsp+1D0h] [rbp+D0h]
  char *v40; // [rsp+1D8h] [rbp+D8h]
  int v41; // [rsp+1E0h] [rbp+E0h]
  char *v42; // [rsp+1E8h] [rbp+E8h]
  int v43; // [rsp+1F0h] [rbp+F0h]
  char *v44; // [rsp+1F8h] [rbp+F8h]
  int v45; // [rsp+200h] [rbp+100h]
  char *v46; // [rsp+208h] [rbp+108h]
  int v47; // [rsp+210h] [rbp+110h]
  char *v48; // [rsp+218h] [rbp+118h]
  int v49; // [rsp+220h] [rbp+120h]
  char *v50; // [rsp+228h] [rbp+128h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  v24 = 1LL;
  v13[0] = 0LL;
  v13[1] = &v12;
  v13[2] = 0LL;
  v15 = &v20;
  v14 = 0;
  v16 = &v17;
  v17 = 0;
  v21 = "LoadQuirksForPackage";
  v18 = 0;
  v23 = 0;
  v20 = 0;
  lpMem = 0LL;
  v26 = 0LL;
  memset_0(v25, 0, sizeof(v25));
  v28 = 0LL;
  v27 = 0LL;
  v12 = &CAppManagerTelemetry::LoadQuirksForPackage::`vftable';
  CAppManagerTelemetry::LoadQuirksForPackage::StartActivity((CAppManagerTelemetry::LoadQuirksForPackage *)&v12, a1);
  v29 = 589824;
  v32 = (char *)a2 + 27;
  v4 = (bool *)a2 + 28;
  v30 = (char *)a2 + 28;
  v34 = (char *)a2 + 29;
  v31 = 589825;
  v36 = (char *)a2 + 30;
  v33 = 589826;
  v38 = (char *)a2 + 31;
  v35 = 327684;
  v40 = (char *)a2 + 32;
  v37 = 589830;
  v42 = (char *)a2 + 33;
  v44 = (char *)a2 + 34;
  v46 = (char *)a2 + 35;
  v48 = (char *)a2 + 36;
  v50 = (char *)a2 + 37;
  v39 = 589829;
  v41 = 589827;
  v43 = 589828;
  v45 = 589832;
  v47 = 589840;
  v49 = 589841;
  IsEnabledForPackage4 = QuirkIsEnabledForPackage4(0LL, a1, 0LL, &v29);
  v6 = IsEnabledForPackage4;
  if ( IsEnabledForPackage4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x203A,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)IsEnabledForPackage4,
      11);
  if ( byte_18059E9D0 )
  {
    fPending = 0;
    if ( (int)SHRegGetDWORD(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationView",
                L"DisableWin8AppCompatBehavior",
                (unsigned int *)&fPending) < 0 )
      byte_18059E9D0 = 0;
    else
      *v4 = fPending != 0;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v12, v6);
  v12 = &CAppManagerTelemetry::LoadQuirksForPackage::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v12);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v28);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v26);
  if ( v23 )
  {
    v7 = lpMem;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v7);
    v23 = 0;
  }
  lpMem = 0LL;
  if ( v17 == 1 )
  {
    v17 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_18059FE50;
      qword_18059FE50[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FE68 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FE50, qword_18059FE68, v9);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18059FE50);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v19);
  }
  v17 = 3;
  if ( v14 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
}
