/*
 * XREFs of _RtlIsValidOemCharacter@4 @ 0x4B362ED3
 * Callers:
 *     _GetNextWchar@16 @ 0x4B36280C (_GetNextWchar@16.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 *     _RtlpIsUtf8Process@4 @ 0x4B2E0C43 (_RtlpIsUtf8Process@4.c)
 */

char __thiscall RtlIsValidOemCharacter(unsigned __int16 *this)
{
  char IsUtf8Process; // al
  unsigned int v3; // edx
  char v4; // cl
  int v5; // esi
  unsigned __int16 v6; // cx
  __int16 v7; // ax
  int v8; // esi
  unsigned int v9; // ecx
  int v10; // eax
  unsigned __int16 v11; // cx

  IsUtf8Process = RtlpIsUtf8Process(1);
  if ( IsUtf8Process != v4 )
  {
    if ( NlsMbOemCodePageTag )
    {
      v8 = NlsUnicodeToMbOemData;
      v9 = *(unsigned __int16 *)(NlsUnicodeToMbOemData + 2 * v3);
      v10 = (unsigned __int16)NlsOemLeadByteInfoTable[v9 >> 8];
      if ( (_WORD)v10 )
        v11 = *(_WORD *)(NlsMbOemCodePageTables + 2 * ((unsigned __int8)v9 + v10));
      else
        v11 = *(_WORD *)(NlsOemToUnicodeData + 2 * (unsigned __int8)v9);
      v6 = NLS_UPCASE(v11);
      v7 = *(_WORD *)(v8 + 2 * v6);
    }
    else
    {
      v5 = NlsUnicodeToOemData;
      v6 = NLS_UPCASE(*(_WORD *)(NlsOemToUnicodeData + 2 * *(unsigned __int8 *)(v3 + NlsUnicodeToOemData)));
      v7 = *(char *)(v6 + v5);
    }
    if ( v7 != OemDefaultChar )
    {
      *this = v6;
      return 1;
    }
    return 0;
  }
  if ( v3 > 0x7F )
    return 0;
  *this = NLS_UPCASE(v3);
  return 1;
}
