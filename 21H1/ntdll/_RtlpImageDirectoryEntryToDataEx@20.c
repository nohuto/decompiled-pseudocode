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

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned int BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        _DWORD *a5)
{
  char *v5; // ebx
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v7; // edx
  WORD Magic; // ax
  ULONG v9; // edi
  bool v10; // zf
  PVOID v11; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [esp+8h] [ebp-8h] BYREF
  char v13; // [esp+Fh] [ebp-1h]

  v5 = (char *)BaseOfImage;
  v13 = a2;
  OutHeaders = 0;
  *a5 = 0;
  if ( (BaseOfImage & 3) != 0 )
  {
    if ( (BaseOfImage & 1) != 0 )
      v13 = 0;
    v5 = (char *)(BaseOfImage & 0xFFFFFFFC);
  }
  result = RtlImageNtHeaderEx(1u, v5, 0LL, &OutHeaders);
  v7 = OutHeaders;
  if ( !OutHeaders )
    return result;
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic != 267 )
  {
    if ( Magic == 523 )
      return RtlpImageDirectoryEntryToData64(v5, v13, a3, a4, OutHeaders, a5);
    return -1073741811;
  }
  if ( (unsigned int)a3 >= HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
    return -1073741811;
  v9 = *((_DWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3);
  if ( !v9 )
    return -1073741822;
  v10 = v13 == 0;
  *a4 = *((_DWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3 + 1);
  if ( v10 && v9 >= v7->OptionalHeader.SizeOfHeaders )
  {
    v11 = RtlAddressInSectionTable(v7, v5, v9);
    *a5 = v11;
    if ( v11 )
      return 0;
    return -1073741811;
  }
  *a5 = &v5[v9];
  return 0;
}
