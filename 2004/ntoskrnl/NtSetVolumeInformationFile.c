/*
 * XREFs of NtSetVolumeInformationFile @ 0x14075AA70
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x14020AF90 (IopReferenceFileObject.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140297CB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopVerifierExAllocatePool_1 @ 0x1403547B0 (IopVerifierExAllocatePool_1.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     IoGetRelatedTargetDevice @ 0x140637A00 (IoGetRelatedTargetDevice.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x1406E826C (IopSynchronousApiServiceTail.c)
 *     IoReportTargetDeviceChange @ 0x14075AEC0 (IoReportTargetDeviceChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  NTSTATUS result; // eax
  PADAPTER_OBJECT v16; // rsi
  int RelatedTargetDevice; // eax
  struct _DMA_ADAPTER *v18; // rdi
  char v19; // r14
  struct _KTHREAD *v20; // rax
  PADAPTER_OBJECT v21; // rbx
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rdx
  IRP *v25; // rax
  IRP *v26; // r14
  struct _IO_STATUS_BLOCK *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  struct _IRP *PoolWithQuota_0; // rax
  char v31; // r8
  int v32; // eax
  int v33; // edx
  __int64 v34; // rcx
  char v35; // r13
  struct _DMA_ADAPTER *v36; // rcx
  struct _KEVENT *Pool_1; // rax
  char v38[8]; // [rsp+40h] [rbp-C8h] BYREF
  PADAPTER_OBJECT v39; // [rsp+48h] [rbp-C0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B0h]
  struct _DMA_ADAPTER *v42; // [rsp+60h] [rbp-A8h]
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
  v39 = 0LL;
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
    v12 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    v13 = CurrentThread->ApcState.Process[1].AffinityPadding[10];
    if ( v13 && ((v14 = *(_WORD *)(v13 + 8), v14 == 332) || v14 == 452) )
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
             (PVOID *)&v39,
             0LL);
  if ( result < 0 )
    return result;
  v16 = v39;
  RelatedTargetDevice = IoGetRelatedTargetDevice((struct _FILE_OBJECT *)v39, &DmaAdapter);
  v18 = DmaAdapter;
  if ( RelatedTargetDevice < 0 )
    v18 = 0LL;
  DmaAdapter = v18;
  v42 = v16 + 5;
  if ( (*(_DWORD *)&v16[5].Version & 2) != 0 )
  {
    v19 = (*(_DWORD *)&v16[5].Version & 4) != 0;
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = v39;
    v22 = KeAbPreAcquire((ULONG_PTR)&v39[8], 0LL, 0);
    v38[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)(&v21[7].Size + 1), 1) )
    {
      v16 = v39;
      v23 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)v39, v38[1], v19, v22, v38);
    }
    else
    {
      if ( v22 )
        *(_BYTE *)(v22 + 26) |= 1u;
      v16 = v39;
      ObfReferenceObject(v39);
      v23 = 0;
    }
    if ( v38[0] )
    {
      HalPutDmaAdapter(v16);
      v36 = DmaAdapter;
      if ( !DmaAdapter )
        return v23;
      goto LABEL_48;
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
      HalPutDmaAdapter(v16);
LABEL_64:
      if ( v18 )
        HalPutDmaAdapter(v18);
      return -1073741670;
    }
    KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
    v38[0] = 0;
  }
  if ( (*(_DWORD *)&v42->Version & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)&v16[9].DmaOperations);
  DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v16);
  LOBYTE(v24) = DeviceObject->StackSize;
  v25 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v24, 0LL, retaddr);
  v26 = v25;
  Irp = v25;
  if ( !v25 )
  {
    if ( (*(_DWORD *)&v42->Version & 2) == 0 )
      ExFreePoolWithTag(v8, 0);
    IopAllocateIrpCleanup(v16, 0LL);
    goto LABEL_64;
  }
  v25->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v16;
  v25->Tail.Overlay.Thread = (PETHREAD)v41;
  v25->RequestorMode = v38[1];
  v47 = 0LL;
  if ( v38[0] )
  {
    v27 = v43;
    v28 = 0LL;
  }
  else
  {
    v25->Flags = 4;
    v27 = (struct _IO_STATUS_BLOCK *)&v47;
    v28 = (__int64)v8;
  }
  v26->UserEvent = (PKEVENT)v28;
  v26->UserIosb = v27;
  v26->Overlay.AllocationSize.QuadPart = 0LL;
  v29 = (__int64)&v26->Tail.Overlay.CurrentStackLocation[-1];
  v41 = v29;
  *(_BYTE *)v29 = 11;
  *(_QWORD *)(v29 + 48) = v16;
  v26->AssociatedIrp.MasterIrp = 0LL;
  v26->MdlAddress = 0LL;
  PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v28, v5);
  v26->AssociatedIrp.MasterIrp = PoolWithQuota_0;
  memmove(PoolWithQuota_0, FsInformation, v5);
  v31 = v38[1];
  if ( !v38[1] || FsInformationClass != FileFsLabelInformation )
  {
    v33 = *(_DWORD *)&v38[4];
LABEL_42:
    v26->Flags |= 0x30u;
    v34 = v41;
    *(_DWORD *)(v41 + 8) = v33;
    *(_DWORD *)(v34 + 16) = FsInformationClass;
    v35 = v38[0];
    v23 = IopSynchronousServiceTail(DeviceObject, v26, (__int64)v16, 0LL, v31, v38[0], 2u);
    if ( !v35 )
      v23 = IopSynchronousApiServiceTail(v23, v8, v26, v38[1], (unsigned int *)&v47, v43);
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
    v36 = v18;
LABEL_48:
    HalPutDmaAdapter(v36);
    return v23;
  }
  v32 = *(_DWORD *)v26->AssociatedIrp.MasterIrp;
  if ( v32 >= 0 )
  {
    v33 = *(_DWORD *)&v38[4];
    if ( (unsigned int)(v32 + 4) <= *(_DWORD *)&v38[4] )
      goto LABEL_42;
  }
  IopExceptionCleanup(v16, v26, 0LL, v8);
  if ( v18 )
    HalPutDmaAdapter(v18);
  return -1073741811;
}
