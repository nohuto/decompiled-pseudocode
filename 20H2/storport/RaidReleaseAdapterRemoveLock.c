/*
 * XREFs of RaidReleaseAdapterRemoveLock @ 0x1C0032AD8
 * Callers:
 *     StorPortWorkItemRoutine @ 0x1C003A000 (StorPortWorkItemRoutine.c)
 *     StorpQueueWorkItem @ 0x1C003CF48 (StorpQueueWorkItem.c)
 *     RaWmiDispatchIrp @ 0x1C00750B4 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleaseAdapterRemoveLock(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 280));
}
