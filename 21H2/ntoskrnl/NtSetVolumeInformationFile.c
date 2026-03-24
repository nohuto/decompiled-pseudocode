/*
 * XREFs of NtSetVolumeInformationFile @ 0x14076D170
 * Callers:
 *     <none>
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x14022BCD0 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeResetEvent @ 0x14027BC40 (KeResetEvent.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IopVerifierExAllocatePool_1 @ 0x1402C5D6C (IopVerifierExAllocatePool_1.c)
 *     IopReferenceFileObject @ 0x140348A20 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x140351920 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140351A40 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopSynchronousApiServiceTail @ 0x140698FCC (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406E7BB8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x1406FED80 (IopSynchronousServiceTail.c)
 *     IoGetRelatedTargetDevice @ 0x14071C4DC (IoGetRelatedTargetDevice.c)
 *     IoReportTargetDeviceChange @ 0x14076D6F0 (IoReportTargetDeviceChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890E54 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  SIZE_T v5; // rbx
  struct _KEVENT *v8; // r12
  struct _KTHREAD *CurrentThread; // r9
  KPROCESSOR_MODE PreviousMode; // r10
  unsigned int v11; // eax
  NTSTATUS result; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int16 v15; // ax
  struct _FILE_OBJECT *v16; // rsi
  int RelatedTargetDevice; // eax
  struct _DMA_ADAPTER *v18; // rdi
  char v19; // r14
  struct _KTHREAD *v20; // rax
  volatile __int32 *v21; // rbx
  __int64 v22; // rax
  int v23; // ebx
  struct _DMA_ADAPTER *v24; // rcx
  struct _KEVENT *Pool_1; // rax
  __int64 v26; // rdx
  IRP *v27; // rax
  IRP *v28; // r14
  struct _IO_STATUS_BLOCK *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  struct _IRP *PoolWithQuota; // rax
  char v33; // r8
  int v34; // eax
  int v35; // edx
  __int64 v36; // rcx
  char v37; // r13
  char v38[8]; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B0h]
  ULONG *p_Flags; // [rsp+60h] [rbp-A8h]
  struct _IO_STATUS_BLOCK *v43; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-90h]
  PIRP Irp; // [rsp+80h] [rbp-88h]
  __int128 v47; // [rsp+88h] [rbp-80h] BYREF
  int NotificationStructure; // [rsp+98h] [rbp-70h] BYREF
  GUID v49; // [rsp+9Ch] [rbp-6Ch]
  int v50; // [rsp+ACh] [rbp-5Ch]
  __int64 v51; // [rsp+B0h] [rbp-58h]
  int v52; // [rsp+B8h] [rbp-50h]
  int v53; // [rsp+BCh] [rbp-4Ch]
  __int64 retaddr; // [rsp+108h] [rbp+0h]

  v5 = Length;
  *(_DWORD *)&v38[4] = Length;
  v43 = IoStatusBlock;
  Object = 0LL;
  v8 = 0LL;
  P = 0LL;
  DmaAdapter = 0LL;
  CurrentThread = KeGetCurrentThread();
  v41 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v38[1] = PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)FsInformationClass >= FileFsMaximumInformation )
      return -1073741821;
    v11 = *((unsigned __int8 *)IopSetFsOperationLength + (int)FsInformationClass);
    if ( !(_BYTE)v11 )
      return -1073741821;
    if ( (unsigned int)v5 < v11 )
      return -1073741820;
    v13 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = CurrentThread->ApcState.Process[1].AffinityPadding[10];
    if ( v14 && ((v15 = *(_WORD *)(v14 + 8), v15 == 332) || v15 == 452) )
    {
      if ( (_DWORD)v5 )
      {
        if ( ((unsigned __int8)FsInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)FsInformation + v5 > 0x7FFFFFFF0000LL || (char *)FsInformation + v5 < FsInformation )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else if ( (_DWORD)v5 )
    {
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1LL) & (unsigned __int64)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)FsInformation + v5 > 0x7FFFFFFF0000LL || (char *)FsInformation + v5 < FsInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(FileHandle, IopSetFsOperationAccess[FsInformationClass], PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v16 = (struct _FILE_OBJECT *)Object;
    RelatedTargetDevice = IoGetRelatedTargetDevice((struct _FILE_OBJECT *)Object, &DmaAdapter);
    v18 = DmaAdapter;
    if ( RelatedTargetDevice < 0 )
      v18 = 0LL;
    DmaAdapter = v18;
    p_Flags = &v16->Flags;
    if ( (v16->Flags & 2) != 0 )
    {
      v19 = (v16->Flags & 4) != 0;
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      v21 = (volatile __int32 *)Object;
      v22 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
      v38[0] = 0;
      if ( _InterlockedExchange(v21 + 29, 1) )
      {
        v16 = (struct _FILE_OBJECT *)Object;
        v23 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v38[1], v19, v22, v38);
      }
      else
      {
        if ( v22 )
          *(_BYTE *)(v22 + 26) |= 1u;
        v16 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v23 = 0;
      }
      if ( v38[0] )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)v16);
        v24 = DmaAdapter;
        if ( !DmaAdapter )
          return v23;
LABEL_34:
        HalPutDmaAdapter(v24);
        return v23;
      }
      v38[0] = 1;
      v18 = DmaAdapter;
      v5 = *(unsigned int *)&v38[4];
    }
    else
    {
      Pool_1 = (struct _KEVENT *)IopVerifierExAllocatePool_1();
      v8 = Pool_1;
      P = Pool_1;
      if ( !Pool_1 )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)v16);
LABEL_46:
        if ( v18 )
          HalPutDmaAdapter(v18);
        return -1073741670;
      }
      KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
      v38[0] = 0;
    }
    if ( (*p_Flags & 0x4000000) == 0 )
      KeResetEvent(&v16->Event);
    DeviceObject = IoGetRelatedDeviceObject(v16);
    LOBYTE(v26) = DeviceObject->StackSize;
    v27 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v26, 0LL, retaddr);
    v28 = v27;
    Irp = v27;
    if ( !v27 )
    {
      if ( (*p_Flags & 2) == 0 )
        ExFreePoolWithTag(v8, 0);
      IopAllocateIrpCleanup((PADAPTER_OBJECT)v16, 0LL);
      goto LABEL_46;
    }
    v27->Tail.Overlay.OriginalFileObject = v16;
    v27->Tail.Overlay.Thread = (PETHREAD)v41;
    v27->RequestorMode = v38[1];
    v47 = 0LL;
    if ( v38[0] )
    {
      v29 = v43;
      v30 = 0LL;
    }
    else
    {
      v27->Flags = 4;
      v29 = (struct _IO_STATUS_BLOCK *)&v47;
      v30 = (__int64)v8;
    }
    v28->UserEvent = (PKEVENT)v30;
    v28->UserIosb = v29;
    v28->Overlay.AllocationSize.QuadPart = 0LL;
    v31 = (__int64)&v28->Tail.Overlay.CurrentStackLocation[-1];
    v41 = v31;
    *(_BYTE *)v31 = 11;
    *(_QWORD *)(v31 + 48) = v16;
    v28->AssociatedIrp.MasterIrp = 0LL;
    v28->MdlAddress = 0LL;
    PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v30, v5);
    v28->AssociatedIrp.MasterIrp = PoolWithQuota;
    memmove(PoolWithQuota, FsInformation, v5);
    v33 = v38[1];
    if ( v38[1] && FsInformationClass == FileFsLabelInformation )
    {
      v34 = *(_DWORD *)v28->AssociatedIrp.MasterIrp;
      if ( v34 < 0 || (v35 = *(_DWORD *)&v38[4], (unsigned int)(v34 + 4) > *(_DWORD *)&v38[4]) )
      {
        IopExceptionCleanupEx((PADAPTER_OBJECT)v16, v28, 0LL, v8, (v16->Flags & 2) != 0);
        if ( v18 )
          HalPutDmaAdapter(v18);
        return -1073741811;
      }
    }
    else
    {
      v35 = *(_DWORD *)&v38[4];
    }
    v28->Flags |= 0x30u;
    v36 = v41;
    *(_DWORD *)(v41 + 8) = v35;
    *(_DWORD *)(v36 + 16) = FsInformationClass;
    v37 = v38[0];
    v23 = IopSynchronousServiceTail(DeviceObject, v28, (__int64)v16, 0, v33, v38[0], 2u);
    if ( !v37 )
      v23 = IopSynchronousApiServiceTail(v23, v8, v28, v38[1], (unsigned int *)&v47, v43);
    if ( !v18 )
      return v23;
    if ( v23 >= 0 )
    {
      v50 = 0;
      v53 = 0;
      NotificationStructure = 2359297;
      v51 = 0LL;
      v52 = -1;
      v49 = GUID_IO_VOLUME_CHANGE;
      IoReportTargetDeviceChange((PDEVICE_OBJECT)v18, &NotificationStructure);
    }
    v24 = v18;
    goto LABEL_34;
  }
  return result;
}
