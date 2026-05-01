/*
 * XREFs of ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18002BC24
 * Callers:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18002BAC8 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x1803616B8 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180361848 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1803619B4 (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Floating_to_wstring@N@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBGN@Z @ 0x180359704 (--$_Floating_to_wstring@N@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@PE.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180363478 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP(KeyboardHosting::TabTipAdapter *this)
{
  double v2; // xmm6_8
  int *v4; // rax
  HSTRING v5; // rbx
  int v6; // eax
  int v7[2]; // [rsp+20h] [rbp-88h] BYREF
  int v8[2]; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-60h] BYREF
  HSTRING v11; // [rsp+60h] [rbp-48h]
  _BYTE v12[32]; // [rsp+68h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = *(double *)(*(_QWORD *)(*((_QWORD *)this + 13) + 216LL) + 184LL);
  if ( v2 != *((double *)this + 15) )
  {
    std::_Floating_to_wstring<double>(v8);
    v4 = v8;
    if ( v9 >= 8 )
      v4 = *(int **)v8;
    *(_QWORD *)v7 = v4;
    v5 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v12, v7) + 24);
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"OverrideScaleFactor", 0x14u, 0x13u);
    v6 = KeyboardHosting::TabTipAdapter::SetShellPreference(this, v11, v5);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x94B,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v6,
        v7[0]);
    std::wstring::_Tidy_deallocate(v8);
    *((double *)this + 15) = v2;
  }
  return 0LL;
}
