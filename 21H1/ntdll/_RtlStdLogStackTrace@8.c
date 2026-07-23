/*
 * XREFs of _RtlStdLogStackTrace@8 @ 0x4B369040
 * Callers:
 *     _RtlLogStackBackTraceEx@4 @ 0x4B2DFD89 (_RtlLogStackBackTraceEx@4.c)
 *     _RtlLogStackTrace@4 @ 0x4B368E30 (_RtlLogStackTrace@4.c)
 * Callees:
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 *     _RtlpStdLogCapturedStackTrace@12 @ 0x4B3694C1 (_RtlpStdLogCapturedStackTrace@12.c)
 */

int __stdcall RtlStdLogStackTrace(PRTL_SRWLOCK SRWLock, int a2)
{
  PVOID BackTrace; // [esp+Ch] [ebp-8Ch] BYREF
  ULONG BackTraceHash; // [esp+94h] [ebp-4h] BYREF

  if ( RtlCaptureStackBackTrace(a2 + 1, 0x20u, &BackTrace, &BackTraceHash) )
    return RtlpStdLogCapturedStackTrace(SRWLock, BackTraceHash);
  else
    return 0;
}
