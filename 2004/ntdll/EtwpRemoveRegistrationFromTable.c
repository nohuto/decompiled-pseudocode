/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x1800504D8
 * Callers:
 *     EtwNotificationUnregister @ 0x180050390 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002A0A0 (RtlRbRemoveNode.c)
 */

signed __int64 __fastcall EtwpRemoveRegistrationFromTable(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __m128i si128; // xmm0

  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  RtlRbRemoveNode((unsigned __int64 *)&EtwpRegistrationTable, a1);
  si128 = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  *(__m128i *)a1 = si128;
  *(_QWORD *)(a1 + 16) = si128.m128i_i64[0];
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
