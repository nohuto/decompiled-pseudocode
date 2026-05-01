/*
 * XREFs of ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x1802B80DC
 * Callers:
 *     ??$MakeAndInitialize@VWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802AF044 (--$MakeAndInitialize@VWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     _Init_thread_footer @ 0x18008E0E8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E150 (_Init_thread_header.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18014F4C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x1802AF11C (--$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@De.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x18046BFC8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18046C03C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall WindowEventDispatcher::RuntimeClassInitialize(void **this)
{
  int v2; // eax
  int v3; // eax
  CCriticalFailureHandler *v4; // rcx
  void *v5; // rcx
  int v6; // eax
  CCriticalFailureHandler *v7; // rcx
  const char *v8; // r9
  __int64 result; // rax
  unsigned __int64 *v10; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WindowEventDispatcher *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL);
  if ( dword_1805CE780 > v2 )
  {
    Init_thread_header(&dword_1805CE780);
    if ( dword_1805CE780 == -1 )
    {
      xmmword_1805CE1A0 = SID_WindowEventDispatcher;
      xmmword_1805CE1B0 = 0LL;
      xmmword_1805CE1C0 = (__int128)SID_ViewEventDispatcher;
      xmmword_1805CE1D0 = 0LL;
      xmmword_1805CE1E0 = xmmword_1805379D8;
      xmmword_1805CE1F0 = 0LL;
      xmmword_1805CE200 = (__int128)SID_ForegroundViewManager;
      xmmword_1805CE210 = 0LL;
      Init_thread_footer(&dword_1805CE780);
    }
  }
  try
  {
    v3 = CImmersiveShellComponent::RegisterServiceInformation(
           (CImmersiveShellComponent *)(this + 16),
           (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_1805CE1A0,
           4LL);
    LODWORD(v13) = v3;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v4, (int *)&v13);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v3 = (int)v13;
    }
    if ( v3 < 0 && v3 != -2147024882 && v3 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v4,
        (int *)&v13,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x41u,
        v10,
        v11);
      v3 = (int)v13;
    }
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        66LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v3);
    v13 = (WindowEventDispatcher *)this;
    v5 = this[39];
    this[39] = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<WindowManagerBridge,IWindowManagerBridge,WindowEventDispatcher *>(
           this + 39,
           &v13);
    LODWORD(v13) = v6;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v7, (int *)&v13);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v6 = (int)v13;
    }
    if ( v6 < 0 && v6 != -2147024882 && v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v7,
        (int *)&v13,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x47u,
        v10,
        v11);
      v6 = (int)v13;
    }
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        72LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4C,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v8);
  }
  return result;
}
