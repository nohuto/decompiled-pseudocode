/*
 * XREFs of PiDmObjectRelease @ 0x14062BC00
 * Callers:
 *     PiDmObjectGetCachedObjectReference @ 0x140611F80 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x14061E5F0 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140623674 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140623900 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1406249E8 (PiDqQueryActionQueueEntryFree.c)
 *     PiPnpRtlObjectEventRelease @ 0x1406290D4 (PiPnpRtlObjectEventRelease.c)
 *     PiDmEnumObjectsWithCallback @ 0x140629EF8 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x14062A0C4 (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14062A270 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14062A5E0 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14062B564 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x14062B6F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14062BC94 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14062BE5C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmGetObjectConstraintList @ 0x14062ECFC (PiDmGetObjectConstraintList.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406B8888 (PiUEventFreeClientRegistrationContext.c)
 *     PiDmListRemoveObjectWorker @ 0x140730CE8 (PiDmListRemoveObjectWorker.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140734B50 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140734D34 (PiPnpRtlFreePanelRemoveInfo.c)
 *     IopRegisterDeviceInterface @ 0x140748630 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140748AB8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140748B68 (PiDmAddCacheReferenceForObject.c)
 *     IopProcessSetInterfaceState @ 0x14074929C (IopProcessSetInterfaceState.c)
 *     PiDmObjectCreate @ 0x140749ED0 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x14074A614 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x14074AA44 (PiDmCacheDataFree.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14074ABF0 (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140771FEC (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x140790640 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x1407A3040 (PiDmObjectManagerPopulate.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A32DC (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     PiDmGetCacheKeys @ 0x14062BDAC (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x14074AA44 (PiDmCacheDataFree.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
