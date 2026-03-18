/*
 * XREFs of RtlpIsUtf8Process @ 0x140671F10
 * Callers:
 *     RtlMultiByteToUnicodeN @ 0x1405DFBF0 (RtlMultiByteToUnicodeN.c)
 *     RtlMultiByteToUnicodeSize @ 0x1405DFCC0 (RtlMultiByteToUnicodeSize.c)
 *     RtlUpperChar @ 0x140670F70 (RtlUpperChar.c)
 *     RtlUnicodeToMultiByteSize @ 0x140671610 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x140671830 (RtlUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1406718D0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpperString @ 0x140671DC0 (RtlUpperString.c)
 *     RtlAnsiCharToUnicodeChar @ 0x140671E40 (RtlAnsiCharToUnicodeChar.c)
 *     RtlpDidUnicodeToOemWork @ 0x1406BB038 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1406BB0C0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUnicodeToOemN @ 0x1406BB190 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x14075C7B0 (RtlOemToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x140918D10 (RtlIsValidOemCharacter.c)
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
