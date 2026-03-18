/*
 * XREFs of PiDmObjectRelease @ 0x1405DA740
 * Callers:
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1405D1970 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405D1C7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1405D302C (PiDqQueryActionQueueEntryFree.c)
 *     PiPnpRtlObjectEventRelease @ 0x1405D79D4 (PiPnpRtlObjectEventRelease.c)
 *     PiDmEnumObjectsWithCallback @ 0x1405D8A38 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405D8C04 (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405D8DB0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1405D9120 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405DA0A4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1405DA230 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405DA7D4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405DA99C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmGetObjectConstraintList @ 0x1406C60D0 (PiDmGetObjectConstraintList.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140701D50 (PiDmObjectGetCachedObjectReference.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14070A3A8 (PiUEventFreeClientRegistrationContext.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x14070D258 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDmListRemoveObjectWorker @ 0x140714AE8 (PiDmListRemoveObjectWorker.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140722850 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140722994 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140733C28 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     IopProcessSetInterfaceState @ 0x14073452C (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140734FE4 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14073546C (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407357C4 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectCreate @ 0x140735CE8 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x140736424 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x140736854 (PiDmCacheDataFree.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140736A00 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmListInitEnumCallback @ 0x14077D9B0 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x1407A46B4 (PiDmObjectManagerPopulate.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A007C (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     PiDmGetCacheKeys @ 0x1405DA8EC (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x140736854 (PiDmCacheDataFree.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
