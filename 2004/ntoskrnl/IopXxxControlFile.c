/*
 * XREFs of IopXxxControlFile @ 0x140674CF0
 * Callers:
 *     NtDeviceIoControlFile @ 0x140674C80 (NtDeviceIoControlFile.c)
 *     PfpPrefetchEntireDirectory @ 0x1406BD15C (PfpPrefetchEntireDirectory.c)
 *     PfSnPrefetchFileMetadata @ 0x1406BD368 (PfSnPrefetchFileMetadata.c)
 *     PfpVolumePrefetchMetadata @ 0x1406D148C (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406D1838 (PfpPrefetchDirectoryStream.c)
 *     NtFsControlFile @ 0x1406E2C40 (NtFsControlFile.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x140205FA0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x14020AF90 (IopReferenceFileObject.c)
 *     IopProbeAndLockPages @ 0x14024D840 (IopProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1402656A0 (IoAllocateMdl.c)
 *     IopSetFileObjectExtensionFlag @ 0x14027B310 (IopSetFileObjectExtensionFlag.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14028F420 (IopVerifierExAllocatePoolWithQuota.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14028FBA0 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14028FC60 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IoGetAttachedDevice @ 0x140290C30 (IoGetAttachedDevice.c)
 *     IoThreadToProcess @ 0x140296BB0 (IoThreadToProcess.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x14062BE70 (RtlIsSandboxedToken.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IoSetIoCompletion @ 0x1406569F0 (IoSetIoCompletion.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     SeCaptureSubjectContextEx @ 0x14067AEC0 (SeCaptureSubjectContextEx.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     IopCopyOffloadCapable @ 0x1406DAD8C (IopCopyOffloadCapable.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     IopValidateJunctionTarget @ 0x14088FE34 (IopValidateJunctionTarget.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x1409C69A4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A7C (VfFastIoSnapState.c)
 */

