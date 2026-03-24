/*
 * XREFs of EtwpGetLoggerTimeStamp @ 0x14022CAD8
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x1402663DC (EtwpPrepareDirtyBuffer.c)
 *     EtwpLogContextSwapEvent @ 0x1403AEE10 (EtwpLogContextSwapEvent.c)
 *     EtwSendTraceBuffer @ 0x1405A5F30 (EtwSendTraceBuffer.c)
 *     EtwpRelinquishCompressionTarget @ 0x1405AD774 (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x1405AD7C4 (EtwpRotateCompressionTarget.c)
 *     EtwpInitializeTimeStamp @ 0x1406DDD64 (EtwpInitializeTimeStamp.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x140278F20 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
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
    return (LARGE_INTEGER)RtlGetSystemTimePrecise();
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
