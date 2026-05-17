/*
 * XREFs of LdrInitSecurityCookie @ 0x180010628
 * Callers:
 *     LdrpProcessMappedModule @ 0x18000F9AC (LdrpProcessMappedModule.c)
 *     InitSecurityCookie @ 0x1800D0574 (InitSecurityCookie.c)
 *     AvrfMiniLoadDll @ 0x1800DB920 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpFetchAddressOfSecurityCookie @ 0x18001076C (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpGenSecurityCookie @ 0x18001404C (LdrpGenSecurityCookie.c)
 *     ZwProtectVirtualMemory @ 0x18009DAB0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrInitSecurityCookie(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
{
  _DWORD *v5; // rax
  _QWORD *v7; // rdi
  __int64 AddressOfSecurityCookie; // rax
  int v9; // esi
  unsigned __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v15; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+30h] BYREF

  v5 = 0LL;
  v13 = 0LL;
  v7 = a3;
  if ( a3 )
  {
    v9 = 1;
  }
  else
  {
    AddressOfSecurityCookie = LdrpFetchAddressOfSecurityCookie(a1, a2, &v12, &v13);
    v9 = v12;
    v7 = (_QWORD *)AddressOfSecurityCookie;
    v5 = v13;
  }
  if ( a5 )
    *a5 = v5;
  if ( v5 && *v5 >= 0x94u && (v5[36] & 0x800) != 0 )
    return 1LL;
  if ( v7 && *v7 == 0x2B992DDFA232LL )
  {
    v10 = (HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16) ^ LdrpGenSecurityCookie(v7)) & 0xFFFFFFFFFFFFLL;
    if ( v10 == 0x2B992DDFA232LL || !v10 )
      v10 = 0x2B992DDFA233LL;
    if ( !v9 )
    {
      *v7 = v10;
      return 1LL;
    }
    v15 = v7;
    v14 = 8LL;
    if ( (int)ZwProtectVirtualMemory(-1LL, &v15, &v14, 4LL, &v16) >= 0 )
    {
      *v7 = v10;
      ZwProtectVirtualMemory(-1LL, &v15, &v14, v16, &v16);
      return 1LL;
    }
  }
  return 0LL;
}
