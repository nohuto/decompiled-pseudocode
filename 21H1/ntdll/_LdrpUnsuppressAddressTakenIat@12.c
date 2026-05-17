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

int __fastcall LdrpUnsuppressAddressTakenIat(char *a1, unsigned int a2, unsigned int a3)
{
  int v3; // ebx
  _DWORD *Config; // eax
  rsize_t v6; // edx
  unsigned int v7; // ecx
  unsigned int *v8; // edi
  rsize_t v9; // ecx
  unsigned int v10; // eax
  bool v11; // zf
  unsigned int v12; // esi
  unsigned int v13; // eax
  unsigned int v15; // [esp+10h] [ebp-30h] BYREF
  unsigned int *Context; // [esp+14h] [ebp-2Ch] BYREF
  char *v17; // [esp+18h] [ebp-28h]
  _BYTE v18[4]; // [esp+1Ch] [ebp-24h] BYREF
  int v19; // [esp+20h] [ebp-20h]
  rsize_t v20; // [esp+24h] [ebp-1Ch]
  _BYTE v21[4]; // [esp+28h] [ebp-18h] BYREF
  _DWORD Key[4]; // [esp+2Ch] [ebp-14h] BYREF

  v17 = a1;
  v3 = 0;
  memset(Key, 0, sizeof(Key));
  Context = 0;
  RtlImageNtHeaderEx(3, (unsigned int)a1, 0, 0, &v15);
  Config = LdrImageDirectoryEntryToLoadConfig(v17);
  if ( !Config )
    return v3;
  if ( *Config < 0x70u )
    return v3;
  v6 = Config[27];
  if ( !v6 )
    return v3;
  if ( (*(_WORD *)(v15 + 94) & 0x4000) == 0 )
    return v3;
  v7 = Config[22];
  if ( (v7 & 0x4000) == 0 )
    return v3;
  v8 = (unsigned int *)Config[26];
  v9 = (v7 >> 28) + 4;
  v20 = v9;
  v15 = *(unsigned int *)((char *)v8 + v9 * (v6 - 1));
  if ( !a2 )
    a2 = *v8;
  v10 = a3;
  if ( !a3 )
  {
    v10 = v15;
    a3 = v15;
  }
  if ( *v8 <= v10 && a2 <= v15 && v10 >= a2 )
  {
    if ( *v8 >= a2 )
      goto LABEL_17;
    Key[0] = a2;
    Context = v8;
    v11 = bsearch_s(Key, v8, v6, v9, (_CoreCrtSecureSearchSortCompareFunction)LdrpTargetCompare, &Context) == 0;
    v10 = a3;
    if ( !v11 || a2 != a3 )
    {
      v8 = Context;
LABEL_17:
      v12 = 0;
      while ( v12 < v10 && v12 < v15 )
      {
        v13 = v12;
        v12 = *v8;
        if ( v13 >= *v8 )
          return -1073741701;
        v19 = *(_DWORD *)&v17[v12];
        if ( RtlValidateUserCallTarget(v19, v18) != 1 && (v18[0] & 0x10) != 0 )
        {
          v3 = RtlGuardGrantSuppressedCallAccess(v21);
          if ( v3 < 0 )
            return v3;
        }
        v8 = (unsigned int *)((char *)v8 + v20);
        v10 = a3;
      }
      return v3;
    }
  }
  return 0;
}
