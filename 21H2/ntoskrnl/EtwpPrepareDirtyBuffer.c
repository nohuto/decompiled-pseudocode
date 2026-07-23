/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x14025437C
 * Callers:
 *     EtwpSwitchBuffer @ 0x140253E34 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x140638A20 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x14093D358 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14023A8A0 (ObGetCurrentIrql.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1402541D0 (EtwpEnqueueAvailableBuffer.c)
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     EtwpGetLoggerTimeStamp @ 0x1402D1328 (EtwpGetLoggerTimeStamp.c)
 *     EtwpCompressionDpc @ 0x1405ACF80 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x1405AD8F0 (EtwpReenableCompression.c)
 */

char __fastcall EtwpPrepareDirtyBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 LoggerTimeStamp; // rax

  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x400) != 0 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 4u);
      if ( !*(_DWORD *)(a1 + 1152) && *(_QWORD *)(a1 + 1248) >= 2LL * *(_QWORD *)(a1 + 1256) )
        EtwpReenableCompression(a1);
      LODWORD(LoggerTimeStamp) = *(_DWORD *)(a1 + 1152);
      if ( (_DWORD)LoggerTimeStamp )
      {
        LODWORD(LoggerTimeStamp) = _InterlockedExchange((volatile __int32 *)(a1 + 1120), 2);
        if ( !(_DWORD)LoggerTimeStamp )
        {
          if ( ObGetCurrentIrql() > 2u )
            LOBYTE(LoggerTimeStamp) = KeInsertQueueDpc((PRKDPC)(a1 + 1176), 0LL, 0LL);
          else
            LOBYTE(LoggerTimeStamp) = EtwpCompressionDpc(0LL, a1, 0LL, 0LL);
        }
      }
    }
    else
    {
      LOBYTE(LoggerTimeStamp) = EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
    }
  }
  else
  {
    *(_DWORD *)(a2 + 44) = 3;
    LoggerTimeStamp = EtwpGetLoggerTimeStamp();
    *(_QWORD *)(a2 + 16) = LoggerTimeStamp;
  }
  return LoggerTimeStamp;
}
