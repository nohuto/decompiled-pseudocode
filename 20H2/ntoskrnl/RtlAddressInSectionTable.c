/*
 * XREFs of RtlAddressInSectionTable @ 0x1402FE174
 * Callers:
 *     RtlpImageDirectoryEntryToData64 @ 0x1402FDA50 (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1402FDAD0 (RtlpImageDirectoryEntryToData32.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1406ACA94 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x1402FE1D0 (RtlSectionTableFromVirtualAddress.c)
 */

PVOID __cdecl RtlAddressInSectionTable(PIMAGE_NT_HEADERS NtHeaders, PVOID BaseOfImage, ULONG VirtualAddress)
{
  __int64 v3; // rdi
  PIMAGE_SECTION_HEADER v5; // rax
  PVOID result; // rax

  v3 = VirtualAddress;
  v5 = RtlSectionTableFromVirtualAddress(NtHeaders, BaseOfImage, VirtualAddress);
  if ( !v5 )
    return 0LL;
  result = (char *)BaseOfImage + v5->PointerToRawData - (unsigned __int64)v5->VirtualAddress + v3;
  if ( (unsigned __int64)BaseOfImage < 0x7FFFFFFEFFFFLL && (unsigned __int64)result >= 0x7FFFFFFEFFFFLL )
    return 0LL;
  return result;
}
