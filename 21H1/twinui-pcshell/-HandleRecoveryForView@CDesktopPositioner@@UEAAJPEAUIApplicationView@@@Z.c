/*
 * XREFs of ?HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803CB350
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18002C9BC (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180047E3C (-_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::HandleRecoveryForView(CDesktopPositioner *this, struct IApplicationView *a2)
{
  CDesktopPositioner *v3; // rsi
  int updated; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationViewOperation *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = (CDesktopPositioner *)((char *)this - 136);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  updated = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(v3, a2, &v9);
  v5 = updated;
  if ( updated >= 0 )
  {
    updated = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                a2,
                v9);
    v5 = updated;
    if ( updated >= 0 )
    {
      updated = CDesktopPositioner::_UpdateViewTabState(v3, a2);
      v5 = updated;
      if ( updated >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 978LL;
    }
    else
    {
      v6 = 974LL;
    }
  }
  else
  {
    v6 = 973LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)updated);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return v5;
}
