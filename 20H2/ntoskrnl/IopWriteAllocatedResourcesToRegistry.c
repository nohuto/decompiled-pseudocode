/*
 * XREFs of IopWriteAllocatedResourcesToRegistry @ 0x140748A8C
 * Callers:
 *     PnpBuildCmResourceLists @ 0x14074898C (PnpBuildCmResourceLists.c)
 *     PnpReleaseResourcesInternal @ 0x14074A3D4 (PnpReleaseResourcesInternal.c)
 *     IopLegacyResourceAllocation @ 0x14074C8B4 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     PnpRestoreResourcesInternal @ 0x1408B5D78 (PnpRestoreResourcesInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403F9C50 (ZwDeleteValueKey.c)
 *     _CmOpenDeviceRegKey @ 0x14066D59C (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall IopWriteAllocatedResourcesToRegistry(__int64 a1, void *a2, ULONG a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  NTSTATUS v8; // eax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  ValueName = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v7 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 19, 0, 983103, 1, (__int64)&KeyHandle, 0LL);
  if ( v7 >= 0 )
  {
    ValueName.Buffer = L"AllocConfig";
    *(_DWORD *)&ValueName.Length = 1572886;
    if ( a2 )
      v8 = ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, a2, a3);
    else
      v8 = ZwDeleteValueKey(KeyHandle, &ValueName);
    v7 = v8;
    ZwClose(KeyHandle);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
