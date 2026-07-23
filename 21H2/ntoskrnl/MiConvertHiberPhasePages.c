/*
 * XREFs of MiConvertHiberPhasePages @ 0x140995F28
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140993A68 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x14099A1F0 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     KeFlushCurrentTbOnly @ 0x1403B7608 (KeFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
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
