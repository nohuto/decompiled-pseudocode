/*
 * XREFs of PiDmGetObject @ 0x14063EC9C
 * Callers:
 *     PiPnpRtlObjectEventCreate @ 0x14063D4E4 (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14063D690 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14063E984 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x14063EB10 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14063F0B4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14063F27C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140646A00 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406D5410 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406DF688 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDmGetObjectConstraintList @ 0x1406ED5D0 (PiDmGetObjectConstraintList.c)
 *     PiUEventHandleRegistration @ 0x140718598 (PiUEventHandleRegistration.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14072EC98 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140730714 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140742F20 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     IopProcessSetInterfaceState @ 0x1407439BC (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140744474 (IopRegisterDeviceInterface.c)
 *     PiDmObjectProcessPropertyChange @ 0x1407458B4 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x140745D30 (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140745E90 (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A5BAC (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x1408A5D64 (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     PiDmLookupObject @ 0x14063ED2C (PiDmLookupObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14063EFC0 (PiDmGetObjectManagerForObjectType.c)
 */

__int64 __fastcall PiDmGetObject(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v5; // esi
  struct _ERESOURCE *ObjectManagerForObjectType; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax

  v5 = 0;
  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(ObjectManagerForObjectType, 1u);
  v8 = PiDmLookupObject(ObjectManagerForObjectType, a2);
  *a3 = v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  else
    v5 = -1073741772;
  ExReleaseResourceLite(ObjectManagerForObjectType);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
