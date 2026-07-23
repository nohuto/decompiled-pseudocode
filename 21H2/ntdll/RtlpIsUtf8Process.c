/*
 * XREFs of RtlpIsUtf8Process @ 0x1800627AC
 * Callers:
 *     RtlpDidUnicodeToOemWork @ 0x180062454 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x180062500 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUnicodeToOemN @ 0x180062560 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x180062600 (RtlOemToUnicodeN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1800626B0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800E50D0 (RtlConsoleMultiByteToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x1800FCE3C (RtlIsValidOemCharacter.c)
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
