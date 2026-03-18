/*
 * XREFs of PiDmObjectRelease @ 0x1406A8D70
 * Callers:
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1406A02D0 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1406A055C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1406A1728 (PiDqQueryActionQueueEntryFree.c)
 *     PiPnpRtlObjectEventRelease @ 0x1406A6008 (PiPnpRtlObjectEventRelease.c)
 *     PiDmEnumObjectsWithCallback @ 0x1406A7068 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x1406A7234 (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406A73E0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1406A7750 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x1406A78A0 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1406A86D4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1406A8860 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406A8E04 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1406A8FCC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmGetObjectConstraintList @ 0x1406B3384 (PiDmGetObjectConstraintList.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406DEFC0 (PiDmObjectGetCachedObjectReference.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406E6538 (PiUEventFreeClientRegistrationContext.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406E93F8 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDmListRemoveObjectWorker @ 0x14071CCE8 (PiDmListRemoveObjectWorker.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140720990 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140720AD4 (PiPnpRtlFreePanelRemoveInfo.c)
 *     IopRegisterDeviceInterface @ 0x14072DB00 (IopRegisterDeviceInterface.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14072DF88 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x14072E2E0 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectCreate @ 0x14072EBE8 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x14072F324 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x14072F754 (PiDmCacheDataFree.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14072F900 (PiDmGetReferencedObjectFromProperty.c)
 *     IopProcessSetInterfaceState @ 0x14072FAFC (IopProcessSetInterfaceState.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14075D1DC (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x14077E240 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x14078A310 (PiDmObjectManagerPopulate.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14089ED5C (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     PiDmGetCacheKeys @ 0x1406A8F1C (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x14072F754 (PiDmCacheDataFree.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
