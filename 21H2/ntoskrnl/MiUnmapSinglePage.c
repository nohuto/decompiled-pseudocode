/*
 * XREFs of MiUnmapSinglePage @ 0x14026C0E4
 * Callers:
 *     MiFillCombinePage @ 0x14026C038 (MiFillCombinePage.c)
 *     MiFreeForkMaps @ 0x1405BAF60 (MiFreeForkMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 */

__int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes(&qword_140C534C0, ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
}
