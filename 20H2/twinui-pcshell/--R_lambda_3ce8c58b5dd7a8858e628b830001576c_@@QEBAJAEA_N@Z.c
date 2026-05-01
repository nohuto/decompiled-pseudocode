/*
 * XREFs of ??R_lambda_3ce8c58b5dd7a8858e628b830001576c_@@QEBAJAEA_N@Z @ 0x1800AEA54
 * Callers:
 *     ?IsStartMenuSuppressedByShellLauncher@@YA_NXZ @ 0x1800AEBE0 (-IsStartMenuSuppressedByShellLauncher@@YA_NXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801AD4A4 (--$ActivateInstance@V-$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_3ce8c58b5dd7a8858e628b830001576c_::operator()(__int64 a1, bool *a2)
{
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64 *); // rdi
  int v7; // eax
  __int64 v8; // rdx
  char v10; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v11[7]; // [rsp+21h] [rbp-3Fh] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *a2 = 0;
  v13 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Shell.ShellLauncher.ShellLauncherManager",
    0x3Au,
    0x39u);
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>>(
         v15,
         &v13);
  if ( v3 >= 0 )
  {
    v10 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 56LL))(v13, &v10);
    v3 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (__int64)"onecoreuap\\internal\\shell\\inc\\devicelockdownhelpers.h",
        (const char *)(unsigned int)v4);
      goto LABEL_15;
    }
    if ( !v10 )
    {
      v3 = 0;
      goto LABEL_15;
    }
    v12 = 0LL;
    v5 = v13;
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v7 = v6(v5, 0LL, &v12);
    v3 = v7;
    if ( v7 >= 0 )
    {
      if ( !v12 )
      {
        v3 = -2147024882;
LABEL_14:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        goto LABEL_15;
      }
      v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 160LL))(v12, v11);
      v3 = v7;
      if ( v7 >= 0 )
      {
        *a2 = v11[0] != 0;
        v3 = 0;
        goto LABEL_14;
      }
      v8 = 71LL;
    }
    else
    {
      v8 = 68LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\internal\\shell\\inc\\devicelockdownhelpers.h",
      (const char *)(unsigned int)v7);
    goto LABEL_14;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return (unsigned int)v3;
}
