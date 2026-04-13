/*
 * XREFs of ??$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherOptions@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004FB10
 * Callers:
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x18004D500 (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ActivateInstance<Windows::System::ILauncherOptions>(__int64 a1)
{
  HSTRING_HEADER *v2; // rax
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  _QWORD *v7; // [rsp+20h] [rbp-48h] BYREF
  const WCHAR *v8[2]; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER v9; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8[1] = (const WCHAR *)-2LL;
  v8[0] = L"Windows.System.LauncherOptions";
  v7 = 0LL;
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, v8);
  v3 = RoActivateInstance(v2[1].Reserved.Reserved1, &v7);
  v4 = retaddr;
  if ( v3 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x66A,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x18004FBEELL);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64))*v7)(v7, &GUID_bafa21d8_b071_4cd8_853e_341203e557d3, a1);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v5);
    goto LABEL_7;
  }
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v7 + 16LL))(v7, *v7);
  return a1;
}
