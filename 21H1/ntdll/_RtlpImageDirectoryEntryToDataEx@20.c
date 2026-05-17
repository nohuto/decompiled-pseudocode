/*
 * XREFs of _RtlpImageDirectoryEntryToDataEx@20 @ 0x4B2BE470
 * Callers:
 *     _LdrpPrepareImportAddressTableForSnap@4 @ 0x4B2B9C01 (_LdrpPrepareImportAddressTableForSnap@4.c)
 *     _LdrImageDirectoryEntryToLoadConfig@4 @ 0x4B2BA82F (_LdrImageDirectoryEntryToLoadConfig@4.c)
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _LdrpCfgProcessLoadConfig@12 @ 0x4B2CFEA0 (_LdrpCfgProcessLoadConfig@12.c)
 *     _LdrpHandleTlsData@4 @ 0x4B2D0CD1 (_LdrpHandleTlsData@4.c)
 *     _LdrpGetImportDescriptorForSnap@4 @ 0x4B2E5CCD (_LdrpGetImportDescriptorForSnap@4.c)
 *     _RtlComputeImportTableHash@12 @ 0x4B33E550 (_RtlComputeImportTableHash@12.c)
 * Callees:
 *     _RtlpImageDirectoryEntryToData64@24 @ 0x4B2A7346 (_RtlpImageDirectoryEntryToData64@24.c)
 *     _RtlAddressInSectionTable@12 @ 0x4B2B95F0 (_RtlAddressInSectionTable@12.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 */

int __fastcall RtlpImageDirectoryEntryToDataEx(unsigned int a1, char a2, unsigned __int16 a3, _DWORD *a4, int *a5)
{
  unsigned int v5; // ebx
  int result; // eax
  int v7; // edx
  __int16 v8; // ax
  unsigned int v9; // edi
  bool v10; // zf
  int v11; // eax
  int v12; // [esp+8h] [ebp-8h] BYREF
  char v13; // [esp+Fh] [ebp-1h]

  v5 = a1;
  v13 = a2;
  v12 = 0;
  *a5 = 0;
  if ( (a1 & 3) != 0 )
  {
    if ( (a1 & 1) != 0 )
      v13 = 0;
    v5 = a1 & 0xFFFFFFFC;
  }
  result = RtlImageNtHeaderEx(1, v5, 0, 0, &v12);
  v7 = v12;
  if ( !v12 )
    return result;
  v8 = *(_WORD *)(v12 + 24);
  if ( v8 != 267 )
  {
    if ( v8 == 523 )
      return RtlpImageDirectoryEntryToData64(v5, v13, a3, a4, v12, a5);
    return -1073741811;
  }
  if ( (unsigned int)a3 >= *(_DWORD *)(v12 + 116) )
    return -1073741811;
  v9 = *(_DWORD *)(v12 + 8 * a3 + 120);
  if ( !v9 )
    return -1073741822;
  v10 = v13 == 0;
  *a4 = *(_DWORD *)(v12 + 8 * a3 + 124);
  if ( v10 && v9 >= *(_DWORD *)(v7 + 84) )
  {
    v11 = RtlAddressInSectionTable(v7, v5, v9);
    *a5 = v11;
    if ( v11 )
      return 0;
    return -1073741811;
  }
  *a5 = v9 + v5;
  return 0;
}
