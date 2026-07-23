/*
 * XREFs of _RtlSectionTableFromVirtualAddress@12 @ 0x4B2B9E97
 * Callers:
 *     _RtlAddressInSectionTable@12 @ 0x4B2B95F0 (_RtlAddressInSectionTable@12.c)
 *     _LdrpFetchAddressOfSecurityCookie@16 @ 0x4B2B9F97 (_LdrpFetchAddressOfSecurityCookie@16.c)
 *     _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0 (_LdrpAccessResourceDataNoMultipleLanguage@16.c)
 *     _LdrpLocateMrdata@0 @ 0x4B334ED2 (_LdrpLocateMrdata@0.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlSectionTableFromVirtualAddress(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG VirtualAddress)
{
  int v3; // ecx
  unsigned __int16 v4; // ax
  int v5; // edx
  unsigned int v6; // edi
  int v7; // ecx
  _IMAGE_SECTION_HEADER *v8; // edx

  v4 = *(_WORD *)(v3 + 20);
  v5 = v3 + 24;
  v6 = *(unsigned __int16 *)(v3 + 6);
  v7 = 0;
  v8 = (_IMAGE_SECTION_HEADER *)(v4 + v5);
  if ( !v6 )
    return 0;
  while ( (unsigned int)NtHeaders < v8->VirtualAddress
       || (unsigned int)NtHeaders >= v8->VirtualAddress + v8->SizeOfRawData )
  {
    ++v8;
    if ( ++v7 >= v6 )
      return 0;
  }
  return v8;
}
