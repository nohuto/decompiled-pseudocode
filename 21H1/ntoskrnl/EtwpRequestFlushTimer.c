/*
 * XREFs of EtwpRequestFlushTimer @ 0x14023602C
 * Callers:
 *     EtwpSwitchBuffer @ 0x140241288 (EtwpSwitchBuffer.c)
 *     EtwpLoggerDpc @ 0x1405A4B80 (EtwpLoggerDpc.c)
 *     EtwpFlushActiveBuffers @ 0x1405F2E4C (EtwpFlushActiveBuffers.c)
 *     EtwpLogger @ 0x14067AF70 (EtwpLogger.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140236140 (ObGetCurrentIrql.c)
 *     KeSetCoalescableTimer @ 0x140236170 (KeSetCoalescableTimer.c)
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 */

char __fastcall EtwpRequestFlushTimer(__int64 a1, char a2)
{
  unsigned int v3; // ecx
  ULONG v4; // r9d
  __int64 v5; // rdx
  unsigned int v6; // ecx

  if ( (*(_DWORD *)(a1 + 836) & 0x400) == 0 )
  {
    if ( a2 || (unsigned __int8)ObGetCurrentIrql() > 2u )
    {
      if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 9u) )
        KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
      return 1;
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 0xAu) )
    {
      v3 = *(_DWORD *)(a1 + 224);
      if ( (*(_DWORD *)(a1 + 12) & 0x10) == 0 )
        v3 *= 1000;
      v4 = 500;
      v5 = EtwpOneMs * v3;
      v6 = v3 >> 2;
      if ( v6 < 0x1F4 )
        v4 = v6;
      KeSetCoalescableTimer((PKTIMER)(a1 + 520), (LARGE_INTEGER)v5, 0, v4, 0LL);
      return 1;
    }
  }
  return 0;
}
