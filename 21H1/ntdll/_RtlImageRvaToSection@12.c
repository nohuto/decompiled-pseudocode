/*
 * XREFs of _RtlImageRvaToSection@12 @ 0x4B34D2C0
 * Callers:
 *     _RtlImageRvaToVa@16 @ 0x4B34D310 (_RtlImageRvaToVa@16.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlImageRvaToSection(PIMAGE_NT_HEADERS NtHeaders, PVOID BaseOfImage, ULONG Rva)
{
  int v3; // esi
  _IMAGE_SECTION_HEADER *v4; // edx

  v3 = 0;
  v4 = (_IMAGE_SECTION_HEADER *)((char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader);
  if ( !NtHeaders->FileHeader.NumberOfSections )
    return 0;
  while ( Rva < v4->VirtualAddress || Rva >= v4->VirtualAddress + v4->SizeOfRawData )
  {
    ++v4;
    if ( ++v3 >= (unsigned int)NtHeaders->FileHeader.NumberOfSections )
      return 0;
  }
  return v4;
}
