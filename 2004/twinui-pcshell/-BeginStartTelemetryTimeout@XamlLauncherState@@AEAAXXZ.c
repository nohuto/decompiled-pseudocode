/*
 * XREFs of ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1800528D8
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180055BF0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180051344 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180052AFC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x180060908 (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801A86EC (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall XamlLauncherState::BeginStartTelemetryTimeout(XamlLauncherState *this)
{
  struct _TP_TIMER **v1; // rdi
  PTP_TIMER ThreadpoolTimer; // rax
  const char *v4; // r9
  struct _TP_TIMER *v5; // rcx
  struct _TP_TIMER **v6; // rdi
  PTP_TIMER v7; // rax
  const char *v8; // r9
  struct _TP_TIMER *v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // cl
  struct _TP_TIMER **v12; // rdi
  PTP_TIMER v13; // rax
  const char *v14; // r9
  struct _TP_TIMER *v15; // rcx
  struct _TP_TIMER **v16; // rdi
  PTP_TIMER v17; // rax
  const char *v18; // r9
  struct _TP_TIMER *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _TP_TIMER **)((char *)this + 920);
  if ( !*((_QWORD *)this + 115) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_aa2cf3828d9244bdbf46fd61e18b6e20_::_lambda_invoker_cdecl_, this, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      ThreadpoolTimer);
    v5 = *v1;
    if ( *v1
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x445,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v4),
          (v5 = *v1) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)-20000000LL;
      SetThreadpoolTimer(v5, &pftDueTime, 0, 0x3E8u);
    }
  }
  v6 = (struct _TP_TIMER **)((char *)this + 928);
  if ( !*((_QWORD *)this + 116) )
  {
    v7 = CreateThreadpoolTimer(lambda_665c64ac43c225ea8e9358a4e95b62dc_::_lambda_invoker_cdecl_, this, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (char *)this + 928,
      v7);
    v9 = *v6;
    if ( *v6
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x45A,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v8),
          (v9 = *v6) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)(-10000000LL * *((unsigned int *)this + 17));
      SetThreadpoolTimer(v9, &pftDueTime, 0, 0x3E8u);
      if ( StartWindowTelemetry::IsEnabled(v11, v10) )
        XamlLauncherState::StartTrackingCpuUsageOfCriticalProcesses(this);
    }
  }
  v12 = (struct _TP_TIMER **)((char *)this + 936);
  if ( !*((_QWORD *)this + 117) )
  {
    v13 = CreateThreadpoolTimer(lambda_a719c80089d31377b5869cff445c0b02_::_lambda_invoker_cdecl_, this, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (char *)this + 936,
      v13);
    v15 = *v12;
    if ( *v12
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x475,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v14),
          (v15 = *v12) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)-100000000LL;
      SetThreadpoolTimer(v15, &pftDueTime, 0, 0x3E8u);
    }
  }
  v16 = (struct _TP_TIMER **)((char *)this + 944);
  if ( !*((_QWORD *)this + 118) )
  {
    v17 = CreateThreadpoolTimer(lambda_fcf0bcfa456be39992ce9a70dab7748d_::_lambda_invoker_cdecl_, this, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (char *)this + 944,
      v17);
    v19 = *v16;
    if ( *v16
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x48A,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v18),
          (v19 = *v16) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)-300000000LL;
      SetThreadpoolTimer(v19, &pftDueTime, 0, 0x3E8u);
    }
  }
}
