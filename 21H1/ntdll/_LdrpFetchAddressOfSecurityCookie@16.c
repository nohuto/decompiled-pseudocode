/*
 * XREFs of _LdrpFetchAddressOfSecurityCookie@16 @ 0x4B2B9F97
 * Callers:
 *     _LdrInitSecurityCookie@20 @ 0x4B2B9EDA (_LdrInitSecurityCookie@20.c)
 * Callees:
 *     _RtlSectionTableFromVirtualAddress@12 @ 0x4B2B9E97 (_RtlSectionTableFromVirtualAddress@12.c)
 *     _LdrImageDirectoryEntryToLoadConfig@4 @ 0x4B2BA82F (_LdrImageDirectoryEntryToLoadConfig@4.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 */

unsigned int __fastcall LdrpFetchAddressOfSecurityCookie(PVOID BaseOfImage, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *Config; // esi
  unsigned int v6; // edi
  PIMAGE_SECTION_HEADER v7; // eax
  void *v9; // [esp+0h] [ebp-14h]
  ULONG v10; // [esp+4h] [ebp-10h]
  PIMAGE_NT_HEADERS OutHeaders; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h]

  v12 = a2;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
  *a3 = 0;
  if ( Config
    && *Config >= 0x48u
    && (v6 = Config[15], v6 > (unsigned int)BaseOfImage)
    && v6 < (unsigned int)BaseOfImage + v12 - 4 )
  {
    v7 = RtlSectionTableFromVirtualAddress((PIMAGE_NT_HEADERS)(v6 - (_DWORD)BaseOfImage), v9, v10);
    if ( v7 && (v7->Characteristics & 0x80000000) == 0 )
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
