/*
 * XREFs of PiDmObjectRelease @ 0x140636DF0
 * Callers:
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14062E5EC (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14062E878 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14062F968 (PiDqQueryActionQueueEntryFree.c)
 *     PiPnpRtlObjectEventRelease @ 0x140634048 (PiPnpRtlObjectEventRelease.c)
 *     PiDmEnumObjectsWithCallback @ 0x1406350E8 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x1406352B4 (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140635460 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1406357D0 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x140635920 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x140636754 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1406368E0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140636E84 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14063704C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmGetObjectConstraintList @ 0x140639EEC (PiDmGetObjectConstraintList.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406B2EC0 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406BF788 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406E15A8 (PiUEventFreeClientRegistrationContext.c)
 *     PiDmListRemoveObjectWorker @ 0x140730B1C (PiDmListRemoveObjectWorker.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140734990 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140734B74 (PiPnpRtlFreePanelRemoveInfo.c)
 *     IopRegisterDeviceInterface @ 0x140748470 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407488F8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407489A8 (PiDmAddCacheReferenceForObject.c)
 *     IopProcessSetInterfaceState @ 0x1407490DC (IopProcessSetInterfaceState.c)
 *     PiDmObjectCreate @ 0x140749D10 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x14074A454 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x14074A884 (PiDmCacheDataFree.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14074AA30 (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140771E2C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x14078F090 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x1407A2E40 (PiDmObjectManagerPopulate.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A317C (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     PiDmGetCacheKeys @ 0x140636F9C (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x14074A884 (PiDmCacheDataFree.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmObjectRelease(unsigned int *P)
{
  void *v2; // rcx
  char *v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 2, 0xFFFFFFFF) == 1 )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x5A706E50u);
    PiDmGetCacheKeys(P[7], &v6, &v5);
    if ( v5 )
    {
      v3 = (char *)(P + 28);
      v4 = v5;
      do
      {
        PiDmCacheDataFree(v3);
        v3 += 24;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(P, 0x5A706E50u);
  }
}
