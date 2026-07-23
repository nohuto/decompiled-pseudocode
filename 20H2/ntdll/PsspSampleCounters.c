/*
 * XREFs of PsspSampleCounters @ 0x180114C90
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180113E50 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x1800401A0 (RtlQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     ZwQueryInformationThread @ 0x18009D550 (ZwQueryInformationThread.c)
 */

NTSTATUS __fastcall PsspSampleCounters(LARGE_INTEGER *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp-28h] BYREF

  RtlQueryPerformanceCounter(a1);
  v3 = 0LL;
  result = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadCycleTime, &ThreadInformation, 0x10u, 0LL);
  if ( result >= 0 )
    v3 = ThreadInformation;
  *a2 = v3;
  return result;
}
