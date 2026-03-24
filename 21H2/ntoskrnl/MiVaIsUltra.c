/*
 * XREFs of MiVaIsUltra @ 0x1402754B0
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140274EA0 (MiPrefetchVirtualMemory.c)
 *     MiZeroPageWorkMapping @ 0x14029A678 (MiZeroPageWorkMapping.c)
 *     MiTranslatePageForCopy @ 0x1402B4DE4 (MiTranslatePageForCopy.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_140C4EBF8 && a1 >= qword_140C4EBF8 && a1 < qword_140C4EBF8 + (qword_140C4EC08 << 30);
}
