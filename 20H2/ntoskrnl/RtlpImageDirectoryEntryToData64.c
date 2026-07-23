/*
 * XREFs of RtlpImageDirectoryEntryToData64 @ 0x1402FDA50
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1402FD978 (RtlpImageDirectoryEntryToDataEx.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x1402FE174 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData64(
        char *BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        PIMAGE_NT_HEADERS NtHeaders,
        _QWORD *a6)
{
  __int64 v6; // r11
  __int64 VirtualAddress; // r8
  PVOID v9; // rax

  if ( a3 >= NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
    return 3221225485LL;
  v6 = a3;
  VirtualAddress = NtHeaders->OptionalHeader.DataDirectory[a3].VirtualAddress;
  if ( (_DWORD)VirtualAddress )
  {
    if ( (unsigned __int64)BaseOfImage < 0x7FFFFFFEFFFFLL
      && (unsigned __int64)&BaseOfImage[VirtualAddress] >= 0x7FFFFFFEFFFFLL )
    {
      return 3221225485LL;
    }
    *a4 = NtHeaders->OptionalHeader.DataDirectory[v6].Size;
    if ( a2 || (unsigned int)VirtualAddress < NtHeaders->OptionalHeader.SizeOfHeaders )
    {
      *a6 = &BaseOfImage[VirtualAddress];
    }
    else
    {
      v9 = RtlAddressInSectionTable(NtHeaders, BaseOfImage, VirtualAddress);
      *a6 = v9;
      if ( !v9 )
        return 3221225485LL;
    }
    return 0LL;
  }
  return 3221225474LL;
}
