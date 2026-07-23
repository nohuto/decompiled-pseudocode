/*
 * XREFs of PsspSampleCounters @ 0x4B386FC7
 * Callers:
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 * Callees:
 *     _RtlQueryPerformanceCounter@4 @ 0x4B2DBC20 (_RtlQueryPerformanceCounter@4.c)
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall PsspSampleCounters(PLARGE_INTEGER PerformanceCounter, _DWORD *a2)
{
  int v3; // esi
  int result; // eax
  _DWORD ThreadInformation[4]; // [esp+8h] [ebp-14h] BYREF

  RtlQueryPerformanceCounter(PerformanceCounter);
  v3 = 0;
  if ( NtQueryInformationThread((HANDLE)0xFFFFFFFE, ThreadCycleTime, ThreadInformation, 0x10u, 0) < 0 )
  {
    result = 0;
  }
  else
  {
    v3 = ThreadInformation[0];
    result = ThreadInformation[1];
  }
  *a2 = v3;
  a2[1] = result;
  return result;
}
