/*
 * XREFs of MiUnmapSinglePage @ 0x140368474
 * Callers:
 *     MiFillCombinePage @ 0x1403683BC (MiFillCombinePage.c)
 *     MiFreeForkMaps @ 0x140554E44 (MiFreeForkMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 */

__int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 1u);
}
