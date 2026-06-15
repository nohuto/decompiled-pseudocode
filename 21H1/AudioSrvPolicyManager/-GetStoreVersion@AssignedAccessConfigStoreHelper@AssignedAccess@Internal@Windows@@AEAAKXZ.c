/*
 * XREFs of ?GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ @ 0x18003D9D8
 * Callers:
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x18003D2F0 (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 * Callees:
 *     ?close_reset@?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@SAXPEAUHKEY__@@@Z @ 0x18000DF04 (-close_reset@-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral_constan.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::GetStoreVersion(LPCWSTR *this)
{
  unsigned int v1; // ebx
  unsigned int Data; // [rsp+60h] [rbp+18h] BYREF
  DWORD cbData; // [rsp+68h] [rbp+20h] BYREF
  DWORD Type; // [rsp+70h] [rbp+28h] BYREF
  HKEY hKey; // [rsp+78h] [rbp+30h] BYREF

  hKey = 0LL;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, *this, 0, 0x20019u, &hKey)
    || (Data = 0, cbData = 4, RegQueryValueExW(hKey, L"Version", 0LL, &Type, (LPBYTE)&Data, &cbData))
    || Type != 4 )
  {
    v1 = 0;
  }
  else
  {
    v1 = Data;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return v1;
}
