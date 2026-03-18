/*
 * XREFs of PiDmGetObject @ 0x1405DA3BC
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405D1C7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405D8C04 (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405D8DB0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405DA0A4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1405DA230 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405DA7D4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405DA99C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmGetObjectConstraintList @ 0x1406C60D0 (PiDmGetObjectConstraintList.c)
 *     PiUEventHandleRegistration @ 0x1406F35B0 (PiUEventHandleRegistration.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140701D50 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x14070D258 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140720CA8 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140722604 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140733A90 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     IopProcessSetInterfaceState @ 0x14073452C (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140734FE4 (IopRegisterDeviceInterface.c)
 *     PiDmObjectProcessPropertyChange @ 0x140736424 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x1407368A0 (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140736A00 (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A007C (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x1408A0234 (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PiDmLookupObject @ 0x1405DA44C (PiDmLookupObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1405DA6E0 (PiDmGetObjectManagerForObjectType.c)
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
