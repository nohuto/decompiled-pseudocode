/*
 * XREFs of ?DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x180038890
 * Callers:
 *     <none>
 * Callees:
 *     ?close_reset@?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@SAXPEAUHKEY__@@@Z @ 0x180008988 (-close_reset@-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral_constan.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::DoesProfileExistInStore(
        LPCWSTR *this,
        const unsigned __int16 *a2)
{
  char v3; // di
  LSTATUS v4; // eax
  char v5; // si
  signed int v6; // ebx
  LSTATUS v7; // eax
  HKEY v8; // rdi
  const wchar_t **v9; // rbx
  HKEY phkResult[2]; // [rsp+30h] [rbp-30h] BYREF
  const wchar_t *v12; // [rsp+40h] [rbp-20h] BYREF
  int v13; // [rsp+48h] [rbp-18h]
  const wchar_t *v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+58h] [rbp-8h]
  char vars0; // [rsp+60h] [rbp+0h] BYREF
  DWORD Type; // [rsp+90h] [rbp+30h] BYREF
  DWORD cbData; // [rsp+A0h] [rbp+40h] BYREF
  HKEY hKey; // [rsp+A8h] [rbp+48h] BYREF

  phkResult[1] = HKEY_DYN_DATA|0x7FFFFFF8LL;
  v3 = 0;
  hKey = 0LL;
  v4 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, this[1], 0, 0x20019u, &hKey);
  v5 = 1;
  if ( v4 )
  {
    v6 = (unsigned __int16)v4 | 0x80070000;
    if ( v4 <= 0 )
      v6 = v4;
    if ( hKey )
      RegCloseKey(hKey);
  }
  else
  {
    phkResult[0] = 0LL;
    v7 = RegOpenKeyExW(hKey, a2, 0, 0x20019u, phkResult);
    if ( v7 )
    {
      v6 = (unsigned __int16)v7 | 0x80070000;
      if ( v7 <= 0 )
        v6 = v7;
      if ( phkResult[0] )
        RegCloseKey(phkResult[0]);
      if ( hKey )
        RegCloseKey(hKey);
    }
    else
    {
      v8 = phkResult[0];
      v12 = L"AppUserModelId";
      v13 = 1;
      v14 = L"ConfigLevel";
      v15 = 4;
      v9 = &v12;
      while ( !RegQueryValueExW(v8, *v9, 0LL, &Type, 0LL, &cbData) && Type == *((_DWORD *)v9 + 2) && cbData )
      {
        v9 += 2;
        if ( v9 == (const wchar_t **)&vars0 )
        {
          v3 = 1;
          goto LABEL_22;
        }
      }
      v3 = 0;
LABEL_22:
      if ( phkResult[0] )
        RegCloseKey(phkResult[0]);
      if ( hKey )
        RegCloseKey(hKey);
      v6 = 0;
    }
  }
  if ( v6 < 0 || !v3 )
    return 0;
  return v5;
}
