/*
 * XREFs of ?GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z @ 0x18018EE60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004B300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18004B300.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x18007E5C0 (-GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::GetSwitchWindow(
        CApplicationViewManager *this,
        struct IWin32ApplicationView *a2,
        HWND *a3)
{
  int SwitchWindow; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  CWin32ApplicationView *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CWin32ApplicationView *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  SwitchWindow = (**(__int64 (__fastcall ***)(struct IWin32ApplicationView *, GUID *, CWin32ApplicationView **))a2)(
                   a2,
                   &GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3,
                   &v10);
  v5 = SwitchWindow;
  if ( SwitchWindow >= 0 )
  {
    SwitchWindow = CWin32ApplicationView::GetSwitchWindow(v10, a3);
    v5 = SwitchWindow;
    if ( SwitchWindow >= 0 )
      goto LABEL_6;
    v6 = 689LL;
  }
  else
  {
    v6 = 687LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)SwitchWindow);
LABEL_6:
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release((__int64)v7);
  }
  return v5;
}
