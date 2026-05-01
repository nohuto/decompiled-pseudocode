/*
 * XREFs of ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x1802F3960
 * Callers:
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x1802F0D34 (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@Co_ea_1802F0D34.c)
 *     ??R_lambda_0b0ea29adb38baec39914485464e8775_@@QEBAXXZ @ 0x1802FCC14 (--R_lambda_0b0ea29adb38baec39914485464e8775_@@QEBAXXZ.c)
 *     ??R_lambda_5e3471c756f87189046196c55c94088a_@@QEBAXXZ @ 0x1802FCE20 (--R_lambda_5e3471c756f87189046196c55c94088a_@@QEBAXXZ.c)
 *     ??R_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@QEBAXXZ @ 0x1802FD010 (--R_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_@@QEBAXXZ.c)
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator() @ 0x1802FD5D0 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--operator().c)
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1803028D0 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     _lambda_61aef9b7069e9b07cc0657df3b99dbfa_::operator() @ 0x18030FA04 (_lambda_61aef9b7069e9b07cc0657df3b99dbfa_--operator().c)
 *     _lambda_7e6d277de2b049706e6768307ccc7deb_::operator() @ 0x18030FB48 (_lambda_7e6d277de2b049706e6768307ccc7deb_--operator().c)
 *     _lambda_adedda421da4a00589298a86f7993fb7_::operator() @ 0x18030FC94 (_lambda_adedda421da4a00589298a86f7993fb7_--operator().c)
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x180310C70 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x180319D84 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 *     _lambda_d1cd94c5db2d714c4aabf0680fb425d1_::operator() @ 0x18031F388 (_lambda_d1cd94c5db2d714c4aabf0680fb425d1_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::IWindow::Content::get(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, &v4);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    __debugbreak();
  }
  v2 = __abi_winrt_ptr_ctor(v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v2;
}
