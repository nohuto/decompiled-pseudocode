/*
 * XREFs of EtwpRealtimeUpdateReferenceTime @ 0x1407BA91C
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x14067B6D0 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x14093D450 (EtwpRealtimeResetReferenceTime.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x140241760 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x1402DEE60 (EtwpInitializeBufferHeader.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpRealtimeSaveBuffer @ 0x1406E8AFC (EtwpRealtimeSaveBuffer.c)
 *     EtwpRealtimeDeliverBuffer @ 0x140704958 (EtwpRealtimeDeliverBuffer.c)
 */

__int64 __fastcall EtwpRealtimeUpdateReferenceTime(__int64 a1, __int128 *a2)
{
  bool v4; // zf
  __int128 v5; // xmm0
  _QWORD v7[11]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, 0x48uLL);
  EtwpInitializeBufferHeader((__int16 *)a1, v7);
  WORD2(v7[6]) &= ~0x100u;
  EtwpResetBufferHeader((__int64)v7, 3);
  v4 = *(_DWORD *)(a1 + 440) == 0;
  v5 = *a2;
  HIDWORD(v7[5]) = 3;
  LODWORD(v7[6]) = 72;
  *(_OWORD *)&v7[7] = v5;
  WORD2(v7[6]) = 1;
  if ( v4 )
    return EtwpRealtimeDeliverBuffer(a1, (__int64)v7);
  else
    return EtwpRealtimeSaveBuffer(a1, (__int64)v7);
}
