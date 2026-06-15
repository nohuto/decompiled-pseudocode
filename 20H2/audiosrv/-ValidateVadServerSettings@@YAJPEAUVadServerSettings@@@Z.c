/*
 * XREFs of ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x1800440A0
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x180001990 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetMixFormat @ 0x180011BE0 (AudioServerGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DE190 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800DEE70 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002A4D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     swprintf_s @ 0x18006AE64 (swprintf_s.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800BD99C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

__int64 __fastcall ValidateVadServerSettings(IID *a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v5; // rdx
  HRESULT v6; // eax
  LSTATUS v7; // eax
  int phkResult; // [rsp+20h] [rbp-E0h]
  int phkResulta; // [rsp+20h] [rbp-E0h]
  LPOLESTR lpsz; // [rsp+30h] [rbp-D0h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  IID rclsid; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t Buffer[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  if ( a1[3].Data1 >= 0x15 )
  {
    v5 = 1391LL;
    goto LABEL_11;
  }
  rclsid = a1[1];
  v2 = *(_QWORD *)&rclsid.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&rclsid.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v2 = *(_QWORD *)rclsid.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v2 )
    goto LABEL_5;
  lpsz = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpsz,
    0LL);
  v6 = StringFromCLSID(&rclsid, &lpsz);
  v3 = v6;
  if ( v6 >= 0 )
  {
    phkResulta = (int)lpsz;
    if ( swprintf_s(Buffer, 0x104uLL, L"%s\\%s", L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Containers\\") == -1 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x563,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x8007007ALL,
        phkResulta);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&lpsz);
      goto LABEL_16;
    }
    hKey = 0LL;
    v7 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, Buffer, 0, 0x20019u, &hKey);
    v3 = v7;
    if ( v7 >= 0 )
    {
      if ( hKey )
        RegCloseKey(hKey);
      if ( lpsz )
        CoTaskMemFree(lpsz);
LABEL_5:
      v3 = 0;
      goto LABEL_6;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x566,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v7,
      phkResult);
    if ( hKey )
      RegCloseKey(hKey);
    if ( lpsz )
      CoTaskMemFree(lpsz);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x560,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v6,
      phkResult);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&lpsz);
  }
LABEL_6:
  if ( v3 < 0 )
  {
LABEL_16:
    v5 = 1393LL;
    goto LABEL_11;
  }
  if ( *(_DWORD *)&a1[3].Data2 <= 3u )
    return 0LL;
  v5 = 1395LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x80070057LL,
    phkResult);
  return 2147942487LL;
}
