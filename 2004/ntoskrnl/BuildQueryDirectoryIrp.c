/*
 * XREFs of BuildQueryDirectoryIrp @ 0x14068CF20
 * Callers:
 *     NtQueryDirectoryFileEx @ 0x14068CE60 (NtQueryDirectoryFileEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x14020AF90 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x1402656A0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14028FC60 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140297CB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x1405032E0 (IopProbeAndLockPages_1.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 BuildQueryDirectoryIrp(void *a1, void *a2, ...)
{
  struct _KTHREAD *CurrentThread; // r9
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int v5; // edx
  __int64 v6; // rcx
  ULONG v7; // r15d
  unsigned __int64 v8; // rcx
  UNICODE_STRING *PoolWithQuota_0; // r12
  const void *v10; // r14
  unsigned __int16 v11; // si
  int v13; // ebx
  char *v14; // rsi
  struct _DMA_ADAPTER *v15; // r13
  _DWORD *v16; // r14
  bool v17; // di
  struct _KTHREAD *v18; // rax
  volatile __int32 *v19; // rbx
  __int64 v20; // rax
  KPROCESSOR_MODE v21; // di
  _BYTE *v22; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  __int64 v24; // r8
  IRP *v25; // rax
  __int64 v26; // rcx
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  ULONG Flags; // eax
  size_t v30; // rsi
  char v31; // r8
  struct _IRP *v32; // rax
  PMDL Mdl; // rcx
  __int64 v34; // r8
  char v35; // [rsp+30h] [rbp-78h] BYREF
  int v36; // [rsp+34h] [rbp-74h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  PVOID P; // [rsp+40h] [rbp-68h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-60h]
  PVOID v40; // [rsp+50h] [rbp-58h] BYREF
  struct _KTHREAD *v41; // [rsp+58h] [rbp-50h]
  __int128 v42; // [rsp+60h] [rbp-48h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  LARGE_INTEGER v45; // [rsp+C0h] [rbp+18h] BYREF
  va_list va; // [rsp+C0h] [rbp+18h]
  void *v47; // [rsp+C8h] [rbp+20h]
  struct _IO_STATUS_BLOCK *v48; // [rsp+D0h] [rbp+28h] BYREF
  va_list va1; // [rsp+D0h] [rbp+28h]
  volatile void *Address; // [rsp+D8h] [rbp+30h]
  SIZE_T Length; // [rsp+E0h] [rbp+38h]
  __int64 v52; // [rsp+E8h] [rbp+40h]
  __int64 v53; // [rsp+F0h] [rbp+48h]
  __int128 *v54; // [rsp+F8h] [rbp+50h]
  __int64 v55; // [rsp+100h] [rbp+58h]
  _BYTE *v56; // [rsp+108h] [rbp+60h]
  PDEVICE_OBJECT *v57; // [rsp+110h] [rbp+68h]
  IRP **v58; // [rsp+118h] [rbp+70h]
  PVOID *v59; // [rsp+120h] [rbp+78h]
  PIRP v60; // [rsp+128h] [rbp+80h]
  va_list va2; // [rsp+130h] [rbp+88h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v45.QuadPart = va_arg(va1, _QWORD);
  v47 = va_arg(va1, void *);
  va_copy(va2, va1);
  v48 = va_arg(va2, struct _IO_STATUS_BLOCK *);
  Address = va_arg(va2, volatile void *);
  Length = va_arg(va2, _QWORD);
  v52 = va_arg(va2, _QWORD);
  v53 = va_arg(va2, _QWORD);
  v54 = va_arg(va2, __int128 *);
  v55 = va_arg(va2, _QWORD);
  v56 = va_arg(va2, _BYTE *);
  v57 = va_arg(va2, PDEVICE_OBJECT *);
  v58 = va_arg(va2, IRP **);
  v59 = va_arg(va2, PVOID *);
  v60 = va_arg(va2, PIRP);
  Object = 0LL;
  DmaAdapter = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v41 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(v55) = PreviousMode;
  LOBYTE(v60->Type) = PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0;
    v36 = 0;
    v6 = (__int64)v48;
    if ( (unsigned __int64)v48 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = v52;
    if ( (_DWORD)v52 == 1 )
    {
      v5 = 72;
    }
    else
    {
      if ( (_DWORD)v52 != 3 )
      {
        switch ( (int)v52 )
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
            v36 = 120;
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
    v36 = v5;
LABEL_8:
    if ( (unsigned int)Length < v5 )
      return 3221225476LL;
    if ( CurrentThread->ApcState.Process[1].AffinityPadding[10] )
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    else
      ProbeForWrite(Address, (unsigned int)Length, *((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)v52));
    goto LABEL_11;
  }
  v7 = v52;
LABEL_11:
  v8 = (unsigned __int64)v54;
  if ( !v54 )
    goto LABEL_12;
  v42 = 0LL;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)v54 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    LODWORD(v42) = *(_DWORD *)v8;
    v10 = *(const void **)(v8 + 8);
    *((_QWORD *)&v42 + 1) = v10;
  }
  else
  {
    v42 = *v54;
    v10 = (const void *)*((_QWORD *)&v42 + 1);
  }
  if ( (v42 & 1) != 0 )
    return 3221225485LL;
  v11 = v42;
  if ( (_WORD)v42 )
  {
    if ( PreviousMode )
    {
      v8 = (unsigned __int64)v10 + (unsigned __int16)v42;
      if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)v10 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (unsigned __int16)v42 >= 0x200u )
        RtlRaiseStatus(-1073741811);
    }
    PoolWithQuota_0 = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota_0(v8, (unsigned __int16)v42 + 16LL);
    P = PoolWithQuota_0;
    memmove(&PoolWithQuota_0[1], v10, (unsigned __int16)v42);
    PoolWithQuota_0->Length = v42;
    PoolWithQuota_0->MaximumLength = v11;
    PoolWithQuota_0->Buffer = &PoolWithQuota_0[1].Length;
    PreviousMode = v55;
  }
  else
  {
LABEL_12:
    PoolWithQuota_0 = (UNICODE_STRING *)P;
  }
  v13 = IopReferenceFileObject(a1, 1u, PreviousMode, &Object, 0LL);
  if ( v13 < 0 )
  {
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    return (unsigned int)v13;
  }
  v14 = (char *)Object;
  *v59 = Object;
  if ( *((_QWORD *)v14 + 22) && (v45.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v14);
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v40 = 0LL;
    v13 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v40, 0LL);
    v15 = (struct _DMA_ADAPTER *)v40;
    DmaAdapter = (PADAPTER_OBJECT)v40;
    if ( v13 < 0 )
    {
      if ( PoolWithQuota_0 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
LABEL_87:
      HalPutDmaAdapter((PADAPTER_OBJECT)v14);
      return (unsigned int)v13;
    }
    KeResetEvent((PRKEVENT)v40);
  }
  else
  {
    v15 = DmaAdapter;
  }
  v16 = v14 + 80;
  if ( (*((_DWORD *)v14 + 20) & 2) != 0 )
  {
    v17 = (*((_DWORD *)v14 + 20) & 4) != 0;
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v19 = (volatile __int32 *)Object;
    v20 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
    v35 = 0;
    if ( _InterlockedExchange(v19 + 29, 1) )
    {
      v31 = v17;
      v21 = v55;
      v14 = (char *)Object;
      v13 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v55, v31, v20, &v35);
    }
    else
    {
      if ( v20 )
        *(_BYTE *)(v20 + 26) |= 1u;
      v14 = (char *)Object;
      ObfReferenceObject(Object);
      v13 = 0;
      v21 = v55;
    }
    if ( !v35 )
    {
      v22 = v56;
      *v56 = 1;
      v15 = DmaAdapter;
      PoolWithQuota_0 = (UNICODE_STRING *)P;
      goto LABEL_53;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    goto LABEL_87;
  }
  v22 = v56;
  *v56 = 0;
  v21 = v55;
  if ( (_BYTE)v55 )
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)va1, (__int64 *)va, 0);
LABEL_53:
  if ( (*v16 & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)(v14 + 152));
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v14);
  *v57 = RelatedDeviceObject;
  LOBYTE(v24) = *v22 == 0;
  v25 = (IRP *)IopAllocateIrpExReturn(
                 (__int64)RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 v24,
                 retaddr);
  Irp = v25;
  v60 = v25;
  if ( v25 )
  {
    *v58 = v25;
    v25->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v14;
    v25->Tail.Overlay.Thread = v41;
    v25->RequestorMode = v21;
    v25->UserEvent = (PKEVENT)v15;
    v25->UserIosb = v48;
    v25->Overlay.AllocationSize = v45;
    v25->Overlay.AsynchronousParameters.UserApcContext = v47;
    CurrentStackLocation = v25->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 268;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v14;
    v25->Tail.Overlay.AuxiliaryBuffer = (PCHAR)PoolWithQuota_0;
    v25->AssociatedIrp.MasterIrp = 0LL;
    v25->MdlAddress = 0LL;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v30 = (unsigned int)Length;
      v32 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v26, (unsigned int)Length);
      Irp->AssociatedIrp.MasterIrp = v32;
      if ( !IopDisableBufferedIoInit )
        memset(v32, 0, v30);
      Irp->Flags = 112;
    }
    else
    {
      if ( (Flags & 0x10) != 0 )
      {
        LODWORD(v30) = Length;
        Mdl = IoAllocateMdl((PVOID)Address, Length, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        IopProbeAndLockPages_1(Mdl, v55, v34, (__int64)RelatedDeviceObject, CurrentStackLocation[-1].MajorFunction);
        goto LABEL_60;
      }
      LODWORD(v30) = Length;
    }
    Irp->UserBuffer = (PVOID)Address;
LABEL_60:
    CurrentStackLocation[-1].Parameters.Read.Length = v30;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v7;
    CurrentStackLocation[-1].Parameters.Create.EaLength = 0;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = PoolWithQuota_0;
    CurrentStackLocation[-1].Flags = v53 & 0x1B;
    Irp->Flags |= 0x800u;
    return 0LL;
  }
  IopAllocateIrpCleanup((PADAPTER_OBJECT)v14, v15);
  if ( PoolWithQuota_0 )
    ExFreePoolWithTag(PoolWithQuota_0, 0);
  return 3221225626LL;
}
