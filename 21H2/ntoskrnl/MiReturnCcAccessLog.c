/*
 * XREFs of MiReturnCcAccessLog @ 0x1402C811C
 * Callers:
 *     MiCheckAndProcessCcAccessLog @ 0x1403A3614 (MiCheckAndProcessCcAccessLog.c)
 *     MmPrefetchForCacheManager @ 0x1406E898C (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x14025C02C (MiQueuePageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x1402D4628 (MmFreeAccessPfnBuffer.c)
 */

void __fastcall MiReturnCcAccessLog(signed __int64 P, int a2)
{
  struct _SLIST_ENTRY *v2; // r8

  v2 = (struct _SLIST_ENTRY *)P;
  if ( a2 )
    *(_QWORD *)(P + 32) = *(_QWORD *)(P + 24);
  if ( !qword_140C4E800 )
    v2 = (struct _SLIST_ENTRY *)(-(__int64)(_InterlockedCompareExchange64(&qword_140C4E800, P, 0LL) != 0) & P);
  if ( v2 )
  {
    if ( v2[2].Next == (_SLIST_ENTRY *)(&v2[4].Next + 1) )
      MmFreeAccessPfnBuffer(v2);
    else
      MiQueuePageAccessLog(v2);
  }
}
