/*
 * XREFs of IopWriteAllocatedResourcesToRegistry @ 0x140737FFC
 * Callers:
 *     PnpBuildCmResourceLists @ 0x140737EFC (PnpBuildCmResourceLists.c)
 *     PnpReleaseResourcesInternal @ 0x140739944 (PnpReleaseResourcesInternal.c)
 *     IopLegacyResourceAllocation @ 0x14073BE24 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     PnpRestoreResourcesInternal @ 0x1408AEF28 (PnpRestoreResourcesInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403F3DF0 (ZwDeleteValueKey.c)
 *     _CmOpenDeviceRegKey @ 0x140617944 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall IopWriteAllocatedResourcesToRegistry(__int64 a1, void *a2, ULONG a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  return (unsigned int)v7;
}
