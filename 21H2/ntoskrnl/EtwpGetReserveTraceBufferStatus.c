/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x14036CF6C
 * Callers:
 *     EtwpTraceMessageVa @ 0x14027F090 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     EtwTraceEvent @ 0x1405A62D0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A6778 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140690950 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetReserveTraceBufferStatus(__int64 a1, unsigned int a2)
{
  if ( a2 > 0xFFF8 )
    return 3221225621LL;
  else
    return *(_DWORD *)(a1 + 8) < a2 ? -2147483643 : -1073741801;
}
