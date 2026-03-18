/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x14036A768
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x14029AB70 (EtwpReserveTraceBuffer.c)
 *     EtwpLogKernelEvent @ 0x14029B0C0 (EtwpLogKernelEvent.c)
 *     EtwpFailLogging @ 0x14036A514 (EtwpFailLogging.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403A68BC (EtwpLogSystemEventUnsafe.c)
 *     EtwpCompressBuffer @ 0x1405A71A0 (EtwpCompressBuffer.c)
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
