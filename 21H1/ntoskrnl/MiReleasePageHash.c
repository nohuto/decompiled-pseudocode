/*
 * XREFs of MiReleasePageHash @ 0x140557BD4
 * Callers:
 *     MiDeletePagefile @ 0x1408CBB3C (MiDeletePagefile.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_140C4EE80,
           (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           (unsigned int)((4 * (unsigned __int64)a2) >> 12) + (((4LL * a2) & 0xFFF) != 0));
}
