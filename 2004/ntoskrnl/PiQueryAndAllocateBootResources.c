/*
 * XREFs of PiQueryAndAllocateBootResources @ 0x14073A7BC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403F41C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403F5080 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     _CmOpenDeviceRegKey @ 0x1405E180C (_CmOpenDeviceRegKey.c)
 *     PipSetDevNodeFlags @ 0x140725AEC (PipSetDevNodeFlags.c)
 *     IopQueryDeviceResources @ 0x14073A99C (IopQueryDeviceResources.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryAndAllocateBootResources(__int64 a1)
{
  PVOID v1; // rbx
  int v3; // esi
  int v4; // eax
  HANDLE v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+90h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+48h] BYREF
  PVOID Data; // [rsp+A0h] [rbp+50h] BYREF

  v1 = 0LL;
  v3 = 0;
  Data = 0LL;
  ValueName = 0LL;
  DataSize = 0;
  KeyHandle = 0LL;
  if ( !*(_QWORD *)(a1 + 544) )
  {
    v3 = IopQueryDeviceResources(*(_QWORD *)(a1 + 32), 0LL, &Data, &DataSize);
    if ( v3 < 0 )
    {
      Data = 0LL;
      DataSize = 0;
    }
    else
    {
      v1 = Data;
    }
  }
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    v4 = CmOpenDeviceRegKey(
           *(__int64 *)&PiPnpRtlCtx,
           *(_QWORD *)(a1 + 48),
           20,
           0,
           983103,
           v1 != 0LL,
           (__int64)&KeyHandle,
           0LL);
    v5 = KeyHandle;
    if ( v4 < 0 )
      v5 = 0LL;
    KeyHandle = v5;
    if ( v5 )
    {
      if ( !*(_QWORD *)(a1 + 544) )
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
        v1 = Data;
        if ( !Data )
          goto LABEL_11;
        v3 = ((__int64 (__fastcall *)(__int64, _QWORD, PVOID))IopAllocateBootResourcesRoutine)(
               4LL,
               *(_QWORD *)(a1 + 32),
               Data);
        if ( v3 >= 0 )
          PipSetDevNodeFlags(a1, 64);
      }
    }
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
LABEL_11:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
