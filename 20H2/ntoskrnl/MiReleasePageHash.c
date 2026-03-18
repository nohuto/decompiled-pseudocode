/*
 * XREFs of MiReleasePageHash @ 0x14055BBF4
 * Callers:
 *     MiDeletePagefile @ 0x1408D2CCC (MiDeletePagefile.c)
 * Callees:
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 */

char __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_140C4EDC0,
           (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           ((4 * (unsigned __int64)a2) >> 12) + (((4LL * a2) & 0xFFF) != 0));
}
