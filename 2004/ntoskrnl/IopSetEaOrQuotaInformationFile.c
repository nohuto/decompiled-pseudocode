/*
 * XREFs of IopSetEaOrQuotaInformationFile @ 0x14088F32C
 * Callers:
 *     NtSetQuotaInformationFile @ 0x140893000 (NtSetQuotaInformationFile.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x14020AF90 (IopReferenceFileObject.c)
 *     IopProbeAndLockPages @ 0x14024D840 (IopProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1402656A0 (IoAllocateMdl.c)
 *     IopVerifierExAllocatePool_0 @ 0x14027C6F4 (IopVerifierExAllocatePool_0.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14028F420 (IopVerifierExAllocatePoolWithQuota.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14028FBA0 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x1406E826C (IopSynchronousApiServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     IoCheckQuotaBufferValidity @ 0x1408906F0 (IoCheckQuotaBufferValidity.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  unsigned int v21; // ebx
  struct _KEVENT *Pool_0; // rax
  __int64 v23; // rdx
  IRP *v24; // rax
  IRP *Irp; // rsi
  char v26; // di
  struct _IO_STATUS_BLOCK *v27; // rax
  struct _KEVENT *v28; // rcx
  __int64 v29; // rax
  ULONG Flags; // eax
  _FILE_QUOTA_INFORMATION *PoolWithQuota; // rdi
  int v32; // eax
  PMDL Mdl; // rcx
  _DWORD *v34; // r15
  char v35; // bl
  char v36; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  _DWORD *v38; // [rsp+50h] [rbp-68h]
  ULONG ErrorOffset; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-50h]
  PIRP v42; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  __int128 v44; // [rsp+80h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v5 = a4;
  Object = 0LL;
  v9 = 0LL;
  P = 0LL;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v36 = PreviousMode;
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
    v38 = (char *)Object + 80;
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
        v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v14, v17, &a5);
      }
      else
      {
        if ( v17 )
          *(_BYTE *)(v17 + 26) |= 1u;
        v13 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v21 = 0;
      }
      if ( !a5 )
      {
        a5 = 1;
        v5 = a4;
        goto LABEL_23;
      }
    }
    else
    {
      Pool_0 = (struct _KEVENT *)IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x18uLL);
      v9 = Pool_0;
      P = Pool_0;
      if ( Pool_0 )
      {
        KeInitializeEvent(Pool_0, SynchronizationEvent, 0);
        a5 = 0;
LABEL_23:
        IopResetEvent((__int64)v13, v18, v19, v20);
        DeviceObject = IoGetRelatedDeviceObject(v13);
        LOBYTE(v23) = DeviceObject->StackSize;
        v24 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v23, 0LL, retaddr);
        Irp = v24;
        v42 = v24;
        if ( !v24 )
        {
          if ( (*v38 & 2) == 0 )
            ExFreePoolWithTag(v9, 0);
          IopAllocateIrpCleanup((PADAPTER_OBJECT)v13, 0LL);
          return 3221225626LL;
        }
        v24->Tail.Overlay.OriginalFileObject = v13;
        v24->Tail.Overlay.Thread = CurrentThread;
        v26 = v36;
        v24->RequestorMode = v36;
        if ( a5 )
        {
          v24->AllocationFlags |= 2u;
          v27 = (struct _IO_STATUS_BLOCK *)a2;
          v28 = 0LL;
        }
        else
        {
          v24->Flags = 4;
          v27 = (struct _IO_STATUS_BLOCK *)&v44;
          v28 = v9;
        }
        Irp->UserEvent = v28;
        Irp->UserIosb = v27;
        Irp->Overlay.AllocationSize.QuadPart = 0LL;
        v29 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
        v38 = (_DWORD *)v29;
        *(_BYTE *)v29 = 26;
        *(_QWORD *)(v29 + 48) = v13;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          ErrorOffset = 0;
          if ( (_DWORD)v5 )
          {
            PoolWithQuota = (_FILE_QUOTA_INFORMATION *)IopVerifierExAllocatePoolWithQuota(NonPagedPoolNx, v5);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota;
            memmove(PoolWithQuota, a3, v5);
            LODWORD(v5) = a4;
            v32 = IoCheckQuotaBufferValidity(PoolWithQuota, a4, &ErrorOffset);
            if ( v32 < 0 )
            {
              *(_DWORD *)a2 = v32;
              *(_QWORD *)(a2 + 8) = ErrorOffset;
              RtlRaiseStatus(v32);
            }
            Irp->Flags |= 0x30u;
            v26 = v36;
            goto LABEL_42;
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
            v34 = v38;
            IopProbeAndLockPages((__int64)Mdl, v36, 0, (__int64)DeviceObject, *(unsigned __int8 *)v38);
            goto LABEL_43;
          }
LABEL_42:
          v34 = v38;
LABEL_43:
          v34[2] = v5;
          v35 = a5;
          result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v13, 0LL, v26, a5, 2u);
          if ( !v35 )
            return IopSynchronousApiServiceTail(result, v9, Irp, v26, (unsigned int *)&v44, (_OWORD *)a2);
          return result;
        }
        Irp->UserBuffer = a3;
        goto LABEL_42;
      }
      v21 = -1073741670;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v13);
    return v21;
  }
  return result;
}
