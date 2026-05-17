/*
 * XREFs of RtlpIsUtf8Process @ 0x1800612BC
 * Callers:
 *     RtlpDidUnicodeToOemWork @ 0x180060F64 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x180061010 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUnicodeToOemN @ 0x180061070 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x180061110 (RtlOemToUnicodeN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1800611C0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800E5280 (RtlConsoleMultiByteToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x1800FCFDC (RtlIsValidOemCharacter.c)
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
