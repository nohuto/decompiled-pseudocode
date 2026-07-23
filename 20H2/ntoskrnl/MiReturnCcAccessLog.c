/*
 * XREFs of MiReturnCcAccessLog @ 0x140326F44
 * Callers:
 *     MiCheckAndProcessCcAccessLog @ 0x1403A2D54 (MiCheckAndProcessCcAccessLog.c)
 *     MmPrefetchForCacheManager @ 0x14065829C (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x14023356C (MiQueuePageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x1402440A8 (MmFreeAccessPfnBuffer.c)
 */

void __fastcall MiReturnCcAccessLog(signed __int64 P, int a2)
{
  _SLIST_ENTRY *v2; // r8

  v2 = (_SLIST_ENTRY *)P;
  if ( a2 )
    *(_QWORD *)(P + 32) = *(_QWORD *)(P + 24);
  if ( !qword_140C4E680 )
    v2 = (_SLIST_ENTRY *)(-(__int64)(_InterlockedCompareExchange64(&qword_140C4E680, P, 0LL) != 0) & P);
  if ( v2 )
  {
    if ( v2[2].Next == (_SLIST_ENTRY *)(&v2[4].Next + 1) )
      MmFreeAccessPfnBuffer(v2, 1);
    else
      MiQueuePageAccessLog(v2);
  }
}
