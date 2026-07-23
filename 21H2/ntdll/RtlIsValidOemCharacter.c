/*
 * XREFs of RtlIsValidOemCharacter @ 0x1800FCE3C
 * Callers:
 *     GetNextWchar @ 0x1800FC694 (GetNextWchar.c)
 * Callees:
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 *     RtlpIsUtf8Process @ 0x1800627AC (RtlpIsUtf8Process.c)
 */

char RtlIsValidOemCharacter()
{
  char IsUtf8Process; // al
  unsigned __int16 *v1; // r11
  char v2; // cl
  unsigned __int16 v3; // ax
  unsigned __int16 *v4; // r11
  __int64 v5; // rcx
  unsigned __int16 v6; // r10
  unsigned __int16 *v7; // r11
  __int64 v8; // r9
  __int16 v9; // ax
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r9

  IsUtf8Process = RtlpIsUtf8Process(1);
  if ( IsUtf8Process != v2 )
  {
    v5 = *v1;
    if ( NlsMbOemCodePageTag )
    {
      v10 = *(unsigned __int16 *)(NlsUnicodeToMbOemData + 2 * v5);
      v11 = *(unsigned __int8 *)(NlsUnicodeToMbOemData + 2 * v5);
      v12 = v10 >> 8;
      if ( NlsOemLeadByteInfoTable[v12] )
      {
        v11 += (unsigned __int16)NlsOemLeadByteInfoTable[v12];
        v13 = NlsMbOemCodePageTables;
      }
      else
      {
        v13 = NlsOemToUnicodeData;
      }
      v6 = NLS_UPCASE(*(_WORD *)(v13 + 2 * v11));
      v9 = *(_WORD *)(v14 + 2LL * v6);
    }
    else
    {
      v6 = NLS_UPCASE(*(_WORD *)(NlsOemToUnicodeData + 2LL * *(unsigned __int8 *)(v5 + NlsUnicodeToOemData)));
      v9 = *(char *)(v6 + v8);
    }
    if ( v9 != OemDefaultChar )
    {
      *v7 = v6;
      return 1;
    }
    return 0;
  }
  if ( *v1 > 0x7Fu )
    return 0;
  v3 = NLS_UPCASE(*v1);
  *v4 = v3;
  return 1;
}
