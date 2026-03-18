/*
 * XREFs of RawCheckForDeleteVolume @ 0x140394DD4
 * Callers:
 *     RawScanDeletedList @ 0x1405D90B8 (RawScanDeletedList.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     RawCleanupVcb @ 0x1405D8310 (RawCleanupVcb.c)
 *     RawDeleteVcb @ 0x1405D914C (RawDeleteVcb.c)
 */

char __fastcall RawCheckForDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  char v1; // di
  KIRQL v3; // dl
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  v1 = 0;
  if ( !LODWORD(AdvancedHeader[1].Resource) )
  {
    v3 = KeAcquireQueuedSpinLock(9uLL);
    if ( *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) )
    {
      KeReleaseQueuedSpinLock(9uLL, v3);
    }
    else
    {
      KeReleaseQueuedSpinLock(9uLL, v3);
      Flink = AdvancedHeader[1].FilterContexts.Flink;
      if ( Flink->Blink != &AdvancedHeader[1].FilterContexts
        || (Blink = AdvancedHeader[1].FilterContexts.Blink, Blink->Flink != &AdvancedHeader[1].FilterContexts) )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].PagingIoResource);
      RawCleanupVcb(AdvancedHeader);
      RawDeleteVcb(AdvancedHeader);
      return 1;
    }
  }
  return v1;
}
