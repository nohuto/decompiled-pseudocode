/*
 * XREFs of sub_18000736C @ 0x18000736C
 * Callers:
 *     sub_1800077B0 @ 0x1800077B0 (sub_1800077B0.c)
 *     sub_180007840 @ 0x180007840 (sub_180007840.c)
 * Callees:
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 *     sub_18002A46C @ 0x18002A46C (sub_18002A46C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18000736C(__int64 a1, DWORD a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // eax
  HKEY hKey; // [rsp+30h] [rbp-18h] BYREF
  HKEY phkResult; // [rsp+38h] [rbp-10h] BYREF
  void *retaddr; // [rsp+58h] [rbp+10h]
  __int64 Type; // [rsp+60h] [rbp+18h] BYREF
  char v12; // [rsp+69h] [rbp+21h]
  DWORD cbData; // [rsp+70h] [rbp+28h] BYREF
  int Data; // [rsp+78h] [rbp+30h] BYREF

  Type = a1;
  if ( !a2 )
    return 0LL;
  v4 = RpcImpersonateClient(0LL);
  if ( v4 )
    return sub_18000A4C0(
             retaddr,
             499LL,
             "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             v4);
  v12 = 1;
  phkResult = 0LL;
  v5 = RegOpenCurrentUser(0x20019u, &phkResult);
  if ( v5 )
  {
    v6 = sub_18000A4C0(
           retaddr,
           504LL,
           "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
           v5);
  }
  else
  {
    hKey = 0LL;
    v7 = RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Multimedia\\Audio", 0, 1u, &hKey);
    if ( v7 )
    {
      v6 = sub_18000A4C0(
             retaddr,
             507LL,
             "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             v7);
    }
    else
    {
      LODWORD(Type) = 4;
      cbData = 4;
      if ( RegQueryValueExW(hKey, L"AccessibilityMonoMixState", 0LL, (LPDWORD)&Type, (LPBYTE)&Data, &cbData)
        || (_DWORD)Type != 4
        || cbData != 4 )
      {
        Data = 0;
      }
      sub_18002A46C(a2);
      v6 = 0;
    }
    if ( hKey )
      RegCloseKey(hKey);
  }
  if ( phkResult )
    RegCloseKey(phkResult);
  RpcRevertToSelf();
  return v6;
}
