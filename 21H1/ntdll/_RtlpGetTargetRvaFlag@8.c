/*
 * XREFs of _RtlpGetTargetRvaFlag@8 @ 0x4B363B9B
 * Callers:
 *     _RtlGuardIsExportSuppressedAddress@4 @ 0x4B363AFE (_RtlGuardIsExportSuppressedAddress@4.c)
 *     _RtlpGuardIsSuppressedAddress@4 @ 0x4B363CAC (_RtlpGuardIsSuppressedAddress@4.c)
 * Callees:
 *     _LdrImageDirectoryEntryToLoadConfig@4 @ 0x4B2BA82F (_LdrImageDirectoryEntryToLoadConfig@4.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _bsearch_s @ 0x4B2F8220 (_bsearch_s.c)
 */

char __fastcall RtlpGetTargetRvaFlag(unsigned int a1, _BYTE *a2)
{
  void *v3; // esi
  _DWORD *Config; // eax
  unsigned int v5; // ecx
  rsize_t v6; // edx
  const void *v7; // eax
  rsize_t v8; // ecx
  _BYTE *v9; // eax
  void *v11; // [esp+Ch] [ebp-24h] BYREF
  char v12; // [esp+14h] [ebp-1Ch]
  _BYTE *v13; // [esp+18h] [ebp-18h]
  _DWORD Key[4]; // [esp+1Ch] [ebp-14h] BYREF

  v13 = a2;
  memset(Key, 0, sizeof(Key));
  if ( NtQueryVirtualMemory(-1, a1, 6, (int)&v11, 12, 0) < 0 )
    return 0;
  v3 = v11;
  if ( !v11 )
    return 0;
  if ( (v12 & 3) != 0 )
    return 0;
  if ( a1 < (unsigned int)v11 )
    return 0;
  Config = LdrImageDirectoryEntryToLoadConfig(v11);
  if ( !Config )
    return 0;
  if ( *Config < 0x5Cu )
    return 0;
  v5 = Config[22];
  v6 = Config[21];
  if ( (v5 & 0x400) == 0 )
    return 0;
  v7 = (const void *)Config[20];
  if ( !v7 )
    return 0;
  v8 = (v5 >> 28) + 4;
  if ( v8 <= 4 )
    return 0;
  Key[0] = a1 - (_DWORD)v3;
  v9 = bsearch_s(Key, v7, v6, v8, (_CoreCrtSecureSearchSortCompareFunction)RtlpTargetCompare, 0);
  if ( !v9 )
    return 0;
  *v13 = v9[4];
  return 1;
}
