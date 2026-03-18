/*
 * XREFs of RtlpIsUtf8Process @ 0x1405E6930
 * Callers:
 *     RtlUpperChar @ 0x1405E5AE0 (RtlUpperChar.c)
 *     RtlUnicodeToMultiByteSize @ 0x1405E6150 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x1405E6310 (RtlUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1405E63B0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpperString @ 0x1405E67E0 (RtlUpperString.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1405E6860 (RtlAnsiCharToUnicodeChar.c)
 *     RtlMultiByteToUnicodeN @ 0x14063D160 (RtlMultiByteToUnicodeN.c)
 *     RtlMultiByteToUnicodeSize @ 0x14063D230 (RtlMultiByteToUnicodeSize.c)
 *     RtlpDidUnicodeToOemWork @ 0x1406E4488 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1406E4510 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUnicodeToOemN @ 0x1406E45E0 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x14074DBD0 (RtlOemToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x1409131D0 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpIsUtf8Process(char a1)
{
  int v1; // eax
  unsigned __int64 v2; // rdx

  if ( a1 )
    v1 = (unsigned __int8)NlsOemCodePageIsUTF8;
  else
    v1 = (unsigned __int8)NlsActiveCodePageIsUTF8;
  if ( v1 )
    return 1;
  v2 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[4];
  if ( !v2 )
    return 0;
  if ( a1 )
    return !*(_QWORD *)(v2 + 168);
  else
    return !*(_QWORD *)(v2 + 160);
}
