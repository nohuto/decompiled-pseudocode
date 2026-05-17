/*
 * XREFs of _LdrpFetchAddressOfSecurityCookie@16 @ 0x4B2B9F97
 * Callers:
 *     _LdrInitSecurityCookie@20 @ 0x4B2B9EDA (_LdrInitSecurityCookie@20.c)
 * Callees:
 *     _RtlSectionTableFromVirtualAddress@12 @ 0x4B2B9E97 (_RtlSectionTableFromVirtualAddress@12.c)
 *     _LdrImageDirectoryEntryToLoadConfig@4 @ 0x4B2BA82F (_LdrImageDirectoryEntryToLoadConfig@4.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 */

unsigned int __fastcall LdrpFetchAddressOfSecurityCookie(unsigned int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *Config; // esi
  unsigned int v6; // edi
  char *v7; // eax
  unsigned __int16 *v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h]

  v10 = a2;
  RtlImageNtHeaderEx(1, a1, 0, 0, &v9);
  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(a1);
  *a3 = 0;
  if ( Config && *Config >= 0x48u && (v6 = Config[15], v6 > a1) && v6 < a1 + v10 - 4 )
  {
    v7 = RtlSectionTableFromVirtualAddress(v9, v6 - a1);
    if ( v7 && *((int *)v7 + 9) >= 0 )
      *a3 = 1;
    if ( a4 )
      *a4 = Config;
    return v6;
  }
  else
  {
    if ( a4 )
    {
      if ( Config && *Config >= 4u )
        *a4 = Config;
      else
        *a4 = 0;
    }
    return 0;
  }
}
