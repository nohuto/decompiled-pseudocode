/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x14036CD78
 * Callers:
 *     EtwpLogKernelEvent @ 0x140350000 (EtwpLogKernelEvent.c)
 *     EtwpReserveTraceBuffer @ 0x1403506F0 (EtwpReserveTraceBuffer.c)
 *     EtwpFailLogging @ 0x14036CB24 (EtwpFailLogging.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AEB1C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCompressBuffer @ 0x1405AC714 (EtwpCompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpUpdateEventsLostCount(__int64 a1)
{
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 256));
  result = *(unsigned int *)(a1 + 832);
  if ( (result & 8) != 0 )
    *(_DWORD *)(a1 + 464) = 1;
  return result;
}
