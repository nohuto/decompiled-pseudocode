/*
 * XREFs of NtQueryEaFile @ 0x1406EA6D0
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
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140297CB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     IopProbeAndLockPages_2 @ 0x140503340 (IopProbeAndLockPages_2.c)
 *     IopVerifierExAllocatePool_3 @ 0x1405033AC (IopVerifierExAllocatePool_3.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     IopSynchronousApiServiceTail @ 0x1406E826C (IopSynchronousApiServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v12; // rcx
  char *v13; // rax
  unsigned __int8 *v14; // rdi
  signed int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  NTSTATUS result; // eax
  int v20; // ebx
  NTSTATUS v21; // ebx
  struct _FILE_OBJECT *v22; // r15
  _DWORD *v23; // rsi
  char v24; // di
  struct _KTHREAD *v25; // rax
  volatile __int32 *v26; // rbx
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  _DWORD *v30; // r9
  char v31; // r12
  PVOID v32; // rdi
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v34; // rdx
  IRP *v35; // rax
  IRP *Irp; // rbx
  PIO_STATUS_BLOCK v37; // rax
  __int64 v38; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  UNICODE_STRING *v40; // rdi
  ULONG Flags; // eax
  char v42; // di
  char v43; // al
  struct _KEVENT *Pool_3; // rax
  struct _IRP *PoolWithQuota_0; // rcx
  PMDL Mdl; // rcx
  char v47; // [rsp+40h] [rbp-78h]
  char v48; // [rsp+41h] [rbp-77h]
  _WORD v49[7]; // [rsp+42h] [rbp-76h] BYREF
  ULONG v50; // [rsp+50h] [rbp-68h]
  ULONG v51; // [rsp+54h] [rbp-64h]
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h]
  unsigned __int8 *v54; // [rsp+68h] [rbp-50h]
  PIRP v55; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  __int128 v57; // [rsp+80h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  Object = 0LL;
  P = 0LL;
  *(_QWORD *)&v49[3] = 0LL;
  v47 = 0;
  v51 = 0;
  v57 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v48 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( EaList && EaListLength )
    {
      v47 = 1;
      *(_QWORD *)&v49[3] = IopVerifierExAllocatePoolWithQuota_0((__int64)FileHandle, EaListLength);
      memmove(*(void **)&v49[3], EaList, EaListLength);
    }
    if ( EaIndex )
      v51 = *EaIndex;
LABEL_30:
    v21 = IopReferenceFileObject(FileHandle, 8u, PreviousMode, &Object, 0LL);
    if ( v21 < 0 )
    {
      if ( v47 )
        ExFreePoolWithTag(*(PVOID *)&v49[3], 0);
    }
    else
    {
      v22 = (struct _FILE_OBJECT *)Object;
      v23 = (char *)Object + 80;
      if ( (*((_DWORD *)Object + 20) & 2) != 0 )
      {
        v24 = (*((_DWORD *)Object + 20) & 4) != 0;
        v25 = KeGetCurrentThread();
        --v25->KernelApcDisable;
        v26 = (volatile __int32 *)Object;
        v27 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
        LOBYTE(v49[0]) = 0;
        if ( _InterlockedExchange(v26 + 29, 1) )
        {
          v22 = (struct _FILE_OBJECT *)Object;
          v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v24, v27, v49);
        }
        else
        {
          if ( v27 )
            *(_BYTE *)(v27 + 26) |= 1u;
          v22 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v21 = 0;
        }
        if ( !LOBYTE(v49[0]) )
        {
          v31 = 1;
          v32 = P;
          goto LABEL_38;
        }
        if ( v47 )
          ExFreePoolWithTag(*(PVOID *)&v49[3], 0);
      }
      else
      {
        Pool_3 = (struct _KEVENT *)IopVerifierExAllocatePool_3();
        v32 = Pool_3;
        P = Pool_3;
        if ( Pool_3 )
        {
          KeInitializeEvent(Pool_3, SynchronizationEvent, 0);
          v31 = 0;
LABEL_38:
          IopResetEvent((__int64)v22, v28, v29, v30);
          RelatedDeviceObject = IoGetRelatedDeviceObject(v22);
          LOBYTE(v34) = RelatedDeviceObject->StackSize;
          v35 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v34, 0LL, retaddr);
          Irp = v35;
          v55 = v35;
          if ( !v35 )
          {
            if ( (*v23 & 2) == 0 )
              ExFreePoolWithTag(v32, 0);
            IopAllocateIrpCleanup((PADAPTER_OBJECT)v22, 0LL);
            if ( v47 )
              ExFreePoolWithTag(*(PVOID *)&v49[3], 0);
            return -1073741670;
          }
          v35->Tail.Overlay.OriginalFileObject = v22;
          v35->Tail.Overlay.Thread = CurrentThread;
          v35->RequestorMode = v48;
          if ( v31 )
          {
            v37 = IoStatusBlock;
            v38 = 0LL;
          }
          else
          {
            v35->Flags = 4;
            v37 = (PIO_STATUS_BLOCK)&v57;
            v38 = (__int64)v32;
          }
          Irp->UserEvent = (PKEVENT)v38;
          Irp->UserIosb = v37;
          Irp->Overlay.AllocationSize.QuadPart = 0LL;
          CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].MajorFunction = 7;
          CurrentStackLocation[-1].FileObject = v22;
          if ( v47 )
          {
            v40 = *(UNICODE_STRING **)&v49[3];
            Irp->Tail.Overlay.AuxiliaryBuffer = *(PCHAR *)&v49[3];
            CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = v40;
            CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = EaListLength;
          }
          Flags = RelatedDeviceObject->Flags;
          if ( (Flags & 4) != 0 )
          {
            if ( !Length )
            {
              Irp->AssociatedIrp.MasterIrp = 0LL;
              Irp->Flags |= 0x50u;
              goto LABEL_46;
            }
            PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v38, Length);
            Irp->AssociatedIrp.MasterIrp = PoolWithQuota_0;
            if ( !IopDisableBufferedIoInit )
              memset(PoolWithQuota_0, 0, Length);
            Irp->Flags |= 0x70u;
          }
          else if ( (Flags & 0x10) != 0 )
          {
            if ( Length )
            {
              Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
              if ( !Mdl )
                RtlRaiseStatus(-1073741670);
              v42 = v48;
              IopProbeAndLockPages_2(Mdl, v48, 1, (__int64)RelatedDeviceObject, CurrentStackLocation[-1].MajorFunction);
              goto LABEL_47;
            }
LABEL_46:
            v42 = v48;
LABEL_47:
            CurrentStackLocation[-1].Parameters.Read.Length = Length;
            CurrentStackLocation[-1].Parameters.Create.EaLength = v51;
            CurrentStackLocation[-1].Flags = 0;
            v43 = 0;
            if ( RestartScan )
            {
              CurrentStackLocation[-1].Flags = 1;
              v43 = 1;
            }
            if ( ReturnSingleEntry )
            {
              v43 |= 2u;
              CurrentStackLocation[-1].Flags = v43;
            }
            if ( EaIndex )
              CurrentStackLocation[-1].Flags = v43 | 4;
            result = IopSynchronousServiceTail(RelatedDeviceObject, Irp, (__int64)v22, 0LL, v42, v31, 2u);
            if ( !v31 )
              return IopSynchronousApiServiceTail(result, P, Irp, v42, (unsigned int *)&v57, IoStatusBlock);
            return result;
          }
          Irp->UserBuffer = Buffer;
          goto LABEL_46;
        }
        if ( v47 )
          ExFreePoolWithTag(*(PVOID *)&v49[3], 0);
        v21 = -1073741670;
      }
      HalPutDmaAdapter((PADAPTER_OBJECT)v22);
    }
    return v21;
  }
  v12 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
    v12 = (__int64)IoStatusBlock;
  *(_DWORD *)v12 = *(_DWORD *)v12;
  ProbeForWrite(Buffer, Length, 4u);
  if ( EaIndex )
  {
    v18 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EaIndex < 0x7FFFFFFF0000LL )
      v18 = (__int64)EaIndex;
    v51 = *(_DWORD *)v18;
  }
  if ( !EaList || !EaListLength )
    goto LABEL_30;
  v54 = 0LL;
  v50 = 0;
  v47 = 1;
  if ( ((unsigned __int8)EaList & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (char *)EaList + EaListLength;
  if ( (unsigned __int64)v13 > 0x7FFFFFFF0000LL || v13 < EaList )
    MEMORY[0x7FFFFFFF0000] = 0;
  v14 = (unsigned __int8 *)IopVerifierExAllocatePoolWithQuota_0(0x7FFFFFFF0000LL, EaListLength);
  *(_QWORD *)&v49[3] = v14;
  memmove(v14, EaList, EaListLength);
  v54 = v14;
  v15 = EaListLength;
  v50 = EaListLength;
  while ( 1 )
  {
    if ( v15 < 5 )
    {
      v50 = 0;
      ExFreePoolWithTag(*(PVOID *)&v49[3], 0);
      *(_QWORD *)&v49[3] = 0LL;
      IoStatusBlock->Status = -2147483628;
      IoStatusBlock->Information = 0LL;
      return -2147483628;
    }
    v16 = v14[4] + 6;
    if ( v15 < v16 )
      break;
    v17 = *(unsigned int *)v14;
    if ( !(_DWORD)v17 )
    {
      v50 = v15 - v16;
      if ( (int)(v15 - v16) >= 0 )
        goto LABEL_30;
      break;
    }
    if ( ((v14[4] + 9) & 0xFFFFFFFC) != (_DWORD)v17 )
      break;
    if ( (int)v17 < 0 )
      break;
    v15 -= v17;
    v50 = v15;
    if ( v15 < 0 )
      break;
    v14 += v17;
    v54 = v14;
  }
  v20 = (_DWORD)v14 - *(_DWORD *)&v49[3];
  v50 = (_DWORD)v14 - *(_DWORD *)&v49[3];
  ExFreePoolWithTag(*(PVOID *)&v49[3], 0);
  *(_QWORD *)&v49[3] = 0LL;
  IoStatusBlock->Status = -2147483628;
  IoStatusBlock->Information = v20;
  return -2147483628;
}
