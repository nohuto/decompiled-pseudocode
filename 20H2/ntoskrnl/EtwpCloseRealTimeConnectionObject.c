/*
 * XREFs of EtwpCloseRealTimeConnectionObject @ 0x1407121B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpRealtimeDisconnectConsumer @ 0x1407125F8 (EtwpRealtimeDisconnectConsumer.c)
 */

__int64 __fastcall EtwpCloseRealTimeConnectionObject(__int64 a1, __int64 a2)
{
  return EtwpRealtimeDisconnectConsumer(a2);
}
