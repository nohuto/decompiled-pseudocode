/*
 * XREFs of IopGetSetSecurityObject @ 0x1405E3500
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IopGetDevicePDO @ 0x14033DEB8 (IopGetDevicePDO.c)
 *     ObDereferenceSecurityDescriptor @ 0x140613D20 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140614530 (ObLogSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x14061A1F0 (SeQuerySecurityDescriptorInfo.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14075652C (IopSetDeviceSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x14076BCE0 (IopSetDeviceSecurityDescriptors.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140918B68 (SeAssignWorldSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v16; // r9
  unsigned int DmaOperations; // edi
  char v18; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 Irp; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  IRP *v23; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG *v26; // rax
  PULONG v27; // r14
  struct _KTHREAD *v28; // rax
  NTSTATUS v29; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _KTHREAD *v35; // rdi
  PSECURITY_DESCRIPTOR AllocateCommonBufferWithBounds; // rbx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  ULONG *v40; // r8
  DWORD *v41; // rcx
  struct _DMA_ADAPTER *DevicePDO; // rax
  struct _KTHREAD *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-60h] BYREF
  void *(__fastcall *v48)(_DMA_ADAPTER *, _LARGE_INTEGER *, _LARGE_INTEGER *, unsigned int, unsigned int, _MEMORY_CACHING_TYPE *, unsigned int, _LARGE_INTEGER *); // [rsp+40h] [rbp-58h]
  __int128 v49; // [rsp+48h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  __int64 v51; // [rsp+A0h] [rbp+8h] BYREF
  DWORD *v52; // [rsp+B0h] [rbp+18h]

  v52 = a3;
  v48 = 0LL;
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
          PutDmaAdapter->AllocateCommonBufferWithBounds = v48;
          ExReleaseResourceLite(&IopSecurityResource);
          KeLeaveCriticalRegionThread((__int64)CurrentThread, v32, v33, v34);
        }
      }
      return DmaOperations;
    }
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        AllocateCommonBufferWithBounds = PutDmaAdapter->AllocateCommonBufferWithBounds;
        ObjectsSecurityDescriptor = AllocateCommonBufferWithBounds;
        if ( AllocateCommonBufferWithBounds
          && _InterlockedExchangeAdd64((volatile signed __int64 *)AllocateCommonBufferWithBounds - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v35, v37, v38, v39);
        v40 = Length;
        v41 = a3;
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
  v49 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14 = KeGetCurrentThread();
  ObfReferenceObject(v13);
  if ( (*(_DWORD *)&v13[5].Version & 2) != 0 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v16 = KeAbPreAcquire((ULONG_PTR)&v13[8], 0LL, 0);
    LOBYTE(v51) = 0;
    if ( _InterlockedExchange((volatile __int32 *)(&v13[7].Size + 1), 1) )
    {
      DmaOperations = IopWaitAndAcquireFileObjectLock(v13, (__int64)&v51);
    }
    else
    {
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      ObfReferenceObject(v13);
      DmaOperations = 0;
    }
    if ( !(_BYTE)v51 )
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
  Irp = IopAllocateIrpExReturn();
  v23 = (IRP *)Irp;
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
    v23->UserEvent = p_Event;
    v23->UserIosb = (PIO_STATUS_BLOCK)&v49;
    v23->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v23->Tail.Overlay.CurrentStackLocation;
    v26 = v52;
    v27 = Length;
    if ( a2 == 1 )
    {
      CurrentStackLocation[-1].MajorFunction = 20;
      CurrentStackLocation[-1].Parameters.Read.Length = *v26;
      CurrentStackLocation[-1].Parameters.Create.Options = *v27;
      v23->UserBuffer = a4;
    }
    else
    {
      CurrentStackLocation[-1].MajorFunction = 21;
      CurrentStackLocation[-1].Parameters.Read.Length = *v26;
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = a4;
    }
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v13;
    IopQueueThreadIrp((__int64)v23, v21, v22);
    v28 = KeGetCurrentThread();
    ++v28->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v29 = IofCallDriver(RelatedDeviceObject, v23);
    DmaOperations = v29;
    if ( v18 )
    {
      if ( v29 == 259 )
      {
        KeWaitForSingleObject(&v13[9].DmaOperations, Executive, 0, 0, 0LL);
        DmaOperations = (unsigned int)v13[3].DmaOperations;
      }
      IopReleaseFileObjectLock(v13);
    }
    else if ( v29 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      DmaOperations = v49;
    }
    if ( DmaOperations != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( DmaOperations == -2147483643 )
          DmaOperations = -1073741789;
        *v27 = DWORD2(v49);
      }
      return DmaOperations;
    }
    if ( a2 == 1 )
    {
      if ( (RelatedDeviceObject->Characteristics & 0x100) != 0 )
      {
        v43 = KeGetCurrentThread();
        --v43->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        AllocateCommonBufferWithBounds = RelatedDeviceObject->SecurityDescriptor;
        ObjectsSecurityDescriptor = AllocateCommonBufferWithBounds;
        if ( AllocateCommonBufferWithBounds
          && _InterlockedExchangeAdd64((volatile signed __int64 *)AllocateCommonBufferWithBounds - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v43, v44, v45, v46);
        v40 = v27;
        v41 = v52;
LABEL_51:
        DmaOperations = SeQuerySecurityDescriptorInfo(v41, a4, v40, &ObjectsSecurityDescriptor);
        if ( AllocateCommonBufferWithBounds )
          ObDereferenceSecurityDescriptor(ObjectsSecurityDescriptor, 1LL);
        return DmaOperations;
      }
      return (unsigned int)SeAssignWorldSecurityDescriptor(a4, v27, v52);
    }
    if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  IopAllocateIrpCleanup(v13, 0LL);
  return 3221225626LL;
}
