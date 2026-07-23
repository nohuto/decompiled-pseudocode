/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x1800EB3C0
 * Callers:
 *     LdrpGetProcedureAddress @ 0x1800321C0 (LdrpGetProcedureAddress.c)
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x180076F70 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        char *BaseOfImage,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        PIMAGE_NT_HEADERS NtHeaders,
        _QWORD *a6)
{
  __int64 v6; // rax
  __int64 v7; // r8
  PVOID v9; // rax

  if ( (unsigned int)a3 < HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapReserve) )
  {
    v6 = a3;
    v7 = *((unsigned int *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3);
    if ( !(_DWORD)v7 )
      return 3221225474LL;
    *a4 = *((_DWORD *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v6 + 1);
    if ( a2 || (unsigned int)v7 < NtHeaders->OptionalHeader.SizeOfHeaders )
    {
      *a6 = &BaseOfImage[v7];
      return 0LL;
    }
    v9 = RtlAddressInSectionTable(NtHeaders, BaseOfImage, v7);
    *a6 = v9;
    if ( v9 )
      return 0LL;
  }
  return 3221225485LL;
}
