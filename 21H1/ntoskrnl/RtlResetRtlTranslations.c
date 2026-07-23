/*
 * XREFs of RtlResetRtlTranslations @ 0x1407BA0E4
 * Callers:
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

void __cdecl RtlResetRtlTranslations(PNLSTABLEINFO TableInfo)
{
  USHORT CodePage; // di
  USHORT DBCSCodePage; // si
  unsigned __int16 *v3; // rcx
  __int64 v4; // rbp
  __int16 *v5; // rcx
  USHORT v6; // di
  PVOID WideCharTable; // rax
  bool v8; // bl
  PUSHORT DBCSOffsets; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm1
  PUSHORT v12; // rax
  __int128 v13; // xmm1

  if ( CodePageTable.CodePage == 0xFDE9 || (CodePage = InitTableInfo.CodePage, InitTableInfo.CodePage == 0xFDE9) )
  {
    v8 = 0;
    NlsAnsiCodePage = -535;
    LOBYTE(NlsMbCodePageTag) = 0;
    WideCharTable = 0LL;
    NlsMbAnsiCodePageTables = 0LL;
    NlsAnsiToUnicodeData = 0LL;
    NlsUnicodeToAnsiData = 0LL;
    NlsUnicodeToMbAnsiData = 0LL;
    NlsMbOemCodePageTables = 0LL;
    NlsOemToUnicodeData = 0LL;
    NlsOemCodePage = -535;
    NlsActiveCodePageIsUTF8 = 1;
    NlsOemCodePageIsUTF8 = 1;
  }
  else
  {
    DBCSCodePage = CodePageTable.DBCSCodePage;
    v3 = NlsLeadByteInfoTable;
    v4 = 4LL;
    NlsAnsiCodePage = CodePageTable.CodePage;
    if ( CodePageTable.DBCSCodePage )
    {
      DBCSOffsets = CodePageTable.DBCSOffsets;
      v10 = 4LL;
      do
      {
        *(_OWORD *)v3 = *(_OWORD *)DBCSOffsets;
        *((_OWORD *)v3 + 1) = *((_OWORD *)DBCSOffsets + 1);
        *((_OWORD *)v3 + 2) = *((_OWORD *)DBCSOffsets + 2);
        *((_OWORD *)v3 + 3) = *((_OWORD *)DBCSOffsets + 3);
        *((_OWORD *)v3 + 4) = *((_OWORD *)DBCSOffsets + 4);
        *((_OWORD *)v3 + 5) = *((_OWORD *)DBCSOffsets + 5);
        *((_OWORD *)v3 + 6) = *((_OWORD *)DBCSOffsets + 6);
        v3 += 64;
        v11 = *((_OWORD *)DBCSOffsets + 7);
        DBCSOffsets += 64;
        *((_OWORD *)v3 - 1) = v11;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      memset(NlsLeadByteInfoTable, 0, sizeof(NlsLeadByteInfoTable));
    }
    v5 = NlsOemLeadByteInfoTable;
    NlsMbAnsiCodePageTables = (__int64)CodePageTable.DBCSOffsets;
    NlsOemCodePage = CodePage;
    LOBYTE(NlsMbCodePageTag) = DBCSCodePage != 0;
    v6 = InitTableInfo.DBCSCodePage;
    NlsAnsiToUnicodeData = (__int64)CodePageTable.MultiByteTable;
    NlsUnicodeToAnsiData = (__int64)CodePageTable.WideCharTable;
    NlsUnicodeToMbAnsiData = (__int64)CodePageTable.WideCharTable;
    NlsActiveCodePageIsUTF8 = 0;
    if ( InitTableInfo.DBCSCodePage )
    {
      v12 = InitTableInfo.DBCSOffsets;
      do
      {
        *(_OWORD *)v5 = *(_OWORD *)v12;
        *((_OWORD *)v5 + 1) = *((_OWORD *)v12 + 1);
        *((_OWORD *)v5 + 2) = *((_OWORD *)v12 + 2);
        *((_OWORD *)v5 + 3) = *((_OWORD *)v12 + 3);
        *((_OWORD *)v5 + 4) = *((_OWORD *)v12 + 4);
        *((_OWORD *)v5 + 5) = *((_OWORD *)v12 + 5);
        *((_OWORD *)v5 + 6) = *((_OWORD *)v12 + 6);
        v5 += 64;
        v13 = *((_OWORD *)v12 + 7);
        v12 += 64;
        *((_OWORD *)v5 - 1) = v13;
        --v4;
      }
      while ( v4 );
    }
    else
    {
      memset(NlsOemLeadByteInfoTable, 0, sizeof(NlsOemLeadByteInfoTable));
    }
    NlsMbOemCodePageTables = (__int64)InitTableInfo.DBCSOffsets;
    NlsOemToUnicodeData = (__int64)InitTableInfo.MultiByteTable;
    WideCharTable = InitTableInfo.WideCharTable;
    NlsOemCodePageIsUTF8 = 0;
    v8 = v6 != 0;
  }
  NlsUnicodeToOemData = (__int64)WideCharTable;
  NlsUnicodeToMbOemData = (__int64)WideCharTable;
  OemDefaultChar = InitTableInfo.DefaultChar;
  OemTransUniDefaultChar = InitTableInfo.TransDefaultChar;
  Nls844UnicodeUpcaseTable = xmmword_140D55930;
  LOBYTE(NlsMbOemCodePageTag) = v8;
  Nls844UnicodeLowercaseTable = *((_QWORD *)&xmmword_140D55930 + 1);
}
