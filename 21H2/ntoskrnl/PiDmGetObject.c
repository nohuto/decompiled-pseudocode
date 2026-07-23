/*
 * XREFs of PiDmGetObject @ 0x14062B87C
 * Callers:
 *     PiDmObjectGetCachedObjectReference @ 0x140611F80 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x14061E5F0 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140623900 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlObjectEventCreate @ 0x14062A0C4 (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14062A270 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14062B564 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x14062B6F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14062BC94 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14062BE5C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmGetObjectConstraintList @ 0x14062ECFC (PiDmGetObjectConstraintList.c)
 *     PiUEventHandleRegistration @ 0x1406B9390 (PiUEventHandleRegistration.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x1407330A4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140734904 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     IopRegisterDeviceInterface @ 0x140748630 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x14074929C (IopProcessSetInterfaceState.c)
 *     PiDmObjectProcessPropertyChange @ 0x14074A614 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x14074AA90 (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14074ABF0 (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14076FE3C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A32DC (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x1408A3494 (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     PiDmLookupObject @ 0x14062B90C (PiDmLookupObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14062BBA0 (PiDmGetObjectManagerForObjectType.c)
 */

__int64 __fastcall PiDmGetObject(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v5; // esi
  struct _ERESOURCE *ObjectManagerForObjectType; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  return v5;
}
