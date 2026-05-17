/*
 * XREFs of PsspSampleCounters @ 0x180114C90
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180113E50 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x1800401A0 (RtlQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     ZwQueryInformationThread @ 0x18009D550 (ZwQueryInformationThread.c)
 */

__int64 __fastcall PsspSampleCounters(unsigned __int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-28h]

  RtlQueryPerformanceCounter(a1, (__int64)a2);
  v3 = 0LL;
  result = ZwQueryInformationThread();
  if ( (int)result >= 0 )
    v3 = v5;
  *a2 = v3;
  return result;
}
