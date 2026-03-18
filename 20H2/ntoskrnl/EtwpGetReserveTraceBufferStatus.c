/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x14036C78C
 * Callers:
 *     EtwpEventWriteFull @ 0x14020E300 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x140245640 (EtwpTraceMessageVa.c)
 *     EtwTraceEvent @ 0x1405A4670 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A4B18 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1406557F0 (EtwpWriteUserEvent.c)
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
