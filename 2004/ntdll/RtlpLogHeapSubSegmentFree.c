/*
 * XREFs of RtlpLogHeapSubSegmentFree @ 0x18010A350
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180003888 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlock @ 0x180020DDC (RtlpFreeUserBlock.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentFree(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4144;
  v9[5] = a2;
  v9[6] = a3;
  v9[7] = a4;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
