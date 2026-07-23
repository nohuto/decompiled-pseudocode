/*
 * XREFs of RtlInitNlsTables @ 0x1407B9CC4
 * Callers:
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x1407B9D30 (RtlInitCodePageTable.c)
 */

void __cdecl RtlInitNlsTables(
        PUSHORT AnsiNlsBase,
        PUSHORT OemNlsBase,
        PUSHORT LanguageNlsBase,
        PNLSTABLEINFO TableInfo)
{
  unsigned __int16 v6; // cx

  RtlInitCodePageTable(AnsiNlsBase, &CodePageTable);
  RtlInitCodePageTable(OemNlsBase, &InitTableInfo);
  if ( LanguageNlsBase )
  {
    v6 = LanguageNlsBase[1] + 1;
    *(_QWORD *)&xmmword_140D56930 = LanguageNlsBase + 2;
    *((_QWORD *)&xmmword_140D56930 + 1) = &LanguageNlsBase[v6 + 1];
  }
  else
  {
    xmmword_140D56930 = 0LL;
  }
}
