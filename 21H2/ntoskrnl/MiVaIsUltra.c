/*
 * XREFs of MiVaIsUltra @ 0x14026C7D0
 * Callers:
 *     MiZeroPageWorkMapping @ 0x14022689C (MiZeroPageWorkMapping.c)
 *     MiTranslatePageForCopy @ 0x14026C808 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x140284EB0 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVaIsUltra(unsigned __int64 a1)
{
  return qword_140C53088 && a1 >= qword_140C53088 && a1 < qword_140C53088 + (qword_140C53098 << 30);
}
