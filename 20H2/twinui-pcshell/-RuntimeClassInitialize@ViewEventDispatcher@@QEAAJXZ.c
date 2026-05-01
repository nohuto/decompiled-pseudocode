/*
 * XREFs of ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x1802A5974
 * Callers:
 *     ??$MakeAndInitialize@VViewEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18029E384 (--$MakeAndInitialize@VViewEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x18008E0E8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E150 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18014F4C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAVViewManagerBridge@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18029E498 (--$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJ.c)
 *     ?InternalRelease@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ @ 0x1802A3AE0 (-InternalRelease@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CUIPopupHelper@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A56A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CUIPopupHelper@@@details@wil@@QEAAX_NW4Re.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x18046BFC8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18046C03C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall ViewEventDispatcher::RuntimeClassInitialize(ViewEventDispatcher *this, __int64 a2, __int64 a3)
{
  CCriticalFailureHandler *v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v8; // rsi
  CCriticalFailureHandler *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 *v12; // [rsp+20h] [rbp-10h]
  unsigned __int64 *v13; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct ViewEventDispatcher *v15; // [rsp+48h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CUIPopupHelper>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetImpl'::`2'::impl,
    1u,
    a3);
  if ( dword_1805CE77C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805CE77C);
    if ( dword_1805CE77C == -1 )
    {
      xmmword_1805CE130 = SID_ViewEventDispatcher;
      xmmword_1805CE140 = 0LL;
      xmmword_1805CE150 = xmmword_1805379D8;
      xmmword_1805CE160 = 0LL;
      xmmword_1805CE170 = (__int128)SID_ForegroundViewManager;
      xmmword_1805CE180 = 0LL;
      Init_thread_footer(&dword_1805CE77C);
    }
  }
  v5 = CImmersiveShellComponent::RegisterServiceInformation(
         (ViewEventDispatcher *)((char *)this + 120),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_1805CE130,
         3LL);
  LODWORD(v15) = v5;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v4, (int *)&v15);
    v5 = (int)v15;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v5 < 0 )
  {
    if ( v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v4,
        (int *)&v15,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x3Eu,
        v12,
        v13);
      v5 = (int)v15;
    }
    if ( v5 < 0 )
    {
      v6 = 63LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  v8 = (_QWORD *)((char *)this + 496);
  v15 = this;
  Microsoft::WRL::ComPtr<ViewManagerBridge>::InternalRelease((__int64 *)this + 62);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<ViewManagerBridge,ViewManagerBridge,ViewEventDispatcher *>(
         (ViewManagerBridge **)this + 62,
         &v15);
  LODWORD(v15) = v5;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v9, (int *)&v15);
    v5 = (int)v15;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v5 < 0 )
  {
    if ( v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v9,
        (int *)&v15,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x44u,
        v12,
        v13);
      v5 = (int)v15;
    }
    if ( v5 < 0 )
    {
      v6 = 69LL;
      goto LABEL_12;
    }
  }
  v10 = *v8;
  if ( *v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*v8);
  v11 = *((_QWORD *)this + 63);
  *((_QWORD *)this + 63) = v10;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
