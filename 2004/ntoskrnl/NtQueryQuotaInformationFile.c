/*
 * XREFs of NtQueryQuotaInformationFile @ 0x1408928F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x14020AF90 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x1402656A0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14028FBA0 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x1405032E0 (IopProbeAndLockPages_1.c)
 *     IopVerifierExAllocatePool_3 @ 0x1405033AC (IopVerifierExAllocatePool_3.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x140503420 (IopVerifierExAllocatePoolWithQuota_5.c)
 *     RtlLengthRequiredSid @ 0x14062F730 (RtlLengthRequiredSid.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     RtlValidSid @ 0x14067E860 (RtlValidSid.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     IopSynchronousApiServiceTail @ 0x1406E826C (IopSynchronousApiServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopCheckGetQuotaBufferValidity @ 0x14088E13C (IopCheckGetQuotaBufferValidity.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtQueryQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID SidList,
        ULONG SidListLength,
        PSID StartSid,
        BOOLEAN RestartScan)
{
  HANDLE v11; // r15
  struct _KTHREAD *CurrentThread; // rdx
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int16 v16; // ax
  ULONG v17; // r8d
  PSID v18; // r13
  __int64 v19; // rax
  ULONG v20; // eax
  ULONG v21; // r15d
  ULONG v22; // r14d
  ULONG v23; // ecx
  NTSTATUS result; // eax
  unsigned int *PoolWithQuota_5; // rbx
  unsigned int *v26; // rax
  PSID v27; // rax
  NTSTATUS v28; // esi
  struct _DMA_ADAPTER *v29; // r15
  _DWORD *v30; // r12
  char v31; // si
  struct _KTHREAD *v32; // rax
  volatile __int32 *v33; // rbx
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  _DWORD *v37; // r9
  NTSTATUS v38; // ebx
  struct _KEVENT *Pool_3; // rax
  __int64 v40; // rdx
  IRP *v41; // rax
  IRP *Irp; // rsi
  PIO_STATUS_BLOCK v43; // rax
  struct _KEVENT *v44; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  struct _DEVICE_OBJECT *v46; // r14
  ULONG Flags; // eax
  struct _IRP *v48; // rcx
  ULONG v49; // ebx
  PMDL Mdl; // rcx
  __int64 v51; // r8
  char v52; // al
  char v53; // [rsp+40h] [rbp-98h]
  KPROCESSOR_MODE v54[15]; // [rsp+41h] [rbp-97h] BYREF
  PVOID Object; // [rsp+50h] [rbp-88h] BYREF
  PVOID P; // [rsp+58h] [rbp-80h]
  unsigned int *v57; // [rsp+60h] [rbp-78h]
  PSID Sid; // [rsp+68h] [rbp-70h]
  PIRP v59; // [rsp+70h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *v61; // [rsp+80h] [rbp-58h]
  unsigned int v62[20]; // [rsp+88h] [rbp-50h] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+0h]

  v11 = FileHandle;
  Object = 0LL;
  P = 0LL;
  *(_QWORD *)&v54[7] = 0LL;
  LODWORD(DeviceObject) = 0;
  Sid = 0LL;
  v57 = 0LL;
  *(_OWORD *)v62 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v61 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v54[0] = PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v14 = (__int64)IoStatusBlock;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = CurrentThread->ApcState.Process[1].AffinityPadding[10];
    if ( v15 && ((v16 = *(_WORD *)(v15 + 8), v16 == 332) || v16 == 452) )
      v17 = 4;
    else
      v17 = 8;
    ProbeForWrite(Buffer, Length, v17);
    v18 = StartSid;
    if ( StartSid )
    {
      v19 = (__int64)StartSid + 1;
      if ( (unsigned __int64)StartSid + 1 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      v54[1] = *(_BYTE *)v19;
      v20 = RtlLengthRequiredSid(*(unsigned __int8 *)v19);
      v21 = v20;
      LODWORD(DeviceObject) = v20;
      if ( v20 )
      {
        if ( ((unsigned __int8)StartSid & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)StartSid + v20 > 0x7FFFFFFF0000LL || (char *)StartSid + v20 < StartSid )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      v54[1] = 0;
      v21 = (unsigned int)DeviceObject;
    }
    if ( SidList && (v22 = SidListLength) != 0 )
    {
      if ( ((unsigned __int8)SidList & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)SidList + SidListLength > 0x7FFFFFFF0000LL || (char *)SidList + SidListLength < SidList )
        MEMORY[0x7FFFFFFF0000] = 0;
      v23 = (SidListLength + 3) & 0xFFFFFFFC;
      if ( v23 > ~v21 )
        return -1073741811;
      if ( v23 < SidListLength )
        return -1073741811;
      PoolWithQuota_5 = (unsigned int *)IopVerifierExAllocatePoolWithQuota_5(NonPagedPoolNx, v23 + v21);
      *(_QWORD *)&v54[7] = PoolWithQuota_5;
      v57 = PoolWithQuota_5;
      memmove(PoolWithQuota_5, SidList, SidListLength);
    }
    else
    {
      v22 = 0;
      SidListLength = 0;
      if ( StartSid )
      {
        PoolWithQuota_5 = (unsigned int *)IopVerifierExAllocatePoolWithQuota_5(PagedPool, v21);
        *(_QWORD *)&v54[7] = PoolWithQuota_5;
      }
      else
      {
        PoolWithQuota_5 = *(unsigned int **)&v54[7];
      }
    }
    if ( StartSid )
    {
      Sid = (char *)PoolWithQuota_5 + ((v22 + 3) & 0xFFFFFFFC);
      memmove(Sid, StartSid, v21);
      *((_BYTE *)Sid + 1) = v54[1];
    }
    v11 = FileHandle;
  }
  else
  {
    v22 = SidListLength;
    if ( SidList )
    {
      v26 = v57;
      if ( SidListLength )
        v26 = (unsigned int *)SidList;
      v57 = v26;
    }
    v27 = Sid;
    v18 = StartSid;
    if ( StartSid )
      v27 = StartSid;
    Sid = v27;
    PoolWithQuota_5 = *(unsigned int **)&v54[7];
  }
  if ( v57 )
  {
    v59 = 0LL;
    v28 = IopCheckGetQuotaBufferValidity(v57, v22, &v59);
    if ( v28 < 0 )
    {
      IoStatusBlock->Information = (ULONG_PTR)v59;
LABEL_47:
      if ( PoolWithQuota_5 )
        ExFreePoolWithTag(PoolWithQuota_5, 0);
      return v28;
    }
  }
  if ( Sid && !RtlValidSid(Sid) )
  {
    if ( PoolWithQuota_5 )
      ExFreePoolWithTag(PoolWithQuota_5, 0);
    return -1073741704;
  }
  v28 = IopReferenceFileObject(v11, 0, PreviousMode, &Object, 0LL);
  if ( v28 < 0 )
    goto LABEL_47;
  v29 = (struct _DMA_ADAPTER *)Object;
  v30 = (char *)Object + 80;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v31 = (*((_DWORD *)Object + 20) & 4) != 0;
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    v33 = (volatile __int32 *)Object;
    v34 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
    v54[2] = 0;
    if ( _InterlockedExchange(v33 + 29, 1) )
    {
      v29 = (struct _DMA_ADAPTER *)Object;
      v38 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v54[0], v31, v34, &v54[2]);
    }
    else
    {
      if ( v34 )
        *(_BYTE *)(v34 + 26) |= 1u;
      v29 = (struct _DMA_ADAPTER *)Object;
      ObfReferenceObject(Object);
      v38 = 0;
    }
    if ( v54[2] )
    {
      if ( *(_QWORD *)&v54[7] )
        ExFreePoolWithTag(*(PVOID *)&v54[7], 0);
LABEL_70:
      HalPutDmaAdapter(v29);
      return v38;
    }
    v53 = 1;
    v22 = SidListLength;
    PoolWithQuota_5 = *(unsigned int **)&v54[7];
  }
  else
  {
    Pool_3 = (struct _KEVENT *)IopVerifierExAllocatePool_3();
    P = Pool_3;
    if ( !Pool_3 )
    {
      if ( PoolWithQuota_5 )
        ExFreePoolWithTag(PoolWithQuota_5, 0);
      v38 = -1073741670;
      goto LABEL_70;
    }
    KeInitializeEvent(Pool_3, SynchronizationEvent, 0);
    v53 = 0;
  }
  IopResetEvent((__int64)v29, v35, v36, v37);
  DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v29);
  LOBYTE(v40) = DeviceObject->StackSize;
  v41 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v40, 0LL, retaddr);
  Irp = v41;
  v59 = v41;
  if ( !v41 )
  {
    if ( (*v30 & 2) == 0 )
      ExFreePoolWithTag(P, 0);
    IopAllocateIrpCleanup(v29, 0LL);
    if ( PoolWithQuota_5 )
      ExFreePoolWithTag(PoolWithQuota_5, 0);
    return -1073741670;
  }
  v41->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v29;
  v41->Tail.Overlay.Thread = v61;
  v41->RequestorMode = v54[0];
  if ( v53 )
  {
    v43 = IoStatusBlock;
    v44 = 0LL;
  }
  else
  {
    v41->Flags = 4;
    v43 = (PIO_STATUS_BLOCK)v62;
    v44 = (struct _KEVENT *)P;
  }
  Irp->UserEvent = v44;
  Irp->UserIosb = v43;
  Irp->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 25;
  CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v29;
  Irp->Tail.Overlay.AuxiliaryBuffer = (PCHAR)PoolWithQuota_5;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v57;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v22;
  v46 = DeviceObject;
  Flags = DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( Length )
    {
      v48 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_5(NonPagedPoolNx, Length);
      Irp->AssociatedIrp.MasterIrp = v48;
      if ( !IopDisableBufferedIoInit )
        memset(v48, 0, Length);
      Irp->Flags |= 0x70u;
    }
    else
    {
      Irp->AssociatedIrp.MasterIrp = 0LL;
    }
  }
  else if ( (Flags & 0x10) != 0 )
  {
    v49 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_1(Mdl, v54[0], v51, (__int64)v46, CurrentStackLocation[-1].MajorFunction);
    }
    goto LABEL_93;
  }
  Irp->UserBuffer = Buffer;
  v49 = Length;
LABEL_93:
  CurrentStackLocation[-1].Parameters.Read.Length = v49;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)Sid;
  CurrentStackLocation[-1].Flags = 0;
  v52 = 0;
  if ( RestartScan )
  {
    CurrentStackLocation[-1].Flags = 1;
    v52 = 1;
  }
  if ( ReturnSingleEntry )
  {
    v52 |= 2u;
    CurrentStackLocation[-1].Flags = v52;
  }
  if ( v18 )
    CurrentStackLocation[-1].Flags = v52 | 4;
  result = IopSynchronousServiceTail(v46, Irp, (__int64)v29, 0LL, v54[0], v53, 2u);
  if ( !v53 )
    return IopSynchronousApiServiceTail(result, P, Irp, v54[0], v62, IoStatusBlock);
  return result;
}
