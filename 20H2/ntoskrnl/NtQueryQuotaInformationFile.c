/*
 * XREFs of NtQueryQuotaInformationFile @ 0x140898570
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     IopProbeAndLockPages_2 @ 0x140506CF0 (IopProbeAndLockPages_2.c)
 *     IopVerifierExAllocatePool_3 @ 0x140506DBC (IopVerifierExAllocatePool_3.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x140506E30 (IopVerifierExAllocatePoolWithQuota_5.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     RtlValidSid @ 0x1406063F0 (RtlValidSid.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     RtlLengthRequiredSid @ 0x1406A9EC0 (RtlLengthRequiredSid.c)
 *     IopSynchronousApiServiceTail @ 0x1406BCEBC (IopSynchronousApiServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140893C8C (IopCheckGetQuotaBufferValidity.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  char *PoolWithQuota_5; // rbx
  unsigned int *v26; // rax
  PSID v27; // rax
  NTSTATUS v28; // esi
  struct _DMA_ADAPTER *v29; // r15
  _DWORD *v30; // r12
  char v31; // si
  struct _KTHREAD *v32; // rax
  volatile __int32 *v33; // rbx
  __int64 v34; // r9
  NTSTATUS v35; // ebx
  struct _KEVENT *Pool_3; // rax
  __int64 v37; // rdx
  IRP *v38; // rax
  IRP *Irp; // rsi
  PIO_STATUS_BLOCK v40; // rax
  struct _KEVENT *v41; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  struct _DEVICE_OBJECT *v43; // r14
  ULONG Flags; // eax
  struct _IRP *v45; // rcx
  ULONG v46; // ebx
  PMDL Mdl; // rcx
  __int64 v48; // r8
  char v49; // al
  char v50; // [rsp+40h] [rbp-98h]
  char v51[7]; // [rsp+41h] [rbp-97h] BYREF
  PVOID P; // [rsp+48h] [rbp-90h]
  PVOID Object; // [rsp+50h] [rbp-88h] BYREF
  PVOID v54; // [rsp+58h] [rbp-80h]
  unsigned int *v55; // [rsp+60h] [rbp-78h]
  PSID Sid; // [rsp+68h] [rbp-70h]
  PIRP v57; // [rsp+70h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *v59; // [rsp+80h] [rbp-58h]
  unsigned int v60[20]; // [rsp+88h] [rbp-50h] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+0h]

  v11 = FileHandle;
  Object = 0LL;
  v54 = 0LL;
  P = 0LL;
  LODWORD(DeviceObject) = 0;
  Sid = 0LL;
  v55 = 0LL;
  *(_OWORD *)v60 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v59 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v51[0] = PreviousMode;
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
      v51[1] = *(_BYTE *)v19;
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
      v51[1] = 0;
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
      PoolWithQuota_5 = (char *)IopVerifierExAllocatePoolWithQuota_5(NonPagedPoolNx, v23 + v21);
      P = PoolWithQuota_5;
      v55 = (unsigned int *)PoolWithQuota_5;
      memmove(PoolWithQuota_5, SidList, SidListLength);
    }
    else
    {
      v22 = 0;
      SidListLength = 0;
      if ( StartSid )
      {
        PoolWithQuota_5 = (char *)IopVerifierExAllocatePoolWithQuota_5(PagedPool, v21);
        P = PoolWithQuota_5;
      }
      else
      {
        PoolWithQuota_5 = (char *)P;
      }
    }
    if ( StartSid )
    {
      Sid = &PoolWithQuota_5[(v22 + 3) & 0xFFFFFFFC];
      memmove(Sid, StartSid, v21);
      *((_BYTE *)Sid + 1) = v51[1];
    }
    v11 = FileHandle;
  }
  else
  {
    v22 = SidListLength;
    if ( SidList )
    {
      v26 = v55;
      if ( SidListLength )
        v26 = (unsigned int *)SidList;
      v55 = v26;
    }
    v27 = Sid;
    v18 = StartSid;
    if ( StartSid )
      v27 = StartSid;
    Sid = v27;
    PoolWithQuota_5 = (char *)P;
  }
  if ( v55 )
  {
    v57 = 0LL;
    v28 = IopCheckGetQuotaBufferValidity(v55, v22, &v57);
    if ( v28 < 0 )
    {
      IoStatusBlock->Information = (ULONG_PTR)v57;
LABEL_45:
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
    goto LABEL_45;
  v29 = (struct _DMA_ADAPTER *)Object;
  v30 = (char *)Object + 80;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v31 = (*((_DWORD *)Object + 20) & 4) != 0;
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    v33 = (volatile __int32 *)Object;
    v34 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
    v51[2] = 0;
    if ( _InterlockedExchange(v33 + 29, 1) )
    {
      v29 = (struct _DMA_ADAPTER *)Object;
      v35 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v51[0], v31, v34, &v51[2]);
    }
    else
    {
      if ( v34 )
        *(_BYTE *)(v34 + 26) |= 1u;
      v29 = (struct _DMA_ADAPTER *)Object;
      ObfReferenceObject(Object);
      v35 = 0;
    }
    if ( v51[2] )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
LABEL_68:
      HalPutDmaAdapter(v29);
      return v35;
    }
    v50 = 1;
    v22 = SidListLength;
    PoolWithQuota_5 = (char *)P;
  }
  else
  {
    Pool_3 = (struct _KEVENT *)IopVerifierExAllocatePool_3();
    v54 = Pool_3;
    if ( !Pool_3 )
    {
      if ( PoolWithQuota_5 )
        ExFreePoolWithTag(PoolWithQuota_5, 0);
      v35 = -1073741670;
      goto LABEL_68;
    }
    KeInitializeEvent(Pool_3, SynchronizationEvent, 0);
    v50 = 0;
  }
  IopResetEvent((__int64)v29);
  DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v29);
  LOBYTE(v37) = DeviceObject->StackSize;
  v38 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v37, 0LL, retaddr);
  Irp = v38;
  v57 = v38;
  if ( !v38 )
  {
    if ( (*v30 & 2) == 0 )
      ExFreePoolWithTag(v54, 0);
    IopAllocateIrpCleanup(v29, 0LL);
    if ( PoolWithQuota_5 )
      ExFreePoolWithTag(PoolWithQuota_5, 0);
    return -1073741670;
  }
  v38->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v29;
  v38->Tail.Overlay.Thread = v59;
  v38->RequestorMode = v51[0];
  if ( v50 )
  {
    v40 = IoStatusBlock;
    v41 = 0LL;
  }
  else
  {
    v38->Flags = 4;
    v40 = (PIO_STATUS_BLOCK)v60;
    v41 = (struct _KEVENT *)v54;
  }
  Irp->UserEvent = v41;
  Irp->UserIosb = v40;
  Irp->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 25;
  CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v29;
  Irp->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_5;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v55;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v22;
  v43 = DeviceObject;
  Flags = DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( Length )
    {
      v45 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_5(NonPagedPoolNx, Length);
      Irp->AssociatedIrp.MasterIrp = v45;
      if ( !IopDisableBufferedIoInit )
        memset(v45, 0, Length);
      Irp->Flags |= 0x70u;
    }
    else
    {
      Irp->AssociatedIrp.MasterIrp = 0LL;
    }
  }
  else if ( (Flags & 0x10) != 0 )
  {
    v46 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_2((__int64)Mdl, v51[0], v48, (__int64)v43, CurrentStackLocation[-1].MajorFunction);
    }
    goto LABEL_90;
  }
  Irp->UserBuffer = Buffer;
  v46 = Length;
LABEL_90:
  CurrentStackLocation[-1].Parameters.Read.Length = v46;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)Sid;
  CurrentStackLocation[-1].Flags = 0;
  v49 = 0;
  if ( RestartScan )
  {
    CurrentStackLocation[-1].Flags = 1;
    v49 = 1;
  }
  if ( ReturnSingleEntry )
  {
    v49 |= 2u;
    CurrentStackLocation[-1].Flags = v49;
  }
  if ( v18 )
    CurrentStackLocation[-1].Flags = v49 | 4;
  result = IopSynchronousServiceTail(v43, Irp, (__int64)v29, 0, v51[0], v50, 2u);
  if ( !v50 )
    return IopSynchronousApiServiceTail(result, v54, Irp, v51[0], v60, IoStatusBlock);
  return result;
}
