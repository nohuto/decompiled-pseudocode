/*
 * XREFs of EtwpReleaseTraceBuffer @ 0x14025DC40
 * Callers:
 *     EtwpTraceMessageVa @ 0x14025D560 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x14025DF60 (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x14036CB24 (EtwpFailLogging.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AEB1C (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1403AEE10 (EtwpLogContextSwapEvent.c)
 *     EtwTraceEvent @ 0x1405A60A0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A6548 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140627BC0 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall EtwpReleaseTraceBuffer(signed __int64 *a1)
{
  signed __int64 v1; // r10
  signed __int64 *v2; // r9
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  v1 = *a1;
  v2 = (signed __int64 *)a1[1];
  _m_prefetchw(v2);
  result = *v2;
  if ( (v1 ^ (unsigned __int64)*v2) >= 0xF )
  {
LABEL_4:
    result = *a1;
    _InterlockedDecrement((volatile signed __int32 *)(*a1 + 12));
  }
  else
  {
    while ( 1 )
    {
      v4 = result;
      result = _InterlockedCompareExchange64(v2, result + 1, result);
      if ( v4 == result )
        break;
      if ( (v1 ^ (unsigned __int64)result) >= 0xF )
        goto LABEL_4;
    }
  }
  return result;
}
