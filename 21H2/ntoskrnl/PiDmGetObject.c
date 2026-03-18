/*
 * XREFs of PiDmGetObject @ 0x14077B0A4
 * Callers:
 *     PiDmCacheDataEncode @ 0x1406D27C8 (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1406D2EE0 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406D3020 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406E5780 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140768D10 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     IopProcessSetInterfaceState @ 0x140769170 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140769C24 (IopRegisterDeviceInterface.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407762E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectConstraintList @ 0x14077747C (PiDmGetObjectConstraintList.c)
 *     PiDmObjectProcessPropertyChange @ 0x1407783C4 (PiDmObjectProcessPropertyChange.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x14077A750 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14077AD94 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x14077AF18 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14077B3D4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14077B6F4 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14077BB00 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiUEventHandleRegistration @ 0x14078D764 (PiUEventHandleRegistration.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1409483EC (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140948638 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140948814 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x140948AC4 (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     PiDmLookupObject @ 0x14077B12C (PiDmLookupObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14077B33C (PiDmGetObjectManagerForObjectType.c)
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
  KeLeaveCriticalRegion();
  return v5;
}
