/*
 * XREFs of IopGetSetSecurityObject @ 0x140644580
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     IopGetDevicePDO @ 0x1402717B8 (IopGetDevicePDO.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140355FE0 (IopQueueThreadIrp.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     IopReleaseFileObjectLock @ 0x1403584A0 (IopReleaseFileObjectLock.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     ObDereferenceSecurityDescriptor @ 0x1406544C0 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140654CD0 (ObLogSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x14065A340 (SeQuerySecurityDescriptorInfo.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14076B42C (IopSetDeviceSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140780E50 (IopSetDeviceSecurityDescriptors.c)
 *     IopAllocateIrpCleanup @ 0x140890FB4 (IopAllocateIrpCleanup.c)
 *     SeAssignWorldSecurityDescriptor @ 0x14091D3B8 (SeAssignWorldSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        _DMA_OPERATIONS *DmaAdapter,
        int a2,
        DWORD *a3,
        UNICODE_STRING *a4,
        PULONG Length,
        int a6,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  _DMA_OPERATIONS *PutDmaAdapter; // r14
  PADAPTER_OBJECT v13; // rbx
  struct _KTHREAD *v14; // r14
  struct _KTHREAD *v15; // rax
  PRTL_BALANCED_NODE v16; // r9
  unsigned int DmaOperations; // edi
  char v18; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 Irp; // rax
  IRP *v21; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG *v24; // rax
  PULONG v25; // r14
  struct _KTHREAD *v26; // rax
  NTSTATUS v27; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  struct _KTHREAD *v33; // rdi
  PSECURITY_DESCRIPTOR AllocateCommonBufferWithBounds; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  ULONG *v38; // r8
  DWORD *v39; // rcx
  struct _DMA_ADAPTER *DevicePDO; // rax
  struct _KTHREAD *v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-60h] BYREF
  void *(__fastcall *v46)(_DMA_ADAPTER *, _LARGE_INTEGER *, _LARGE_INTEGER *, unsigned int, unsigned int, _MEMORY_CACHING_TYPE *, unsigned int, _LARGE_INTEGER *); // [rsp+40h] [rbp-58h]
  __int128 v47; // [rsp+48h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  __int64 v50; // [rsp+A0h] [rbp+8h] BYREF
  DWORD *v51; // [rsp+B0h] [rbp+18h]

  v51 = a3;
  v46 = 0LL;
  if ( LOWORD(DmaAdapter->Size) == 3 )
    PutDmaAdapter = DmaAdapter;
  else
    PutDmaAdapter = (_DMA_OPERATIONS *)DmaAdapter->PutDmaAdapter;
  v13 = 0LL;
  if ( LOWORD(DmaAdapter->Size) != 3 )
    v13 = (PADAPTER_OBJECT)DmaAdapter;
  if ( !v13 || !LOWORD(v13[5].DmaOperations) && !*(_QWORD *)&v13[4].Version || (*(_DWORD *)&v13[5].Version & 0x800) != 0 )
  {
    if ( a2 == 3 )
    {
      DmaOperations = 0;
      if ( !v13 || (*(_DWORD *)&v13[5].Version & 0x100) == 0 )
      {
        DmaOperations = ObLogSecurityDescriptor(a4);
        if ( (DmaOperations & 0x80000000) == 0 )
        {
          ExFreePoolWithTag(a4, 0);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
          if ( PutDmaAdapter->AllocateCommonBufferWithBounds )
            *(_DWORD *)(*(_QWORD *)&PutDmaAdapter[1].Size + 32LL) &= ~0x800u;
          PutDmaAdapter->AllocateCommonBufferWithBounds = v46;
          ExReleaseResourceLite(&IopSecurityResource);
          KeLeaveCriticalRegionThread((__int64)CurrentThread, v30, v31, v32);
        }
      }
      return DmaOperations;
    }
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        AllocateCommonBufferWithBounds = PutDmaAdapter->AllocateCommonBufferWithBounds;
        ObjectsSecurityDescriptor = AllocateCommonBufferWithBounds;
        if ( AllocateCommonBufferWithBounds
          && _InterlockedExchangeAdd64((volatile signed __int64 *)AllocateCommonBufferWithBounds - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v33, v35, v36, v37);
        v38 = Length;
        v39 = a3;
        goto LABEL_51;
      }
      return 0;
    }
    DevicePDO = (struct _DMA_ADAPTER *)IopGetDevicePDO((__int64)PutDmaAdapter);
    v13 = DevicePDO;
    if ( !DevicePDO )
      return (unsigned int)IopSetDeviceSecurityDescriptor(PutDmaAdapter, a3, a4, a7, a8);
    DmaOperations = IopSetDeviceSecurityDescriptors(PutDmaAdapter, DevicePDO, a3, a4, a7, a8);
    goto LABEL_56;
  }
  if ( a2 == 2 )
    return 0;
  v47 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14 = KeGetCurrentThread();
  ObfReferenceObject(v13);
  if ( (*(_DWORD *)&v13[5].Version & 2) != 0 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v16 = KeAbPreAcquire((ULONG_PTR)&v13[8], 0LL, 0);
    LOBYTE(v50) = 0;
    if ( _InterlockedExchange((volatile __int32 *)(&v13[7].Size + 1), 1) )
    {
      DmaOperations = IopWaitAndAcquireFileObjectLock(v13, (__int64)&v50);
    }
    else
    {
      if ( v16 )
        BYTE2(v16[1].Left) |= 1u;
      ObfReferenceObject(v13);
      DmaOperations = 0;
    }
    if ( !(_BYTE)v50 )
    {
      v18 = 1;
      goto LABEL_16;
    }
LABEL_56:
    HalPutDmaAdapter(v13);
    return DmaOperations;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v18 = 0;
LABEL_16:
  if ( (*(_DWORD *)&v13[5].Version & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)&v13[9].DmaOperations);
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v13);
  Irp = IopAllocateIrpExReturn(
          (__int64)RelatedDeviceObject,
          (unsigned __int8)RelatedDeviceObject->StackSize,
          (unsigned __int8)v18 ^ 1u,
          retaddr);
  v21 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v13;
    *(_QWORD *)(Irp + 152) = v14;
    *(_BYTE *)(Irp + 64) = a9;
    if ( (*(_DWORD *)&v13[5].Version & 2) != 0 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v21->UserEvent = p_Event;
    v21->UserIosb = (PIO_STATUS_BLOCK)&v47;
    v21->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v21->Tail.Overlay.CurrentStackLocation;
    v24 = v51;
    v25 = Length;
    if ( a2 == 1 )
    {
      CurrentStackLocation[-1].MajorFunction = 20;
      CurrentStackLocation[-1].Parameters.Read.Length = *v24;
      CurrentStackLocation[-1].Parameters.Create.Options = *v25;
      v21->UserBuffer = a4;
    }
    else
    {
      CurrentStackLocation[-1].MajorFunction = 21;
      CurrentStackLocation[-1].Parameters.Read.Length = *v24;
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = a4;
    }
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v13;
    IopQueueThreadIrp((__int64)v21);
    v26 = KeGetCurrentThread();
    ++v26->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v27 = IofCallDriver(RelatedDeviceObject, v21);
    DmaOperations = v27;
    if ( v18 )
    {
      if ( v27 == 259 )
      {
        KeWaitForSingleObject(&v13[9].DmaOperations, Executive, 0, 0, 0LL);
        DmaOperations = (unsigned int)v13[3].DmaOperations;
      }
      IopReleaseFileObjectLock(v13);
    }
    else if ( v27 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      DmaOperations = v47;
    }
    if ( DmaOperations != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( DmaOperations == -2147483643 )
          DmaOperations = -1073741789;
        *v25 = DWORD2(v47);
      }
      return DmaOperations;
    }
    if ( a2 == 1 )
    {
      if ( (RelatedDeviceObject->Characteristics & 0x100) != 0 )
      {
        v41 = KeGetCurrentThread();
        --v41->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        AllocateCommonBufferWithBounds = RelatedDeviceObject->SecurityDescriptor;
        ObjectsSecurityDescriptor = AllocateCommonBufferWithBounds;
        if ( AllocateCommonBufferWithBounds
          && _InterlockedExchangeAdd64((volatile signed __int64 *)AllocateCommonBufferWithBounds - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v41, v42, v43, v44);
        v38 = v25;
        v39 = v51;
LABEL_51:
        DmaOperations = SeQuerySecurityDescriptorInfo(v39, a4, v38, &ObjectsSecurityDescriptor);
        if ( AllocateCommonBufferWithBounds )
          ObDereferenceSecurityDescriptor(ObjectsSecurityDescriptor, 1LL);
        return DmaOperations;
      }
      return (unsigned int)SeAssignWorldSecurityDescriptor(a4, v25, v51);
    }
    if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  IopAllocateIrpCleanup(v13, 0LL);
  return 3221225626LL;
}
