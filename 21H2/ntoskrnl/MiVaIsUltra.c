/*
 * XREFs of MiVaIsUltra @ 0x140263450
 * Callers:
 *     MiZeroPageWorkMapping @ 0x14021987C (MiZeroPageWorkMapping.c)
 *     MiTranslatePageForCopy @ 0x140232F94 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x140262E40 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_140C4EC38 && a1 >= qword_140C4EC38 && a1 < qword_140C4EC38 + (BitMapHeader.SizeOfBitMap << 30);
}
