/*
 * XREFs of StorPortResume @ 0x1C00389D0
 * Callers:
 *     RaidpLinkUp @ 0x1C0036A08 (RaidpLinkUp.c)
 *     StorPortResumeVrfy @ 0x1C007E760 (StorPortResumeVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C000E5B0 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C000E728 (DbgLogRequest.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0035BAC (McTemplateK0pq_EtwWriteTransfer.c)
 */

char __fastcall StorPortResume(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0068350 & 0x200) != 0 )
    DbgLogRequest(v4, 15, retaddr, v4, 0LL, 0LL, 0LL);
  v5 = 255LL;
  if ( v4 )
    v5 = *(unsigned int *)(v4 + 56);
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
  {
    LODWORD(v8) = v5;
    McTemplateK0pq_EtwWriteTransfer(v5, &EventPortResume, a3, a1, v8);
  }
  if ( !v4 )
    return 0;
  v7 = v4 + 1440;
  _InterlockedExchange((volatile __int32 *)(v4 + 1524), 0);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 1456), 134684676, 134684677) != 134684677 )
    v7 = 0LL;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 32) = 4;
    RaidQueueDeferredItem((char *)(v4 + 1152), (struct _SLIST_ENTRY *)v7);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0068350 & 0x800) != 0 )
      DbgLogRequest(v4, 22, retaddr, 415LL, 0LL, 0LL, 0LL);
  }
  return 1;
}
