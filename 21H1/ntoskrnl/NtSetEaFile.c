/*
 * XREFs of NtSetEaFile @ 0x14071CE70
 * Callers:
 *     <none>
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x1402054FC (IopVerifierExAllocatePoolWithQuota.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140253320 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     IopProbeAndLockPages_2 @ 0x140502CF0 (IopProbeAndLockPages_2.c)
 *     IopVerifierExAllocatePool_3 @ 0x140502D5C (IopVerifierExAllocatePool_3.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     IoCheckEaBufferValidity @ 0x14066E3E0 (IoCheckEaBufferValidity.c)
 *     IopSynchronousApiServiceTail @ 0x1406C796C (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetEaFile(void *a1, unsigned __int64 a2, void *a3, ULONG a4)
{
  struct _IO_STATUS_BLOCK *v5; // rbx
  struct _KEVENT *v7; // r15
  char PreviousMode; // si
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v12; // r14
  _DWORD *v13; // r13
  char v14; // di
  struct _KTHREAD *v15; // rax
  volatile __int32 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  unsigned int v21; // ebx
  IRP *v22; // rax
  IRP *Irp; // rsi
  char v24; // di
  struct _KEVENT *v25; // rax
  struct _KTHREAD *v26; // rbx
  ULONG Flags; // eax
  ULONG v28; // r13d
  char v29; // bl
  struct _KEVENT *Pool_3; // rax
  struct _FILE_FULL_EA_INFORMATION *PoolWithQuota; // rdi
  NTSTATUS v32; // eax
  PMDL Mdl; // rcx
  char v34; // [rsp+40h] [rbp-78h] BYREF
  char v35; // [rsp+41h] [rbp-77h]
  char v36; // [rsp+42h] [rbp-76h]
  unsigned int v37; // [rsp+44h] [rbp-74h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  PIRP v43; // [rsp+70h] [rbp-48h]
  unsigned int v44[6]; // [rsp+78h] [rbp-40h] BYREF

  v5 = (struct _IO_STATUS_BLOCK *)a2;
  Object = 0LL;
  v7 = 0LL;
  P = 0LL;
  *(_OWORD *)v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v35 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v9 = a2;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (unsigned __int64)a3 + a4;
      if ( v10 > 0x7FFFFFFF0000LL || v10 < (unsigned __int64)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(a1, 0x10u, PreviousMode, &Object, 0LL);
  v37 = result;
  if ( (int)result >= 0 )
  {
    v12 = (struct _FILE_OBJECT *)Object;
    v13 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v14 = (*((_DWORD *)Object + 20) & 4) != 0;
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      v16 = (volatile __int32 *)Object;
      v17 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0LL);
      v34 = 0;
      if ( _InterlockedExchange(v16 + 29, 1) )
      {
        v12 = (struct _FILE_OBJECT *)Object;
        v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v14, v17, &v34);
      }
      else
      {
        if ( v17 )
          *(_BYTE *)(v17 + 26) |= 1u;
        v12 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v21 = 0;
      }
      v37 = v21;
      if ( !v34 )
      {
        v34 = 1;
        v5 = (struct _IO_STATUS_BLOCK *)a2;
        goto LABEL_18;
      }
    }
    else
    {
      Pool_3 = (struct _KEVENT *)IopVerifierExAllocatePool_3();
      v7 = Pool_3;
      P = Pool_3;
      if ( Pool_3 )
      {
        KeInitializeEvent(Pool_3, SynchronizationEvent, 0);
        v34 = 0;
LABEL_18:
        IopResetEvent((__int64)v12, v18, v19, v20);
        DeviceObject = IoGetRelatedDeviceObject(v12);
        v22 = (IRP *)IopAllocateIrpExReturn();
        Irp = v22;
        v43 = v22;
        if ( v22 )
        {
          v22->Tail.Overlay.OriginalFileObject = v12;
          v22->Tail.Overlay.Thread = CurrentThread;
          v24 = v35;
          v22->RequestorMode = v35;
          if ( v34 )
          {
            v25 = 0LL;
          }
          else
          {
            v22->Flags = 4;
            v5 = (struct _IO_STATUS_BLOCK *)v44;
            v25 = v7;
          }
          Irp->UserEvent = v25;
          Irp->UserIosb = v5;
          Irp->Overlay.AllocationSize.QuadPart = 0LL;
          v26 = (struct _KTHREAD *)&Irp->Tail.Overlay.CurrentStackLocation[-1];
          CurrentThread = v26;
          v26->Header.Type = 8;
          v26->StackLimit = v12;
          Flags = DeviceObject->Flags;
          if ( (Flags & 4) != 0 )
          {
            ErrorOffset = 0;
            v28 = a4;
            if ( a4 )
            {
              v36 = 0;
              PoolWithQuota = (struct _FILE_FULL_EA_INFORMATION *)IopVerifierExAllocatePoolWithQuota(0LL, a4);
              Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota;
              memmove(PoolWithQuota, a3, a4);
              v32 = IoCheckEaBufferValidity(PoolWithQuota, a4, &ErrorOffset);
              v37 = v32;
              if ( v32 < 0 )
              {
                v36 = 1;
                *(_DWORD *)a2 = v32;
                *(_QWORD *)(a2 + 8) = ErrorOffset;
                RtlRaiseStatus(v32);
              }
              Irp->Flags |= 0x30u;
              v24 = v35;
              v26 = CurrentThread;
            }
            else
            {
              Irp->AssociatedIrp.MasterIrp = 0LL;
            }
          }
          else
          {
            v28 = a4;
            if ( (Flags & 0x10) != 0 )
            {
              if ( a4 )
              {
                Mdl = IoAllocateMdl(a3, a4, 0, 1u, Irp);
                if ( !Mdl )
                  RtlRaiseStatus(0xC000009A);
                IopProbeAndLockPages_2(Mdl, v24, 0, (__int64)DeviceObject, v26->Header.Type);
              }
            }
            else
            {
              Irp->UserBuffer = a3;
            }
          }
          LODWORD(v26->Header.WaitListHead.Flink) = v28;
          v29 = v34;
          result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v12, 0LL, v24, v34, 2u);
          if ( !v29 )
            return IopSynchronousApiServiceTail(result, v7, Irp, v24, v44, (_OWORD *)a2);
        }
        else
        {
          if ( (*v13 & 2) == 0 )
            ExFreePoolWithTag(v7, 0);
          IopAllocateIrpCleanup((PADAPTER_OBJECT)v12, 0LL);
          return 3221225626LL;
        }
        return result;
      }
      v21 = -1073741670;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return v21;
  }
  return result;
}
