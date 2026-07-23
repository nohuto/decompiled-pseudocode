/*
 * XREFs of MiVaIsUltra @ 0x14033FF30
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140248300 (MiPrefetchVirtualMemory.c)
 *     MiZeroPageWorkMapping @ 0x14031A67C (MiZeroPageWorkMapping.c)
 *     MiTranslatePageForCopy @ 0x14033FBD4 (MiTranslatePageForCopy.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_140C4E9F8 && a1 >= qword_140C4E9F8 && a1 < qword_140C4E9F8 + (BitMapHeader.SizeOfBitMap << 30);
}
