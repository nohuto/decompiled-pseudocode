/*
 * XREFs of ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C004ED74
 * Callers:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0005A80 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0005BF0 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0007860 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C004F118 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPoolRemoveNonPagedAllocateTracker(FX_POOL_TRACKER *Tracker)
{
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&Tracker->Pool->NonPagedLock.m_Lock);
  Flink = Tracker->Link.Flink;
  if ( (FX_POOL_TRACKER *)Tracker->Link.Flink->Blink != Tracker
    || (Blink = Tracker->Link.Blink, (FX_POOL_TRACKER *)Blink->Flink != Tracker) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Tracker->Pool->NonPagedBytes -= Tracker->Size;
  --Tracker->Pool->NonPagedAllocations;
  KeReleaseSpinLock(&Tracker->Pool->NonPagedLock.m_Lock, v2);
}
