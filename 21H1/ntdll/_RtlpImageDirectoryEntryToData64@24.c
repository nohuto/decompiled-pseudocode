/*
 * XREFs of _RtlpImageDirectoryEntryToData64@24 @ 0x4B2A7346
 * Callers:
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0 (_LdrpAccessResourceDataNoMultipleLanguage@16.c)
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _RtlpImageDirectoryEntryToDataEx@20 @ 0x4B2BE470 (_RtlpImageDirectoryEntryToDataEx@20.c)
 * Callees:
 *     _RtlAddressInSectionTable@12 @ 0x4B2B95F0 (_RtlAddressInSectionTable@12.c)
 */

int __fastcall RtlpImageDirectoryEntryToData64(
        char *BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        PIMAGE_NT_HEADERS NtHeaders,
        _DWORD *a6)
{
  ULONG VirtualAddress; // edi
  PVOID v8; // eax

  if ( a3 < NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
  {
    VirtualAddress = NtHeaders->OptionalHeader.DataDirectory[a3].VirtualAddress;
    if ( !VirtualAddress )
      return -1073741822;
    *a4 = NtHeaders->OptionalHeader.DataDirectory[a3].Size;
    if ( a2 || VirtualAddress < NtHeaders->OptionalHeader.SizeOfHeaders )
    {
      *a6 = &BaseOfImage[VirtualAddress];
      return 0;
    }
    v8 = RtlAddressInSectionTable(NtHeaders, BaseOfImage, VirtualAddress);
    *a6 = v8;
    if ( v8 )
      return 0;
  }
  return -1073741811;
}
