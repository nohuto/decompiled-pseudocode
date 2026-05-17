/*
 * XREFs of RtlpIsUtf8Process @ 0x1800611AC
 * Callers:
 *     RtlpDidUnicodeToOemWork @ 0x180060E54 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x180060F00 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUnicodeToOemN @ 0x180060F60 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x180061000 (RtlOemToUnicodeN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1800610B0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800E4E30 (RtlConsoleMultiByteToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x1800FCACC (RtlIsValidOemCharacter.c)
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
