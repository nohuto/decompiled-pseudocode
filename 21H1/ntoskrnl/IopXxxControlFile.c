/*
 * XREFs of IopXxxControlFile @ 0x1405FCC10
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1405D2B24 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1405D2ED0 (PfpPrefetchDirectoryStream.c)
 *     NtDeviceIoControlFile @ 0x1405FCBA0 (NtDeviceIoControlFile.c)
 *     NtFsControlFile @ 0x1406C26C0 (NtFsControlFile.c)
 *     PfpPrefetchEntireDirectory @ 0x1406C3C78 (PfpPrefetchEntireDirectory.c)
 *     PfSnPrefetchFileMetadata @ 0x1406C3E84 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140252B80 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140253320 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402533E0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IoGetAttachedDevice @ 0x1402543B0 (IoGetAttachedDevice.c)
 *     IoThreadToProcess @ 0x14025A330 (IoThreadToProcess.c)
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     IopProbeAndLockPages @ 0x1402A6870 (IopProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     IopSetFileObjectExtensionFlag @ 0x1402D95E0 (IopSetFileObjectExtensionFlag.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     SeCaptureSubjectContextEx @ 0x140602DE0 (SeCaptureSubjectContextEx.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x140649A20 (RtlIsSandboxedToken.c)
 *     IopCopyOffloadCapable @ 0x1406B9A7C (IopCopyOffloadCapable.c)
 *     IoSetIoCompletion @ 0x1406DD050 (IoSetIoCompletion.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     IopValidateJunctionTarget @ 0x14088EB14 (IopValidateJunctionTarget.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x1409C6994 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A6C (VfFastIoSnapState.c)
 */

