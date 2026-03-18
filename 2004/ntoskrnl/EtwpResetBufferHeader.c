/*
 * XREFs of EtwpResetBufferHeader @ 0x14027E4F8
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x14027E1FC (EtwpDequeueFreeBuffer.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1406C7790 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpUpdateFileHeader @ 0x1406C9094 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1406CA960 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1407BDA8C (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x1409452CC (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall EtwpResetBufferHeader(__int64 a1, __int16 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 8) = 72;
  *(_WORD *)(a1 + 54) = a2;
  if ( (*(_WORD *)(a1 + 52) & 0x100) != 0 )
  {
    memset((void *)(a1 + *(unsigned int *)(a1 + 8)), 0, (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 8)));
    result = 65279LL;
    *(_WORD *)(a1 + 52) &= ~0x100u;
  }
  return result;
}
