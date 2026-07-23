/*
 * XREFs of MiMarkKernelPageTablePages @ 0x1409B1308
 * Callers:
 *     MmMarkHiberPhase @ 0x1409B154C (MmMarkHiberPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 MiMarkKernelPageTablePages()
{
  char *AnyMultiplexedVm; // rax
  _OWORD v2[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v2, 0, sizeof(v2));
  LOWORD(v2[0]) = 2305;
  BYTE2(v2[0]) = BYTE2(v2[0]) & 0xE3 | 4;
  *((_QWORD *)&v2[9] + 1) = MiMarkKernelPageTablePte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v2[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  *((_QWORD *)&v2[1] + 1) = AnyMultiplexedVm;
  BYTE6(v2[0]) = 17;
  return MiWalkPageTables((__int64)v2);
}
