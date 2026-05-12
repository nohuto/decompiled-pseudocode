/*
 * XREFs of RaidInitializeDeferredQueue @ 0x1C00327F4
 * Callers:
 *     RaidAdapterConfigureResources @ 0x1C002A894 (RaidAdapterConfigureResources.c)
 *     RaidAdapterInitializeWmi @ 0x1C002BCD4 (RaidAdapterInitializeWmi.c)
 * Callees:
 *     RaidAdjustDeferredQueueDepth @ 0x1C00326E0 (RaidAdjustDeferredQueueDepth.c)
 */

__int64 __fastcall RaidInitializeDeferredQueue(__int64 a1, void *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  if ( a4 < 0x20 )
    return 3221225714LL;
  *(_QWORD *)(a1 + 112) = a5;
  *(_WORD *)(a1 + 2) = a4;
  KeInitializeDpc((PRKDPC)(a1 + 8), (PKDEFERRED_ROUTINE)RaidDeferredQueueDpcRoutine, a2);
  return RaidAdjustDeferredQueueDepth((union _SLIST_HEADER *)a1);
}
