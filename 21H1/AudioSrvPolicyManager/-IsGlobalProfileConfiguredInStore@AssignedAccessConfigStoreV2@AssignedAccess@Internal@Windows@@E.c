/*
 * XREFs of ?IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x18003E800
 * Callers:
 *     <none>
 * Callees:
 *     ?close_reset@?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@SAXPEAUHKEY__@@@Z @ 0x18000DF04 (-close_reset@-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral_constan.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18003E9BC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::IsGlobalProfileConfiguredInStore(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2 *this)
{
  char v1; // r14
  signed int v2; // ebx
  char v3; // si
  void *v4; // rdi
  LSTATUS v5; // eax
  LSTATUS v6; // eax
  LPVOID pv[3]; // [rsp+38h] [rbp-18h] BYREF
  DWORD cbData; // [rsp+80h] [rbp+30h] BYREF
  DWORD Type; // [rsp+88h] [rbp+38h] BYREF
  HKEY hKey; // [rsp+90h] [rbp+40h] BYREF

  v1 = 0;
  hKey = 0LL;
  memset(pv, 0, sizeof(pv));
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         pv,
         L"%s\\%s",
         *((_QWORD *)this + 1),
         L"Configs");
  v3 = 1;
  if ( v2 >= 0 )
  {
    if ( hKey )
      wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>::close_reset(hKey);
    v4 = pv[0];
    v5 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, (LPCWSTR)pv[0], 0, 0x20019u, &hKey);
    if ( v5 )
    {
      v2 = (unsigned __int16)v5 | 0x80070000;
      if ( v5 <= 0 )
        v2 = v5;
      if ( v4 )
        CoTaskMemFree(v4);
      if ( hKey )
        RegCloseKey(hKey);
    }
    else
    {
      v6 = RegQueryValueExW(hKey, L"GlobalProfileId", 0LL, &Type, 0LL, &cbData);
      if ( v6 )
      {
        v2 = (unsigned __int16)v6 | 0x80070000;
        if ( v6 <= 0 )
          v2 = v6;
        if ( v4 )
          CoTaskMemFree(v4);
        if ( hKey )
          RegCloseKey(hKey);
      }
      else
      {
        v1 = 1;
        if ( v4 )
          CoTaskMemFree(v4);
        if ( hKey )
          RegCloseKey(hKey);
        v2 = 0;
      }
    }
  }
  else
  {
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( hKey )
      RegCloseKey(hKey);
  }
  if ( v2 < 0 || !v1 )
    return 0;
  return v3;
}
