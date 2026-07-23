/*
 * XREFs of NtSetVolumeInformationFile @ 0x140758BF0
 * Callers:
 *     <none>
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x1402054FC (IopVerifierExAllocatePoolWithQuota.c)
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     IopVerifierExAllocatePool_1 @ 0x140316D0C (IopVerifierExAllocatePool_1.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     IoGetRelatedTargetDevice @ 0x1406855D0 (IoGetRelatedTargetDevice.c)
 *     IopSynchronousApiServiceTail @ 0x1406C796C (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     IoReportTargetDeviceChange @ 0x140759040 (IoReportTargetDeviceChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  NTSTATUS result; // eax
  __int64 v16; // rsi
  int RelatedTargetDevice; // eax
  struct _DMA_ADAPTER *v18; // rdi
  char v19; // r14
  struct _KTHREAD *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  NTSTATUS v23; // ebx
  IRP *v24; // rax
  IRP *v25; // r14
  struct _IO_STATUS_BLOCK *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  struct _IRP *PoolWithQuota; // rax
  char v30; // r8
  int v31; // eax
  int v32; // edx
  __int64 v33; // rcx
  char v34; // r13
  struct _DMA_ADAPTER *v35; // rcx
  struct _KEVENT *Pool_1; // rax
  char v37; // [rsp+40h] [rbp-C8h] BYREF
  char v38; // [rsp+41h] [rbp-C7h]
  _DWORD Size[3]; // [rsp+44h] [rbp-C4h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B0h]
  _DWORD *v42; // [rsp+60h] [rbp-A8h]
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

  v5 = Length;
  Size[0] = Length;
  v43 = IoStatusBlock;
  *(_QWORD *)&Size[1] = 0LL;
  v8 = 0LL;
  P = 0LL;
  DmaAdapter = 0LL;
  CurrentThread = KeGetCurrentThread();
  v41 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v38 = PreviousMode;
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
             (PVOID *)&Size[1],
             0LL);
  if ( result < 0 )
    return result;
  v16 = *(_QWORD *)&Size[1];
  RelatedTargetDevice = IoGetRelatedTargetDevice(*(struct _FILE_OBJECT **)&Size[1], &DmaAdapter);
  v18 = DmaAdapter;
  if ( RelatedTargetDevice < 0 )
    v18 = 0LL;
  DmaAdapter = v18;
  v42 = (_DWORD *)(v16 + 80);
  if ( (*(_DWORD *)(v16 + 80) & 2) != 0 )
  {
    v19 = (*(_DWORD *)(v16 + 80) & 4) != 0;
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = *(_QWORD *)&Size[1];
    v22 = KeAbPreAcquire(*(_QWORD *)&Size[1] + 128LL, 0LL, 0);
    v37 = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v21 + 116), 1) )
    {
      v16 = *(_QWORD *)&Size[1];
      v23 = IopWaitAndAcquireFileObjectLock(*(volatile signed __int32 **)&Size[1], v38, v19, v22, &v37);
    }
    else
    {
      if ( v22 )
        *(_BYTE *)(v22 + 26) |= 1u;
      v16 = *(_QWORD *)&Size[1];
      ObfReferenceObject(*(PVOID *)&Size[1]);
      v23 = 0;
    }
    if ( v37 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v16);
      v35 = DmaAdapter;
      if ( !DmaAdapter )
        return v23;
      goto LABEL_48;
    }
    v37 = 1;
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
LABEL_64:
      if ( v18 )
        HalPutDmaAdapter(v18);
      return -1073741670;
    }
    KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
    v37 = 0;
  }
  if ( (*v42 & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)(v16 + 152));
  DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v16);
  v24 = (IRP *)IopAllocateIrpExReturn();
  v25 = v24;
  Irp = v24;
  if ( !v24 )
  {
    if ( (*v42 & 2) == 0 )
      ExFreePoolWithTag(v8, 0);
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v16, 0LL);
    goto LABEL_64;
  }
  v24->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v16;
  v24->Tail.Overlay.Thread = (PETHREAD)v41;
  v24->RequestorMode = v38;
  v47 = 0LL;
  if ( v37 )
  {
    v26 = v43;
    v27 = 0LL;
  }
  else
  {
    v24->Flags = 4;
    v26 = (struct _IO_STATUS_BLOCK *)&v47;
    v27 = (__int64)v8;
  }
  v25->UserEvent = (PKEVENT)v27;
  v25->UserIosb = v26;
  v25->Overlay.AllocationSize.QuadPart = 0LL;
  v28 = (__int64)&v25->Tail.Overlay.CurrentStackLocation[-1];
  v41 = v28;
  *(_BYTE *)v28 = 11;
  *(_QWORD *)(v28 + 48) = v16;
  v25->AssociatedIrp.MasterIrp = 0LL;
  v25->MdlAddress = 0LL;
  PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v27, v5);
  v25->AssociatedIrp.MasterIrp = PoolWithQuota;
  memmove(PoolWithQuota, FsInformation, v5);
  v30 = v38;
  if ( !v38 || FsInformationClass != FileFsLabelInformation )
  {
    v32 = Size[0];
LABEL_42:
    v25->Flags |= 0x30u;
    v33 = v41;
    *(_DWORD *)(v41 + 8) = v32;
    *(_DWORD *)(v33 + 16) = FsInformationClass;
    v34 = v37;
    v23 = IopSynchronousServiceTail(DeviceObject, v25, v16, 0LL, v30, v37, 2u);
    if ( !v34 )
      v23 = IopSynchronousApiServiceTail(v23, v8, v25, v38, (unsigned int *)&v47, v43);
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
    v35 = v18;
LABEL_48:
    HalPutDmaAdapter(v35);
    return v23;
  }
  v31 = *(_DWORD *)v25->AssociatedIrp.MasterIrp;
  if ( v31 >= 0 )
  {
    v32 = Size[0];
    if ( (unsigned int)(v31 + 4) <= Size[0] )
      goto LABEL_42;
  }
  IopExceptionCleanup((PADAPTER_OBJECT)v16, v25, 0LL, v8);
  if ( v18 )
    HalPutDmaAdapter(v18);
  return -1073741811;
}
