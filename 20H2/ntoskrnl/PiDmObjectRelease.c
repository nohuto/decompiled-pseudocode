/*
 * XREFs of PiDmObjectRelease @ 0x14063F020
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x14063D318 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x14063D4E4 (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14063D690 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14063DA00 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14063E984 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x14063EB10 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14063F0B4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14063F27C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlObjectEventRelease @ 0x14064117C (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140645FA8 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140646A00 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406D5410 (PiDmObjectGetCachedObjectReference.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1406D80D8 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406DC7A8 (PiUEventFreeClientRegistrationContext.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406DF688 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDmGetObjectConstraintList @ 0x1406ED5D0 (PiDmGetObjectConstraintList.c)
 *     PiDmListRemoveObjectWorker @ 0x140722AB0 (PiDmListRemoveObjectWorker.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140730960 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140730AA4 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1407430B8 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     IopProcessSetInterfaceState @ 0x1407439BC (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140744474 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407448FC (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140744C54 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectCreate @ 0x140745174 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x1407458B4 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x140745CE4 (PiDmCacheDataFree.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140745E90 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmListInitEnumCallback @ 0x14078AF50 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x140798920 (PiDmObjectManagerPopulate.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A5BAC (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     PiDmGetCacheKeys @ 0x14063F1CC (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x140745CE4 (PiDmCacheDataFree.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
