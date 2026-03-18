/*
 * XREFs of RtlpIsUtf8Process @ 0x14061BF50
 * Callers:
 *     RtlUpperChar @ 0x14061B100 (RtlUpperChar.c)
 *     RtlUnicodeToMultiByteSize @ 0x14061B770 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x14061B930 (RtlUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x14061B9D0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpperString @ 0x14061BE00 (RtlUpperString.c)
 *     RtlAnsiCharToUnicodeChar @ 0x14061BE80 (RtlAnsiCharToUnicodeChar.c)
 *     RtlMultiByteToUnicodeN @ 0x14068A780 (RtlMultiByteToUnicodeN.c)
 *     RtlMultiByteToUnicodeSize @ 0x14068A850 (RtlMultiByteToUnicodeSize.c)
 *     RtlpDidUnicodeToOemWork @ 0x1406C4B18 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1406C4BA0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUnicodeToOemN @ 0x1406C4C70 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x1407497B0 (RtlOemToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x140911E50 (RtlIsValidOemCharacter.c)
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
