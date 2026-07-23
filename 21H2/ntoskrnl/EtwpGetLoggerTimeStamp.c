/*
 * XREFs of EtwpGetLoggerTimeStamp @ 0x1402D1328
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x14025437C (EtwpPrepareDirtyBuffer.c)
 *     EtwpLogContextSwapEvent @ 0x1403AEF80 (EtwpLogContextSwapEvent.c)
 *     EtwSendTraceBuffer @ 0x1405A6160 (EtwSendTraceBuffer.c)
 *     EtwpRelinquishCompressionTarget @ 0x1405AD9A4 (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x1405AD9F4 (EtwpRotateCompressionTarget.c)
 *     EtwpInitializeTimeStamp @ 0x1406B5044 (EtwpInitializeTimeStamp.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140266EC0 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __fastcall EtwpGetLoggerTimeStamp(__int64 a1)
{
  unsigned __int64 v1; // rax
  int v2; // eax
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 > 3 )
    goto LABEL_10;
  if ( !(_DWORD)v1 )
    return RtlGetSystemTimePrecise();
  v2 = v1 - 1;
  if ( !v2 )
    return KeQueryPerformanceCounter(0LL);
  v4 = v2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      return (LARGE_INTEGER)__rdtsc();
LABEL_10:
    __fastfail(0x3Du);
  }
  v5 = 0LL;
  ((void (__fastcall *)(__int64 *))off_140C009E0[0])(&v5);
  return (LARGE_INTEGER)v5;
}
