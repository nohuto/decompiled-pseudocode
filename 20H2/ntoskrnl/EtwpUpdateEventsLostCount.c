/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x14036C748
 * Callers:
 *     EtwpLogKernelEvent @ 0x140226150 (EtwpLogKernelEvent.c)
 *     EtwpReserveTraceBuffer @ 0x140226840 (EtwpReserveTraceBuffer.c)
 *     EtwpFailLogging @ 0x14036C4F4 (EtwpFailLogging.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403A9378 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCompressBuffer @ 0x1405AAD04 (EtwpCompressBuffer.c)
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
