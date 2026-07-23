/*
 * XREFs of BuildQueryDirectoryIrp @ 0x140644AD0
 * Callers:
 *     NtQueryDirectoryFileEx @ 0x140644A10 (NtQueryDirectoryFileEx.c)
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
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14035CBF0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopProbeAndLockPages_2 @ 0x140508A5C (IopProbeAndLockPages_2.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140890FB4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BuildQueryDirectoryIrp(
        unsigned __int64 a1,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        volatile void *Address,
        SIZE_T Length,
        __int64 a8,
        char a9,
        __int128 *a10,
        char a11,
        _BYTE *a12,
        PDEVICE_OBJECT *a13,
        IRP **a14,
        PADAPTER_OBJECT *a15,
        PIRP Irp)
{
  void *v16; // rdi
  struct _KTHREAD *CurrentThread; // r10
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned int v19; // edx
  __int64 v20; // rcx
  ULONG v22; // r8d
  const void *v23; // r15
  unsigned __int16 v24; // r14
  UNICODE_STRING *PoolWithQuota_0; // rsi
  int v26; // ebx
  PADAPTER_OBJECT v27; // rdi
  struct _DMA_ADAPTER *v28; // r14
  struct _KTHREAD *v29; // rax
  PADAPTER_OBJECT v30; // rbx
  PRTL_BALANCED_NODE v31; // rax
  _BYTE *v32; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v34; // r8
  IRP *v35; // rax
  __int64 v36; // rcx
  IRP *v37; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  ULONG Flags; // eax
  size_t v40; // r13
  struct _IRP *v41; // rax
  PMDL Mdl; // rcx
  __int64 v43; // r8
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-70h] BYREF
  PVOID P; // [rsp+40h] [rbp-68h]
  PADAPTER_OBJECT v46; // [rsp+48h] [rbp-60h]
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  struct _KTHREAD *v48; // [rsp+58h] [rbp-50h]
  __int128 v49; // [rsp+60h] [rbp-48h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  void *v51; // [rsp+B0h] [rbp+8h]
  __int64 v53; // [rsp+C0h] [rbp+18h] BYREF
  void *v54; // [rsp+C8h] [rbp+20h]

  v54 = a4;
  v53 = a3;
  v51 = (void *)a1;
  v16 = (void *)a1;
  DmaAdapter = 0LL;
  v46 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v48 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(Irp->Type) = PreviousMode;
  if ( PreviousMode )
  {
    v19 = 0;
    v20 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
    if ( (_DWORD)a8 == 1 )
    {
      v19 = 72;
    }
    else if ( (_DWORD)a8 == 3 )
    {
      v19 = 96;
    }
    else
    {
      switch ( (int)a8 )
      {
        case 2:
        case 29:
          v19 = 72;
          goto LABEL_18;
        case 12:
        case 33:
          v19 = 16;
          goto LABEL_18;
        case 32:
          v19 = 56;
          goto LABEL_18;
        case 37:
          v19 = 112;
          goto LABEL_18;
        case 38:
          v19 = 88;
          goto LABEL_18;
        case 50:
        case 60:
          v19 = 96;
          goto LABEL_18;
        case 63:
          v19 = 120;
          break;
        default:
          break;
      }
      if ( !v19 )
        return 3221225475LL;
    }
LABEL_18:
    if ( (unsigned int)Length < v19 )
      return 3221225476LL;
    if ( CurrentThread->ApcState.Process[1].AffinityPadding[10] )
      v22 = 4;
    else
      v22 = *((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)a8);
    ProbeForWrite(Address, (unsigned int)Length, v22);
  }
  if ( !a10 )
    goto LABEL_39;
  v49 = 0LL;
  if ( PreviousMode )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
      a1 = (unsigned __int64)a10;
    LODWORD(v49) = *(_DWORD *)a1;
    v23 = *(const void **)(a1 + 8);
    *((_QWORD *)&v49 + 1) = v23;
  }
  else
  {
    v49 = *a10;
    v23 = (const void *)*((_QWORD *)&v49 + 1);
  }
  if ( (v49 & 1) != 0 )
    return 3221225485LL;
  v24 = v49;
  if ( (_WORD)v49 )
  {
    if ( PreviousMode )
    {
      a1 = (unsigned __int64)v23 + (unsigned __int16)v49;
      if ( a1 > 0x7FFFFFFF0000LL || a1 < (unsigned __int64)v23 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (unsigned __int16)v49 >= 0x200u )
        RtlRaiseStatus(-1073741811);
    }
    PoolWithQuota_0 = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota_0(a1, (unsigned __int16)v49 + 16LL);
    P = PoolWithQuota_0;
    memmove(&PoolWithQuota_0[1], v23, (unsigned __int16)v49);
    PoolWithQuota_0->Length = v49;
    PoolWithQuota_0->MaximumLength = v24;
    PoolWithQuota_0->Buffer = &PoolWithQuota_0[1].Length;
    v16 = v51;
  }
  else
  {
LABEL_39:
    PoolWithQuota_0 = (UNICODE_STRING *)P;
  }
  v26 = IopReferenceFileObject(v16, 1u, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v26 < 0 )
  {
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    return (unsigned int)v26;
  }
  v27 = DmaAdapter;
  *a15 = DmaAdapter;
  if ( *(_QWORD *)&v27[11].Version && (v53 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    HalPutDmaAdapter(v27);
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    return 3221225485LL;
  }
  if ( a2 )
  {
    Object = 0LL;
    v26 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v28 = (struct _DMA_ADAPTER *)Object;
    v46 = (PADAPTER_OBJECT)Object;
    if ( v26 < 0 )
    {
      if ( PoolWithQuota_0 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
LABEL_84:
      HalPutDmaAdapter(v27);
      return (unsigned int)v26;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v28 = v46;
  }
  Irp = (PIRP)&v27[5];
  if ( (*(_DWORD *)&v27[5].Version & 2) != 0 )
  {
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    v30 = DmaAdapter;
    v31 = KeAbPreAcquire((ULONG_PTR)&DmaAdapter[8], 0LL, 0);
    a11 = 0;
    if ( _InterlockedExchange((volatile __int32 *)(&v30[7].Size + 1), 1) )
    {
      v27 = DmaAdapter;
      v26 = IopWaitAndAcquireFileObjectLock(DmaAdapter, (__int64)&a11);
    }
    else
    {
      if ( v31 )
        BYTE2(v31[1].Left) |= 1u;
      v27 = DmaAdapter;
      ObfReferenceObject(DmaAdapter);
      v26 = 0;
    }
    if ( a11 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v46 )
        HalPutDmaAdapter(v46);
      goto LABEL_84;
    }
    v32 = a12;
    *a12 = 1;
    v28 = v46;
    PoolWithQuota_0 = (UNICODE_STRING *)P;
  }
  else
  {
    v32 = a12;
    *a12 = 0;
    if ( PreviousMode )
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v53, 0);
  }
  if ( (*(_DWORD *)&Irp->Type & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)&v27[9].DmaOperations);
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v27);
  *a13 = RelatedDeviceObject;
  LOBYTE(v34) = *v32 == 0;
  v35 = (IRP *)IopAllocateIrpExReturn(
                 (__int64)RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 v34,
                 retaddr);
  v37 = v35;
  Irp = v35;
  if ( v35 )
  {
    *a14 = v35;
    v35->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v27;
    v35->Tail.Overlay.Thread = v48;
    v35->RequestorMode = PreviousMode;
    v35->UserEvent = (PKEVENT)v28;
    v35->UserIosb = (PIO_STATUS_BLOCK)a5;
    v35->Overlay.AllocationSize.QuadPart = v53;
    v35->Overlay.AsynchronousParameters.UserApcContext = v54;
    CurrentStackLocation = v35->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 268;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v27;
    v35->Tail.Overlay.AuxiliaryBuffer = (PCHAR)PoolWithQuota_0;
    v35->AssociatedIrp.MasterIrp = 0LL;
    v35->MdlAddress = 0LL;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v40 = (unsigned int)Length;
      v41 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v36, (unsigned int)Length);
      v37->AssociatedIrp.MasterIrp = v41;
      if ( !IopDisableBufferedIoInit )
        memset(v41, 0, v40);
      v37->Flags = 112;
    }
    else
    {
      if ( (Flags & 0x10) != 0 )
      {
        LODWORD(v40) = Length;
        Mdl = IoAllocateMdl((PVOID)Address, Length, 0, 1u, v37);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        IopProbeAndLockPages_2(
          (__int64)Mdl,
          PreviousMode,
          v43,
          (__int64)RelatedDeviceObject,
          CurrentStackLocation[-1].MajorFunction);
        goto LABEL_83;
      }
      LODWORD(v40) = Length;
    }
    v37->UserBuffer = (PVOID)Address;
LABEL_83:
    CurrentStackLocation[-1].Parameters.Read.Length = v40;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a8;
    CurrentStackLocation[-1].Parameters.Create.EaLength = 0;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = PoolWithQuota_0;
    CurrentStackLocation[-1].Flags = a9 & 0x1B;
    v37->Flags |= 0x800u;
    return 0LL;
  }
  IopAllocateIrpCleanup(v27, v28);
  if ( PoolWithQuota_0 )
    ExFreePoolWithTag(PoolWithQuota_0, 0);
  return 3221225626LL;
}
