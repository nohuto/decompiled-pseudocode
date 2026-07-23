/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x14060CF80
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x14060CF20 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140236060 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     IopReferenceFileObject @ 0x140353770 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14035CB30 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14035CBF0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopProbeAndLockPages_2 @ 0x140508A5C (IopProbeAndLockPages_2.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140890FB4 (IopAllocateIrpCleanup.c)
 */

NTSTATUS __cdecl NtNotifyChangeDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v13; // rcx
  ULONG v14; // r12d
  NTSTATUS result; // eax
  char v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  struct _DMA_ADAPTER *v20; // rdi
  int v21; // ebx
  struct _KTHREAD *v22; // rax
  volatile __int32 *v23; // rbx
  PRTL_BALANCED_NODE v24; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 Irp; // rax
  IRP *v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rcx
  ULONG Flags; // eax
  struct _IRP *PoolWithQuota_0; // rcx
  PMDL Mdl; // rcx
  __int64 v35; // r8
  char v36; // al
  __int64 v37; // [rsp+40h] [rbp-58h] BYREF
  PVOID v38; // [rsp+48h] [rbp-50h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  PIO_APC_ROUTINE v43; // [rsp+B0h] [rbp+18h] BYREF
  PVOID v44; // [rsp+B8h] [rbp+20h]

  v44 = ApcContext;
  v43 = ApcRoutine;
  v38 = 0LL;
  DmaAdapter = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v13 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = Length;
    if ( Length )
      ProbeForWrite(Buffer, Length, 4u);
    if ( (CompletionFilter & 0xFFFFF000) != 0 || !CompletionFilter )
      return -1073741811;
  }
  else
  {
    v14 = Length;
  }
  v16 = 1;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, &v38, 0LL);
  if ( result >= 0 )
  {
    v20 = (struct _DMA_ADAPTER *)v38;
    if ( *((_QWORD *)v38 + 22) && ((unsigned __int64)v43 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v21 = -1073741811;
LABEL_26:
      HalPutDmaAdapter(v20);
      return v21;
    }
    if ( Event )
    {
      Object = 0LL;
      v21 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      DmaAdapter = (PADAPTER_OBJECT)Object;
      if ( v21 < 0 )
        goto LABEL_26;
      KeResetEvent((PRKEVENT)Object);
    }
    if ( (*(_DWORD *)&v20[5].Version & 2) != 0 )
    {
      v22 = KeGetCurrentThread();
      --v22->KernelApcDisable;
      v23 = (volatile __int32 *)v38;
      v24 = KeAbPreAcquire((ULONG_PTR)v38 + 128, 0LL, 0);
      LOBYTE(v37) = 0;
      if ( _InterlockedExchange(v23 + 29, 1) )
      {
        v20 = (struct _DMA_ADAPTER *)v38;
        v21 = IopWaitAndAcquireFileObjectLock(v38, (__int64)&v37);
      }
      else
      {
        if ( v24 )
          BYTE2(v24[1].Left) |= 1u;
        v20 = (struct _DMA_ADAPTER *)v38;
        ObfReferenceObject(v38);
        v21 = 0;
      }
      if ( (_BYTE)v37 )
      {
        if ( DmaAdapter )
          HalPutDmaAdapter(DmaAdapter);
        goto LABEL_26;
      }
      LOBYTE(v37) = 1;
    }
    else
    {
      v16 = 0;
      LOBYTE(v37) = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v43, 0);
    }
    IopResetEvent((__int64)v20, v17, v18, v19);
    RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v20);
    LOBYTE(v26) = v16 ^ 1;
    LOBYTE(v27) = RelatedDeviceObject->StackSize;
    Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v27, v26, retaddr);
    v29 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup(v20, DmaAdapter);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 192) = v20;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = DmaAdapter;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = v43;
    *(_QWORD *)(Irp + 96) = v44;
    v30 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v30 - 72) = 12;
    v31 = (unsigned int)DirectoryNotifyInformationClass;
    *(_BYTE *)(v30 - 71) = (DirectoryNotifyInformationClass == DirectoryNotifyExtendedInformation) + 2;
    *(_QWORD *)(v30 - 24) = v20;
    if ( !v14 )
      goto LABEL_41;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v31, v14);
      v29->AssociatedIrp.MasterIrp = PoolWithQuota_0;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota_0, 0, v14);
      v29->Flags = 112;
      v16 = v37;
      LODWORD(v31) = DirectoryNotifyInformationClass;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(Buffer, v14, 0, 1u, v29);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_2(
        (__int64)Mdl,
        PreviousMode,
        v35,
        (__int64)RelatedDeviceObject,
        *(unsigned __int8 *)(v30 - 72));
      LODWORD(v31) = DirectoryNotifyInformationClass;
      goto LABEL_41;
    }
    v29->UserBuffer = Buffer;
LABEL_41:
    *(_DWORD *)(v30 - 64) = v14;
    *(_DWORD *)(v30 - 56) = CompletionFilter;
    if ( *(_BYTE *)(v30 - 71) == 3 )
      *(_DWORD *)(v30 - 48) = v31;
    *(_BYTE *)(v30 - 70) = 0;
    v36 = *(_BYTE *)(v30 - 70);
    if ( WatchTree )
      v36 = 1;
    *(_BYTE *)(v30 - 70) = v36;
    return IopSynchronousServiceTail(RelatedDeviceObject, v29, PreviousMode, v16, 2);
  }
  return result;
}
