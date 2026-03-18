/*
 * XREFs of EtwpGetLoggerTimeStamp @ 0x140240C58
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x1402417B8 (EtwpPrepareDirtyBuffer.c)
 *     EtwpLogContextSwapEvent @ 0x1403AA880 (EtwpLogContextSwapEvent.c)
 *     EtwSendTraceBuffer @ 0x1405A0370 (EtwSendTraceBuffer.c)
 *     EtwpRelinquishCompressionTarget @ 0x1405A7B24 (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x1405A7B74 (EtwpRotateCompressionTarget.c)
 *     EtwpInitializeTimeStamp @ 0x1406794A0 (EtwpInitializeTimeStamp.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x140355570 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __fastcall EtwpGetLoggerTimeStamp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  int v5; // eax
  int v7; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 > 3 )
    goto LABEL_10;
  if ( !(_DWORD)v4 )
    return (LARGE_INTEGER)RtlGetSystemTimePrecise(a1, a2, a3, a4);
  v5 = v4 - 1;
  if ( !v5 )
    return KeQueryPerformanceCounter(0LL);
  v7 = v5 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
      return (LARGE_INTEGER)__rdtsc();
LABEL_10:
    __fastfail(0x3Du);
  }
  v8 = 0LL;
  ((void (__fastcall *)(__int64 *))off_140C009E0[0])(&v8);
  return (LARGE_INTEGER)v8;
}
