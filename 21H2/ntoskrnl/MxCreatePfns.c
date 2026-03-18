/*
 * XREFs of MxCreatePfns @ 0x140AF3514
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MxCreatePfnsForPtes @ 0x140AF3B50 (MxCreatePfnsForPtes.c)
 */

__int64 __fastcall MxCreatePfns(__int64 a1)
{
  __m128i v3[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v3, 0, sizeof(v3));
  v3[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  v3[9].m128i_i64[1] = (__int64)MxCreatePfnsForPtes;
  v3[10].m128i_i64[1] = a1;
  v3[0].m128i_i32[0] = 67584;
  MxCreatePfnsForPtes(v3, 0xFFFFF6FB7DBEDF68uLL, 3LL);
  return MiWalkPageTables(v3);
}
