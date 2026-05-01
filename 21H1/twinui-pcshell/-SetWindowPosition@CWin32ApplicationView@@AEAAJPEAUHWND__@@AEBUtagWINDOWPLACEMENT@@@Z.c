/*
 * XREFs of ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z @ 0x180171344
 * Callers:
 *     ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180170EE0 (-SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BA68 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18000DC90 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::SetWindowPosition(
        CWin32ApplicationView *this,
        HWND a2,
        const struct tagWINDOWPLACEMENT *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // ebx
  const char *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  CWin32ApplicationView *v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  CWin32ApplicationView *v15; // [rsp+68h] [rbp+38h] BYREF

  v13 = this;
  if ( a3->showCmd == 3 )
  {
    v13 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v14);
    if ( v14 )
    {
      v5 = *(_QWORD *)(v14 + 48);
      v6 = *(_QWORD *)(v5 + 776);
      if ( v6 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(v5 + 776));
      v11 = 0LL;
      v15 = v13;
      v13 = (CWin32ApplicationView *)v6;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    }
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v14);
    v7 = (*(__int64 (__fastcall **)(CWin32ApplicationView *, HWND))(*(_QWORD *)v13 + 40LL))(v13, a2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CE,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    return 0LL;
  }
  if ( SetWindowPlacement(a2, a3) )
    return 0LL;
  if ( GetLastError() != 5 )
  {
    v10 = 1002LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
             v9);
  }
  if ( a3->showCmd == 1 || a3->showCmd == 4 )
    goto LABEL_18;
  if ( a3->showCmd != 6 )
  {
    if ( a3->showCmd != 9 )
    {
      v10 = 995LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v10,
               (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
               v9);
    }
LABEL_18:
    if ( !PostMessageW(a2, 0x112u, 0xF120uLL, 0LL) )
    {
      v10 = 992LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v10,
               (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
               v9);
    }
    return 0LL;
  }
  if ( !PostMessageW(a2, 0x112u, 0xF020uLL, 0LL) )
  {
    v10 = 987LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
             v9);
  }
  return 0LL;
}
