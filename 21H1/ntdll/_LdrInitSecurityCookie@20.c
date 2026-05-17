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

int __stdcall LdrInitSecurityCookie(int *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // eax
  int *AddressOfSecurityCookie; // edi
  int v5; // ebx
  int v6; // esi
  int v8; // [esp+8h] [ebp-14h] BYREF
  int *v9; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-8h] BYREF
  int v12; // [esp+18h] [ebp-4h] BYREF

  v3 = 0;
  AddressOfSecurityCookie = a1;
  v12 = 0;
  if ( a1 )
  {
    v12 = 1;
  }
  else
  {
    AddressOfSecurityCookie = (int *)LdrpFetchAddressOfSecurityCookie(&v8, &v12);
    v3 = (_DWORD *)v12;
    v12 = v8;
  }
  if ( a3 )
    *a3 = v3;
  if ( v3 && *v3 >= 0x5Cu && (v3[22] & 0x800) != 0 )
    return 1;
  if ( !AddressOfSecurityCookie )
    return 0;
  v5 = *AddressOfSecurityCookie;
  if ( *AddressOfSecurityCookie != -1153374642 && v5 != 47936 )
    return 0;
  v6 = a2 ^ LdrpGenSecurityCookie((int)AddressOfSecurityCookie);
  if ( v5 == 47936 )
    v6 = (unsigned __int16)v6;
  if ( v6 == -1153374642 )
    v6 = -1153374641;
  if ( !v6 || v6 == 47936 )
    v6 = 47937;
  if ( v12 )
  {
    v9 = AddressOfSecurityCookie;
    v10 = 4;
    if ( (int)ZwProtectVirtualMemory(-1, &v9, &v10, 4, &v11) < 0 )
      return 0;
    *AddressOfSecurityCookie = v6;
    ZwProtectVirtualMemory(-1, &v9, &v10, v11, &v11);
  }
  else
  {
    *AddressOfSecurityCookie = v6;
  }
  return 1;
}
