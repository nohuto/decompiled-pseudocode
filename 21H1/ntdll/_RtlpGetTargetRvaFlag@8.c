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

char __fastcall RtlpGetTargetRvaFlag(char *BaseAddress, _BYTE *a2)
{
  _BYTE *v3; // esi
  _DWORD *Config; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edx
  const void *v7; // eax
  unsigned int v8; // ecx
  _BYTE *v9; // eax
  ULONG_PTR *v11; // [esp+0h] [ebp-30h]
  int (__cdecl *v12)(void *, const void *, const void *); // [esp+0h] [ebp-30h]
  void *v13; // [esp+4h] [ebp-2Ch]
  PVOID MemoryInformation[2]; // [esp+Ch] [ebp-24h] BYREF
  char v15; // [esp+14h] [ebp-1Ch]
  _BYTE *v16; // [esp+18h] [ebp-18h]
  _DWORD Key[4]; // [esp+1Ch] [ebp-14h] BYREF

  v16 = a2;
  memset(Key, 0, sizeof(Key));
  if ( NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, BaseAddress, MemoryImageInformation, MemoryInformation, 0xCuLL, v11) < 0 )
    return 0;
  v3 = MemoryInformation[0];
  if ( !MemoryInformation[0] )
    return 0;
  if ( (v15 & 3) != 0 )
    return 0;
  if ( BaseAddress < MemoryInformation[0] )
    return 0;
  Config = LdrImageDirectoryEntryToLoadConfig(MemoryInformation[0]);
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
  Key[0] = BaseAddress - v3;
  v9 = bsearch_s(Key, v7, __PAIR64__(v8, v6), (unsigned int)RtlpTargetCompare, v12, v13);
  if ( !v9 )
    return 0;
  *v16 = v9[4];
  return 1;
}
