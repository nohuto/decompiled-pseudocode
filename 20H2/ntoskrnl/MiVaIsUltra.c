/*
 * XREFs of MiVaIsUltra @ 0x1402513B4
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x14022D6A0 (MiPrefetchVirtualMemory.c)
 *     MiTranslatePageForCopy @ 0x140251058 (MiTranslatePageForCopy.c)
 *     MiZeroPageWorkMapping @ 0x140351698 (MiZeroPageWorkMapping.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_140C4EA78 && a1 >= qword_140C4EA78 && a1 < qword_140C4EA78 + (BitMapHeader.SizeOfBitMap << 30);
}
