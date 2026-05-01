/*
 * XREFs of ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x1800B68CC
 * Callers:
 *     ?IsPPIWin32VtcSidebarPresentInLayout@TabletModePositioner@@AEAA_NXZ @ 0x1800B89BC (-IsPPIWin32VtcSidebarPresentInLayout@TabletModePositioner@@AEAA_NXZ.c)
 *     ?_IsViewDefaultVTCApp@PPIWin32VtcLayoutOperation@@MEAA_NPEAUIApplicationView@@@Z @ 0x1800BAE90 (-_IsViewDefaultVTCApp@PPIWin32VtcLayoutOperation@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800BC19C (-GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1803915C0 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x180402080 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800B6614 (-FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x1800B67F4 (-GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

char __fastcall PPISideBarHelpers::IsSideBarView(struct IApplicationView *a1)
{
  unsigned int ActivationFactory; // eax
  unsigned int v2; // eax
  const char *v4; // [rsp+28h] [rbp-48h]
  const char *v5; // [rsp+28h] [rbp-48h]
  _BYTE v6[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  HWND v8; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( (int)PPISideBarHelpers::GetWindowfromView(a1, &v8) >= 0 )
  {
    v7 = 0LL;
    v6[0] = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.Vtc.Win32VtcView",
      0x22u,
      0x21u);
    ActivationFactory = RoGetActivationFactory(v10, &GUID_24d7c183_14a3_5525_b34b_e90a5af9e8e7, &v7);
    wil::details::in1diag3::FailFast_IfFailedMsg(
      retaddr,
      (void *)0x2F,
      (unsigned int)"internal\\shell\\private\\inc\\PPISideBarHelpers.h",
      (const char *)ActivationFactory,
      (__int64)"Do not use PPIWin32VtcLayoutOperation on platforms without win32 vtc",
      v4);
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v7 + 56LL))(v7, (unsigned int)v8, v6);
    wil::details::in1diag3::FailFast_IfFailedMsg(
      retaddr,
      (void *)0x30,
      (unsigned int)"internal\\shell\\private\\inc\\PPISideBarHelpers.h",
      (const char *)v2,
      (__int64)"Do not use PPIWin32VtcLayoutOperation on platforms without win32 vtc",
      v5);
    if ( v6[0] )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
      return 1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  }
  return 0;
}
