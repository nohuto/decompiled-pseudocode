/*
 * XREFs of IopXxxControlFile @ 0x1407308F0
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1406AE644 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406AEA14 (PfpPrefetchDirectoryStream.c)
 *     NtFsControlFile @ 0x1406B02C0 (NtFsControlFile.c)
 *     NtDeviceIoControlFile @ 0x140730880 (NtDeviceIoControlFile.c)
 *     PfpPrefetchEntireDirectory @ 0x1407DE480 (PfpPrefetchEntireDirectory.c)
 *     PfSnPrefetchFileMetadata @ 0x1407E0048 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     IoThreadToProcess @ 0x1402321F0 (IoThreadToProcess.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     IopSetFileObjectExtensionFlag @ 0x1402A34C8 (IopSetFileObjectExtensionFlag.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402AAB50 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopResetEvent @ 0x1402AABB0 (IopResetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IopReferenceFileObject @ 0x1402AC790 (IopReferenceFileObject.c)
 *     IopReleaseFileObjectLock @ 0x1402AD350 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     IopProbeAndLockPages_1 @ 0x1403198A0 (IopProbeAndLockPages_1.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     Feature_Servicing_FsctlProcessMitigation__private_IsEnabled @ 0x140417880 (Feature_Servicing_FsctlProcessMitigation__private_IsEnabled.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1404178E8 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1404179B0 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopIsStandardFsctlIoControlCode @ 0x140417A7C (IopIsStandardFsctlIoControlCode.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     EtwTimLogProhibitFsctlSystemCalls @ 0x140659D84 (EtwTimLogProhibitFsctlSystemCalls.c)
 *     IopValidateJunctionTarget @ 0x14066119C (IopValidateJunctionTarget.c)
 *     IopCopyOffloadCapable @ 0x1406E8D8C (IopCopyOffloadCapable.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     AstLogIoctl @ 0x1407305B0 (AstLogIoctl.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     IoSetIoCompletion @ 0x1407D55B0 (IoSetIoCompletion.c)
 *     IopAllocateIrpCleanup @ 0x140933BA4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140A8A8D4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140A8A9AC (VfFastIoSnapState.c)
 */

