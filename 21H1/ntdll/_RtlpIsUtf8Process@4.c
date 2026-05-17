/*
 * XREFs of _RtlpIsUtf8Process@4 @ 0x4B2E0C43
 * Callers:
 *     _RtlOemToUnicodeN@20 @ 0x4B2AACD0 (_RtlOemToUnicodeN@20.c)
 *     _RtlUnicodeToOemN@20 @ 0x4B2E0AF0 (_RtlUnicodeToOemN@20.c)
 *     _RtlUpcaseUnicodeToMultiByteN@20 @ 0x4B2E0B90 (_RtlUpcaseUnicodeToMultiByteN@20.c)
 *     _RtlConsoleMultiByteToUnicodeN@24 @ 0x4B343D70 (_RtlConsoleMultiByteToUnicodeN@24.c)
 *     _RtlUpcaseUnicodeToOemN@20 @ 0x4B3444F0 (_RtlUpcaseUnicodeToOemN@20.c)
 *     _RtlpDidUnicodeToOemWork@8 @ 0x4B344552 (_RtlpDidUnicodeToOemWork@8.c)
 *     _RtlIsValidOemCharacter@4 @ 0x4B362ED3 (_RtlIsValidOemCharacter@4.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsUtf8Process(char a1)
{
  int v1; // eax

  v1 = (unsigned __int8)NlsOemCodePageIsUTF8;
  if ( !a1 )
    v1 = (unsigned __int8)NlsActiveCodePageIsUTF8;
  return v1 != 0;
}
