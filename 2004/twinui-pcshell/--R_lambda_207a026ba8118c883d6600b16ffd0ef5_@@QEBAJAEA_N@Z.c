/*
 * XREFs of ??R_lambda_207a026ba8118c883d6600b16ffd0ef5_@@QEBAJAEA_N@Z @ 0x1800959B8
 * Callers:
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1801AFBBC (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801AD8D4 (--$ActivateInstance@V-$ComPtr@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _lambda_207a026ba8118c883d6600b16ffd0ef5_::operator()(__int64 a1, _BYTE *a2)
{
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD); // rdi
  int v7; // eax
  void (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  char v12; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v13[7]; // [rsp+21h] [rbp-4Fh] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h] BYREF
  void (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v16 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Shell.ShellLauncher.ShellLauncherManager",
    0x3Au,
    0x39u);
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>>(
         v18,
         &v16);
  if ( v3 >= 0 )
  {
    v12 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 56LL))(v16, &v12);
    v3 = v4;
    if ( v4 >= 0 )
    {
      if ( v12 )
      {
        v15 = 0LL;
        v5 = v16;
        v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 48LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
        v7 = v6(v5, 0LL, &v15);
        v3 = v7;
        if ( v7 >= 0 )
        {
          v8 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
          if ( v15 )
          {
            v14 = 0LL;
            v9 = **v15;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
            v9(v8, &GUID_6ac643cc_a2fb_4acd_af83_309fba378992, &v14);
            if ( v14 )
            {
              v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 48LL))(v14, v13);
              v3 = v10;
              if ( v10 >= 0 )
              {
                if ( !v13[0] )
                  *a2 = 1;
                v3 = 0;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x2A,
                  (__int64)"onecoreuap\\internal\\shell\\inc\\devicelockdownhelpers.h",
                  (const char *)(unsigned int)v10);
              }
            }
            else
            {
              v3 = -2147024882;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
          }
          else
          {
            v3 = -2147024882;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x24,
            (__int64)"onecoreuap\\internal\\shell\\inc\\devicelockdownhelpers.h",
            (const char *)(unsigned int)v7);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      }
      else
      {
        *a2 = 0;
        v3 = 0;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (__int64)"onecoreuap\\internal\\shell\\inc\\devicelockdownhelpers.h",
        (const char *)(unsigned int)v4);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return (unsigned int)v3;
}
