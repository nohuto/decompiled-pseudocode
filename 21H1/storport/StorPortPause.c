/*
 * XREFs of StorPortPause @ 0x1C0038350
 * Callers:
 *     StorPortNotification @ 0x1C000D230 (StorPortNotification.c)
 *     RaidpLinkDown @ 0x1C003699C (RaidpLinkDown.c)
 *     StorPortPauseVrfy @ 0x1C007E700 (StorPortPauseVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C000E5B0 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C000E728 (DbgLogRequest.c)
 *     RaidResumeAdapterQueue @ 0x1C001033C (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C0010574 (RaidPauseAdapterQueue.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0035C20 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

char __fastcall StorPortPause(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v5 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0068350 & 0x200) != 0 )
    DbgLogRequest(v5, 14, retaddr, v5, a2, 0LL, 0LL);
  v6 = 255LL;
  if ( v5 )
    v6 = *(unsigned int *)(v5 + 56);
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
  {
    LODWORD(v10) = a2;
    LODWORD(v9) = v6;
    McTemplateK0pqq_EtwWriteTransfer(v6, &EventPortPause, a3, a1, v9, v10);
  }
  if ( !v5 )
    return 0;
  ++*(_DWORD *)(v5 + 5480);
  *(_DWORD *)(v5 + 1520) = a2;
  _InterlockedExchange((volatile __int32 *)(v5 + 1524), 1);
  RaidPauseAdapterQueue(v5);
  v8 = v5 + 1360;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 1376), 134684676, 134684677) != 134684677 )
    v8 = 0LL;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 32) = 3;
    RaidQueueDeferredItem((char *)(v5 + 1152), (struct _SLIST_ENTRY *)v8);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0068350 & 0x800) != 0 )
      DbgLogRequest(v5, 22, retaddr, 292LL, 0LL, 0LL, 0LL);
    if ( !(unsigned int)RaidResumeAdapterQueue(v5) )
      KeInsertQueueDpc((PRKDPC)(v5 + 1856), 0LL, 0LL);
  }
  return 1;
}
