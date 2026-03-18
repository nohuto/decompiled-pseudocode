/*
 * XREFs of MiUnmapSinglePage @ 0x140368E34
 * Callers:
 *     MiFillCombinePage @ 0x140368D7C (MiFillCombinePage.c)
 *     MiFreeForkMaps @ 0x140555494 (MiFreeForkMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 */

__int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_140C4ED40, (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 1u);
}
