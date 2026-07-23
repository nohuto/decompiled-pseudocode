/*
 * XREFs of _LdrInitSecurityCookie@20 @ 0x4B2B9EDA
 * Callers:
 *     _LdrpProcessMappedModule@16 @ 0x4B2D05EC (_LdrpProcessMappedModule@16.c)
 *     _InitSecurityCookie@0 @ 0x4B331309 (_InitSecurityCookie@0.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 * Callees:
 *     _LdrpGenSecurityCookie@4 @ 0x4B2B9827 (_LdrpGenSecurityCookie@4.c)
 *     _LdrpFetchAddressOfSecurityCookie@16 @ 0x4B2B9F97 (_LdrpFetchAddressOfSecurityCookie@16.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

int __thiscall LdrInitSecurityCookie(void *this, unsigned int *a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // eax
  unsigned int *AddressOfSecurityCookie; // edi
  unsigned int v6; // ebx
  unsigned int v7; // esi
  int v9; // [esp+8h] [ebp-14h] BYREF
  PVOID BaseAddress; // [esp+Ch] [ebp-10h] BYREF
  ULONG_PTR RegionSize; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+18h] [ebp-4h] BYREF

  v4 = 0;
  AddressOfSecurityCookie = a2;
  v12 = 0;
  if ( a2 )
  {
    v12 = 1;
  }
  else
  {
    AddressOfSecurityCookie = (unsigned int *)LdrpFetchAddressOfSecurityCookie(this, (int)&v9, (int)&v12);
    v4 = (_DWORD *)v12;
    v12 = v9;
  }
  if ( a4 )
    *a4 = v4;
  if ( v4 && *v4 >= 0x5Cu && (v4[22] & 0x800) != 0 )
    return 1;
  if ( !AddressOfSecurityCookie )
    return 0;
  v6 = *AddressOfSecurityCookie;
  if ( *AddressOfSecurityCookie != -1153374642 && v6 != 47936 )
    return 0;
  v7 = a3 ^ LdrpGenSecurityCookie((int)AddressOfSecurityCookie);
  if ( v6 == 47936 )
    v7 = (unsigned __int16)v7;
  if ( v7 == -1153374642 )
    v7 = -1153374641;
  if ( !v7 || v7 == 47936 )
    v7 = 47937;
  if ( v12 )
  {
    BaseAddress = AddressOfSecurityCookie;
    LODWORD(RegionSize) = 4;
    if ( ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 4u, (PULONG)&RegionSize + 1) < 0 )
      return 0;
    *AddressOfSecurityCookie = v7;
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, HIDWORD(RegionSize), (PULONG)&RegionSize + 1);
  }
  else
  {
    *AddressOfSecurityCookie = v7;
  }
  return 1;
}
