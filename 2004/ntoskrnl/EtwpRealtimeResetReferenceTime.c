/*
 * XREFs of EtwpRealtimeResetReferenceTime @ 0x14093E6D0
 * Callers:
 *     EtwpRealtimeFlushSavedBuffers @ 0x1406CA4C8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x1406CA74C (EtwpRealtimeCreateLogfile.c)
 * Callees:
 *     EtwpRealtimeUpdateReferenceTime @ 0x1407BDA8C (EtwpRealtimeUpdateReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeResetReferenceTime(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)(a1 + 448) = *(_OWORD *)(a1 + 320);
  if ( *(_DWORD *)(a1 + 360) )
    return EtwpRealtimeUpdateReferenceTime(a1, (__int128 *)(a1 + 448));
  return result;
}
