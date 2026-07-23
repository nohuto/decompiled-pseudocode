/*
 * XREFs of BuildQueryDirectoryIrp @ 0x1405E3A50
 * Callers:
 *     NtQueryDirectoryFileEx @ 0x1405E3990 (NtQueryDirectoryFileEx.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x1402054FC (IopVerifierExAllocatePoolWithQuota.c)
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402533E0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x140502C90 (IopProbeAndLockPages_1.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 BuildQueryDirectoryIrp(void *a1, void *a2, ...)
{
  struct _KTHREAD *CurrentThread; // r9
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int v5; // edx
  __int64 v6; // rcx
  ULONG v7; // r15d
  unsigned __int64 v8; // rcx
  UNICODE_STRING *PoolWithQuota; // r12
  const void *v10; // r14
  unsigned __int16 v11; // si
  int v13; // ebx
  char *v14; // rsi
  struct _DMA_ADAPTER *v15; // r13
  _DWORD *v16; // r14
  struct _KTHREAD *v17; // rax
  volatile __int32 *v18; // rbx
  __int64 v19; // rax
  KPROCESSOR_MODE v20; // di
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  IRP *v22; // rax
  __int64 v23; // rcx
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  ULONG Flags; // eax
  size_t v27; // rsi
  struct _IRP *v28; // rax
  PMDL Mdl; // rcx
  __int64 v30; // r8
  char v31; // [rsp+30h] [rbp-78h] BYREF
  int v32; // [rsp+34h] [rbp-74h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  PVOID P; // [rsp+40h] [rbp-68h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-60h]
  PVOID v36; // [rsp+50h] [rbp-58h] BYREF
  struct _KTHREAD *v37; // [rsp+58h] [rbp-50h]
  __int128 v38; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER v40; // [rsp+C0h] [rbp+18h] BYREF
  va_list va; // [rsp+C0h] [rbp+18h]
  void *v42; // [rsp+C8h] [rbp+20h]
  struct _IO_STATUS_BLOCK *v43; // [rsp+D0h] [rbp+28h] BYREF
  va_list va1; // [rsp+D0h] [rbp+28h]
  volatile void *Address; // [rsp+D8h] [rbp+30h]
  SIZE_T Length; // [rsp+E0h] [rbp+38h]
  __int64 v47; // [rsp+E8h] [rbp+40h]
  __int64 v48; // [rsp+F0h] [rbp+48h]
  __int128 *v49; // [rsp+F8h] [rbp+50h]
  __int64 v50; // [rsp+100h] [rbp+58h]
  _BYTE *v51; // [rsp+108h] [rbp+60h]
  PDEVICE_OBJECT *v52; // [rsp+110h] [rbp+68h]
  IRP **v53; // [rsp+118h] [rbp+70h]
  PVOID *v54; // [rsp+120h] [rbp+78h]
  PIRP v55; // [rsp+128h] [rbp+80h]
  va_list va2; // [rsp+130h] [rbp+88h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v40.QuadPart = va_arg(va1, _QWORD);
  v42 = va_arg(va1, void *);
  va_copy(va2, va1);
  v43 = va_arg(va2, struct _IO_STATUS_BLOCK *);
  Address = va_arg(va2, volatile void *);
  Length = va_arg(va2, _QWORD);
  v47 = va_arg(va2, _QWORD);
  v48 = va_arg(va2, _QWORD);
  v49 = va_arg(va2, __int128 *);
  v50 = va_arg(va2, _QWORD);
  v51 = va_arg(va2, _BYTE *);
  v52 = va_arg(va2, PDEVICE_OBJECT *);
  v53 = va_arg(va2, IRP **);
  v54 = va_arg(va2, PVOID *);
  v55 = va_arg(va2, PIRP);
  Object = 0LL;
  DmaAdapter = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(v50) = PreviousMode;
  LOBYTE(v55->Type) = PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0;
    v32 = 0;
    v6 = (__int64)v43;
    if ( (unsigned __int64)v43 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = v47;
    if ( (_DWORD)v47 == 1 )
    {
      v5 = 72;
    }
    else
    {
      if ( (_DWORD)v47 != 3 )
      {
        switch ( (int)v47 )
        {
          case 2:
          case 29:
            v5 = 72;
            goto LABEL_7;
          case 12:
          case 33:
            v5 = 16;
            goto LABEL_7;
          case 32:
            v5 = 56;
            goto LABEL_7;
          case 37:
            v5 = 112;
            goto LABEL_7;
          case 38:
            v5 = 88;
            goto LABEL_7;
          case 50:
          case 60:
            v5 = 96;
            goto LABEL_7;
          case 63:
            v5 = 120;
            v32 = 120;
            break;
          default:
            break;
        }
        if ( !v5 )
          return 3221225475LL;
        goto LABEL_8;
      }
      v5 = 96;
    }
LABEL_7:
    v32 = v5;
LABEL_8:
    if ( (unsigned int)Length < v5 )
      return 3221225476LL;
    if ( CurrentThread->ApcState.Process[1].AffinityPadding[10] )
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    else
      ProbeForWrite(Address, (unsigned int)Length, *((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)v47));
    goto LABEL_11;
  }
  v7 = v47;
LABEL_11:
  v8 = (unsigned __int64)v49;
  if ( !v49 )
    goto LABEL_12;
  v38 = 0LL;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)v49 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    LODWORD(v38) = *(_DWORD *)v8;
    v10 = *(const void **)(v8 + 8);
    *((_QWORD *)&v38 + 1) = v10;
  }
  else
  {
    v38 = *v49;
    v10 = (const void *)*((_QWORD *)&v38 + 1);
  }
  if ( (v38 & 1) != 0 )
    return 3221225485LL;
  v11 = v38;
  if ( (_WORD)v38 )
  {
    if ( PreviousMode )
    {
      v8 = (unsigned __int64)v10 + (unsigned __int16)v38;
      if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)v10 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (unsigned __int16)v38 >= 0x200u )
        RtlRaiseStatus(-1073741811);
    }
    PoolWithQuota = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota(v8, (unsigned __int16)v38 + 16LL);
    P = PoolWithQuota;
    memmove(&PoolWithQuota[1], v10, (unsigned __int16)v38);
    PoolWithQuota->Length = v38;
    PoolWithQuota->MaximumLength = v11;
    PoolWithQuota->Buffer = &PoolWithQuota[1].Length;
    PreviousMode = v50;
  }
  else
  {
LABEL_12:
    PoolWithQuota = (UNICODE_STRING *)P;
  }
  v13 = IopReferenceFileObject(a1, 1u, PreviousMode, &Object, 0LL);
  if ( v13 < 0 )
  {
    if ( PoolWithQuota )
      ExFreePoolWithTag(PoolWithQuota, 0);
    return (unsigned int)v13;
  }
  v14 = (char *)Object;
  *v54 = Object;
  if ( *((_QWORD *)v14 + 22) && (v40.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v14);
    if ( PoolWithQuota )
      ExFreePoolWithTag(PoolWithQuota, 0);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v36 = 0LL;
    v13 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v36, 0LL);
    v15 = (struct _DMA_ADAPTER *)v36;
    DmaAdapter = (PADAPTER_OBJECT)v36;
    if ( v13 < 0 )
    {
      if ( PoolWithQuota )
        ExFreePoolWithTag(PoolWithQuota, 0);
LABEL_87:
      HalPutDmaAdapter((PADAPTER_OBJECT)v14);
      return (unsigned int)v13;
    }
    KeResetEvent((PRKEVENT)v36);
  }
  else
  {
    v15 = DmaAdapter;
  }
  v16 = v14 + 80;
  if ( (*((_DWORD *)v14 + 20) & 2) != 0 )
  {
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = (volatile __int32 *)Object;
    v19 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
    v31 = 0;
    if ( _InterlockedExchange(v18 + 29, 1) )
    {
      v20 = v50;
      v14 = (char *)Object;
      v13 = IopWaitAndAcquireFileObjectLock(Object, (__int64)&v31);
    }
    else
    {
      if ( v19 )
        *(_BYTE *)(v19 + 26) |= 1u;
      v14 = (char *)Object;
      ObfReferenceObject(Object);
      v13 = 0;
      v20 = v50;
    }
    if ( !v31 )
    {
      *v51 = 1;
      v15 = DmaAdapter;
      PoolWithQuota = (UNICODE_STRING *)P;
      goto LABEL_53;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    goto LABEL_87;
  }
  *v51 = 0;
  v20 = v50;
  if ( (_BYTE)v50 )
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)va1, (__int64 *)va, 0);
LABEL_53:
  if ( (*v16 & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)(v14 + 152));
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v14);
  *v52 = RelatedDeviceObject;
  v22 = (IRP *)IopAllocateIrpExReturn();
  Irp = v22;
  v55 = v22;
  if ( v22 )
  {
    *v53 = v22;
    v22->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v14;
    v22->Tail.Overlay.Thread = v37;
    v22->RequestorMode = v20;
    v22->UserEvent = (PKEVENT)v15;
    v22->UserIosb = v43;
    v22->Overlay.AllocationSize = v40;
    v22->Overlay.AsynchronousParameters.UserApcContext = v42;
    CurrentStackLocation = v22->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 268;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v14;
    v22->Tail.Overlay.AuxiliaryBuffer = (PCHAR)PoolWithQuota;
    v22->AssociatedIrp.MasterIrp = 0LL;
    v22->MdlAddress = 0LL;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v27 = (unsigned int)Length;
      v28 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v23, (unsigned int)Length);
      Irp->AssociatedIrp.MasterIrp = v28;
      if ( !IopDisableBufferedIoInit )
        memset(v28, 0, v27);
      Irp->Flags = 112;
    }
    else
    {
      if ( (Flags & 0x10) != 0 )
      {
        LODWORD(v27) = Length;
        Mdl = IoAllocateMdl((PVOID)Address, Length, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        IopProbeAndLockPages_1(Mdl, v50, v30, (__int64)RelatedDeviceObject, CurrentStackLocation[-1].MajorFunction);
        goto LABEL_60;
      }
      LODWORD(v27) = Length;
    }
    Irp->UserBuffer = (PVOID)Address;
LABEL_60:
    CurrentStackLocation[-1].Parameters.Read.Length = v27;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v7;
    CurrentStackLocation[-1].Parameters.Create.EaLength = 0;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = PoolWithQuota;
    CurrentStackLocation[-1].Flags = v48 & 0x1B;
    Irp->Flags |= 0x800u;
    return 0LL;
  }
  IopAllocateIrpCleanup((PADAPTER_OBJECT)v14, v15);
  if ( PoolWithQuota )
    ExFreePoolWithTag(PoolWithQuota, 0);
  return 3221225626LL;
}