NTSTATUS IopXxxControlFile(void *a1, void *a2, __int64 a3, void *a4, unsigned __int64 a5, int a6, char *Src, ...)
{
  int v8; // r13d
  __int64 v9; // r14
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // r15
  KPROCESSOR_MODE PreviousMode; // si
  __int64 Process; // rdx
  char v14; // bl
  char v15; // al
  char v16; // bl
  __int64 v17; // rcx
  unsigned int v18; // r12d
  unsigned int v19; // r15d
  NTSTATUS result; // eax
  int v21; // ebx
  struct _FILE_OBJECT *v22; // rdi
  struct _KPROCESS *v23; // rax
  int v24; // eax
  ULONG *p_Flags; // rbx
  bool v26; // si
  struct _KTHREAD *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // ebx
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  struct _DEVICE_OBJECT *v32; // rbx
  __int64 v33; // rdx
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  IRP *FastIoDeviceControl; // rsi
  char *v36; // rcx
  void *v37; // rbx
  char v38; // si
  _DWORD *v39; // rcx
  int v40; // r9d
  PVOID v41; // rbx
  int v42; // eax
  int v43; // ecx
  IRP *v44; // rax
  IRP *Irp; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  char v47; // r8
  int v48; // ebx
  __int64 v49; // rcx
  struct _IRP *v50; // rax
  PMDL Mdl; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct _IRP *Pool2; // rax
  _DWORD *p_ThreadListEntry; // rax
  unsigned __int8 v56; // [rsp+50h] [rbp-E8h]
  char v57; // [rsp+51h] [rbp-E7h]
  char IsSandboxedToken; // [rsp+52h] [rbp-E6h]
  char v59; // [rsp+53h] [rbp-E5h]
  _DWORD Object[3]; // [rsp+54h] [rbp-E4h] BYREF
  unsigned int v61; // [rsp+60h] [rbp-D8h]
  PVOID v62; // [rsp+68h] [rbp-D0h]
  int v63; // [rsp+70h] [rbp-C8h]
  PVOID P; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v65; // [rsp+80h] [rbp-B8h] BYREF
  PVOID v66; // [rsp+90h] [rbp-A8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp-A0h]
  PIRP v68; // [rsp+A0h] [rbp-98h]
  int v69; // [rsp+A8h] [rbp-90h]
  __int64 v70; // [rsp+B0h] [rbp-88h] BYREF
  PETHREAD Thread; // [rsp+B8h] [rbp-80h]
  struct _OBJECT_HANDLE_INFORMATION v72; // [rsp+C0h] [rbp-78h] BYREF
  PVOID v73; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v74; // [rsp+D0h] [rbp-68h] BYREF
  ULONG *v75; // [rsp+D8h] [rbp-60h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v78; // [rsp+150h] [rbp+18h] BYREF
  void *v79; // [rsp+158h] [rbp+20h]
  size_t Size; // [rsp+178h] [rbp+40h] BYREF
  va_list Sizea; // [rsp+178h] [rbp+40h]
  char *Address; // [rsp+180h] [rbp+48h]
  SIZE_T Length; // [rsp+188h] [rbp+50h]
  __int64 v84; // [rsp+190h] [rbp+58h]
  va_list va1; // [rsp+198h] [rbp+60h] BYREF

  va_start(va1, Src);
  va_start(Sizea, Src);
  Size = va_arg(va1, _QWORD);
  Address = va_arg(va1, char *);
  Length = va_arg(va1, _QWORD);
  v84 = va_arg(va1, _QWORD);
  v79 = a4;
  v78 = a3;
  v8 = a6;
  v69 = a6;
  v9 = 0LL;
  *(_QWORD *)&Object[1] = 0LL;
  v62 = 0LL;
  v72 = 0LL;
  v65 = 0LL;
  v10 = a6 & 3;
  v61 = v10;
  CurrentThread = KeGetCurrentThread();
  Thread = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v56 = PreviousMode;
  if ( (unsigned int)Feature_Servicing_FsctlProcessMitigation__private_IsEnabled() )
  {
    if ( !PreviousMode )
    {
LABEL_26:
      v18 = Length;
      v19 = Size;
      goto LABEL_27;
    }
    if ( !(_BYTE)v84 && !IopIsStandardFsctlIoControlCode(v8) )
    {
      Process = (__int64)CurrentThread->ApcState.Process;
      v14 = *(_DWORD *)(Process + 2928);
      v15 = v14 & 4;
      v16 = v14 & 2;
      if ( v16 || v15 )
      {
        EtwTimLogProhibitFsctlSystemCalls((v16 != 0) + 1, Process);
        if ( v16 )
          return -1073741790;
      }
      v10 = v61;
    }
  }
  if ( !PreviousMode )
    goto LABEL_26;
  v17 = a5;
  if ( a5 >= 0x7FFFFFFF0000LL )
    v17 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v17 = *(_DWORD *)v17;
  if ( v10 )
  {
    v18 = Length;
  }
  else if ( Address )
  {
    v18 = Length;
    ProbeForWrite(Address, (unsigned int)Length, 1u);
  }
  else
  {
    v18 = 0;
    LODWORD(Length) = 0;
  }
  if ( v10 == 3 )
  {
    v19 = Size;
  }
  else if ( Src )
  {
    v19 = Size;
    if ( (_DWORD)Size
      && ((unsigned __int64)&Src[(unsigned int)Size] > 0x7FFFFFFF0000LL || &Src[(unsigned int)Size] < Src) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v19 = 0;
    LODWORD(Size) = 0;
  }
LABEL_27:
  result = IopReferenceFileObject(a1, 0, PreviousMode, (PVOID *)&Object[1], &v72);
  v21 = result;
  if ( result < 0 )
    return result;
  v22 = *(struct _FILE_OBJECT **)&Object[1];
  if ( *(_QWORD *)(*(_QWORD *)&Object[1] + 176LL) && (v78 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(*(PVOID *)&Object[1]);
    return -1073741811;
  }
  if ( PreviousMode
    && (unsigned __int16)v8 >> 14
    && (((unsigned __int16)v8 >> 14) & v72.GrantedAccess) != (unsigned __int16)v8 >> 14 )
  {
    ObfDereferenceObject(*(PVOID *)&Object[1]);
    return -1073741790;
  }
  if ( v8 == 606820 || v8 == 623208 )
  {
    v21 = IopCopyOffloadCapable(*(struct _FILE_OBJECT **)&Object[1], v8);
    if ( v21 < 0 )
      goto LABEL_40;
  }
  else if ( v8 == 590892 )
  {
    v21 = IopSetFileObjectExtensionFlag(*(__int64 *)&Object[1], 16, 1);
    if ( v21 < 0 )
      goto LABEL_40;
  }
  if ( a2 )
  {
    v73 = 0LL;
    v21 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v73, 0LL);
    v62 = v73;
    if ( v21 >= 0 )
    {
      KeResetEvent((PRKEVENT)v73);
      goto LABEL_45;
    }
LABEL_40:
    ObfDereferenceObject(v22);
    return v21;
  }
LABEL_45:
  v66 = 0LL;
  P = 0LL;
  IsSandboxedToken = 0;
  v59 = 0;
  if ( PreviousMode && (v8 == 589988 && v19 >= 4 || v8 == 590860 && v19 >= 0x24) )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v23 = IoThreadToProcess(Thread);
    SeCaptureSubjectContextEx(Thread, v23, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
    BYTE1(Object[0]) = IsSandboxedToken;
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
    {
      v63 = 0;
      v24 = v8 == 590860 ? *((_DWORD *)Src + 8) : *(_DWORD *)Src;
      v63 = v24;
      if ( v21 < 0 )
        goto LABEL_58;
      if ( v24 == -1610612733 )
      {
        v59 = 1;
        v21 = IopValidateJunctionTarget(v8, Src, v19, v18, &P, (unsigned int *)Sizea);
        v19 = Size;
        v66 = P;
      }
      if ( v21 < 0 )
      {
LABEL_58:
        if ( v62 )
          ObfDereferenceObject(v62);
        goto LABEL_40;
      }
    }
  }
  p_Flags = &v22->Flags;
  v75 = &v22->Flags;
  if ( (v22->Flags & 2) != 0 )
  {
    v26 = (v22->Flags & 4) != 0;
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    v28 = *(_QWORD *)&Object[1];
    v29 = KeAbPreAcquire(*(_QWORD *)&Object[1] + 128LL, 0LL);
    LOBYTE(Object[0]) = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v28 + 116), 1) )
    {
      v22 = *(struct _FILE_OBJECT **)&Object[1];
      v30 = IopWaitAndAcquireFileObjectLock(*(volatile signed __int32 **)&Object[1], v56, v26, v29, Object);
    }
    else
    {
      if ( v29 )
        *(_BYTE *)(v29 + 18) = 1;
      v22 = *(struct _FILE_OBJECT **)&Object[1];
      ObfReferenceObject(*(PVOID *)&Object[1]);
      v30 = 0;
    }
    if ( LOBYTE(Object[0]) )
    {
      if ( v62 )
        ObfDereferenceObject(v62);
      if ( P )
        ExFreePoolWithTag(P, 0);
      ObfDereferenceObject(v22);
      return v30;
    }
    v57 = 1;
    v18 = Length;
    v19 = Size;
    v66 = P;
    p_Flags = v75;
  }
  else
  {
    v57 = 0;
    if ( PreviousMode )
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v78, 0);
  }
  if ( (*p_Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v22->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v22);
  v32 = AttachedDevice;
  DeviceObject = AttachedDevice;
  if ( (_BYTE)v84 )
  {
    AstLogIoctl((unsigned __int64)AttachedDevice, v8);
    if ( !IsSandboxedToken )
    {
      FastIoDispatch = v32->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoDeviceControl = (IRP *)FastIoDispatch->FastIoDeviceControl;
        v68 = FastIoDeviceControl;
        if ( FastIoDeviceControl )
        {
          if ( v56 && Address )
          {
            if ( v61 == 1 )
            {
              if ( v18 )
              {
                v36 = &Address[v18];
                if ( (unsigned __int64)v36 > 0x7FFFFFFF0000LL || v36 < Address )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
            }
            else if ( v61 == 2 )
            {
              ProbeForWrite(Address, v18, 1u);
            }
          }
          if ( v8 == 589856 )
          {
            _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
            v18 = Length;
            v19 = Size;
            v22 = *(struct _FILE_OBJECT **)&Object[1];
            v66 = P;
          }
          if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(v32->DriverObject) )
            v37 = (void *)VfFastIoSnapState();
          else
            v37 = 0LL;
          LOBYTE(v33) = 1;
          v38 = ((__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, char *, _QWORD, char *, unsigned int, int, __int128 *, PDEVICE_OBJECT))FastIoDeviceControl)(
                  v22,
                  v33,
                  Src,
                  v19,
                  Address,
                  v18,
                  v8,
                  &v65,
                  DeviceObject);
          if ( v37 )
            VfFastIoCheckState(v37);
          if ( v38 )
          {
            v70 = 0LL;
            v74 = 0LL;
            LOBYTE(a6) = 0;
            if ( (v78 & 1) != 0 )
            {
              v39 = (_DWORD *)a5;
              *(_DWORD *)(a5 + 4) = DWORD2(v65);
              *v39 = v65;
            }
            else
            {
              *(_OWORD *)a5 = v65;
            }
            v40 = v65;
            if ( v22->CompletionContext
              && ((v22->Flags & 0x2000000) == 0 || (v65 & 0xC0000000) == 0x80000000)
              && (v65 & 0xC0000000) != 0xC0000000 )
            {
              IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v22, &a6, &v70, &v74);
              v40 = v65;
              v9 = v70;
            }
            if ( a2 )
            {
              if ( (v22->Flags & 0x8000000) == 0 || v9 && (v40 & 0xC0000000) == 0x80000000 )
              {
                v41 = v62;
                KeSetEvent((PRKEVENT)v62, 0, 0);
              }
              else
              {
                v41 = v62;
              }
              ObfDereferenceObject(v41);
              v40 = v65;
            }
            if ( v57 )
            {
              IopReleaseFileObjectLock((volatile __int32 *)&v22->Type);
              v40 = v65;
            }
            if ( v9 && v79 )
            {
              v42 = IoSetIoCompletion(v9, v74, (_DWORD)v79, v40, *((__int64 *)&v65 + 1), 1);
              v43 = v65;
              if ( v42 < 0 )
                v43 = -1073741670;
              if ( (v43 & 0xC0000000) == 0x80000000 )
                v43 = 259;
              LODWORD(v65) = v43;
            }
            if ( (_BYTE)a6 )
              IopDecrementCompletionContextUsageCount((ULONG_PTR)v22);
            ObfDereferenceObject(v22);
            return v65;
          }
        }
      }
    }
  }
  IopResetEvent((__int64)v22);
  v44 = (IRP *)IopAllocateIrpExReturn(
                 (__int64)DeviceObject,
                 (unsigned __int8)DeviceObject->StackSize,
                 (unsigned __int8)v57 ^ 1u);
  Irp = v44;
  v68 = v44;
  if ( v44 )
  {
    v44->Tail.Overlay.OriginalFileObject = v22;
    v44->Tail.Overlay.Thread = Thread;
    v44->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v44->RequestorMode = v56;
    v44->PendingReturned = 0;
    v44->Cancel = 0;
    v44->CancelRoutine = 0LL;
    v44->UserEvent = (PKEVENT)v62;
    v44->UserIosb = (PIO_STATUS_BLOCK)a5;
    v44->Overlay.AllocationSize.QuadPart = v78;
    v44->Overlay.AsynchronousParameters.UserApcContext = v79;
    CurrentStackLocation = v44->Tail.Overlay.CurrentStackLocation;
    v47 = v84;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = ((_BYTE)v84 != 0) + 13;
    CurrentStackLocation[-1].FileObject = v22;
    CurrentStackLocation[-1].Parameters.Read.Length = v18;
    CurrentStackLocation[-1].Parameters.Create.Options = v19;
    v48 = a6;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a6;
    v44->MdlAddress = 0LL;
    v44->AssociatedIrp.MasterIrp = 0LL;
    if ( (DeviceObject->Flags & 0x80000) != 0 && !IsSandboxedToken )
      goto LABEL_137;
    if ( !v61 )
    {
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( v19 || v18 )
      {
        if ( v66 )
        {
          v44->AssociatedIrp.MasterIrp = (struct _IRP *)v66;
        }
        else
        {
          v52 = v18;
          if ( v19 > v18 )
            v52 = v19;
          v53 = 105LL;
          if ( !v47 )
            v53 = 97LL;
          Pool2 = (struct _IRP *)ExAllocatePool2(v53, v52, 1112764233LL);
          Irp->AssociatedIrp.MasterIrp = Pool2;
          if ( Src )
            memmove(Pool2, Src, v19);
        }
        Irp->Flags = 48;
        Irp->UserBuffer = Address;
        if ( v18 )
          Irp->Flags = 112;
      }
      else
      {
        v44->Flags = 0;
        v44->UserBuffer = 0LL;
      }
      if ( v19 < v18 )
        memset((char *)Irp->AssociatedIrp.MasterIrp + v19, 0, v18 - v19);
      goto LABEL_162;
    }
    if ( v61 <= 2 )
    {
      v44->Flags = 0;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( v19 && Src )
      {
        v49 = 105LL;
        if ( !v47 )
          v49 = 97LL;
        v50 = (struct _IRP *)ExAllocatePool2(v49, v19, 1112764233LL);
        Irp->AssociatedIrp.MasterIrp = v50;
        memmove(v50, Src, v19);
        Irp->Flags = 48;
        v48 = a6;
      }
      if ( v18 )
      {
        Mdl = IoAllocateMdl(Address, v18, 0, 1u, Irp);
        Irp->MdlAddress = Mdl;
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        LOBYTE(v9) = v61 != 1;
        IopProbeAndLockPages_1(Mdl, v56, v9, (__int64)DeviceObject, *(_DWORD *)&CurrentStackLocation[-1].MajorFunction);
      }
      goto LABEL_162;
    }
    if ( v61 == 3 )
    {
LABEL_137:
      v44->Flags = 0;
      v44->UserBuffer = Address;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)Src;
    }
LABEL_162:
    CurrentStackLocation[-1].Flags |= v72.GrantedAccess & 1 | (unsigned __int8)(2 * (v72.GrantedAccess & 2));
    if ( !(_BYTE)v84 )
      Irp->Flags |= 0x800u;
    if ( v48 == 589856 )
    {
      _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
      v22 = *(struct _FILE_OBJECT **)&Object[1];
    }
    if ( !IsSandboxedToken || v59 )
      return IopSynchronousServiceTail(DeviceObject, Irp, v56, v57, 2);
    p_ThreadListEntry = &Irp->AssociatedIrp.MasterIrp->ThreadListEntry;
    if ( v69 != 590860 )
      p_ThreadListEntry = &Irp->AssociatedIrp.MasterIrp->Type;
    if ( *p_ThreadListEntry != -1610612733 )
      return IopSynchronousServiceTail(DeviceObject, Irp, v56, v57, 2);
    IopExceptionCleanupEx((volatile __int32 *)&v22->Type, Irp, v62, 0LL, (*v75 & 2) != 0);
    return -1073741811;
  }
  IopAllocateIrpCleanup(v22, v62);
  if ( v66 )
    ExFreePoolWithTag(v66, 0);
  return -1073741670;
}
