/*
 * XREFs of IopLegacyResourceAllocation @ 0x14081F570
 * Callers:
 *     IopReleaseDeviceResources @ 0x140766A5C (IopReleaseDeviceResources.c)
 *     IopDestroyDeviceNode @ 0x140774F24 (IopDestroyDeviceNode.c)
 *     IoAssignResources @ 0x140941E70 (IoAssignResources.c)
 *     IoReportResourceUsageInternal @ 0x140945128 (IoReportResourceUsageInternal.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IopSetLegacyResourcesFlag @ 0x14056117C (IopSetLegacyResourcesFlag.c)
 *     PipAllocateDeviceNode @ 0x1406CFCE0 (PipAllocateDeviceNode.c)
 *     PnpAllocateResources @ 0x140747FB4 (PnpAllocateResources.c)
 *     PnpDetermineResourceListSize @ 0x140748D08 (PnpDetermineResourceListSize.c)
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 *     IopDestroyDeviceNode @ 0x140774F24 (IopDestroyDeviceNode.c)
 *     IopRemoveLegacyDeviceNode @ 0x14081F69C (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x14081F6E0 (IopReleaseResources.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14081FDD8 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140859598 (IopCreateRootEnumeratedDeviceObject.c)
 *     IopCombineLegacyResources @ 0x14094804C (IopCombineLegacyResources.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopLegacyResourceAllocation(int a1, __int64 a2, __int64 a3, __int64 a4, const void **a5)
{
  struct _KTHREAD *CurrentThread; // rax
  PDEVICE_OBJECT v7; // rsi
  _QWORD *v8; // rbx
  int RootEnumeratedDeviceObject; // edi
  size_t v13; // rcx
  __int64 v14; // r14
  int DeviceNode; // eax
  size_t v17; // r14
  _QWORD *v18; // rax
  PDEVICE_OBJECT v19; // rcx
  const void **v20; // rsi
  _DWORD *v21; // rcx
  void *Pool2; // r12
  size_t v23; // r8
  _DWORD *v24; // rax
  void *v25; // rbx
  unsigned int v26; // eax
  PDEVICE_OBJECT DeviceObject[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v28[8]; // [rsp+40h] [rbp-40h] BYREF
  size_t Size; // [rsp+D0h] [rbp+50h] BYREF

  CurrentThread = KeGetCurrentThread();
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
      v7 = (PDEVICE_OBJECT)a3;
LABEL_5:
      RootEnumeratedDeviceObject = 0;
      goto LABEL_6;
    }
    if ( (*(_DWORD *)(a3 + 48) & 0x1000) == 0 )
    {
      DeviceNode = PipAllocateDeviceNode(a3, (__int64)&Size);
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
      RootEnumeratedDeviceObject = -1073741670;
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
        v7 = (PDEVICE_OBJECT)v18[4];
        v8 = v18;
        goto LABEL_5;
      }
    }
    DeviceObject[0] = 0LL;
    RootEnumeratedDeviceObject = IopCreateRootEnumeratedDeviceObject(DeviceObject);
    if ( RootEnumeratedDeviceObject >= 0 )
    {
      v7 = DeviceObject[0];
      v19 = DeviceObject[0];
      DeviceObject[0]->Flags |= 0x1000u;
      RootEnumeratedDeviceObject = PipAllocateDeviceNode((__int64)v19, (__int64)&Size);
      if ( RootEnumeratedDeviceObject == -1073740946 || (v8 = (_QWORD *)Size) == 0LL )
      {
        IoDeleteDevice(v7);
        RootEnumeratedDeviceObject = -1073741670;
        goto LABEL_17;
      }
      v7->DriverObject = (struct _DRIVER_OBJECT *)a2;
      PipSetDevNodeFlags((__int64)v8, 131073);
      PipSetDevNodeState((__int64)v8, 772);
      v8[54] = a2;
      *v8 = IopLegacyDeviceNode;
      if ( IopLegacyDeviceNode )
        *(_QWORD *)(IopLegacyDeviceNode + 8) = v8;
      IopLegacyDeviceNode = (__int64)v8;
    }
  }
  if ( RootEnumeratedDeviceObject < 0 )
    goto LABEL_17;
LABEL_6:
  v14 = 0LL;
  if ( v8[2] )
  {
    if ( a4 )
      goto LABEL_42;
  }
  else if ( a4 )
  {
    if ( *(_DWORD *)(a4 + 4) == -1 )
      *(_DWORD *)(a4 + 4) = 1;
    v8[2] = IopRootDeviceNode;
    goto LABEL_42;
  }
  if ( v8[2] )
  {
LABEL_9:
    IopReleaseResources(v8);
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
  memset(v28, 0, sizeof(v28));
  v28[0] = v7;
  v28[3] = a4;
  HIDWORD(v28[1]) = a1;
  LODWORD(v28[1]) = 128;
  PnpAllocateResources(1u, v28, 1, 0LL);
  RootEnumeratedDeviceObject = v28[7];
  if ( SLODWORD(v28[7]) < 0 )
  {
LABEL_12:
    IopRemoveLegacyDeviceNode(a3, v8);
    if ( RootEnumeratedDeviceObject < 0 )
      goto LABEL_17;
    goto LABEL_13;
  }
  v20 = a5;
  v21 = (_DWORD *)v28[5];
  if ( *a5 )
    v21 = *a5;
  Size = (unsigned int)PnpDetermineResourceListSize(v21);
  Pool2 = (void *)ExAllocatePool2(256LL, Size, 538996816LL);
  if ( !Pool2 )
  {
    ExAcquireFastMutex(&PiResourceListLock);
    v8[52] = v28[5];
    v8[53] = v28[6];
    KeReleaseGuardedMutex(&PiResourceListLock);
    IopReleaseResources(v8);
    RootEnumeratedDeviceObject = -1073741670;
    goto LABEL_12;
  }
  if ( *v20 )
    ExFreePoolWithTag((PVOID)v28[5], 0);
  else
    *v20 = (const void *)v28[5];
  ExAcquireFastMutex(&PiResourceListLock);
  v23 = Size;
  v8[52] = Pool2;
  memmove(Pool2, *v20, v23);
  v8[53] = v28[6];
  KeReleaseGuardedMutex(&PiResourceListLock);
  v14 = v8[66];
LABEL_13:
  if ( v14 )
  {
    v24 = (_DWORD *)IopCombineLegacyResources(v14);
    v25 = v24;
    if ( v24 )
    {
      v26 = PnpDetermineResourceListSize(v24);
      IopWriteAllocatedResourcesToRegistry(v14, v25, v26);
      ExFreePoolWithTag(v25, 0);
    }
  }
  if ( a1 != 3 && a4 )
    IopSetLegacyResourcesFlag(a2);
LABEL_17:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)RootEnumeratedDeviceObject;
}
