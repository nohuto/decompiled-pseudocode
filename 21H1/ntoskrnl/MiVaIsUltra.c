/*
 * XREFs of MiVaIsUltra @ 0x140303130
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1402A1330 (MiPrefetchVirtualMemory.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 *     MiZeroPageWorkMapping @ 0x1403499BC (MiZeroPageWorkMapping.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_140C4EB38 && a1 >= qword_140C4EB38 && a1 < qword_140C4EB38 + (BitMapHeader.SizeOfBitMap << 30);
}
