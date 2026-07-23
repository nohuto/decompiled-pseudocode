/*
 * XREFs of _RtlInitNlsTables@16 @ 0x4B344110
 * Callers:
 *     _LdrpInitializeNlsInfo@4 @ 0x4B332D65 (_LdrpInitializeNlsInfo@4.c)
 * Callees:
 *     _RtlInitCodePageTable@8 @ 0x4B344010 (_RtlInitCodePageTable@8.c)
 */

void __cdecl RtlInitNlsTables(
        PUSHORT AnsiNlsBase,
        PUSHORT OemNlsBase,
        PUSHORT LanguageNlsBase,
        PNLSTABLEINFO TableInfo)
{
  USHORT *v4; // eax
  USHORT *v5; // ecx

  RtlInitCodePageTable(AnsiNlsBase, &TableInfo->AnsiTableInfo);
  RtlInitCodePageTable(OemNlsBase, &TableInfo->OemTableInfo);
  if ( LanguageNlsBase )
  {
    v4 = &LanguageNlsBase[(unsigned __int16)(LanguageNlsBase[1] + 1) + 1];
    v5 = LanguageNlsBase + 2;
  }
  else
  {
    v4 = 0;
    v5 = 0;
  }
  TableInfo->UpperCaseTable = v5;
  TableInfo->LowerCaseTable = v4;
}
