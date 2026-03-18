/*
 * XREFs of EtwpRealtimeResetReferenceTime @ 0x140944490
 * Callers:
 *     EtwpRealtimeFlushSavedBuffers @ 0x14071582C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x140715AB0 (EtwpRealtimeCreateLogfile.c)
 * Callees:
 *     EtwpRealtimeUpdateReferenceTime @ 0x1407CC31C (EtwpRealtimeUpdateReferenceTime.c)
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
