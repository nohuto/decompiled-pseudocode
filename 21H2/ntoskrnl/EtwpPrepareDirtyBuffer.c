/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x1402E1CBC
 * Callers:
 *     EtwpSwitchBuffer @ 0x1402E1704 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x14079885C (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1409E971C (EtwpBufferingModeFlush.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1402E1AB0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x1402E1D0C (EtwpGetLoggerTimeStamp.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     EtwpCompressionDpc @ 0x140634F40 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x1406354FC (EtwpReenableCompression.c)
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
      if ( !*(_DWORD *)(a1 + 1168) && *(_QWORD *)(a1 + 1264) >= 2LL * *(_QWORD *)(a1 + 1272) )
        EtwpReenableCompression(a1);
      LODWORD(LoggerTimeStamp) = *(_DWORD *)(a1 + 1168);
      if ( (_DWORD)LoggerTimeStamp )
      {
        LODWORD(LoggerTimeStamp) = _InterlockedExchange((volatile __int32 *)(a1 + 1136), 2);
        if ( !(_DWORD)LoggerTimeStamp )
        {
          if ( ObGetCurrentIrql() > 2u )
            LOBYTE(LoggerTimeStamp) = KeInsertQueueDpc((PRKDPC)(a1 + 1192), 0LL, 0LL);
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
