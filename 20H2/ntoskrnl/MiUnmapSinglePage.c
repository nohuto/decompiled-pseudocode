/*
 * XREFs of MiUnmapSinglePage @ 0x14036AE14
 * Callers:
 *     MiFillCombinePage @ 0x14036AD5C (MiFillCombinePage.c)
 *     MiFreeForkMaps @ 0x140558E64 (MiFreeForkMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 */

char __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_140C4EDC0, (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 1u);
}
