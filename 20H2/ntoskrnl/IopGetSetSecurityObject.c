/*
 * XREFs of IopGetSetSecurityObject @ 0x1405F9B20
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     IopGetDevicePDO @ 0x1403618D8 (IopGetDevicePDO.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405F5900 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x1405F6110 (ObLogSecurityDescriptor.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     SeQuerySecurityDescriptorInfo @ 0x14066F3A0 (SeQuerySecurityDescriptorInfo.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1407670DC (IopSetDeviceSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x14077CEB0 (IopSetDeviceSecurityDescriptors.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     SeAssignWorldSecurityDescriptor @ 0x14091FA98 (SeAssignWorldSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        _DMA_OPERATIONS *DmaAdapter,
        int a2,
        DWORD *a3,
        char *a4,
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
  __int64 v16; // r9
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
  struct _KTHREAD *v30; // rdi
  PSECURITY_DESCRIPTOR AllocateCommonBufferWithBounds; // rbx
  ULONG *v32; // r8
  DWORD *v33; // rcx
  struct _DMA_ADAPTER *DevicePDO; // rax
  struct _KTHREAD *v35; // rdi
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-60h] BYREF
  void *(__fastcall *v37)(_DMA_ADAPTER *, _LARGE_INTEGER *, _LARGE_INTEGER *, unsigned int, unsigned int, _MEMORY_CACHING_TYPE *, unsigned int, _LARGE_INTEGER *); // [rsp+40h] [rbp-58h] BYREF
  __int128 v38; // [rsp+48h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  __int64 v41; // [rsp+A0h] [rbp+8h] BYREF
  DWORD *v42; // [rsp+B0h] [rbp+18h]

  v42 = a3;
  v37 = 0LL;
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
        DmaOperations = ObLogSecurityDescriptor(a4, &v37, 1u);
        if ( (DmaOperations & 0x80000000) == 0 )
        {
          ExFreePoolWithTag(a4, 0);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
          if ( PutDmaAdapter->AllocateCommonBufferWithBounds )
            *(_DWORD *)(*(_QWORD *)&PutDmaAdapter[1].Size + 32LL) &= ~0x800u;
          PutDmaAdapter->AllocateCommonBufferWithBounds = v37;
          ExReleaseResourceLite(&IopSecurityResource);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
        }
      }
      return DmaOperations;
    }
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v30 = KeGetCurrentThread();
        --v30->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        AllocateCommonBufferWithBounds = PutDmaAdapter->AllocateCommonBufferWithBounds;
        ObjectsSecurityDescriptor = AllocateCommonBufferWithBounds;
        if ( AllocateCommonBufferWithBounds
          && _InterlockedExchangeAdd64((volatile signed __int64 *)AllocateCommonBufferWithBounds - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v30);
        v32 = Length;
        v33 = a3;
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
  v38 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14 = KeGetCurrentThread();
  ObfReferenceObject(v13);
  if ( (*(_DWORD *)&v13[5].Version & 2) != 0 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v16 = KeAbPreAcquire((ULONG_PTR)&v13[8], 0LL, 0);
    LOBYTE(v41) = 0;
    if ( _InterlockedExchange((volatile __int32 *)(&v13[7].Size + 1), 1) )
    {
      DmaOperations = IopWaitAndAcquireFileObjectLock(v13, (__int64)&v41);
    }
    else
    {
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      ObfReferenceObject(v13);
      DmaOperations = 0;
    }
    if ( !(_BYTE)v41 )
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
    v21->UserIosb = (PIO_STATUS_BLOCK)&v38;
    v21->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v21->Tail.Overlay.CurrentStackLocation;
    v24 = v42;
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
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)a4;
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
      DmaOperations = v38;
    }
    if ( DmaOperations != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( DmaOperations == -2147483643 )
          DmaOperations = -1073741789;
        *v25 = DWORD2(v38);
      }
      return DmaOperations;
    }
    if ( a2 == 1 )
    {
      if ( (RelatedDeviceObject->Characteristics & 0x100) != 0 )
      {
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        AllocateCommonBufferWithBounds = RelatedDeviceObject->SecurityDescriptor;
        ObjectsSecurityDescriptor = AllocateCommonBufferWithBounds;
        if ( AllocateCommonBufferWithBounds
          && _InterlockedExchangeAdd64((volatile signed __int64 *)AllocateCommonBufferWithBounds - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v35);
        v32 = v25;
        v33 = v42;
LABEL_51:
        DmaOperations = SeQuerySecurityDescriptorInfo(v33, a4, v32, &ObjectsSecurityDescriptor);
        if ( AllocateCommonBufferWithBounds )
          ObDereferenceSecurityDescriptor((__int64)ObjectsSecurityDescriptor, 1u);
        return DmaOperations;
      }
      return (unsigned int)SeAssignWorldSecurityDescriptor(a4, v25, v42);
    }
    if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  IopAllocateIrpCleanup(v13, 0LL);
  return 3221225626LL;
}
