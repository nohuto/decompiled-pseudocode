/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x1406CFAE0
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x1406CFA80 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140209FF0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140211810 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     memset @ 0x140411300 (memset.c)
 *     IopProbeAndLockPages_2 @ 0x140506CF0 (IopProbeAndLockPages_2.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 */

__int64 __fastcall NtNotifyChangeDirectoryFileEx(
        void *a1,
        HANDLE Handle,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        volatile void *Address,
        SIZE_T Length,
        int a8,
        char a9,
        unsigned int a10)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v13; // rcx
  ULONG v14; // r12d
  __int64 result; // rax
  char v16; // r14
  struct _DMA_ADAPTER *v17; // rdi
  int v18; // ebx
  bool v19; // si
  struct _KTHREAD *v20; // rax
  volatile __int32 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 Irp; // rax
  IRP *v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rcx
  ULONG Flags; // eax
  struct _IRP *PoolWithQuota; // rcx
  PMDL Mdl; // rcx
  __int64 v35; // r8
  char v36; // al
  __int64 v37; // [rsp+40h] [rbp-58h] BYREF
  PVOID v38; // [rsp+48h] [rbp-50h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  __int64 v43; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v44; // [rsp+B8h] [rbp+20h]

  v44 = a4;
  v43 = a3;
  v38 = 0LL;
  DmaAdapter = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v13 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = Length;
    if ( (_DWORD)Length )
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    if ( (a8 & 0xFFFFF000) != 0 || !a8 )
      return 3221225485LL;
  }
  else
  {
    v14 = Length;
  }
  v16 = 1;
  result = IopReferenceFileObject(a1, 1u, PreviousMode, &v38, 0LL);
  if ( (int)result >= 0 )
  {
    v17 = (struct _DMA_ADAPTER *)v38;
    if ( *((_QWORD *)v38 + 22) && (v43 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v18 = -1073741811;
LABEL_26:
      HalPutDmaAdapter(v17);
      return (unsigned int)v18;
    }
    if ( Handle )
    {
      Object = 0LL;
      v18 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      DmaAdapter = (PADAPTER_OBJECT)Object;
      if ( v18 < 0 )
        goto LABEL_26;
      KeResetEvent((PRKEVENT)Object);
    }
    if ( (*(_DWORD *)&v17[5].Version & 2) != 0 )
    {
      v19 = (*(_DWORD *)&v17[5].Version & 4) != 0;
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      v21 = (volatile __int32 *)v38;
      v22 = KeAbPreAcquire((ULONG_PTR)v38 + 128, 0LL, 0LL);
      LOBYTE(v37) = 0;
      if ( _InterlockedExchange(v21 + 29, 1) )
      {
        LOBYTE(v24) = v19;
        LOBYTE(v23) = PreviousMode;
        v17 = (struct _DMA_ADAPTER *)v38;
        v18 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)v38, v23, v24, v22, &v37);
      }
      else
      {
        if ( v22 )
          *(_BYTE *)(v22 + 26) |= 1u;
        v17 = (struct _DMA_ADAPTER *)v38;
        ObfReferenceObject(v38);
        v18 = 0;
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
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v43, 0);
    }
    IopResetEvent((__int64)v17);
    RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v17);
    LOBYTE(v26) = v16 ^ 1;
    LOBYTE(v27) = RelatedDeviceObject->StackSize;
    Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v27, v26, retaddr);
    v29 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup(v17, DmaAdapter);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 192) = v17;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = DmaAdapter;
    *(_QWORD *)(Irp + 72) = a5;
    *(_QWORD *)(Irp + 88) = v43;
    *(_QWORD *)(Irp + 96) = v44;
    v30 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v30 - 72) = 12;
    v31 = a10;
    *(_BYTE *)(v30 - 71) = (a10 == 2) + 2;
    *(_QWORD *)(v30 - 24) = v17;
    if ( !v14 )
      goto LABEL_41;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v31, v14);
      v29->AssociatedIrp.MasterIrp = PoolWithQuota;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota, 0, v14);
      v29->Flags = 112;
      v16 = v37;
      LODWORD(v31) = a10;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl((PVOID)Address, v14, 0, 1u, v29);
      if ( !Mdl )
        RtlRaiseStatus(0xC000009A);
      IopProbeAndLockPages_2(
        (__int64)Mdl,
        PreviousMode,
        v35,
        (__int64)RelatedDeviceObject,
        *(unsigned __int8 *)(v30 - 72));
      LODWORD(v31) = a10;
      goto LABEL_41;
    }
    v29->UserBuffer = (PVOID)Address;
LABEL_41:
    *(_DWORD *)(v30 - 64) = v14;
    *(_DWORD *)(v30 - 56) = a8;
    if ( *(_BYTE *)(v30 - 71) == 3 )
      *(_DWORD *)(v30 - 48) = v31;
    *(_BYTE *)(v30 - 70) = 0;
    v36 = *(_BYTE *)(v30 - 70);
    if ( a9 )
      v36 = 1;
    *(_BYTE *)(v30 - 70) = v36;
    return IopSynchronousServiceTail(RelatedDeviceObject, v29, (__int64)v17, 0, PreviousMode, v16, 2u);
  }
  return result;
}
