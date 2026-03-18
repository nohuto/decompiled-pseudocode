/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x1403884A4
 * Callers:
 *     EtwpTraceMessageVa @ 0x14022A8D0 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x1402AB170 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AB658 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x140460192 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x140630ACC (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1407B4D70 (EtwpWriteUserEvent.c)
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
