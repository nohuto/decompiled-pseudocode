/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x140267618
 * Callers:
 *     EtwpSwitchBuffer @ 0x1402670E0 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x14066A038 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x14093F9B8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x1402473F0 (ObGetCurrentIrql.c)
 *     EtwpGetLoggerTimeStamp @ 0x140266AA8 (EtwpGetLoggerTimeStamp.c)
 *     EtwpEnqueueAvailableBuffer @ 0x14026747C (EtwpEnqueueAvailableBuffer.c)
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
 *     EtwpCompressionDpc @ 0x1405AB350 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x1405ABCC0 (EtwpReenableCompression.c)
 */

char __fastcall EtwpPrepareDirtyBuffer(__int64 a1, LARGE_INTEGER *a2)
{
  int v2; // eax
  LARGE_INTEGER LoggerTimeStamp; // rax

  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x400) != 0 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 4u);
      if ( !*(_DWORD *)(a1 + 1152) && *(_QWORD *)(a1 + 1248) >= 2LL * *(_QWORD *)(a1 + 1256) )
        EtwpReenableCompression(a1);
      LoggerTimeStamp.LowPart = *(_DWORD *)(a1 + 1152);
      if ( LoggerTimeStamp.LowPart )
      {
        LoggerTimeStamp.LowPart = _InterlockedExchange((volatile __int32 *)(a1 + 1120), 2);
        if ( !LoggerTimeStamp.LowPart )
        {
          if ( ObGetCurrentIrql() > 2u )
            LOBYTE(LoggerTimeStamp.LowPart) = KeInsertQueueDpc((PRKDPC)(a1 + 1176), 0LL, 0LL);
          else
            LOBYTE(LoggerTimeStamp.LowPart) = EtwpCompressionDpc(0LL, a1, 0LL, 0LL);
        }
      }
    }
    else
    {
      LOBYTE(LoggerTimeStamp.LowPart) = EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
    }
  }
  else
  {
    a2[5].HighPart = 3;
    LoggerTimeStamp = EtwpGetLoggerTimeStamp(a1);
    a2[2] = LoggerTimeStamp;
  }
  return LoggerTimeStamp.LowPart;
}