__int64 IopXxxControlFile(void *a1, void *a2, __int64 a3, __int64 a4, unsigned __int64 a5, int a6, char *Src, ...)
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
  __int64 v22; // r14
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
  struct _IRP *PoolWithQuota; // rax
  PMDL Mdl; // rcx
  struct _DMA_ADAPTER *v35; // r8
  char *v36; // rcx
  char v37; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned int v41; // esi
  _DWORD *v42; // rcx
  unsigned __int64 v43; // r9
  struct _DMA_ADAPTER *v44; // rsi
  __int64 *v45; // rcx
  __int64 v46; // rbx
  unsigned int v47; // eax
  struct _IRP *v48; // rax
  int v49; // ecx
  struct _KPROCESS *v50; // rax
  int v51; // eax
  struct _DMA_ADAPTER *v52; // r9
  _DWORD *p_ThreadListEntry; // rax
  bool IsSandboxedToken; // [rsp+50h] [rbp-E8h]
  char v55; // [rsp+51h] [rbp-E7h]
  unsigned int Size; // [rsp+54h] [rbp-E4h]
  ULONG Size_4; // [rsp+58h] [rbp-E0h]
  _DWORD v58[3]; // [rsp+5Ch] [rbp-DCh] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-D0h]
  PRKEVENT Event; // [rsp+70h] [rbp-C8h]
  int v61; // [rsp+78h] [rbp-C0h]
  PVOID P; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v63; // [rsp+88h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp-A0h]
  PVOID v65; // [rsp+A0h] [rbp-98h]
  __int64 v66; // [rsp+A8h] [rbp-90h]
  PIRP v67; // [rsp+B0h] [rbp-88h]
  int v68; // [rsp+B8h] [rbp-80h]
  struct _OBJECT_HANDLE_INFORMATION v69; // [rsp+C0h] [rbp-78h] BYREF
  PVOID Object; // [rsp+C8h] [rbp-70h] BYREF
  PETHREAD Thread; // [rsp+D0h] [rbp-68h]
  __int64 (__fastcall *v72)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD); // [rsp+D8h] [rbp-60h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-58h] BYREF
  __int64 retaddr; // [rsp+138h] [rbp+0h]
  __int64 v76; // [rsp+150h] [rbp+18h] BYREF
  void *v77; // [rsp+158h] [rbp+20h]
  __int64 v78; // [rsp+178h] [rbp+40h] BYREF
  va_list va; // [rsp+178h] [rbp+40h]
  char *Address; // [rsp+180h] [rbp+48h]
  SIZE_T Length; // [rsp+188h] [rbp+50h]
  __int64 v82; // [rsp+190h] [rbp+58h]
  va_list va1; // [rsp+198h] [rbp+60h] BYREF

  va_start(va1, Src);
  va_start(va, Src);
  v78 = va_arg(va1, _QWORD);
  Address = va_arg(va1, char *);
  Length = va_arg(va1, _QWORD);
  v82 = va_arg(va1, _QWORD);
  v77 = (void *)a4;
  v76 = a3;
  v7 = a2;
  v9 = a6;
  v68 = a6;
  v10 = 0LL;
  *(_QWORD *)&v58[1] = 0LL;
  DmaAdapter = 0LL;
  v69 = 0LL;
  v63 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v11 = a6 & 3;
  LODWORD(DeviceObject) = v11;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  BYTE1(v58[0]) = PreviousMode;
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
      Size = v78;
    }
    else if ( Src )
    {
      Size = v78;
      if ( (_DWORD)v78
        && ((unsigned __int64)&Src[(unsigned int)v78] > 0x7FFFFFFF0000LL || &Src[(unsigned int)v78] < Src) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      LODWORD(v78) = 0;
      Size = 0;
    }
    v7 = a2;
  }
  else
  {
    Size_4 = Length;
    Size = v78;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, (PVOID *)&v58[1], &v69);
  v15 = result;
  if ( (int)result < 0 )
    return result;
  v16 = *(_QWORD *)&v58[1];
  v66 = *(_QWORD *)&v58[1];
  if ( *(_QWORD *)(*(_QWORD *)&v58[1] + 176LL) && (v76 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)&v58[1]);
    return 3221225485LL;
  }
  if ( PreviousMode
    && (unsigned __int16)v9 >> 14
    && (((unsigned __int16)v9 >> 14) & v69.GrantedAccess) != (unsigned __int16)v9 >> 14 )
  {
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)&v58[1]);
    return 3221225506LL;
  }
  if ( v9 == 606820 || v9 == 623208 )
  {
    v15 = IopCopyOffloadCapable(*(_QWORD *)&v58[1], v9);
    if ( v15 < 0 )
      goto LABEL_138;
  }
  else if ( v9 == 590892 )
  {
    v15 = IopSetFileObjectExtensionFlag(*(__int64 *)&v58[1], 16, 1);
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
  v65 = 0LL;
  P = 0LL;
  IsSandboxedToken = 0;
  v55 = 0;
  if ( PreviousMode && (v9 == 589988 && Size >= 4 || v9 == 590860 && Size >= 0x24) )
  {
    v50 = IoThreadToProcess(Thread);
    SeCaptureSubjectContextEx(Thread, v50, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, PreviousMode);
    BYTE2(v58[0]) = IsSandboxedToken;
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
    {
      v61 = 0;
      v51 = v9 == 590860 ? *((_DWORD *)Src + 8) : *(_DWORD *)Src;
      v61 = v51;
      v52 = (struct _DMA_ADAPTER *)Event;
      if ( v15 < 0 )
        goto LABEL_148;
      if ( v51 == -1610612733 )
      {
        v55 = 1;
        v15 = IopValidateJunctionTarget(v9, Src, Size, Size_4, &P, (__int64 *)va);
        Size = v78;
        v65 = P;
        v52 = (struct _DMA_ADAPTER *)Event;
      }
      if ( v15 < 0 )
      {
LABEL_148:
        if ( v52 )
          HalPutDmaAdapter(v52);
        goto LABEL_138;
      }
    }
  }
  v17 = (_DWORD *)(v16 + 80);
  if ( (*(_DWORD *)(v16 + 80) & 2) != 0 )
  {
    v37 = (*(_DWORD *)(v16 + 80) & 4) != 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v39 = *(_QWORD *)&v58[1];
    v40 = KeAbPreAcquire(*(_QWORD *)&v58[1] + 128LL, 0LL, 0);
    LOBYTE(v58[0]) = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v39 + 116), 1) )
    {
      v16 = *(_QWORD *)&v58[1];
      v66 = *(_QWORD *)&v58[1];
      v41 = IopWaitAndAcquireFileObjectLock(*(volatile signed __int32 **)&v58[1], PreviousMode, v37, v40, v58);
    }
    else
    {
      if ( v40 )
        *(_BYTE *)(v40 + 26) |= 1u;
      v16 = *(_QWORD *)&v58[1];
      v66 = *(_QWORD *)&v58[1];
      ObfReferenceObject(*(PVOID *)&v58[1]);
      v41 = 0;
    }
    if ( LOBYTE(v58[0]) )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      if ( P )
        ExFreePoolWithTag(P, 0);
      HalPutDmaAdapter((PADAPTER_OBJECT)v16);
      return v41;
    }
    LOBYTE(a6) = 1;
    Size_4 = Length;
    Size = v78;
    Event = (PRKEVENT)DmaAdapter;
    v65 = P;
  }
  else
  {
    LOBYTE(a6) = 0;
    if ( PreviousMode )
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v76, 0);
  }
  if ( (*v17 & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(*(PDEVICE_OBJECT *)(v16 + 8));
  else
    AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)v16);
  v22 = (__int64)AttachedDevice;
  DeviceObject = AttachedDevice;
  if ( (_BYTE)v82 )
  {
    if ( !IsSandboxedToken )
    {
      FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoDeviceControl = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD))FastIoDispatch->FastIoDeviceControl;
        v72 = FastIoDeviceControl;
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
            Size = v78;
            v16 = *(_QWORD *)&v58[1];
            v66 = *(_QWORD *)&v58[1];
            Event = (PRKEVENT)DmaAdapter;
            v65 = P;
          }
          if ( (MmVerifierData & 0x10) != 0 )
            v67 = (PIRP)VfFastIoSnapState();
          else
            v67 = 0LL;
          LOBYTE(v19) = 1;
          v25 = FastIoDeviceControl(v16, v19, Src, Size, Address, Size_4, v9, &v63, v22);
          if ( v67 )
            VfFastIoCheckState(v67);
          if ( v25 )
          {
            if ( (v76 & 1) != 0 )
            {
              v42 = (_DWORD *)a5;
              *(_DWORD *)(a5 + 4) = DWORD2(v63);
              *v42 = v63;
            }
            else
            {
              *(_OWORD *)a5 = v63;
            }
            v43 = (unsigned int)v63;
            v44 = (struct _DMA_ADAPTER *)Event;
            v45 = *(__int64 **)(v16 + 176);
            if ( !v45
              || (*(_DWORD *)(v16 + 80) & 0x2000000) != 0 && (v63 & 0xC0000000) != 0x80000000
              || (v63 & 0xC0000000) == 0xC0000000 )
            {
              v46 = 0LL;
            }
            else
            {
              v10 = *v45;
              v46 = v45[1];
            }
            if ( a2 )
            {
              if ( (*(_DWORD *)(v16 + 80) & 0x8000000) == 0 || v10 && (v63 & 0xC0000000) == 0x80000000 )
                KeSetEvent(Event, 0, 0);
              HalPutDmaAdapter(v44);
              v43 = (unsigned int)v63;
            }
            if ( (_BYTE)a6 )
            {
              IopReleaseFileObjectLock((PADAPTER_OBJECT)v16);
              v43 = (unsigned int)v63;
            }
            if ( v10 && v77 )
            {
              if ( (int)IoSetIoCompletion(v10, v46, (__int64)v77, (_DWORD *)v43, *((__int64 *)&v63 + 1), 1u) < 0 )
              {
                v49 = -1073741670;
                LODWORD(v63) = -1073741670;
              }
              else
              {
                v49 = v63;
              }
              if ( (v49 & 0xC0000000) == 0x80000000 )
                LODWORD(v63) = 259;
            }
            HalPutDmaAdapter((PADAPTER_OBJECT)v16);
            return (unsigned int)v63;
          }
        }
      }
    }
  }
  IopResetEvent(v16, v19, v20, v21);
  v26 = (IRP *)IopAllocateIrpExReturn(v22, *(unsigned __int8 *)(v22 + 76), (unsigned __int8)a6 ^ 1u, retaddr);
  Irp = v26;
  v67 = v26;
  if ( !v26 )
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v16, (PADAPTER_OBJECT)Event);
    if ( v65 )
      ExFreePoolWithTag(v65, 0);
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
  v26->Overlay.AllocationSize.QuadPart = v76;
  v26->Overlay.AsynchronousParameters.UserApcContext = v77;
  CurrentStackLocation = v26->Tail.Overlay.CurrentStackLocation;
  v29 = v82;
  *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = ((_BYTE)v82 != 0) + 13;
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
        PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v32, Size);
        Irp->AssociatedIrp.MasterIrp = PoolWithQuota;
        memmove(PoolWithQuota, Src, Size);
        Irp->Flags = 48;
        v16 = v66;
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
        if ( v65 )
        {
          v26->AssociatedIrp.MasterIrp = (struct _IRP *)v65;
        }
        else
        {
          v47 = Size_4;
          if ( Size > Size_4 )
            v47 = Size;
          v48 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v32, v47);
          Irp->AssociatedIrp.MasterIrp = v48;
          if ( Src )
            memmove(v48, Src, Size);
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
  CurrentStackLocation[-1].Flags |= v69.GrantedAccess & 1 | (unsigned __int8)(2 * (v69.GrantedAccess & 2));
  if ( !(_BYTE)v82 )
    Irp->Flags |= 0x800u;
  if ( v9 == 589856 )
  {
    _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
    v16 = *(_QWORD *)&v58[1];
    v35 = DmaAdapter;
  }
  else
  {
    v35 = (struct _DMA_ADAPTER *)Event;
  }
  if ( IsSandboxedToken && !v55 )
  {
    p_ThreadListEntry = &Irp->AssociatedIrp.MasterIrp->ThreadListEntry;
    if ( v68 != 590860 )
      p_ThreadListEntry = &Irp->AssociatedIrp.MasterIrp->Type;
    if ( *p_ThreadListEntry == -1610612733 )
    {
      IopExceptionCleanup((PADAPTER_OBJECT)v16, Irp, v35, 0LL);
      return 3221225485LL;
    }
  }
  return IopSynchronousServiceTail(DeviceObject, Irp, PreviousMode, a6, 2);
}
