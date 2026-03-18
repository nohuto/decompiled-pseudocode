/*
 * XREFs of MiMarkHiberNotCachedPages @ 0x1409AC59C
 * Callers:
 *     MmMarkHiberPhase @ 0x1409AC94C (MmMarkHiberPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 MiMarkHiberNotCachedPages()
{
  char *AnyMultiplexedVm; // rax
  _OWORD v2[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v2, 0, sizeof(v2));
  LOWORD(v2[0]) = 2817;
  *((_QWORD *)&v2[9] + 1) = MiMarkHiberNotCachedPte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v2[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  *((_QWORD *)&v2[1] + 1) = AnyMultiplexedVm;
  BYTE6(v2[0]) = 17;
  return MiWalkPageTables((__int64)v2);
}
