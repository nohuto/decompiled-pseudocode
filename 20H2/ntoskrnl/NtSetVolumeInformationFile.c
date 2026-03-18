/*
 * XREFs of NtSetVolumeInformationFile @ 0x140769230
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140209FF0 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopVerifierExAllocatePool_1 @ 0x140325470 (IopVerifierExAllocatePool_1.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     IoGetRelatedTargetDevice @ 0x1405DA600 (IoGetRelatedTargetDevice.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1406BCEBC (IopSynchronousApiServiceTail.c)
 *     IoReportTargetDeviceChange @ 0x1407697B0 (IoReportTargetDeviceChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  char PreviousMode; // r10
  unsigned int v11; // eax
  NTSTATUS result; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int16 v15; // ax
  __int64 v16; // rsi
  int RelatedTargetDevice; // eax
  struct _DMA_ADAPTER *v18; // rdi
  bool v19; // r14
  struct _KTHREAD *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // ebx
  struct _DMA_ADAPTER *v26; // rcx
  struct _KEVENT *Pool_1; // rax
  __int64 v28; // rdx
  IRP *v29; // rax
  IRP *v30; // r14
  struct _IO_STATUS_BLOCK *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  struct _IRP *PoolWithQuota; // rax
  char v35; // r8
  int v36; // eax
  int v37; // edx
  __int64 v38; // rcx
  char v39; // r13
  char v40; // [rsp+40h] [rbp-C8h] BYREF
  char v41; // [rsp+41h] [rbp-C7h]
  _DWORD Size[3]; // [rsp+44h] [rbp-C4h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+58h] [rbp-B0h]
  _DWORD *v45; // [rsp+60h] [rbp-A8h]
  struct _IO_STATUS_BLOCK *v46; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-90h]
  PIRP Irp; // [rsp+80h] [rbp-88h]
  __int128 v50; // [rsp+88h] [rbp-80h] BYREF
  int NotificationStructure; // [rsp+98h] [rbp-70h] BYREF
  GUID v52; // [rsp+9Ch] [rbp-6Ch]
  int v53; // [rsp+ACh] [rbp-5Ch]
  __int64 v54; // [rsp+B0h] [rbp-58h]
  int v55; // [rsp+B8h] [rbp-50h]
  int v56; // [rsp+BCh] [rbp-4Ch]
  __int64 retaddr; // [rsp+108h] [rbp+0h]

  v5 = Length;
  Size[0] = Length;
  v46 = IoStatusBlock;
  *(_QWORD *)&Size[1] = 0LL;
  v8 = 0LL;
  P = 0LL;
  DmaAdapter = 0LL;
  CurrentThread = KeGetCurrentThread();
  v44 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v41 = PreviousMode;
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
  result = IopReferenceFileObject(
             FileHandle,
             IopSetFsOperationAccess[FsInformationClass],
             PreviousMode,
             (PVOID *)&Size[1],
             0LL);
  if ( result >= 0 )
  {
    v16 = *(_QWORD *)&Size[1];
    RelatedTargetDevice = IoGetRelatedTargetDevice(*(struct _FILE_OBJECT **)&Size[1], &DmaAdapter);
    v18 = DmaAdapter;
    if ( RelatedTargetDevice < 0 )
      v18 = 0LL;
    DmaAdapter = v18;
    v45 = (_DWORD *)(v16 + 80);
    if ( (*(_DWORD *)(v16 + 80) & 2) != 0 )
    {
      v19 = (*(_DWORD *)(v16 + 80) & 4) != 0;
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      v21 = *(_QWORD *)&Size[1];
      v22 = KeAbPreAcquire(*(_QWORD *)&Size[1] + 128LL, 0LL, 0LL);
      v40 = 0;
      if ( _InterlockedExchange((volatile __int32 *)(v21 + 116), 1) )
      {
        LOBYTE(v24) = v19;
        LOBYTE(v23) = v41;
        v16 = *(_QWORD *)&Size[1];
        v25 = IopWaitAndAcquireFileObjectLock(*(volatile signed __int32 **)&Size[1], v23, v24, v22, &v40);
      }
      else
      {
        if ( v22 )
          *(_BYTE *)(v22 + 26) |= 1u;
        v16 = *(_QWORD *)&Size[1];
        ObfReferenceObject(*(PVOID *)&Size[1]);
        v25 = 0;
      }
      if ( v40 )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)v16);
        v26 = DmaAdapter;
        if ( !DmaAdapter )
          return v25;
LABEL_34:
        HalPutDmaAdapter(v26);
        return v25;
      }
      v40 = 1;
      v18 = DmaAdapter;
      v5 = Size[0];
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
      v40 = 0;
    }
    if ( (*v45 & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(v16 + 152));
    DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v16);
    LOBYTE(v28) = DeviceObject->StackSize;
    v29 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v28, 0LL, retaddr);
    v30 = v29;
    Irp = v29;
    if ( !v29 )
    {
      if ( (*v45 & 2) == 0 )
        ExFreePoolWithTag(v8, 0);
      IopAllocateIrpCleanup((PADAPTER_OBJECT)v16, 0LL);
      goto LABEL_46;
    }
    v29->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v16;
    v29->Tail.Overlay.Thread = (PETHREAD)v44;
    v29->RequestorMode = v41;
    v50 = 0LL;
    if ( v40 )
    {
      v31 = v46;
      v32 = 0LL;
    }
    else
    {
      v29->Flags = 4;
      v31 = (struct _IO_STATUS_BLOCK *)&v50;
      v32 = (__int64)v8;
    }
    v30->UserEvent = (PKEVENT)v32;
    v30->UserIosb = v31;
    v30->Overlay.AllocationSize.QuadPart = 0LL;
    v33 = (__int64)&v30->Tail.Overlay.CurrentStackLocation[-1];
    v44 = v33;
    *(_BYTE *)v33 = 11;
    *(_QWORD *)(v33 + 48) = v16;
    v30->AssociatedIrp.MasterIrp = 0LL;
    v30->MdlAddress = 0LL;
    PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v32, v5);
    v30->AssociatedIrp.MasterIrp = PoolWithQuota;
    memmove(PoolWithQuota, FsInformation, v5);
    v35 = v41;
    if ( v41 && FsInformationClass == FileFsLabelInformation )
    {
      v36 = *(_DWORD *)v30->AssociatedIrp.MasterIrp;
      if ( v36 < 0 || (v37 = Size[0], (unsigned int)(v36 + 4) > Size[0]) )
      {
        IopExceptionCleanupEx((PADAPTER_OBJECT)v16, v30, 0LL, v8, (*(_DWORD *)(v16 + 80) & 2) != 0);
        if ( v18 )
          HalPutDmaAdapter(v18);
        return -1073741811;
      }
    }
    else
    {
      v37 = Size[0];
    }
    v30->Flags |= 0x30u;
    v38 = v44;
    *(_DWORD *)(v44 + 8) = v37;
    *(_DWORD *)(v38 + 16) = FsInformationClass;
    v39 = v40;
    v25 = IopSynchronousServiceTail(DeviceObject, v30, v16, 0, v35, v40, 2u);
    if ( !v39 )
      v25 = IopSynchronousApiServiceTail(v25, v8, v30, v41, (unsigned int *)&v50, v46);
    if ( !v18 )
      return v25;
    if ( v25 >= 0 )
    {
      v53 = 0;
      v56 = 0;
      NotificationStructure = 2359297;
      v54 = 0LL;
      v55 = -1;
      v52 = GUID_IO_VOLUME_CHANGE;
      IoReportTargetDeviceChange((PDEVICE_OBJECT)v18, &NotificationStructure);
    }
    v26 = v18;
    goto LABEL_34;
  }
  return result;
}
