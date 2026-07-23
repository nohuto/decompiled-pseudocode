/*
 * XREFs of MiUnmapSinglePage @ 0x14036B274
 * Callers:
 *     MiFillCombinePage @ 0x14036B1BC (MiFillCombinePage.c)
 *     MiFreeForkMaps @ 0x14055AB74 (MiFreeForkMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 1u);
}
