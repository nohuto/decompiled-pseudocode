/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x14027E550
 * Callers:
 *     EtwpSwitchBuffer @ 0x14027E018 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x14066B214 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x140939B88 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140214C00 (KeInsertQueueDpc.c)
 *     EtwpEnqueueAvailableBuffer @ 0x14027E3B4 (EtwpEnqueueAvailableBuffer.c)
 *     ObGetCurrentIrql @ 0x1402C8F70 (ObGetCurrentIrql.c)
 *     EtwpGetLoggerTimeStamp @ 0x1402F3F58 (EtwpGetLoggerTimeStamp.c)
 *     EtwpCompressionDpc @ 0x1405A77F0 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x1405A8160 (EtwpReenableCompression.c)
 */

char __fastcall EtwpPrepareDirtyBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 LoggerTimeStamp; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x400) != 0 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 4u);
      if ( !*(_DWORD *)(a1 + 1184) && *(_QWORD *)(a1 + 1280) >= 2LL * *(_QWORD *)(a1 + 1288) )
        EtwpReenableCompression(a1);
      LODWORD(LoggerTimeStamp) = *(_DWORD *)(a1 + 1184);
      if ( (_DWORD)LoggerTimeStamp )
      {
        LODWORD(LoggerTimeStamp) = _InterlockedExchange((volatile __int32 *)(a1 + 1152), 2);
        if ( !(_DWORD)LoggerTimeStamp )
        {
          if ( (unsigned __int8)ObGetCurrentIrql(v7, v6) > 2u )
            LOBYTE(LoggerTimeStamp) = KeInsertQueueDpc((PRKDPC)(a1 + 1208), 0LL, 0LL);
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
