/*
 * XREFs of EtwpResetBufferHeader @ 0x140241760
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140241460 (EtwpDequeueFreeBuffer.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140678D0C (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpUpdateFileHeader @ 0x14067C0A4 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x14067CF90 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1407BA91C (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x14094405C (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
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
