/*
 * XREFs of IopSetEaOrQuotaInformationFile @ 0x140894DEC
 * Callers:
 *     NtSetQuotaInformationFile @ 0x140898CB0 (NtSetQuotaInformationFile.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14020AC94 (IopVerifierExAllocatePool.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140211880 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     IopProbeAndLockPages @ 0x140269510 (IopProbeAndLockPages.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1406BCEBC (IopSynchronousApiServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     IoCheckQuotaBufferValidity @ 0x1408961E0 (IoCheckQuotaBufferValidity.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetEaOrQuotaInformationFile(void *a1, unsigned __int64 a2, char *a3, ULONG a4, char a5)
{
  SIZE_T v5; // rbx
  struct _KEVENT *v9; // r12
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v11; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v13; // r14
  char v14; // di
  struct _KTHREAD *v15; // rax
  volatile __int32 *v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // ebx
  struct _KEVENT *Pool; // rax
  __int64 v20; // rdx
  IRP *v21; // rax
  IRP *Irp; // rsi
  char v23; // di
  struct _IO_STATUS_BLOCK *v24; // rax
  struct _KEVENT *v25; // rcx
  __int64 v26; // rax
  ULONG Flags; // eax
  _FILE_QUOTA_INFORMATION *PoolWithQuota_0; // rdi
  int v29; // eax
  PMDL Mdl; // rcx
  _DWORD *v31; // r15
  char v32; // bl
  char v33; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  _DWORD *v35; // [rsp+50h] [rbp-68h]
  ULONG ErrorOffset; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-50h]
  PIRP v39; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  __int128 v41; // [rsp+80h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v5 = a4;
  Object = 0LL;
  v9 = 0LL;
  P = 0LL;
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v33 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v11 = a2;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[a4] > 0x7FFFFFFF0000LL || &a3[a4] < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(a1, 2u, PreviousMode, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v13 = (struct _FILE_OBJECT *)Object;
    v35 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v14 = (*((_DWORD *)Object + 20) & 4) != 0;
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      v16 = (volatile __int32 *)Object;
      v17 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
      a5 = 0;
      if ( _InterlockedExchange(v16 + 29, 1) )
      {
        v13 = (struct _FILE_OBJECT *)Object;
        v18 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v14, v17, &a5);
      }
      else
      {
        if ( v17 )
          *(_BYTE *)(v17 + 26) |= 1u;
        v13 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v18 = 0;
      }
      if ( !a5 )
      {
        a5 = 1;
        v5 = a4;
        goto LABEL_22;
      }
    }
    else
    {
      Pool = (struct _KEVENT *)IopVerifierExAllocatePool(NonPagedPoolNx, 0x18uLL);
      v9 = Pool;
      P = Pool;
      if ( Pool )
      {
        KeInitializeEvent(Pool, SynchronizationEvent, 0);
        a5 = 0;
LABEL_22:
        IopResetEvent((__int64)v13);
        DeviceObject = IoGetRelatedDeviceObject(v13);
        LOBYTE(v20) = DeviceObject->StackSize;
        v21 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v20, 0LL, retaddr);
        Irp = v21;
        v39 = v21;
        if ( !v21 )
        {
          if ( (*v35 & 2) == 0 )
            ExFreePoolWithTag(v9, 0);
          IopAllocateIrpCleanup((PADAPTER_OBJECT)v13, 0LL);
          return 3221225626LL;
        }
        v21->Tail.Overlay.OriginalFileObject = v13;
        v21->Tail.Overlay.Thread = CurrentThread;
        v23 = v33;
        v21->RequestorMode = v33;
        if ( a5 )
        {
          v21->AllocationFlags |= 2u;
          v24 = (struct _IO_STATUS_BLOCK *)a2;
          v25 = 0LL;
        }
        else
        {
          v21->Flags = 4;
          v24 = (struct _IO_STATUS_BLOCK *)&v41;
          v25 = v9;
        }
        Irp->UserEvent = v25;
        Irp->UserIosb = v24;
        Irp->Overlay.AllocationSize.QuadPart = 0LL;
        v26 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
        v35 = (_DWORD *)v26;
        *(_BYTE *)v26 = 26;
        *(_QWORD *)(v26 + 48) = v13;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          ErrorOffset = 0;
          if ( (_DWORD)v5 )
          {
            PoolWithQuota_0 = (_FILE_QUOTA_INFORMATION *)IopVerifierExAllocatePoolWithQuota_0(NonPagedPoolNx, v5);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota_0;
            memmove(PoolWithQuota_0, a3, v5);
            LODWORD(v5) = a4;
            v29 = IoCheckQuotaBufferValidity(PoolWithQuota_0, a4, &ErrorOffset);
            if ( v29 < 0 )
            {
              *(_DWORD *)a2 = v29;
              *(_QWORD *)(a2 + 8) = ErrorOffset;
              RtlRaiseStatus(v29);
            }
            Irp->Flags |= 0x30u;
            v23 = v33;
            goto LABEL_39;
          }
          Irp->AssociatedIrp.MasterIrp = 0LL;
        }
        else if ( (Flags & 0x10) != 0 )
        {
          if ( (_DWORD)v5 )
          {
            Mdl = IoAllocateMdl(a3, v5, 0, 1u, Irp);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            v31 = v35;
            IopProbeAndLockPages((__int64)Mdl, v33, 0, (__int64)DeviceObject, *(unsigned __int8 *)v35);
            goto LABEL_40;
          }
LABEL_39:
          v31 = v35;
LABEL_40:
          v31[2] = v5;
          v32 = a5;
          result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v13, 0, v23, a5, 2u);
          if ( !v32 )
            return IopSynchronousApiServiceTail(result, v9, Irp, v23, (unsigned int *)&v41, (_OWORD *)a2);
          return result;
        }
        Irp->UserBuffer = a3;
        goto LABEL_39;
      }
      v18 = -1073741670;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v13);
    return v18;
  }
  return result;
}
