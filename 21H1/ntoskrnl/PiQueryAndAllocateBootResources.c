/*
 * XREFs of PiQueryAndAllocateBootResources @ 0x140738C3C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403F3DF0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     _CmOpenDeviceRegKey @ 0x140617944 (_CmOpenDeviceRegKey.c)
 *     PipSetDevNodeFlags @ 0x14072ACAC (PipSetDevNodeFlags.c)
 *     IopQueryDeviceResources @ 0x140738E1C (IopQueryDeviceResources.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryAndAllocateBootResources(__int64 a1)
{
  PVOID v1; // rbx
  int v3; // esi
  int v4; // eax
  HANDLE v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
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
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
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
