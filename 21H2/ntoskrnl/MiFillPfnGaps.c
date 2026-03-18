/*
 * XREFs of MiFillPfnGaps @ 0x140AF6A74
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiInitializeGapFrames @ 0x140AF6B44 (MiInitializeGapFrames.c)
 */

__int64 MiFillPfnGaps()
{
  __m128i v1[11]; // [rsp+20h] [rbp-C8h] BYREF

  if ( !(unsigned int)MiInitializeGapFrames(0LL, &qword_140C532D8) )
    return 0LL;
  memset(v1, 0, sizeof(v1));
  v1[10].m128i_i64[1] = (__int64)&qword_140C532D8;
  v1[0].m128i_i32[0] = 67584;
  v1[2].m128i_i64[0] = 0xFFFFDE0000000000uLL;
  v1[2].m128i_i64[1] = 48 * qword_140C50840 - 0x21FFFFFFFFD1LL;
  v1[9].m128i_i64[1] = (__int64)MiFillGapPtes;
  MiWalkPageTables(v1);
  MiFlags |= 0x40000000u;
  return 1LL;
}
