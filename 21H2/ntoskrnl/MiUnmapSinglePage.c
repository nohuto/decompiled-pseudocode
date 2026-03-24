/*
 * XREFs of MiUnmapSinglePage @ 0x14036B0C4
 * Callers:
 *     MiFillCombinePage @ 0x14036B00C (MiFillCombinePage.c)
 *     MiFreeForkMaps @ 0x14055A934 (MiFreeForkMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 1u);
}
