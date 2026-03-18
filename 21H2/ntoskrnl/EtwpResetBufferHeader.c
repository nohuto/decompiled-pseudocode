/*
 * XREFs of EtwpResetBufferHeader @ 0x1402E1C2C
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1402E18F8 (EtwpDequeueFreeBuffer.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1406EDEC8 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1406EF9E0 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpUpdateFileHeader @ 0x1406F09A8 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x14085E858 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x1409ECCCC (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall EtwpResetBufferHeader(__int64 a1, __int16 a2)
{
  unsigned __int8 v3; // cf
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = _bittest16((const signed __int16 *)(a1 + 52), 8u);
  *(_DWORD *)(a1 + 8) = 72;
  *(_WORD *)(a1 + 54) = a2;
  if ( v3 )
  {
    memset((void *)(a1 + *(unsigned int *)(a1 + 8)), 0, (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 8)));
    result = 65279LL;
    *(_WORD *)(a1 + 52) &= ~0x100u;
  }
  return result;
}
