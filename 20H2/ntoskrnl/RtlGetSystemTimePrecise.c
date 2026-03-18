/*
 * XREFs of RtlGetSystemTimePrecise @ 0x1402D6A90
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x140226840 (EtwpReserveTraceBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x140266AA8 (EtwpGetLoggerTimeStamp.c)
 *     KiExecuteAllDpcs @ 0x14028B270 (KiExecuteAllDpcs.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x1402D1218 (EtwGetKernelTraceTimestampSilo.c)
 *     KeQuerySystemTimePrecise @ 0x1402D6A70 (KeQuerySystemTimePrecise.c)
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     HalpSetVirtualRtc @ 0x140312D6C (HalpSetVirtualRtc.c)
 *     WmiGetClock @ 0x1405A4D30 (WmiGetClock.c)
 *     EtwpTraceSystemInitialization @ 0x140A691C4 (EtwpTraceSystemInitialization.c)
 *     PspInitPhase2 @ 0x140A6DE2C (PspInitPhase2.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 */

__int64 RtlGetSystemTimePrecise()
{
  __int64 v0; // rbx
  __int64 v1; // rbp
  LARGE_INTEGER v2; // rsi
  unsigned __int64 v3; // r14
  char v4; // di
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx

  while ( 1 )
  {
    v0 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v1 = MEMORY[0xFFFFF78000000014];
      v2.QuadPart = MEMORY[0xFFFFF78000000348];
      v3 = MEMORY[0xFFFFF78000000358];
      v4 = MEMORY[0xFFFFF78000000368];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v0 )
        break;
    }
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v2.QuadPart )
    return v1;
  v6 = PerformanceCounter.QuadPart - v2.QuadPart - 1;
  if ( v4 )
    v6 <<= v4;
  return (((unsigned __int64)v6 * (unsigned __int128)v3) >> 64) + v1;
}
