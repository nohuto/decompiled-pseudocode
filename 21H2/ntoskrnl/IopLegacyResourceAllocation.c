/*
 * XREFs of IopLegacyResourceAllocation @ 0x140753634
 * Callers:
 *     IopDestroyDeviceNode @ 0x1406120F4 (IopDestroyDeviceNode.c)
 *     IopReleaseDeviceResources @ 0x140738908 (IopReleaseDeviceResources.c)
 *     IoAssignResources @ 0x14089D180 (IoAssignResources.c)
 *     IoReportResourceUsageInternal @ 0x1408A0418 (IoReportResourceUsageInternal.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140212600 (KeReleaseSemaphore.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopSetLegacyResourcesFlag @ 0x14050DEAC (IopSetLegacyResourcesFlag.c)
 *     IopDestroyDeviceNode @ 0x1406120F4 (IopDestroyDeviceNode.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     PipAllocateDeviceNode @ 0x14074EAA0 (PipAllocateDeviceNode.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14074F80C (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpAllocateResources @ 0x14074FEA8 (PnpAllocateResources.c)
 *     PnpDetermineResourceListSize @ 0x140750BDC (PnpDetermineResourceListSize.c)
 *     IopReleaseResources @ 0x14075358C (IopReleaseResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x140753768 (IopRemoveLegacyDeviceNode.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407C8FD8 (IopCreateRootEnumeratedDeviceObject.c)
 *     IopCombineLegacyResources @ 0x1408A2F50 (IopCombineLegacyResources.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopLegacyResourceAllocation(int a1, __int64 a2, __int64 a3, __int64 a4, const void **a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v6; // r14d
  __int64 v7; // r12
  _QWORD *v8; // rbx
  int RootEnumeratedDeviceObject; // edi
  size_t v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int DeviceNode; // eax
  size_t v20; // rsi
  _QWORD *v21; // rax
  PDEVICE_OBJECT v22; // r14
  PDEVICE_OBJECT v23; // rcx
  _QWORD *v24; // rsi
  size_t v25; // rcx
  const void **v26; // r14
  _DWORD *v27; // rcx
  PVOID PoolWithTag; // r12
  size_t v29; // r8
  _DWORD *v30; // rax
  void *v31; // rbx
  ULONG v32; // eax
  PDEVICE_OBJECT DeviceObject[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v34[8]; // [rsp+40h] [rbp-40h] BYREF
  size_t Size; // [rsp+D0h] [rbp+50h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = a1;
  v7 = 0LL;
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  RootEnumeratedDeviceObject = -1073741823;
  if ( a3 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a3 + 312) + 40LL);
    Size = v13;
    if ( v13 )
    {
      v8 = (_QWORD *)v13;
LABEL_4:
      v7 = a3;
LABEL_5:
      RootEnumeratedDeviceObject = 0;
      goto LABEL_6;
    }
    if ( (*(_DWORD *)(a3 + 48) & 0x1000) == 0 )
    {
      DeviceNode = PipAllocateDeviceNode(a3, (void **)&Size);
      v20 = Size;
      RootEnumeratedDeviceObject = DeviceNode;
      if ( Size )
      {
        if ( DeviceNode == -1073740946 )
        {
          IopDestroyDeviceNode((char *)Size);
          goto LABEL_17;
        }
        PipSetDevNodeFlags(Size, 0x20000);
        v8 = (_QWORD *)v20;
        goto LABEL_4;
      }
      goto LABEL_35;
    }
  }
  else
  {
    v21 = (_QWORD *)IopLegacyDeviceNode;
    Size = IopLegacyDeviceNode;
    if ( IopLegacyDeviceNode )
    {
      do
      {
        if ( v21[54] == a2 )
          break;
        v21 = (_QWORD *)*v21;
      }
      while ( v21 );
      Size = (size_t)v21;
      if ( v21 )
      {
        v7 = v21[4];
        v8 = v21;
        goto LABEL_5;
      }
    }
    DeviceObject[0] = 0LL;
    RootEnumeratedDeviceObject = IopCreateRootEnumeratedDeviceObject(DeviceObject);
    if ( RootEnumeratedDeviceObject >= 0 )
    {
      v22 = DeviceObject[0];
      v23 = DeviceObject[0];
      DeviceObject[0]->Flags |= 0x1000u;
      RootEnumeratedDeviceObject = PipAllocateDeviceNode((__int64)v23, (void **)&Size);
      if ( RootEnumeratedDeviceObject == -1073740946 || (v24 = (_QWORD *)Size) == 0LL )
      {
        IoDeleteDevice(v22);
        v6 = a1;
LABEL_35:
        RootEnumeratedDeviceObject = -1073741670;
        goto LABEL_36;
      }
      v25 = Size;
      v22->DriverObject = (struct _DRIVER_OBJECT *)a2;
      PipSetDevNodeFlags(v25, 131073);
      PipSetDevNodeState((__int64)v24, 770);
      v24[54] = a2;
      *v24 = IopLegacyDeviceNode;
      if ( IopLegacyDeviceNode )
        *(_QWORD *)(IopLegacyDeviceNode + 8) = v24;
      v7 = (__int64)v22;
      IopLegacyDeviceNode = (__int64)v24;
      v6 = a1;
      v8 = v24;
    }
  }
LABEL_36:
  if ( RootEnumeratedDeviceObject < 0 )
    goto LABEL_17;
LABEL_6:
  v14 = 0LL;
  if ( v8[2] )
    goto LABEL_7;
  if ( a4 )
  {
    if ( *(_DWORD *)(a4 + 4) == -1 )
      *(_DWORD *)(a4 + 4) = 1;
    v8[2] = IopRootDeviceNode;
LABEL_7:
    if ( a4 )
      goto LABEL_42;
  }
  if ( v8[2] )
  {
LABEL_9:
    IopReleaseResources((__int64)v8);
    goto LABEL_10;
  }
LABEL_42:
  if ( v8[52] || v8[68] )
    goto LABEL_9;
LABEL_10:
  if ( !a4 )
  {
    v14 = v8[66];
    goto LABEL_12;
  }
  memset(v34, 0, sizeof(v34));
  v34[0] = v7;
  v34[3] = a4;
  HIDWORD(v34[1]) = v6;
  LODWORD(v34[1]) = 128;
  PnpAllocateResources(1u, v34, 1, 0LL);
  RootEnumeratedDeviceObject = v34[7];
  if ( SLODWORD(v34[7]) < 0 )
    goto LABEL_12;
  v26 = a5;
  v27 = (_DWORD *)v34[5];
  if ( *a5 )
    v27 = *a5;
  Size = (unsigned int)PnpDetermineResourceListSize(v27);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x20207050u);
  if ( PoolWithTag )
  {
    if ( *v26 )
      ExFreePoolWithTag((PVOID)v34[5], 0);
    else
      *v26 = (const void *)v34[5];
    ExAcquireFastMutex(&PiResourceListLock);
    v29 = Size;
    v8[52] = PoolWithTag;
    memmove(PoolWithTag, *v26, v29);
    v8[53] = v34[6];
    KeReleaseGuardedMutex(&PiResourceListLock);
    v14 = v8[66];
  }
  else
  {
    ExAcquireFastMutex(&PiResourceListLock);
    v8[52] = v34[5];
    v8[53] = v34[6];
    KeReleaseGuardedMutex(&PiResourceListLock);
    IopReleaseResources((__int64)v8);
    RootEnumeratedDeviceObject = -1073741670;
  }
  if ( RootEnumeratedDeviceObject < 0 )
  {
LABEL_12:
    IopRemoveLegacyDeviceNode(a3, v8);
    if ( RootEnumeratedDeviceObject < 0 )
      goto LABEL_17;
  }
  if ( v14 )
  {
    v30 = (_DWORD *)IopCombineLegacyResources(v14);
    v31 = v30;
    if ( v30 )
    {
      v32 = PnpDetermineResourceListSize(v30);
      IopWriteAllocatedResourcesToRegistry(v14, v31, v32);
      ExFreePoolWithTag(v31, 0);
    }
  }
  if ( a1 != 3 && a4 )
    IopSetLegacyResourcesFlag(a2);
LABEL_17:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
  return (unsigned int)RootEnumeratedDeviceObject;
}
