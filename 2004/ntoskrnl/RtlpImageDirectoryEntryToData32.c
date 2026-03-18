/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x14027C4A0
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14027C348 (RtlpImageDirectoryEntryToDataEx.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x140361F8C (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v8; // rax

  if ( (unsigned int)a3 >= *(_DWORD *)(a5 + 116) )
    return 3221225485LL;
  v6 = a3;
  v7 = *(unsigned int *)(a5 + 8LL * a3 + 120);
  if ( (_DWORD)v7 )
  {
    if ( a1 < 0x7FFFFFFEFFFFLL && a1 + v7 >= 0x7FFFFFFEFFFFLL )
      return 3221225485LL;
    *a4 = *(_DWORD *)(a5 + 8 * v6 + 124);
    if ( a2 || (unsigned int)v7 < *(_DWORD *)(a5 + 84) )
    {
      *a6 = a1 + v7;
    }
    else
    {
      v8 = RtlAddressInSectionTable(a5, a1);
      *a6 = v8;
      if ( !v8 )
        return 3221225485LL;
    }
    return 0LL;
  }
  return 3221225474LL;
}
