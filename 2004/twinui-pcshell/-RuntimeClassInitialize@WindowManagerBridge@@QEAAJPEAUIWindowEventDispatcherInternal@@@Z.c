/*
 * XREFs of ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x1802D8D48
 * Callers:
 *     ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x1802AFA0C (--$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@De.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180093490 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_N.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180139C44 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18013C9FC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x18015A988 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??$?0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z @ 0x1802D4A60 (--$-0$0DK@@StringReference@Internal@Windows@@QEAA@AEAY0DK@$$CBG@Z.c)
 *     ??$?0$0DL@@StringReference@Internal@Windows@@QEAA@AEAY0DL@$$CBG@Z @ 0x1802D4AB8 (--$-0$0DL@@StringReference@Internal@Windows@@QEAA@AEAY0DL@$$CBG@Z.c)
 *     ?StartWindowWatcher@WindowManagerBridge@@AEAAJXZ @ 0x1802D91AC (-StartWindowWatcher@WindowManagerBridge@@AEAAJXZ.c)
 *     ?WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802D97BC (-WindowEventDispatcher_ConnectedToWindowManager@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall WindowManagerBridge::RuntimeClassInitialize(
        WindowManagerBridge *this,
        struct IWindowEventDispatcherInternal *a2)
{
  __int64 v3; // rdx
  wil::details *v4; // rcx
  wil::details *Event; // rdi
  __int64 v6; // r8
  const char *v7; // r9
  signed int LastErrorFailHr; // eax
  __int64 v9; // rdx
  wil::details *v10; // rcx
  wil::details *v11; // rdi
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // r8
  signed int v15; // eax
  const unsigned __int16 *v16; // rdx
  __int64 v17; // rcx
  HSTRING *v18; // rax
  int ActivationFactory; // eax
  const unsigned __int16 *v20; // rdx
  __int64 v21; // rcx
  HSTRING *v22; // rax
  int v23; // eax
  int started; // eax
  WindowManagerBridge *v26; // rbx
  CCriticalFailureHandler *v27; // rcx
  unsigned __int64 v28; // r9
  char v29; // al
  unsigned __int64 *v30; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v31; // [rsp+28h] [rbp-50h]
  __int64 v32; // [rsp+0h] [rbp-78h] BYREF
  WindowManagerBridge *v33; // [rsp+30h] [rbp-48h] BYREF
  wil::ResultException *v34; // [rsp+38h] [rbp-40h] BYREF
  HSTRING string[4]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v33 = this;
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
    (__int64 *)this + 35,
    (__int64)a2);
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 33,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v4, v3, v6, v7);
  }
  try
  {
    if ( LastErrorFailHr < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        53LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)LastErrorFailHr);
    v11 = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( v11 )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (wil::details **)this + 34,
        v11);
      v15 = 0;
    }
    else
    {
      v15 = wil::details::GetLastErrorFailHr(v10, v9, v12, v13);
    }
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        55LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v15);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::GetImpl'::`2'::impl,
      0,
      v14);
    v17 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v18 = Windows::Internal::StringReference::StringReference(string, (const unsigned __int16 (*)[58])v16);
    ActivationFactory = RoGetActivationFactory(*v18, &GUID_5e75aba7_c424_4076_9d47_409a1eda087f, (char *)this + 184);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        78LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)ActivationFactory);
    v21 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v22 = Windows::Internal::StringReference::StringReference(string, (const unsigned __int16 (*)[59])v20);
    v23 = RoGetActivationFactory(*v22, &GUID_882d9981_e3b3_4275_a857_00c3910fb5c3, (char *)this + 48);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        79LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v23);
    started = WindowManagerBridge::StartWindowWatcher(this);
    if ( started < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        83LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)started);
  }
  catch ( wil::ResultException *v34 )
  {
    v26 = v33;
    *((_DWORD *)v33 + 72) = *((_DWORD *)v34 + 7);
    wil::details::SetEvent(*((wil::details **)v26 + 33), &v32);
    v28 = *((unsigned int *)v26 + 72);
    LODWORD(v33) = *((_DWORD *)v26 + 72);
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v27, (int *)&v33);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v28 = (unsigned int)v33;
    }
    if ( (v28 & 0x80000000) == 0LL )
      goto LABEL_30;
    if ( (_DWORD)v28 != -2147024882 && (_DWORD)v28 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v27,
        (int *)&v33,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        0x5Eu,
        v30,
        v31);
      v28 = (unsigned int)v33;
    }
    if ( (v28 & 0x80000000) == 0LL )
LABEL_30:
      v29 = 1;
    else
      v29 = 0;
    if ( !v29 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        94LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)v28);
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_ConnectedToWindowManager();
  return 0LL;
}
