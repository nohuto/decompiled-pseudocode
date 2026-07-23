/*
 * XREFs of _RtlImageRvaToVa@16 @ 0x4B34D310
 * Callers:
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 * Callees:
 *     _RtlImageRvaToSection@12 @ 0x4B34D2C0 (_RtlImageRvaToSection@12.c)
 */

PVOID __cdecl RtlImageRvaToVa(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG Rva,
        PIMAGE_SECTION_HEADER *LastRvaSection)
{
  PIMAGE_SECTION_HEADER v4; // ecx

  if ( !LastRvaSection
    || (v4 = *LastRvaSection) == 0
    || Rva < v4->VirtualAddress
    || Rva >= v4->VirtualAddress + v4->SizeOfRawData )
  {
    v4 = RtlImageRvaToSection(NtHeaders, BaseOfImage, Rva);
  }
  if ( !v4 )
    return 0;
  if ( LastRvaSection )
    *LastRvaSection = v4;
  return (char *)BaseOfImage + v4->PointerToRawData - v4->VirtualAddress + Rva;
}