__int64 IopXxxControlFile(void *a1, void *a2, __int64 a3, void *a4, unsigned __int64 a5, int a6, char *Src, ...)
{
  void *v7; // r14
  unsigned int v9; // ebx
  __int64 v10; // r12
  int v11; // r13d
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v13; // rcx
  __int64 result; // rax
  int v15; // esi
  __int64 v16; // rdi
  _DWORD *v17; // r14
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  PDEVICE_OBJECT v22; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 (__fastcall *FastIoDeviceControl)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD); // rsi
  char v25; // si
  IRP *v26; // rax
  IRP *Irp; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v29; // cl
  ULONG v30; // edx
  ULONG v31; // r9d
  POOL_TYPE v32; // r8d
  struct _IRP *PoolWithQuota_0; // rax
  PMDL Mdl; // rcx
  struct _DMA_ADAPTER *v35; // r8
  char *v36; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  unsigned int v40; // esi
  _DWORD *v41; // rcx
  int v42; // r9d
  struct _DMA_ADAPTER *v43; // rsi
  __int64 *v44; // rcx
  __int64 v45; // rbx
  unsigned int v46; // eax
  struct _IRP *v47; // rax
  int v48; // ecx
  struct _KPROCESS *v49; // rax
  int v50; // eax
  struct _DMA_ADAPTER *v51; // r9
  _DWORD *p_ThreadListEntry; // rax
  char IsSandboxedToken; // [rsp+50h] [rbp-E8h]
  char v54; // [rsp+51h] [rbp-E7h]
  unsigned int Size; // [rsp+54h] [rbp-E4h]
  ULONG Size_4; // [rsp+58h] [rbp-E0h]
  _DWORD v57[3]; // [rsp+5Ch] [rbp-DCh] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-D0h]
  PRKEVENT Event; // [rsp+70h] [rbp-C8h]
  int v60; // [rsp+78h] [rbp-C0h]
  PVOID P; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v62; // [rsp+88h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp-A0h]
  PVOID v64; // [rsp+A0h] [rbp-98h]
  __int64 v65; // [rsp+A8h] [rbp-90h]
  PIRP v66; // [rsp+B0h] [rbp-88h]
  int v67; // [rsp+B8h] [rbp-80h]
  struct _OBJECT_HANDLE_INFORMATION v68; // [rsp+C0h] [rbp-78h] BYREF
  PVOID Object; // [rsp+C8h] [rbp-70h] BYREF
  PETHREAD Thread; // [rsp+D0h] [rbp-68h]
  __int64 (__fastcall *v71)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD); // [rsp+D8h] [rbp-60h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v74; // [rsp+150h] [rbp+18h] BYREF
  void *v75; // [rsp+158h] [rbp+20h]
  __int64 v76; // [rsp+178h] [rbp+40h] BYREF
  va_list va; // [rsp+178h] [rbp+40h]
  char *Address; // [rsp+180h] [rbp+48h]
  SIZE_T Length; // [rsp+188h] [rbp+50h]
  __int64 v80; // [rsp+190h] [rbp+58h]
  va_list va1; // [rsp+198h] [rbp+60h] BYREF

  va_start(va1, Src);
  va_start(va, Src);
  v76 = va_arg(va1, _QWORD);
  Address = va_arg(va1, char *);
  Length = va_arg(va1, _QWORD);
  v80 = va_arg(va1, _QWORD);
  v75 = a4;
  v74 = a3;
  v7 = a2;
  v9 = a6;
  v67 = a6;
  v10 = 0LL;
  *(_QWORD *)&v57[1] = 0LL;
  DmaAdapter = 0LL;
  v68 = 0LL;
  v62 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v11 = a6 & 3;
  LODWORD(DeviceObject) = v11;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  BYTE1(v57[0]) = PreviousMode;
  if ( PreviousMode )
  {
    v13 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    if ( v11 )
    {
      Size_4 = Length;
    }
    else if ( Address )
    {
      Size_4 = Length;
      ProbeForWrite(Address, (unsigned int)Length, 1u);
    }
    else
    {
      Size_4 = 0;
      LODWORD(Length) = 0;
    }
    if ( v11 == 3 )
    {
      Size = v76;
    }
    else if ( Src )
    {
      Size = v76;
      if ( (_DWORD)v76
        && ((unsigned __int64)&Src[(unsigned int)v76] > 0x7FFFFFFF0000LL || &Src[(unsigned int)v76] < Src) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      LODWORD(v76) = 0;
      Size = 0;
    }
    v7 = a2;
  }
  else
  {
    Size_4 = Length;
    Size = v76;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, (PVOID *)&v57[1], &v68);
  v15 = result;
  if ( (int)result < 0 )
    return result;
  v16 = *(_QWORD *)&v57[1];
  v65 = *(_QWORD *)&v57[1];
  if ( *(_QWORD *)(*(_QWORD *)&v57[1] + 176LL) && (v74 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)&v57[1]);
    return 3221225485LL;
  }
  if ( PreviousMode
    && (unsigned __int16)v9 >> 14
    && (((unsigned __int16)v9 >> 14) & v68.GrantedAccess) != (unsigned __int16)v9 >> 14 )
  {
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)&v57[1]);
    return 3221225506LL;
  }
  if ( v9 == 606820 || v9 == 623208 )
  {
    v15 = IopCopyOffloadCapable(*(_QWORD *)&v57[1], v9);
    if ( v15 < 0 )
      goto LABEL_138;
  }
  else if ( v9 == 590892 )
  {
    v15 = IopSetFileObjectExtensionFlag(*(__int64 *)&v57[1], 16, 1);
    if ( v15 < 0 )
      goto LABEL_138;
  }
  if ( v7 )
  {
    Object = 0LL;
    v15 = ObReferenceObjectByHandle(v7, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    Event = (PRKEVENT)Object;
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( v15 >= 0 )
    {
      KeResetEvent((PRKEVENT)Object);
      goto LABEL_27;
    }
LABEL_138:
    HalPutDmaAdapter((PADAPTER_OBJECT)v16);
    return (unsigned int)v15;
  }
  Event = (PRKEVENT)DmaAdapter;
LABEL_27:
  v64 = 0LL;
  P = 0LL;
  IsSandboxedToken = 0;
  v54 = 0;
  if ( PreviousMode && (v9 == 589988 && Size >= 4 || v9 == 590860 && Size >= 0x24) )
  {
    v49 = IoThreadToProcess(Thread);
    SeCaptureSubjectContextEx(Thread, v49, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
    BYTE2(v57[0]) = IsSandboxedToken;
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
    {
      v60 = 0;
      v50 = v9 == 590860 ? *((_DWORD *)Src + 8) : *(_DWORD *)Src;
      v60 = v50;
      v51 = (struct _DMA_ADAPTER *)Event;
      if ( v15 < 0 )
        goto LABEL_148;
      if ( v50 == -1610612733 )
      {
        v54 = 1;
        v15 = IopValidateJunctionTarget(v9, Src, Size, Size_4, &P, (__int64 *)va);
        Size = v76;
        v64 = P;
        v51 = (struct _DMA_ADAPTER *)Event;
      }
      if ( v15 < 0 )
      {
LABEL_148:
        if ( v51 )
          HalPutDmaAdapter(v51);
        goto LABEL_138;
      }
    }
  }
  v17 = (_DWORD *)(v16 + 80);
  if ( (*(_DWORD *)(v16 + 80) & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v38 = *(_QWORD *)&v57[1];
    v39 = KeAbPreAcquire(*(_QWORD *)&v57[1] + 128LL, 0LL, 0);
    LOBYTE(v57[0]) = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v38 + 116), 1) )
    {
      v16 = *(_QWORD *)&v57[1];
      v65 = *(_QWORD *)&v57[1];
      v40 = IopWaitAndAcquireFileObjectLock(*(PVOID *)&v57[1], (__int64)v57);
    }
    else
    {
      if ( v39 )
        *(_BYTE *)(v39 + 26) |= 1u;
      v16 = *(_QWORD *)&v57[1];
      v65 = *(_QWORD *)&v57[1];
      ObfReferenceObject(*(PVOID *)&v57[1]);
      v40 = 0;
    }
    if ( LOBYTE(v57[0]) )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      if ( P )
        ExFreePoolWithTag(P, 0);
      HalPutDmaAdapter((PADAPTER_OBJECT)v16);
      return v40;
    }
    LOBYTE(a6) = 1;
    Size_4 = Length;
    Size = v76;
    Event = (PRKEVENT)DmaAdapter;
    v64 = P;
  }
  else
  {
    LOBYTE(a6) = 0;
    if ( PreviousMode )
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v74, 0);
  }
  if ( (*v17 & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(*(PDEVICE_OBJECT *)(v16 + 8));
  else
    AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)v16);
  v22 = AttachedDevice;
  DeviceObject = AttachedDevice;
  if ( (_BYTE)v80 )
  {
    if ( !IsSandboxedToken )
    {
      FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoDeviceControl = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD))FastIoDispatch->FastIoDeviceControl;
        v71 = FastIoDeviceControl;
        if ( FastIoDeviceControl )
        {
          if ( PreviousMode && Address )
          {
            if ( v11 == 1 )
            {
              if ( Size_4 )
              {
                v36 = &Address[Size_4];
                if ( (unsigned __int64)v36 > 0x7FFFFFFF0000LL || v36 < Address )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
            }
            else if ( v11 == 2 )
            {
              ProbeForWrite(Address, Size_4, 1u);
            }
          }
          if ( v9 == 589856 )
          {
            _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
            Size_4 = Length;
            Size = v76;
            v16 = *(_QWORD *)&v57[1];
            v65 = *(_QWORD *)&v57[1];
            Event = (PRKEVENT)DmaAdapter;
            v64 = P;
          }
          if ( (MmVerifierData & 0x10) != 0 )
            v66 = (PIRP)VfFastIoSnapState();
          else
            v66 = 0LL;
          LOBYTE(v19) = 1;
          v25 = FastIoDeviceControl(v16, v19, Src, Size, Address, Size_4, v9, &v62, v22);
          if ( v66 )
            VfFastIoCheckState(v66);
          if ( v25 )
          {
            if ( (v74 & 1) != 0 )
            {
              v41 = (_DWORD *)a5;
              *(_DWORD *)(a5 + 4) = DWORD2(v62);
              *v41 = v62;
            }
            else
            {
              *(_OWORD *)a5 = v62;
            }
            v42 = v62;
            v43 = (struct _DMA_ADAPTER *)Event;
            v44 = *(__int64 **)(v16 + 176);
            if ( !v44
              || (*(_DWORD *)(v16 + 80) & 0x2000000) != 0 && (v62 & 0xC0000000) != 0x80000000
              || (v62 & 0xC0000000) == 0xC0000000 )
            {
              LODWORD(v45) = 0;
            }
            else
            {
              v10 = *v44;
              v45 = v44[1];
            }
            if ( a2 )
            {
              if ( (*(_DWORD *)(v16 + 80) & 0x8000000) == 0 || v10 && (v62 & 0xC0000000) == 0x80000000 )
                KeSetEvent(Event, 0, 0);
              HalPutDmaAdapter(v43);
              v42 = v62;
            }
            if ( (_BYTE)a6 )
            {
              IopReleaseFileObjectLock((PADAPTER_OBJECT)v16);
              v42 = v62;
            }
            if ( v10 && v75 )
            {
              if ( (int)IoSetIoCompletion(v10, v45, (_DWORD)v75, v42, *((__int64 *)&v62 + 1), 1) < 0 )
              {
                v48 = -1073741670;
                LODWORD(v62) = -1073741670;
              }
              else
              {
                v48 = v62;
              }
              if ( (v48 & 0xC0000000) == 0x80000000 )
                LODWORD(v62) = 259;
            }
            HalPutDmaAdapter((PADAPTER_OBJECT)v16);
            return (unsigned int)v62;
          }
        }
      }
    }
  }
  IopResetEvent(v16, v19, v20, v21);
  v26 = (IRP *)IopAllocateIrpExReturn();
  Irp = v26;
  v66 = v26;
  if ( !v26 )
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v16, (PADAPTER_OBJECT)Event);
    if ( v64 )
      ExFreePoolWithTag(v64, 0);
    return 3221225626LL;
  }
  v26->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v16;
  v26->Tail.Overlay.Thread = Thread;
  v26->Tail.Overlay.AuxiliaryBuffer = 0LL;
  v26->RequestorMode = PreviousMode;
  v26->PendingReturned = 0;
  v26->Cancel = 0;
  v26->CancelRoutine = 0LL;
  v26->UserEvent = Event;
  v26->UserIosb = (PIO_STATUS_BLOCK)a5;
  v26->Overlay.AllocationSize.QuadPart = v74;
  v26->Overlay.AsynchronousParameters.UserApcContext = v75;
  CurrentStackLocation = v26->Tail.Overlay.CurrentStackLocation;
  v29 = v80;
  *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = ((_BYTE)v80 != 0) + 13;
  CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v16;
  v30 = Size_4;
  CurrentStackLocation[-1].Parameters.Read.Length = Size_4;
  v31 = Size;
  CurrentStackLocation[-1].Parameters.Create.Options = Size;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v9;
  v32 = NonPagedPoolNxCacheAligned;
  if ( !v29 )
    v32 = NonPagedPoolNx;
  v26->MdlAddress = 0LL;
  v26->AssociatedIrp.MasterIrp = 0LL;
  if ( (DeviceObject->Flags & 0x80000) == 0 || IsSandboxedToken )
  {
    if ( v11 == 2 )
    {
LABEL_53:
      v26->Flags = 0;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( Size && Src )
      {
        PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v32, Size);
        Irp->AssociatedIrp.MasterIrp = PoolWithQuota_0;
        memmove(PoolWithQuota_0, Src, Size);
        Irp->Flags = 48;
        v16 = v65;
        v30 = Size_4;
      }
      if ( v30 )
      {
        Mdl = IoAllocateMdl(Address, v30, 0, 1u, Irp);
        Irp->MdlAddress = Mdl;
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        LOBYTE(v10) = v11 != 1;
        IopProbeAndLockPages(
          (__int64)Mdl,
          PreviousMode,
          v10,
          (__int64)DeviceObject,
          *(_DWORD *)&CurrentStackLocation[-1].MajorFunction);
      }
      goto LABEL_60;
    }
  }
  else
  {
    v11 = 3;
  }
  switch ( v11 )
  {
    case 0:
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( Size || Size_4 )
      {
        if ( v64 )
        {
          v26->AssociatedIrp.MasterIrp = (struct _IRP *)v64;
        }
        else
        {
          v46 = Size_4;
          if ( Size > Size_4 )
            v46 = Size;
          v47 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v32, v46);
          Irp->AssociatedIrp.MasterIrp = v47;
          if ( Src )
            memmove(v47, Src, Size);
          v31 = Size;
          v30 = Size_4;
        }
        Irp->Flags = 48;
        Irp->UserBuffer = Address;
        if ( v30 )
          Irp->Flags = 112;
      }
      else
      {
        v26->Flags = 0;
        v26->UserBuffer = 0LL;
      }
      if ( v31 < v30 && !IopDisableBufferedIoInit )
        memset((char *)Irp->AssociatedIrp.MasterIrp + v31, 0, v30 - v31);
      break;
    case 1:
      goto LABEL_53;
    case 3:
      v26->Flags = 0;
      v26->UserBuffer = Address;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)Src;
      break;
  }
LABEL_60:
  CurrentStackLocation[-1].Flags |= v68.GrantedAccess & 1 | (unsigned __int8)(2 * (v68.GrantedAccess & 2));
  if ( !(_BYTE)v80 )
    Irp->Flags |= 0x800u;
  if ( v9 == 589856 )
  {
    _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
    v16 = *(_QWORD *)&v57[1];
    v35 = DmaAdapter;
  }
  else
  {
    v35 = (struct _DMA_ADAPTER *)Event;
  }
  if ( IsSandboxedToken && !v54 )
  {
    p_ThreadListEntry = &Irp->AssociatedIrp.MasterIrp->ThreadListEntry;
    if ( v67 != 590860 )
      p_ThreadListEntry = &Irp->AssociatedIrp.MasterIrp->Type;
    if ( *p_ThreadListEntry == -1610612733 )
    {
      IopExceptionCleanup((PADAPTER_OBJECT)v16, Irp, v35, 0LL);
      return 3221225485LL;
    }
  }
  return IopSynchronousServiceTail(DeviceObject, Irp, PreviousMode, a6, 2);
}
