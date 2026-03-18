/*
 * XREFs of RtlStdLogStackTrace @ 0x140580220
 * Callers:
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x140396790 (ExpInitializeResource.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14032C8F0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405808A0 (RtlpStdLogCapturedStackTrace.c)
 */

__int64 __fastcall RtlStdLogStackTrace(PKSPIN_LOCK SpinLock, int a2)
{
  PVOID v5[34]; // [rsp+20h] [rbp-118h] BYREF
  ULONG BackTraceHash; // [rsp+148h] [rbp+10h] BYREF

  memset(v5, 0, sizeof(v5));
  BackTraceHash = 0;
  HIWORD(v5[1]) = RtlCaptureStackBackTrace(a2 + 1, 0x20u, &v5[2], &BackTraceHash);
  if ( HIWORD(v5[1]) )
    return RtlpStdLogCapturedStackTrace(SpinLock);
  else
    return 0LL;
}
