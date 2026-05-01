/*
 * XREFs of ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x180223FC0
 * Callers:
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x180220980 (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801503C4 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x18046A52C (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenWorkspace::Discover::GetApplicationUserModelIdFromLinkFile(
        CallerIdentity *string,
        HSTRING *a2,
        HSTRING *a3)
{
  signed int IsShellExperience; // ebx
  __int64 v6; // rdx
  const WCHAR *StringRawBuffer; // rax
  HRESULT v8; // eax
  HRESULT v9; // eax
  LPVOID v10; // rbx
  __int64 (__fastcall *v11)(LPVOID, void *, PCNZWCH *); // rdi
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  HRESULT v16; // eax
  LPVOID v18; // [rsp+30h] [rbp-D0h] BYREF
  void *ppv; // [rsp+38h] [rbp-C8h] BYREF
  PCNZWCH sourceString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  WCHAR Dst[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a2 = 0LL;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(string);
  if ( IsShellExperience < 0 )
  {
    v6 = 16LL;
    goto LABEL_3;
  }
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)string, 0LL);
  if ( ExpandEnvironmentStringsW(StringRawBuffer, Dst, 0x104u) )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v8 = SHCreateItemFromParsingName(Dst, 0LL, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
    IsShellExperience = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\utilities.cpp",
        (const char *)(unsigned int)v8);
LABEL_22:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      return (unsigned int)IsShellExperience;
    }
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v9 = CoCreateInstance(
           &GUID_660b90c8_73a9_4b58_8cae_355b7f55341b,
           0LL,
           3u,
           &GUID_21cbc515_2dde_4d66_8292_ba34bd25094a,
           &v18);
    IsShellExperience = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\utilities.cpp",
        (const char *)(unsigned int)v9);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      goto LABEL_22;
    }
    sourceString = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v10 = v18;
    v11 = *(__int64 (__fastcall **)(LPVOID, void *, PCNZWCH *))(*(_QWORD *)v18 + 120LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
    v12 = -1LL;
    v21 = -1LL;
    v22 = -1LL;
    v13 = v11(v10, ppv, &sourceString);
    IsShellExperience = v13;
    if ( v13 >= 0 )
    {
      if ( sourceString && *sourceString )
      {
        do
          ++v12;
        while ( sourceString[v12] );
        v16 = WindowsCreateString(sourceString, v12, a2);
        IsShellExperience = v16;
        if ( v16 >= 0 )
          goto LABEL_20;
        v14 = (unsigned int)v16;
        v15 = 34LL;
      }
      else
      {
        IsShellExperience = -2147024894;
        v14 = 2147942402LL;
        v15 = 41LL;
      }
    }
    else
    {
      v14 = (unsigned int)v13;
      v15 = 29LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\utilities.cpp",
      (const char *)v14);
LABEL_20:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
    goto LABEL_21;
  }
  IsShellExperience = ResultFromKnownLastError();
  if ( IsShellExperience >= 0 )
    return (unsigned int)IsShellExperience;
  v6 = 19LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\utilities.cpp",
    (const char *)(unsigned int)IsShellExperience);
  return (unsigned int)IsShellExperience;
}
