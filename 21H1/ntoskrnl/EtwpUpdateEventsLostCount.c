/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x140369DA8
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x140208060 (EtwpReserveTraceBuffer.c)
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 *     EtwpFailLogging @ 0x140369B54 (EtwpFailLogging.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403AA58C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCompressBuffer @ 0x1405A6AB0 (EtwpCompressBuffer.c)
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
