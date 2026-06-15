/*
 * XREFs of ?DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x18003E400
 * Callers:
 *     <none>
 * Callees:
 *     ?close_reset@?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@SAXPEAUHKEY__@@@Z @ 0x18000DF04 (-close_reset@-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral_constan.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18003E9BC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::DoesProfileExistInStore(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this,
        const unsigned __int16 *a2)
{
  char v3; // r14
  signed int v4; // ebx
  char v5; // si
  void *v6; // rdi
  LSTATUS v7; // eax
  LSTATUS v8; // eax
  LPVOID pv[3]; // [rsp+38h] [rbp-18h] BYREF
  HKEY hKey; // [rsp+80h] [rbp+30h] BYREF
  HKEY phkResult; // [rsp+90h] [rbp+40h] BYREF

  v3 = 0;
  hKey = 0LL;
  memset(pv, 0, sizeof(pv));
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         pv,
         L"%s\\%s",
         *((_QWORD *)this + 1),
         L"Configs");
  v5 = 1;
  if ( v4 >= 0 )
  {
    if ( hKey )
      wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>::close_reset(hKey);
    v6 = pv[0];
    v7 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, (LPCWSTR)pv[0], 0, 0x20019u, &hKey);
    if ( v7 )
    {
      v4 = (unsigned __int16)v7 | 0x80070000;
      if ( v7 <= 0 )
        v4 = v7;
      if ( v6 )
        CoTaskMemFree(v6);
      if ( hKey )
        RegCloseKey(hKey);
    }
    else
    {
      phkResult = 0LL;
      v8 = RegOpenKeyExW(hKey, a2, 0, 0x20019u, &phkResult);
      if ( v8 )
      {
        v4 = (unsigned __int16)v8 | 0x80070000;
        if ( v8 <= 0 )
          v4 = v8;
        if ( phkResult )
          RegCloseKey(phkResult);
        if ( v6 )
          CoTaskMemFree(v6);
        if ( hKey )
          RegCloseKey(hKey);
      }
      else
      {
        v3 = 1;
        if ( phkResult )
          RegCloseKey(phkResult);
        if ( v6 )
          CoTaskMemFree(v6);
        if ( hKey )
          RegCloseKey(hKey);
        v4 = 0;
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
  if ( v4 < 0 || !v3 )
    return 0;
  return v5;
}
