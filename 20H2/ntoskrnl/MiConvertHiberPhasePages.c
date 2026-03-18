/*
 * XREFs of MiConvertHiberPhasePages @ 0x140997F28
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140995A68 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x14099C000 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     KeFlushCurrentTbOnly @ 0x1403B5E58 (KeFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

struct _KTHREAD *__fastcall MiConvertHiberPhasePages(__int64 a1)
{
  char *AnyMultiplexedVm; // rax
  struct _KTHREAD *result; // rax
  _OWORD v4[11]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v4, 0, sizeof(v4));
  LOWORD(v4[0]) = 2817;
  *((_QWORD *)&v4[9] + 1) = MiConvertHiberPhasePte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v4[2] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffff800000000000);
  *((_QWORD *)&v4[1] + 1) = AnyMultiplexedVm;
  BYTE6(v4[0]) = 17;
  *((_QWORD *)&v4[10] + 1) = a1;
  result = (struct _KTHREAD *)MiWalkPageTables((__int64)v4);
  if ( a1 )
    return KeFlushCurrentTbOnly(0);
  return result;
}
