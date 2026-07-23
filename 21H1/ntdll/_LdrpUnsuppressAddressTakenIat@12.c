/*
 * XREFs of _LdrpUnsuppressAddressTakenIat@12 @ 0x4B3345D2
 * Callers:
 *     _LdrResolveDelayLoadedAPI@24 @ 0x4B2CCA20 (_LdrResolveDelayLoadedAPI@24.c)
 *     _LdrpWriteBackProtectedDelayLoad@20 @ 0x4B2CFDFF (_LdrpWriteBackProtectedDelayLoad@20.c)
 *     _LdrpDoPostSnapWork@4 @ 0x4B2D0C67 (_LdrpDoPostSnapWork@4.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 * Callees:
 *     _LdrImageDirectoryEntryToLoadConfig@4 @ 0x4B2BA82F (_LdrImageDirectoryEntryToLoadConfig@4.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _bsearch_s @ 0x4B2F8220 (_bsearch_s.c)
 *     _RtlGuardGrantSuppressedCallAccess@12 @ 0x4B363AA3 (_RtlGuardGrantSuppressedCallAccess@12.c)
 *     _RtlValidateUserCallTarget@8 @ 0x4B363B20 (_RtlValidateUserCallTarget@8.c)
 */

int __fastcall LdrpUnsuppressAddressTakenIat(PVOID BaseOfImage, unsigned int a2, PIMAGE_NT_HEADERS a3)
{
  int v3; // ebx
  _DWORD *Config; // eax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int *v8; // edi
  int v9; // ecx
  PIMAGE_NT_HEADERS v10; // eax
  bool v11; // zf
  unsigned int v12; // esi
  unsigned int v13; // eax
  rsize_t v15; // [esp-8h] [ebp-48h]
  int (__cdecl *v16)(void *, const void *, const void *); // [esp+0h] [ebp-40h]
  void *v17; // [esp+4h] [ebp-3Ch]
  PIMAGE_NT_HEADERS OutHeaders; // [esp+10h] [ebp-30h] BYREF
  unsigned int *v19; // [esp+14h] [ebp-2Ch] BYREF
  PVOID BaseOfImagea; // [esp+18h] [ebp-28h]
  _BYTE v21[4]; // [esp+1Ch] [ebp-24h] BYREF
  int v22; // [esp+20h] [ebp-20h]
  int v23; // [esp+24h] [ebp-1Ch]
  _BYTE v24[4]; // [esp+28h] [ebp-18h] BYREF
  _DWORD Key[4]; // [esp+2Ch] [ebp-14h] BYREF

  BaseOfImagea = BaseOfImage;
  v3 = 0;
  memset(Key, 0, sizeof(Key));
  v19 = 0;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImagea);
  if ( !Config )
    return v3;
  if ( *Config < 0x70u )
    return v3;
  v6 = Config[27];
  if ( !v6 )
    return v3;
  if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) == 0 )
    return v3;
  v7 = Config[22];
  if ( (v7 & 0x4000) == 0 )
    return v3;
  v8 = (unsigned int *)Config[26];
  v9 = (v7 >> 28) + 4;
  v23 = v9;
  OutHeaders = *(PIMAGE_NT_HEADERS *)((char *)v8 + v9 * (v6 - 1));
  if ( !a2 )
    a2 = *v8;
  v10 = a3;
  if ( !a3 )
  {
    v10 = OutHeaders;
    a3 = OutHeaders;
  }
  if ( *v8 <= (unsigned int)v10 && a2 <= (unsigned int)OutHeaders && (unsigned int)v10 >= a2 )
  {
    if ( *v8 >= a2 )
      goto LABEL_17;
    Key[0] = a2;
    HIDWORD(v15) = &v19;
    LODWORD(v15) = LdrpTargetCompare;
    v19 = v8;
    v11 = bsearch_s(Key, v8, __PAIR64__(v9, v6), v15, v16, v17) == 0;
    v10 = a3;
    if ( !v11 || (PIMAGE_NT_HEADERS)a2 != a3 )
    {
      v8 = v19;
LABEL_17:
      v12 = 0;
      while ( v12 < (unsigned int)v10 && v12 < (unsigned int)OutHeaders )
      {
        v13 = v12;
        v12 = *v8;
        if ( v13 >= *v8 )
          return -1073741701;
        v22 = *(_DWORD *)((char *)BaseOfImagea + v12);
        if ( RtlValidateUserCallTarget(v22, v21) != 1 && (v21[0] & 0x10) != 0 )
        {
          v3 = RtlGuardGrantSuppressedCallAccess(v24);
          if ( v3 < 0 )
            return v3;
        }
        v8 = (unsigned int *)((char *)v8 + v23);
        v10 = a3;
      }
      return v3;
    }
  }
  return 0;
}
