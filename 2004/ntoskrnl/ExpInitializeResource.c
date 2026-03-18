/*
 * XREFs of ExpInitializeResource @ 0x1403973A0
 * Callers:
 *     ExInitializeFastResource @ 0x1403972B0 (ExInitializeFastResource.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     RtlStdLogStackTrace @ 0x1405809A0 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x140580A2C (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140580E30 (RtlpStdGetRecordedStackTraceIndex.c)
 */

void *__fastcall ExpInitializeResource(_QWORD *a1)
{
  void *result; // rax
  __int64 v3; // rbx
  KSPIN_LOCK *v4; // rsi
  void *v5; // r14
  __int16 v6; // bp

  result = memset(a1, 0, 0x68uLL);
  a1[1] = a1;
  v3 = 0LL;
  *a1 = a1;
  *((_OWORD *)a1 + 2) = 0LL;
  a1[12] = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v4 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      result = (void *)RtlStdLogStackTrace(RtlpStackTraceDatabase);
      v5 = result;
      if ( result )
      {
        result = (void *)RtlpStdGetRecordedStackTraceIndex(v4);
        v6 = (__int16)result;
        if ( !(_DWORD)result )
          result = (void *)RtlStdReleaseStackTrace(v4, v5);
      }
      else
      {
        v6 = 0;
      }
      LOWORD(v3) = v6;
    }
    v3 = (unsigned __int16)v3;
  }
  a1[11] = v3;
  return result;
}
