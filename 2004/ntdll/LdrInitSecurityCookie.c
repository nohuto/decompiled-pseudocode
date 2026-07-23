/*
 * XREFs of LdrInitSecurityCookie @ 0x180010628
 * Callers:
 *     LdrpProcessMappedModule @ 0x18000F9AC (LdrpProcessMappedModule.c)
 *     InitSecurityCookie @ 0x1800D0394 (InitSecurityCookie.c)
 *     AvrfMiniLoadDll @ 0x1800DB580 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpFetchAddressOfSecurityCookie @ 0x18001076C (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpGenSecurityCookie @ 0x18001404C (LdrpGenSecurityCookie.c)
 *     ZwProtectVirtualMemory @ 0x18009D810 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrInitSecurityCookie(void *a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 a4, _QWORD *a5)
{
  unsigned __int64 *AddressOfSecurityCookie; // rdi
  int v7; // esi
  unsigned __int64 v8; // rbx
  int v10; // [rsp+30h] [rbp-20h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-8h] BYREF
  ULONG NewProtect; // [rsp+80h] [rbp+30h] BYREF

  AddressOfSecurityCookie = a3;
  if ( a3 )
  {
    v7 = 1;
  }
  else
  {
    v7 = v10;
    AddressOfSecurityCookie = (unsigned __int64 *)LdrpFetchAddressOfSecurityCookie(a1);
  }
  if ( a5 )
    *a5 = 0LL;
  if ( AddressOfSecurityCookie && *AddressOfSecurityCookie == 0x2B992DDFA232LL )
  {
    v8 = (HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16) ^ LdrpGenSecurityCookie(AddressOfSecurityCookie)) & 0xFFFFFFFFFFFFLL;
    if ( v8 == 0x2B992DDFA232LL || !v8 )
      v8 = 0x2B992DDFA233LL;
    if ( !v7 )
    {
      *AddressOfSecurityCookie = v8;
      return 1LL;
    }
    BaseAddress = AddressOfSecurityCookie;
    RegionSize = 8LL;
    if ( ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect) >= 0 )
    {
      *AddressOfSecurityCookie = v8;
      ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
      return 1LL;
    }
  }
  return 0LL;
}
