/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x1800EB250
 * Callers:
 *     LdrpGetProcedureAddress @ 0x1800321C0 (LdrpGetProcedureAddress.c)
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x180077FA0 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v9; // rax

  if ( (unsigned int)a3 < *(_DWORD *)(a5 + 116) )
  {
    v6 = a3;
    v7 = *(unsigned int *)(a5 + 8LL * a3 + 120);
    if ( !(_DWORD)v7 )
      return 3221225474LL;
    *a4 = *(_DWORD *)(a5 + 8 * v6 + 124);
    if ( a2 || (unsigned int)v7 < *(_DWORD *)(a5 + 84) )
    {
      *a6 = a1 + v7;
      return 0LL;
    }
    v9 = RtlAddressInSectionTable(a5, a1, v7);
    *a6 = v9;
    if ( v9 )
      return 0LL;
  }
  return 3221225485LL;
}
