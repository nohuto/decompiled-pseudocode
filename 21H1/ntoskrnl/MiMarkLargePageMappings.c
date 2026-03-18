/*
 * XREFs of MiMarkLargePageMappings @ 0x140A43CD8
 * Callers:
 *     MiMarkLargePageRanges @ 0x140A43D90 (MiMarkLargePageRanges.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 MiMarkLargePageMappings()
{
  char *AnyMultiplexedVm; // rbx
  _OWORD v2[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v2, 0, sizeof(v2));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v2[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  BYTE2(v2[0]) = BYTE2(v2[0]) & 0xE3 | 4;
  LOWORD(v2[0]) = 2567;
  *((_QWORD *)&v2[1] + 1) = AnyMultiplexedVm;
  *((_QWORD *)&v2[9] + 1) = MiMarkLargePagePte;
  BYTE6(v2[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables((__int64)v2);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE6(v2[0]));
}
