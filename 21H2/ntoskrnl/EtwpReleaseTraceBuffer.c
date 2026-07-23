/*
 * XREFs of EtwpReleaseTraceBuffer @ 0x14027F770
 * Callers:
 *     EtwpTraceMessageVa @ 0x14027F090 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x14036CCD4 (EtwpFailLogging.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AEC8C (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1403AEF80 (EtwpLogContextSwapEvent.c)
 *     EtwTraceEvent @ 0x1405A62D0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A6778 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140690950 (EtwpWriteUserEvent.c)
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
