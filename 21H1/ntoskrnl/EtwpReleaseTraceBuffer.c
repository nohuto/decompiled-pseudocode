/*
 * XREFs of EtwpReleaseTraceBuffer @ 0x1402D6FA0
 * Callers:
 *     EtwpEventWriteFull @ 0x140256EC0 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x1402D68C0 (EtwpTraceMessageVa.c)
 *     EtwpFailLogging @ 0x140369B54 (EtwpFailLogging.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AA58C (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1403AA880 (EtwpLogContextSwapEvent.c)
 *     EtwTraceEvent @ 0x1405A04E0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A0988 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140669E00 (EtwpWriteUserEvent.c)
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
