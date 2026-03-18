/*
 * XREFs of EtwpRequestFlushTimer @ 0x1402472E4
 * Callers:
 *     EtwpSwitchBuffer @ 0x1402670E0 (EtwpSwitchBuffer.c)
 *     EtwpLoggerDpc @ 0x1405A8D10 (EtwpLoggerDpc.c)
 *     EtwpFlushActiveBuffers @ 0x14066A038 (EtwpFlushActiveBuffers.c)
 *     EtwpLogger @ 0x140715350 (EtwpLogger.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x1402473F0 (ObGetCurrentIrql.c)
 *     KeSetCoalescableTimer @ 0x140247420 (KeSetCoalescableTimer.c)
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
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
