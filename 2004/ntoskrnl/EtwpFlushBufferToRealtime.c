/*
 * XREFs of EtwpFlushBufferToRealtime @ 0x14069BF88
 * Callers:
 *     EtwpFlushBuffer @ 0x14069BE48 (EtwpFlushBuffer.c)
 * Callees:
 *     EtwpRealtimeDeliverBuffer @ 0x14069C05C (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeSaveBuffer @ 0x1406CBE3C (EtwpRealtimeSaveBuffer.c)
 */

__int64 __fastcall EtwpFlushBufferToRealtime(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( !*(_DWORD *)(a1 + 360) || *(_DWORD *)(a1 + 440) || (result = EtwpRealtimeDeliverBuffer(), (int)result < 0) )
  {
    if ( !a3 )
      return EtwpRealtimeSaveBuffer(a1, a2);
  }
  else if ( !a3 )
  {
    return result;
  }
  if ( !*(_DWORD *)(a1 + 360) || *(_DWORD *)(a1 + 440) )
    return 0LL;
  return result;
}
