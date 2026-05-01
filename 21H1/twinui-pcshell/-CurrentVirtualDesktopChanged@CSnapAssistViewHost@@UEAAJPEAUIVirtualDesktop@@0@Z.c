/*
 * XREFs of ?CurrentVirtualDesktopChanged@CSnapAssistViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18036D1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIDismissAnimationController@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@@Details@12@@Z @ 0x18036C56C (--$As@UIDismissAnimationController@@@-$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBA.c)
 *     ??$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@P8IDismissAnimationController@@EAAXXZ@Z @ 0x18036C5F4 (--$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV-$ComPtr.c)
 */

__int64 __fastcall CSnapAssistViewHost::CurrentVirtualDesktopChanged(
        CSnapAssistViewHost *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<IDismissAnimationController>((_QWORD *)this + 4, &v6);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10C,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
      (const char *)(unsigned int)v3);
  AsyncControllerHelpers::CallControllerAsync<IDismissAnimationController,>(&v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return 0LL;
}
