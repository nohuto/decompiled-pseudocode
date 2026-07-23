/*
 * XREFs of _RtlResetRtlTranslations@4 @ 0x4B344160
 * Callers:
 *     _LdrpInitializeNlsInfo@4 @ 0x4B332D65 (_LdrpInitializeNlsInfo@4.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

void __cdecl RtlResetRtlTranslations(PNLSTABLEINFO TableInfo)
{
  bool v1; // zf
  PVOID WideCharTable; // eax
  PVOID v3; // ecx
  PUSHORT MultiByteTable; // esi
  bool v5; // al
  PUSHORT DBCSOffsets; // edi
  USHORT TransDefaultChar; // ax
  PUSHORT UpperCaseTable; // eax
  PUSHORT LowerCaseTable; // eax
  size_t v10; // [esp-4h] [ebp-10h]

  if ( TableInfo->AnsiTableInfo.CodePage == 0xFDE9 || TableInfo->OemTableInfo.CodePage == 0xFDE9 )
  {
    v5 = 0;
    NlsAnsiCodePage = -535;
    NlsActiveCodePageIsUTF8 = 1;
    v3 = 0;
    NlsOemCodePageIsUTF8 = 1;
    MultiByteTable = 0;
    NlsMbCodePageTag = 0;
    DBCSOffsets = 0;
    NlsMbAnsiCodePageTables = 0;
    NlsAnsiToUnicodeData = 0;
    NlsUnicodeToAnsiData = 0;
    NlsUnicodeToMbAnsiData = 0;
  }
  else
  {
    NlsAnsiCodePage = TableInfo->AnsiTableInfo.CodePage;
    if ( TableInfo->AnsiTableInfo.DBCSCodePage )
    {
      qmemcpy(NlsLeadByteInfoTable, TableInfo->AnsiTableInfo.DBCSOffsets, sizeof(NlsLeadByteInfoTable));
    }
    else
    {
      LODWORD(v10) = 512;
      memset(NlsLeadByteInfoTable, 0, v10);
    }
    v1 = TableInfo->AnsiTableInfo.DBCSCodePage == 0;
    NlsMbAnsiCodePageTables = (int)TableInfo->AnsiTableInfo.DBCSOffsets;
    NlsAnsiToUnicodeData = (int)TableInfo->AnsiTableInfo.MultiByteTable;
    WideCharTable = TableInfo->AnsiTableInfo.WideCharTable;
    NlsMbCodePageTag = !v1;
    NlsUnicodeToAnsiData = (int)WideCharTable;
    NlsUnicodeToMbAnsiData = (int)WideCharTable;
    NlsActiveCodePageIsUTF8 = 0;
    if ( TableInfo->OemTableInfo.DBCSCodePage )
    {
      qmemcpy(NlsOemLeadByteInfoTable, TableInfo->OemTableInfo.DBCSOffsets, sizeof(NlsOemLeadByteInfoTable));
    }
    else
    {
      LODWORD(v10) = 512;
      memset(NlsOemLeadByteInfoTable, 0, v10);
    }
    v3 = TableInfo->OemTableInfo.WideCharTable;
    MultiByteTable = TableInfo->OemTableInfo.MultiByteTable;
    v5 = TableInfo->OemTableInfo.DBCSCodePage != 0;
    DBCSOffsets = TableInfo->OemTableInfo.DBCSOffsets;
    NlsOemCodePageIsUTF8 = 0;
  }
  NlsMbOemCodePageTag = v5;
  OemDefaultChar = TableInfo->OemTableInfo.DefaultChar;
  TransDefaultChar = TableInfo->OemTableInfo.TransDefaultChar;
  NlsMbOemCodePageTables = (int)DBCSOffsets;
  OemTransUniDefaultChar = TransDefaultChar;
  UpperCaseTable = TableInfo->UpperCaseTable;
  NlsOemToUnicodeData = (int)MultiByteTable;
  Nls844UnicodeUpcaseTable = (int)UpperCaseTable;
  LowerCaseTable = TableInfo->LowerCaseTable;
  NlsUnicodeToOemData = (int)v3;
  NlsUnicodeToMbOemData = (int)v3;
  Nls844UnicodeLowercaseTable = (int)LowerCaseTable;
}
