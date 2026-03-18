/*
 * XREFs of IopReleaseDeviceResources @ 0x14074164C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14036F2E0 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14076AA54 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x1407CE860 (PnpDriverLoadingFailed.c)
 *     PnpDisableDevice @ 0x1408A47BC (PnpDisableDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     PnpRequestDeviceAction @ 0x14036E774 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403F9C50 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     _CmOpenDeviceRegKey @ 0x14066D59C (_CmOpenDeviceRegKey.c)
 *     PipSetDevNodeFlags @ 0x14073457C (PipSetDevNodeFlags.c)
 *     IopQueryDeviceResources @ 0x1407498AC (IopQueryDeviceResources.c)
 *     IopLegacyResourceAllocation @ 0x14074C8B4 (IopLegacyResourceAllocation.c)
 */

__int64 __fastcall IopReleaseDeviceResources(__int64 a1, int a2)
{
  __int64 result; // rax
  PVOID v5; // rbx
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall *v8)(__int64, __int64, PVOID); // rax
  __int64 v9; // rdx
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+90h] [rbp+40h] BYREF
  PVOID Data; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+58h] BYREF

  ValueName = 0LL;
  if ( !*(_QWORD *)(a1 + 416) && (*(_DWORD *)(a1 + 396) & 0x80u) == 0 )
    return 0LL;
  DataSize = 0;
  v5 = 0LL;
  Data = 0LL;
  if ( a2 && (*(_DWORD *)(a1 + 396) & 1) == 0 )
  {
    if ( (int)IopQueryDeviceResources(*(_QWORD *)(a1 + 32), 0LL, &Data, &DataSize) < 0 )
    {
      Data = 0LL;
      DataSize = 0;
    }
    else
    {
      v5 = Data;
    }
  }
  result = IopLegacyResourceAllocation(-1, (_DWORD)PnpDriverObject, *(_QWORD *)(a1 + 32), 0, 0LL);
  if ( (int)result >= 0 )
  {
    PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
    if ( a2 && (*(_DWORD *)(a1 + 396) & 1) == 0 )
    {
      v6 = *(_QWORD *)(a1 + 48);
      KeyHandle = 0LL;
      if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v6, 20, 0, 983103, v5 != 0LL, (__int64)&KeyHandle, 0LL) >= 0 )
      {
        *(_DWORD *)&ValueName.Length = 1441812;
        ValueName.Buffer = (wchar_t *)L"BootConfig";
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        if ( Data )
          ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, Data, DataSize);
        else
          ZwDeleteValueKey(KeyHandle, &ValueName);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ZwClose(KeyHandle);
        v5 = Data;
      }
      if ( v5 )
      {
        PipSetDevNodeFlags(a1, 64);
        v8 = (void (__fastcall *)(__int64, __int64, PVOID))IopAllocateBootResourcesRoutine;
        v9 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 544) = v5;
        v8(4LL, v9, v5);
      }
    }
    return 0LL;
  }
  return result;
}
