/*
 * XREFs of IopReadFile @ 0x14073A450
 * Callers:
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     NtReadFile @ 0x14073A320 (NtReadFile.c)
 *     IopIoRingDispatchRead @ 0x140938198 (IopIoRingDispatchRead.c)
 * Callees:
 *     IopUpdateReadTransferCount @ 0x14022B4B0 (IopUpdateReadTransferCount.c)
 *     IopUpdateReadOperationCount @ 0x140232B24 (IopUpdateReadOperationCount.c)
 *     IopExceptionFilter @ 0x14025E7A8 (IopExceptionFilter.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402AAB50 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopResetEvent @ 0x1402AABB0 (IopResetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IopCheckFileObjectExtensionFlag @ 0x1402AC870 (IopCheckFileObjectExtensionFlag.c)
 *     IopReleaseFileObjectLock @ 0x1402AD350 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IopSetCopyInformationExtension @ 0x140417D50 (IopSetCopyInformationExtension.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x140418218 (IopFreeCopyObjectsFromDataBuffer.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     FeatureServicing_40851744_EnableKey @ 0x14065863C (FeatureServicing_40851744_EnableKey.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140A8A8D4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140A8A9AC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopReadFile(
        struct _FILE_OBJECT *Object,
        HANDLE a2,
        __int64 a3,
        void *a4,
        _OWORD *a5,
        struct _IRP *Address,
        SIZE_T Length,
        __int64 a8,
        ULONG *a9,
        PVOID a10,
        struct _IO_STATUS_BLOCK *a11,
        int a12,
        _OWORD *a13)
{
  __int64 v15; // r13
  char v16; // al
  struct _KEVENT *v17; // rsi
  PVOID v18; // r15
  KPROCESSOR_MODE v19; // bl
  bool v20; // r12
  PDEVICE_OBJECT v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rbx
  ULONG v24; // r13d
  __int64 v26; // r15
  int v27; // r11d
  int SectorSize; // r8d
  unsigned int v29; // ecx
  unsigned int v30; // r9d
  int v31; // ebx
  int v32; // ebx
  struct _KTHREAD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  struct _FILE_OBJECT *v37; // rcx
  __int64 v38; // r15
  void *v39; // rbx
  char v40; // al
  __int64 v41; // rax
  IRP *Irp; // rbx
  PVOID v43; // r15
  struct _IO_STACK_LOCATION *v44; // r15
  ULONG Flags; // eax
  __int64 v46; // rax
  struct _MDL *v47; // rax
  char v48; // si
  struct _DEVICE_OBJECT *v49; // r10
  IRP *v50; // rsi
  char v51; // r12
  struct _KEVENT *v52; // r15
  struct _IRP *v53; // r13
  KPROCESSOR_MODE PreviousMode; // bl
  IRP *RelatedDeviceObject; // r11
  __int64 v56; // rcx
  __int64 v57; // rbx
  bool v58; // zf
  __int64 v59; // r12
  unsigned int v60; // r10d
  int v61; // r8d
  unsigned int v62; // ecx
  unsigned int v63; // r9d
  PIRP v64; // rbx
  int v65; // ebx
  struct _KTHREAD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // r9
  struct _LIST_ENTRY *Blink; // r12
  void *v71; // rbx
  char v72; // al
  __int64 v73; // rax
  PVOID v74; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  NTSTATUS Status; // eax
  __int64 Pool2; // rax
  struct _MDL *Mdl; // r9
  KPROCESSOR_MODE v79; // dl
  _OWORD *v80; // rbx
  int v81; // ecx
  unsigned __int8 v82; // [rsp+50h] [rbp-B8h]
  unsigned __int8 v83; // [rsp+50h] [rbp-B8h]
  _BYTE v84[15]; // [rsp+51h] [rbp-B7h] BYREF
  PDEVICE_OBJECT v85; // [rsp+60h] [rbp-A8h]
  PIRP FastIoDispatch; // [rsp+68h] [rbp-A0h]
  int v87; // [rsp+70h] [rbp-98h]
  LARGE_INTEGER v88; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER CurrentByteOffset; // [rsp+80h] [rbp-88h] BYREF
  ULONG v90; // [rsp+88h] [rbp-80h]
  ULONG v91; // [rsp+8Ch] [rbp-7Ch]
  PVOID v92; // [rsp+90h] [rbp-78h]
  PVOID v93; // [rsp+98h] [rbp-70h] BYREF
  __int128 v94; // [rsp+A0h] [rbp-68h] BYREF
  int v95; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD *StartVa; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-48h]
  HANDLE Handle; // [rsp+118h] [rbp+10h]
  __int64 v99; // [rsp+120h] [rbp+18h] BYREF
  void *v100; // [rsp+128h] [rbp+20h]

  v100 = a4;
  v99 = a3;
  Handle = a2;
  v15 = (__int64)a13;
  if ( EnableFeatureServicing_40851744 == 1
    || EnableFeatureServicing_40851744 && (v16 = FeatureServicing_40851744_EnableKey(), a2 = Handle, v16) )
  {
    v50 = 0LL;
    *(_QWORD *)&v84[7] = 0LL;
    v87 = 0;
    v51 = 0;
    v52 = 0LL;
    v92 = 0LL;
    v91 = 0;
    CurrentByteOffset.QuadPart = 0LL;
    if ( a10 && (a3 || a2 || Object->CompletionContext) )
    {
      v31 = -1073741811;
      v53 = Address;
      goto LABEL_239;
    }
    CurrentThread = KeGetCurrentThread();
    PreviousMode = CurrentThread->PreviousMode;
    v84[1] = PreviousMode;
    if ( (Object->Flags & 2) != 0 && a12 >= 0 )
      v51 = 1;
    v83 = v51;
    LODWORD(v85) = a12 & 0x40000000;
    v84[2] = (a12 & 0x40000000) == 0;
    RelatedDeviceObject = (IRP *)IoGetRelatedDeviceObject(Object);
    FastIoDispatch = RelatedDeviceObject;
    if ( !PreviousMode || a10 )
    {
      v59 = a8;
      if ( a8 )
        CurrentByteOffset = *(LARGE_INTEGER *)a8;
      v60 = Length;
      v53 = Address;
      if ( a9 )
        v91 = *a9;
    }
    else
    {
      v56 = (__int64)a5;
      v57 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        v56 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v56 = *(_DWORD *)v56;
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v99, v51);
      v58 = v15 == 0;
      v53 = Address;
      if ( v58 )
        ProbeForWrite(Address, (unsigned int)Length, 1u);
      if ( Object->CompletionContext && (v99 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        v87 = -1073741811;
        v31 = -1073741811;
        goto LABEL_239;
      }
      v59 = a8;
      if ( a8 )
      {
        if ( (a8 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        CurrentByteOffset = *(LARGE_INTEGER *)a8;
      }
      if ( a9 )
      {
        if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
          v57 = (__int64)a9;
        v91 = *(_DWORD *)v57;
      }
      v60 = Length;
      RelatedDeviceObject = FastIoDispatch;
      PreviousMode = v84[1];
    }
    if ( !PreviousMode || (Object->Flags & 8) == 0 )
      goto LABEL_160;
    v61 = *((unsigned __int16 *)&RelatedDeviceObject[1].Overlay.AllocationSize + 4);
    if ( (_WORD)v61 )
    {
      v62 = *((unsigned __int16 *)&RelatedDeviceObject[1].Overlay.AllocationSize + 4);
      v63 = v62;
      if ( ((v61 - 1) & v60) != 0 )
        goto LABEL_152;
    }
    else
    {
      v62 = 0;
    }
    v63 = v62;
    if ( (*(_DWORD *)(&RelatedDeviceObject->Tail.CompletionKey + 4) & (unsigned int)v53) == 0 )
    {
LABEL_156:
      if ( v59 && (_WORD)v61 && ((v62 - 1) & CurrentByteOffset.LowPart) != 0 )
      {
        v31 = -1073741811;
        goto LABEL_238;
      }
LABEL_160:
      if ( Handle )
      {
        v93 = 0LL;
        v31 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v93, 0LL);
        v52 = (struct _KEVENT *)v93;
        v92 = v93;
        v87 = v31;
        if ( v31 < 0 )
          goto LABEL_238;
        KeResetEvent((PRKEVENT)v93);
      }
      v64 = FastIoDispatch;
      StartVa = (struct _KTHREAD *)FastIoDispatch->MdlAddress[1].StartVa;
      if ( v83 )
      {
        v65 = Object->Flags & 4;
        v66 = KeGetCurrentThread();
        --v66->KernelApcDisable;
        v67 = KeAbPreAcquire((__int64)&Object->Lock, 0LL);
        v84[0] = 0;
        if ( _InterlockedExchange((volatile __int32 *)&Object->Busy, 1) )
        {
          LOBYTE(v68) = v65 != 0;
          v31 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&Object->Type, v84[1], v68, v67, v84);
        }
        else
        {
          if ( v67 )
            *(_BYTE *)(v67 + 18) = 1;
          ObfReferenceObject(Object);
          v31 = 0;
        }
        if ( v84[0] )
        {
          if ( v52 )
            ObfDereferenceObject(v52);
          goto LABEL_238;
        }
        if ( !v59 || CurrentByteOffset.QuadPart == -2 )
          CurrentByteOffset = Object->CurrentByteOffset;
        if ( Object->PrivateCacheMap && !a13 )
        {
          v94 = 0LL;
          Blink = StartVa->Header.WaitListHead.Blink;
          if ( CurrentByteOffset.HighPart < 0 )
          {
            if ( v52 )
              ObfDereferenceObject(v52);
            IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
            v31 = -1073741811;
            goto LABEL_238;
          }
          if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying((struct _DRIVER_OBJECT *)FastIoDispatch->MdlAddress) )
            v71 = (void *)VfFastIoSnapState();
          else
            v71 = 0LL;
          LOBYTE(v69) = 1;
          v72 = ((__int64 (__fastcall *)(struct _FILE_OBJECT *, LARGE_INTEGER *, _QWORD, __int64, ULONG, struct _IRP *, __int128 *, PIRP))Blink)(
                  Object,
                  &CurrentByteOffset,
                  (unsigned int)Length,
                  v69,
                  v91,
                  v53,
                  &v94,
                  FastIoDispatch);
          v84[0] = v72;
          if ( v71 )
          {
            VfFastIoCheckState(v71);
            v72 = v84[0];
          }
          if ( v72 && (!(_DWORD)v94 || (_DWORD)v94 == -2147483643 || (_DWORD)v94 == -1073741807) )
          {
            IopUpdateReadOperationCount();
            IopUpdateReadTransferCount(DWORD2(v94), 0LL);
            *a5 = v94;
            v51 = v83;
            if ( Handle )
            {
              if ( (Object->Flags & 0x8000000) == 0 )
                KeSetEvent(v52, 0, 0);
              ObfDereferenceObject(v52);
            }
            IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
            v31 = v94;
            goto LABEL_239;
          }
        }
        v64 = FastIoDispatch;
      }
      else if ( !v59 && (Object->Flags & 0x280) == 0 )
      {
        if ( v52 )
        {
          ObfDereferenceObject(v52);
          v31 = -1073741811;
          goto LABEL_238;
        }
        goto LABEL_155;
      }
      if ( CurrentByteOffset.HighPart < 0 )
      {
        if ( v52 )
          ObfDereferenceObject(v52);
        v51 = v83;
        if ( v83 )
          IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
        v31 = -1073741811;
        goto LABEL_239;
      }
      IopResetEvent((__int64)Object);
      v51 = v83;
      v73 = IopAllocateIrpExReturn((__int64)v64, BYTE4(v64->UserIosb), v83 ^ 1u);
      v50 = (IRP *)v73;
      *(_QWORD *)&v84[7] = v73;
      if ( !v73 )
      {
        if ( v52 )
          ObfDereferenceObject(v52);
        if ( v83 )
          IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
        v31 = -1073741670;
LABEL_239:
        if ( a13 )
          IopFreeCopyObjectsFromDataBuffer((__int64)v53, 1);
        v37 = Object;
        if ( v50 )
        {
          IopExceptionCleanupEx((volatile __int32 *)&Object->Type, v50, v52, 0LL, v51);
          return (unsigned int)v31;
        }
LABEL_57:
        ObfDereferenceObject(v37);
        return (unsigned int)v31;
      }
      *(_QWORD *)(v73 + 192) = Object;
      *(_QWORD *)(v73 + 152) = CurrentThread;
      *(_QWORD *)(v73 + 160) = 0LL;
      *(_WORD *)(v73 + 64) = v84[1];
      *(_BYTE *)(v73 + 68) = 0;
      *(_QWORD *)(v73 + 104) = 0LL;
      *(_DWORD *)(v73 + 16) = 0;
      *(_QWORD *)(v73 + 80) = v52;
      v74 = a10;
      if ( a10 )
      {
        ObfReferenceObjectWithTag(a10, 0x49526F49u);
        v50->Flags |= 0x200000u;
        v50->UserIosb = a11;
        v93 = a5;
      }
      else
      {
        v93 = a5;
        *(_QWORD *)(v73 + 72) = a5;
        *(_QWORD *)(v73 + 88) = v99;
        v74 = v100;
      }
      v50->Overlay.AsynchronousParameters.UserApcContext = v74;
      CurrentStackLocation = v50->Tail.Overlay.CurrentStackLocation;
      *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
      CurrentStackLocation[-1].FileObject = Object;
      v50->AssociatedIrp.MasterIrp = 0LL;
      v50->MdlAddress = 0LL;
      Status = FastIoDispatch->IoStatus.Status;
      if ( (Status & 4) != 0 )
      {
        if ( (_DWORD)Length )
        {
          if ( a13 )
          {
            v50->AssociatedIrp.MasterIrp = v53;
            v50->Flags |= 0x50u;
          }
          else
          {
            Pool2 = ExAllocatePool2(73LL, (unsigned int)Length, 1112764233LL);
            v50->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
            if ( !Pool2 )
            {
              v31 = -1073741670;
              goto LABEL_238;
            }
            v50->Flags |= 0x70u;
          }
          goto LABEL_230;
        }
        v50->Flags |= 0x50u;
      }
      else
      {
        if ( (Status & 0x10) == 0 )
        {
LABEL_230:
          v50->UserBuffer = v53;
          goto LABEL_231;
        }
        if ( (_DWORD)Length )
        {
          Mdl = IoAllocateMdl(v53, Length, 0, 1u, v50);
          if ( !Mdl )
            RtlRaiseStatus(-1073741670);
          v79 = 0;
          v80 = a13;
          if ( !a13 )
            v79 = v84[1];
          MmProbeAndLockPages(Mdl, v79, IoWriteAccess);
LABEL_232:
          v81 = v50->Flags | 0x100;
          v50->Flags = v81;
          if ( (Object->Flags & 8) != 0 )
          {
            v81 |= 1u;
            v50->Flags = v81;
          }
          if ( !(_DWORD)v85 )
            v50->Flags = v81 | 0x800;
          if ( !v80
            || (v50->RequestorMode = 0,
                v50->UserBuffer = v53,
                v31 = IopSetCopyInformationExtension((__int64)v50, v80),
                v31 >= 0) )
          {
            CurrentStackLocation[-1].Parameters.Read.Length = Length;
            CurrentStackLocation[-1].Parameters.Create.Options = v91;
            CurrentStackLocation[-1].Parameters.Read.ByteOffset = CurrentByteOffset;
            if ( IopCheckFileObjectExtensionFlag((__int64)Object, 16) )
              CurrentStackLocation[-1].Parameters.Read.Flags = *((_DWORD *)v93 + 2);
            return (unsigned int)IopSynchronousServiceTail(
                                   (PDEVICE_OBJECT)FastIoDispatch,
                                   v50,
                                   Object,
                                   v84[2],
                                   v84[1],
                                   v83,
                                   0);
          }
          goto LABEL_238;
        }
      }
LABEL_231:
      v80 = a13;
      goto LABEL_232;
    }
LABEL_152:
    if ( (_WORD)v61 && v60 % v63
      || (v62 = v63, (*(_DWORD *)(&RelatedDeviceObject->Tail.CompletionKey + 4) & (unsigned int)v53) != 0) )
    {
LABEL_155:
      v31 = -1073741811;
LABEL_238:
      v51 = v83;
      goto LABEL_239;
    }
    goto LABEL_156;
  }
  v17 = 0LL;
  v92 = 0LL;
  v90 = 0;
  v88.QuadPart = 0LL;
  v18 = a10;
  v93 = a10;
  if ( a10 && (a3 || a2 || Object->CompletionContext) )
    goto LABEL_66;
  StartVa = KeGetCurrentThread();
  v19 = StartVa->PreviousMode;
  v82 = v19;
  v20 = (Object->Flags & 2) != 0 && !a10;
  v84[1] = v20;
  v21 = IoGetRelatedDeviceObject(Object);
  v85 = v21;
  if ( !v19 || v18 )
  {
    v26 = a8;
    if ( a8 )
      v88 = *(LARGE_INTEGER *)a8;
    v24 = Length;
    v27 = (int)Address;
    if ( a9 )
      v90 = *a9;
  }
  else
  {
    v95 = 0;
    v22 = (__int64)a5;
    v23 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v99, v20);
    v24 = Length;
    ProbeForWrite(Address, (unsigned int)Length, 1u);
    if ( Object->CompletionContext && (v99 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(Object);
      return 3221225485LL;
    }
    v26 = a8;
    if ( a8 )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v88 = *(LARGE_INTEGER *)a8;
    }
    if ( a9 )
    {
      if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
        v23 = (__int64)a9;
      v90 = *(_DWORD *)v23;
    }
    v21 = v85;
    v27 = (int)Address;
    v19 = v82;
  }
  if ( !v19 || (Object->Flags & 8) == 0 )
    goto LABEL_44;
  SectorSize = v21->SectorSize;
  if ( !(_WORD)SectorSize )
  {
    v29 = 0;
    goto LABEL_37;
  }
  v29 = v21->SectorSize;
  v30 = v29;
  if ( ((SectorSize - 1) & v24) == 0 )
  {
LABEL_37:
    v30 = v29;
    if ( (v21->AlignmentRequirement & v27) == 0 )
      goto LABEL_41;
  }
  if ( (_WORD)SectorSize && v24 % v30 )
    goto LABEL_66;
  v29 = v30;
  if ( (v21->AlignmentRequirement & v27) != 0 )
    goto LABEL_66;
LABEL_41:
  if ( v26 && (_WORD)SectorSize && ((v29 - 1) & v88.LowPart) != 0 )
    goto LABEL_66;
LABEL_44:
  if ( Handle )
  {
    *(_QWORD *)&v84[7] = 0LL;
    v31 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, v19, (PVOID *)&v84[7], 0LL);
    v17 = *(struct _KEVENT **)&v84[7];
    v92 = *(PVOID *)&v84[7];
    if ( v31 < 0 )
    {
LABEL_56:
      v37 = Object;
      goto LABEL_57;
    }
    KeResetEvent(*(PRKEVENT *)&v84[7]);
  }
  FastIoDispatch = (PIRP)v85->DriverObject->FastIoDispatch;
  if ( !v20 )
  {
    if ( !v26 && (Object->Flags & 0x280) == 0 )
    {
      if ( v17 )
      {
        ObfDereferenceObject(v17);
        ObfDereferenceObject(Object);
        return 3221225485LL;
      }
LABEL_66:
      ObfDereferenceObject(Object);
      return 3221225485LL;
    }
    goto LABEL_86;
  }
  v32 = Object->Flags & 4;
  v33 = KeGetCurrentThread();
  --v33->KernelApcDisable;
  v34 = KeAbPreAcquire((__int64)&Object->Lock, 0LL);
  v84[0] = 0;
  if ( _InterlockedExchange((volatile __int32 *)&Object->Busy, 1) )
  {
    LOBYTE(v35) = v32 != 0;
    v31 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&Object->Type, v82, v35, v34, v84);
  }
  else
  {
    if ( v34 )
      *(_BYTE *)(v34 + 18) = 1;
    ObfReferenceObject(Object);
    v31 = 0;
  }
  if ( v84[0] )
  {
    if ( v17 )
      ObfDereferenceObject(v17);
    goto LABEL_56;
  }
  if ( !v26 || v88.QuadPart == -2 )
    v88 = Object->CurrentByteOffset;
  if ( !Object->PrivateCacheMap )
  {
LABEL_86:
    v38 = (__int64)v85;
    goto LABEL_87;
  }
  v94 = 0LL;
  *(_QWORD *)&v84[7] = *(_QWORD *)&FastIoDispatch->Flags;
  if ( v88.HighPart < 0 )
  {
    if ( v17 )
      ObfDereferenceObject(v17);
LABEL_65:
    IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
    goto LABEL_66;
  }
  v38 = (__int64)v85;
  if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(v85->DriverObject) )
    v39 = (void *)VfFastIoSnapState();
  else
    v39 = 0LL;
  LOBYTE(v36) = 1;
  v40 = (*(__int64 (__fastcall **)(struct _FILE_OBJECT *, LARGE_INTEGER *, _QWORD, __int64, ULONG, struct _IRP *, __int128 *, __int64))&v84[7])(
          Object,
          &v88,
          v24,
          v36,
          v90,
          Address,
          &v94,
          v38);
  v84[0] = v40;
  if ( v39 )
  {
    VfFastIoCheckState(v39);
    v40 = v84[0];
  }
  if ( v40 && (!(_DWORD)v94 || (_DWORD)v94 == -2147483643 || (_DWORD)v94 == -1073741807) )
  {
    IopUpdateReadOperationCount();
    IopUpdateReadTransferCount(DWORD2(v94), 0LL);
    *a5 = v94;
    if ( Handle )
    {
      if ( (Object->Flags & 0x8000000) == 0 )
        KeSetEvent(v17, 0, 0);
      ObfDereferenceObject(v17);
    }
    IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
    ObfDereferenceObject(Object);
    return (unsigned int)v94;
  }
LABEL_87:
  if ( v88.HighPart < 0 )
  {
    if ( v17 )
      ObfDereferenceObject(v17);
    if ( !v20 )
      goto LABEL_66;
    goto LABEL_65;
  }
  IopResetEvent((__int64)Object);
  v41 = IopAllocateIrpExReturn(v38, *(unsigned __int8 *)(v38 + 76), !v20);
  Irp = (IRP *)v41;
  FastIoDispatch = (PIRP)v41;
  if ( !v41 )
  {
    if ( v17 )
      ObfDereferenceObject(v17);
    if ( v20 )
      IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
    ObfDereferenceObject(Object);
    return 3221225626LL;
  }
  *(_QWORD *)(v41 + 192) = Object;
  *(_QWORD *)(v41 + 152) = StartVa;
  *(_QWORD *)(v41 + 160) = 0LL;
  *(_WORD *)(v41 + 64) = v82;
  *(_BYTE *)(v41 + 68) = 0;
  *(_QWORD *)(v41 + 104) = 0LL;
  *(_DWORD *)(v41 + 16) = 0;
  *(_QWORD *)(v41 + 80) = v17;
  v43 = v93;
  if ( v93 )
  {
    ObfReferenceObjectWithTag(v93, 0x49526F49u);
    Irp->Flags |= 0x200000u;
    Irp->UserIosb = a11;
    *(_QWORD *)&v84[7] = a5;
  }
  else
  {
    *(_QWORD *)&v84[7] = a5;
    *(_QWORD *)(v41 + 72) = a5;
    *(_QWORD *)(v41 + 88) = v99;
    v43 = v100;
  }
  Irp->Overlay.AsynchronousParameters.UserApcContext = v43;
  v44 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_DWORD *)&v44[-1].MajorFunction = 3;
  v44[-1].FileObject = Object;
  Irp->AssociatedIrp.MasterIrp = 0LL;
  Irp->MdlAddress = 0LL;
  Flags = v85->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( v24 )
    {
      v46 = ExAllocatePool2(73LL, v24, 1112764233LL);
      Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v46;
      if ( !v46 )
      {
        IopExceptionCleanupEx((volatile __int32 *)&Object->Type, Irp, v17, 0LL, v20);
        return 3221225626LL;
      }
      Irp->Flags |= 0x70u;
      goto LABEL_111;
    }
    Irp->Flags |= 0x50u;
  }
  else
  {
    if ( (Flags & 0x10) == 0 )
    {
LABEL_111:
      Irp->UserBuffer = Address;
      goto LABEL_112;
    }
    if ( v24 )
    {
      v47 = IoAllocateMdl(Address, v24, 0, 1u, Irp);
      if ( !v47 )
        RtlRaiseStatus(-1073741670);
      v48 = v82;
      MmProbeAndLockPages(v47, v82, IoWriteAccess);
      goto LABEL_113;
    }
  }
LABEL_112:
  v48 = v82;
LABEL_113:
  Irp->Flags |= (Object->Flags & 8 | 0x4800) >> 3;
  v44[-1].Parameters.Read.Length = v24;
  v44[-1].Parameters.Create.Options = v90;
  v44[-1].Parameters.Read.ByteOffset = v88;
  if ( IopCheckFileObjectExtensionFlag((__int64)Object, 16) )
    v44[-1].Parameters.Read.Flags = *(_DWORD *)(*(_QWORD *)&v84[7] + 8LL);
  return IopSynchronousServiceTail(v49, Irp, Object, 1, v48, v20, 0);
}
