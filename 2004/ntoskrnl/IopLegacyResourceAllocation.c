/*
 * XREFs of IopLegacyResourceAllocation @ 0x14073D9A4
 * Callers:
 *     IopDestroyDeviceNode @ 0x1406A58D4 (IopDestroyDeviceNode.c)
 *     IopReleaseDeviceResources @ 0x1407322A4 (IopReleaseDeviceResources.c)
 *     IoAssignResources @ 0x140899F20 (IoAssignResources.c)
 *     IoReportResourceUsageInternal @ 0x14089D1B8 (IoReportResourceUsageInternal.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IoDeleteDevice @ 0x14026F700 (IoDeleteDevice.c)
 *     KeReleaseSemaphore @ 0x140327E90 (KeReleaseSemaphore.c)
 *     PipSetDevNodeState @ 0x14036B438 (PipSetDevNodeState.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     IopSetLegacyResourcesFlag @ 0x14050880C (IopSetLegacyResourcesFlag.c)
 *     IopDestroyDeviceNode @ 0x1406A58D4 (IopDestroyDeviceNode.c)
 *     PipSetDevNodeFlags @ 0x140725AEC (PipSetDevNodeFlags.c)
 *     PipAllocateDeviceNode @ 0x140738E14 (PipAllocateDeviceNode.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140739B7C (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpAllocateResources @ 0x14073A218 (PnpAllocateResources.c)
 *     PnpDetermineResourceListSize @ 0x14073AF4C (PnpDetermineResourceListSize.c)
 *     IopReleaseResources @ 0x14073D8FC (IopReleaseResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x14073DAD8 (IopRemoveLegacyDeviceNode.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407B61C8 (IopCreateRootEnumeratedDeviceObject.c)
 *     IopCombineLegacyResources @ 0x14089FCF0 (IopCombineLegacyResources.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  int DeviceNode; // eax
  size_t v17; // rsi
  _QWORD *v18; // rax
  PDEVICE_OBJECT v19; // r14
  PDEVICE_OBJECT v20; // rcx
  _QWORD *v21; // rsi
  size_t v22; // rcx
  const void **v23; // r14
  _DWORD *v24; // rcx
  PVOID PoolWithTag; // r12
  size_t v26; // r8
  _DWORD *v27; // rax
  void *v28; // rbx
  ULONG v29; // eax
  PDEVICE_OBJECT DeviceObject[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v31[8]; // [rsp+40h] [rbp-40h] BYREF
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
      v17 = Size;
      RootEnumeratedDeviceObject = DeviceNode;
      if ( Size )
      {
        if ( DeviceNode == -1073740946 )
        {
          IopDestroyDeviceNode((char *)Size);
          goto LABEL_17;
        }
        PipSetDevNodeFlags(Size, 0x20000);
        v8 = (_QWORD *)v17;
        goto LABEL_4;
      }
      goto LABEL_35;
    }
  }
  else
  {
    v18 = (_QWORD *)IopLegacyDeviceNode;
    Size = IopLegacyDeviceNode;
    if ( IopLegacyDeviceNode )
    {
      do
      {
        if ( v18[54] == a2 )
          break;
        v18 = (_QWORD *)*v18;
      }
      while ( v18 );
      Size = (size_t)v18;
      if ( v18 )
      {
        v7 = v18[4];
        v8 = v18;
        goto LABEL_5;
      }
    }
    DeviceObject[0] = 0LL;
    RootEnumeratedDeviceObject = IopCreateRootEnumeratedDeviceObject(DeviceObject);
    if ( RootEnumeratedDeviceObject >= 0 )
    {
      v19 = DeviceObject[0];
      v20 = DeviceObject[0];
      DeviceObject[0]->Flags |= 0x1000u;
      RootEnumeratedDeviceObject = PipAllocateDeviceNode((__int64)v20, (void **)&Size);
      if ( RootEnumeratedDeviceObject == -1073740946 || (v21 = (_QWORD *)Size) == 0LL )
      {
        IoDeleteDevice(v19);
        v6 = a1;
LABEL_35:
        RootEnumeratedDeviceObject = -1073741670;
        goto LABEL_36;
      }
      v22 = Size;
      v19->DriverObject = (struct _DRIVER_OBJECT *)a2;
      PipSetDevNodeFlags(v22, 131073);
      PipSetDevNodeState((__int64)v21, 770);
      v21[54] = a2;
      *v21 = IopLegacyDeviceNode;
      if ( IopLegacyDeviceNode )
        *(_QWORD *)(IopLegacyDeviceNode + 8) = v21;
      v7 = (__int64)v19;
      IopLegacyDeviceNode = (__int64)v21;
      v6 = a1;
      v8 = v21;
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
  memset(v31, 0, sizeof(v31));
  v31[0] = v7;
  v31[3] = a4;
  HIDWORD(v31[1]) = v6;
  LODWORD(v31[1]) = 128;
  PnpAllocateResources(1u, v31, 1, 0LL);
  RootEnumeratedDeviceObject = v31[7];
  if ( SLODWORD(v31[7]) < 0 )
    goto LABEL_12;
  v23 = a5;
  v24 = (_DWORD *)v31[5];
  if ( *a5 )
    v24 = *a5;
  Size = (unsigned int)PnpDetermineResourceListSize(v24);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x20207050u);
  if ( PoolWithTag )
  {
    if ( *v23 )
      ExFreePoolWithTag((PVOID)v31[5], 0);
    else
      *v23 = (const void *)v31[5];
    ExAcquireFastMutex(&PiResourceListLock);
    v26 = Size;
    v8[52] = PoolWithTag;
    memmove(PoolWithTag, *v23, v26);
    v8[53] = v31[6];
    KeReleaseGuardedMutex(&PiResourceListLock);
    v14 = v8[66];
  }
  else
  {
    ExAcquireFastMutex(&PiResourceListLock);
    v8[52] = v31[5];
    v8[53] = v31[6];
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
    v27 = (_DWORD *)IopCombineLegacyResources(v14);
    v28 = v27;
    if ( v27 )
    {
      v29 = PnpDetermineResourceListSize(v27);
      IopWriteAllocatedResourcesToRegistry(v14, v28, v29);
      ExFreePoolWithTag(v28, 0);
    }
  }
  if ( a1 != 3 && a4 )
    IopSetLegacyResourcesFlag(a2);
LABEL_17:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)RootEnumeratedDeviceObject;
}
