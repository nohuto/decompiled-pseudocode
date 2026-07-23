/*
 * XREFs of IopXxxControlFile @ 0x14060FB00
 * Callers:
 *     NtDeviceIoControlFile @ 0x14060FA90 (NtDeviceIoControlFile.c)
 *     PfpPrefetchEntireDirectory @ 0x140633338 (PfpPrefetchEntireDirectory.c)
 *     NtFsControlFile @ 0x1406BA290 (NtFsControlFile.c)
 *     PfSnPrefetchFileMetadata @ 0x1406D1048 (PfSnPrefetchFileMetadata.c)
 *     PfpVolumePrefetchMetadata @ 0x1406F1FD4 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406F2380 (PfpPrefetchDirectoryStream.c)
 * Callees:
 *     IoThreadToProcess @ 0x140208A40 (IoThreadToProcess.c)
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     IoGetAttachedDevice @ 0x14020D8F0 (IoGetAttachedDevice.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140211810 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140211880 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     IopSetFileObjectExtensionFlag @ 0x14023CDD0 (IopSetFileObjectExtensionFlag.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     IopProbeAndLockPages @ 0x140269510 (IopProbeAndLockPages.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1403F0294 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1403F035C (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     RtlIsSandboxedToken @ 0x1405E80A0 (RtlIsSandboxedToken.c)
 *     SeCaptureSubjectContextEx @ 0x140602A50 (SeCaptureSubjectContextEx.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IoSetIoCompletion @ 0x1406D2C40 (IoSetIoCompletion.c)
 *     IopCopyOffloadCapable @ 0x1406E2BD8 (IopCopyOffloadCapable.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     IopValidateJunctionTarget @ 0x140895924 (IopValidateJunctionTarget.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x1409CC9C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CCA9C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopXxxControlFile(
        void *a1,
        HANDLE Handle,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6,
        char *Src,
        size_t Size,
        char *Address,
        SIZE_T Length,
        char a11)
{
  __int64 v13; // r14
  int v14; // esi
  KPROCESSOR_MODE PreviousMode; // r8
  __int64 v16; // rcx
  ULONG v17; // r12d
  unsigned int v18; // r15d
  __int64 result; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ebx
  ULONG_PTR v23; // rdi
  KPROCESSOR_MODE v24; // dl
  unsigned int v25; // esi
  struct _DMA_ADAPTER *v26; // r13
  char v27; // al
  struct _KPROCESS *v28; // rax
  int v29; // eax
  _DWORD *v30; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  unsigned int v34; // ebx
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v36; // rdx
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  IRP *FastIoDeviceControl; // rsi
  char *v39; // rcx
  void *v40; // rbx
  char v41; // si
  _DWORD *v42; // rcx
  int v43; // r9d
  int v44; // eax
  int v45; // ecx
  IRP *v46; // rax
  IRP *v47; // rsi
  PETHREAD v48; // rbx
  char v49; // dl
  POOL_TYPE v50; // ecx
  struct _IRP *v51; // rax
  PMDL Mdl; // rcx
  SIZE_T v53; // rdx
  struct _IRP *PoolWithQuota_0; // rax
  _DWORD *p_ThreadListEntry; // rax
  char v56; // [rsp+50h] [rbp-E8h]
  char v57; // [rsp+51h] [rbp-E7h]
  bool IsSandboxedToken; // [rsp+52h] [rbp-E6h]
  char v59; // [rsp+53h] [rbp-E5h]
  _DWORD DmaAdapter[3]; // [rsp+54h] [rbp-E4h] BYREF
  PADAPTER_OBJECT v61; // [rsp+60h] [rbp-D8h]
  unsigned int v62; // [rsp+68h] [rbp-D0h]
  int v63; // [rsp+6Ch] [rbp-CCh]
  PVOID P; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v65; // [rsp+78h] [rbp-C0h] BYREF
  PVOID v66; // [rsp+88h] [rbp-B0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp-A8h]
  PETHREAD Thread; // [rsp+98h] [rbp-A0h]
  PIRP Irp; // [rsp+A0h] [rbp-98h]
  unsigned int v70; // [rsp+A8h] [rbp-90h]
  __int64 v71; // [rsp+B0h] [rbp-88h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v72; // [rsp+B8h] [rbp-80h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v74; // [rsp+C8h] [rbp-70h] BYREF
  _DWORD *v75; // [rsp+D0h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-60h] BYREF
  __int64 retaddr; // [rsp+138h] [rbp+0h]
  __int64 v79; // [rsp+150h] [rbp+18h] BYREF
  void *v80; // [rsp+158h] [rbp+20h]

  v80 = a4;
  v79 = a3;
  v70 = a6;
  v13 = 0LL;
  *(_QWORD *)&DmaAdapter[1] = 0LL;
  v61 = 0LL;
  v72 = 0LL;
  v65 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v14 = a6 & 3;
  v62 = v14;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  v56 = PreviousMode;
  if ( PreviousMode )
  {
    v16 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    if ( v14 )
    {
      v17 = Length;
    }
    else if ( Address )
    {
      v17 = Length;
      ProbeForWrite(Address, (unsigned int)Length, 1u);
      PreviousMode = v56;
    }
    else
    {
      v17 = 0;
      LODWORD(Length) = 0;
    }
    if ( v14 == 3 )
    {
      v18 = Size;
    }
    else if ( Src )
    {
      v18 = Size;
      if ( (_DWORD)Size
        && ((unsigned __int64)&Src[(unsigned int)Size] > 0x7FFFFFFF0000LL || &Src[(unsigned int)Size] < Src) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      v18 = 0;
      LODWORD(Size) = 0;
    }
  }
  else
  {
    v17 = Length;
    v18 = Size;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, (PVOID *)&DmaAdapter[1], &v72);
  v22 = result;
  if ( (int)result >= 0 )
  {
    v23 = *(_QWORD *)&DmaAdapter[1];
    if ( *(_QWORD *)(*(_QWORD *)&DmaAdapter[1] + 176LL) && (v79 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)&DmaAdapter[1]);
      return 3221225485LL;
    }
    v24 = v56;
    v25 = a6;
    if ( v56
      && (unsigned __int16)a6 >> 14
      && (((unsigned __int16)a6 >> 14) & v72.GrantedAccess) != (unsigned __int16)a6 >> 14 )
    {
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)&DmaAdapter[1]);
      return 3221225506LL;
    }
    if ( a6 == 606820 || a6 == 623208 )
    {
      v22 = IopCopyOffloadCapable(*(_QWORD *)&DmaAdapter[1], a6);
      if ( v22 < 0 )
        goto LABEL_31;
    }
    else
    {
      if ( a6 != 590892 )
      {
LABEL_34:
        if ( Handle )
        {
          Object = 0LL;
          v22 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, v24, &Object, 0LL);
          v26 = (struct _DMA_ADAPTER *)Object;
          v61 = (PADAPTER_OBJECT)Object;
          if ( v22 < 0 )
            goto LABEL_31;
          KeResetEvent((PRKEVENT)Object);
        }
        else
        {
          v26 = v61;
        }
        v66 = 0LL;
        P = 0LL;
        IsSandboxedToken = 0;
        v59 = 0;
        v27 = v56;
        if ( v56 && (v25 == 589988 && v18 >= 4 || v25 == 590860 && v18 >= 0x24) )
        {
          v28 = IoThreadToProcess(Thread);
          SeCaptureSubjectContextEx(Thread, v28, &SubjectContext);
          IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, v56);
          BYTE2(DmaAdapter[0]) = IsSandboxedToken;
          SeReleaseSubjectContext(&SubjectContext);
          if ( IsSandboxedToken )
          {
            v63 = 0;
            v29 = v25 == 590860 ? *((_DWORD *)Src + 8) : *(_DWORD *)Src;
            v63 = v29;
            if ( v22 < 0 )
              goto LABEL_51;
            if ( v29 == -1610612733 )
            {
              v59 = 1;
              v22 = IopValidateJunctionTarget(v25, Src, v18, v17, &P, &Size);
              v18 = Size;
              v66 = P;
            }
            if ( v22 < 0 )
            {
LABEL_51:
              if ( v26 )
                HalPutDmaAdapter(v26);
              goto LABEL_31;
            }
          }
          v27 = v56;
        }
        v30 = (_DWORD *)(v23 + 80);
        v75 = (_DWORD *)(v23 + 80);
        if ( (*(_DWORD *)(v23 + 80) & 2) != 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v32 = *(_QWORD *)&DmaAdapter[1];
          v33 = KeAbPreAcquire(*(_QWORD *)&DmaAdapter[1] + 128LL, 0LL, 0);
          LOBYTE(DmaAdapter[0]) = 0;
          if ( _InterlockedExchange((volatile __int32 *)(v32 + 116), 1) )
          {
            v23 = *(_QWORD *)&DmaAdapter[1];
            v34 = IopWaitAndAcquireFileObjectLock(*(PVOID *)&DmaAdapter[1], (__int64)DmaAdapter);
          }
          else
          {
            if ( v33 )
              *(_BYTE *)(v33 + 26) |= 1u;
            v23 = *(_QWORD *)&DmaAdapter[1];
            ObfReferenceObject(*(PVOID *)&DmaAdapter[1]);
            v34 = 0;
          }
          if ( LOBYTE(DmaAdapter[0]) )
          {
            if ( v61 )
              HalPutDmaAdapter(v61);
            if ( P )
              ExFreePoolWithTag(P, 0);
            HalPutDmaAdapter((PADAPTER_OBJECT)v23);
            return v34;
          }
          v57 = 1;
          v17 = Length;
          v18 = Size;
          v26 = v61;
          v66 = P;
          v30 = v75;
        }
        else
        {
          v57 = 0;
          if ( v27 )
            IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v79, 0);
        }
        if ( (*v30 & 0x800) != 0 )
          AttachedDevice = IoGetAttachedDevice(*(PDEVICE_OBJECT *)(v23 + 8));
        else
          AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)v23);
        DeviceObject = AttachedDevice;
        if ( a11 )
        {
          if ( !IsSandboxedToken )
          {
            FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
            if ( FastIoDispatch )
            {
              FastIoDeviceControl = (IRP *)FastIoDispatch->FastIoDeviceControl;
              Irp = FastIoDeviceControl;
              if ( FastIoDeviceControl )
              {
                if ( v56 && Address )
                {
                  if ( v62 == 1 )
                  {
                    if ( v17 )
                    {
                      v39 = &Address[v17];
                      if ( (unsigned __int64)v39 > 0x7FFFFFFF0000LL || v39 < Address )
                        MEMORY[0x7FFFFFFF0000] = 0;
                    }
                  }
                  else if ( v62 == 2 )
                  {
                    ProbeForWrite(Address, v17, 1u);
                  }
                }
                if ( a6 == 589856 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
                  v17 = Length;
                  v18 = Size;
                  v23 = *(_QWORD *)&DmaAdapter[1];
                  v26 = v61;
                  v66 = P;
                }
                if ( (MmVerifierData & 0x10) != 0 )
                  v40 = (void *)VfFastIoSnapState();
                else
                  v40 = 0LL;
                LOBYTE(v36) = 1;
                v41 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, char *, _QWORD, char *, ULONG, unsigned int, __int128 *, PDEVICE_OBJECT))FastIoDeviceControl)(
                        v23,
                        v36,
                        Src,
                        v18,
                        Address,
                        v17,
                        a6,
                        &v65,
                        DeviceObject);
                if ( v40 )
                  VfFastIoCheckState(v40);
                if ( v41 )
                {
                  v71 = 0LL;
                  v74 = 0LL;
                  BYTE1(DmaAdapter[0]) = 0;
                  if ( (v79 & 1) != 0 )
                  {
                    v42 = (_DWORD *)a5;
                    *(_DWORD *)(a5 + 4) = DWORD2(v65);
                    *v42 = v65;
                  }
                  else
                  {
                    *(_OWORD *)a5 = v65;
                  }
                  v43 = v65;
                  if ( *(_QWORD *)(v23 + 176)
                    && ((*(_DWORD *)(v23 + 80) & 0x2000000) == 0 || (v65 & 0xC0000000) == 0x80000000)
                    && (v65 & 0xC0000000) != 0xC0000000 )
                  {
                    IopIncrementCompletionContextUsageCountAndReadData(v23, (_BYTE *)DmaAdapter + 1, &v71, &v74);
                    v43 = v65;
                    v13 = v71;
                  }
                  if ( Handle )
                  {
                    if ( (*(_DWORD *)(v23 + 80) & 0x8000000) == 0 || v13 && (v43 & 0xC0000000) == 0x80000000 )
                      KeSetEvent((PRKEVENT)v26, 0, 0);
                    HalPutDmaAdapter(v26);
                    v43 = v65;
                  }
                  if ( v57 )
                  {
                    IopReleaseFileObjectLock((PADAPTER_OBJECT)v23);
                    v43 = v65;
                  }
                  if ( v13 && v80 )
                  {
                    v44 = IoSetIoCompletion(v13, v74, (_DWORD)v80, v43, *((__int64 *)&v65 + 1), 1);
                    v45 = v65;
                    if ( v44 < 0 )
                      v45 = -1073741670;
                    if ( (v45 & 0xC0000000) == 0x80000000 )
                      v45 = 259;
                    LODWORD(v65) = v45;
                  }
                  if ( BYTE1(DmaAdapter[0]) )
                    IopDecrementCompletionContextUsageCount(v23);
                  HalPutDmaAdapter((PADAPTER_OBJECT)v23);
                  return (unsigned int)v65;
                }
              }
            }
          }
        }
        IopResetEvent(v23);
        v46 = (IRP *)IopAllocateIrpExReturn(
                       (__int64)DeviceObject,
                       (unsigned __int8)DeviceObject->StackSize,
                       (unsigned __int8)v57 ^ 1u,
                       retaddr);
        v47 = v46;
        Irp = v46;
        if ( !v46 )
        {
          IopAllocateIrpCleanup((PADAPTER_OBJECT)v23, v26);
          if ( v66 )
            ExFreePoolWithTag(v66, 0);
          return 3221225626LL;
        }
        v46->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v23;
        v46->Tail.Overlay.Thread = Thread;
        v46->Tail.Overlay.AuxiliaryBuffer = 0LL;
        v46->RequestorMode = v56;
        v46->PendingReturned = 0;
        v46->Cancel = 0;
        v46->CancelRoutine = 0LL;
        v46->UserEvent = (PKEVENT)v26;
        v46->UserIosb = (PIO_STATUS_BLOCK)a5;
        v46->Overlay.AllocationSize.QuadPart = v79;
        v46->Overlay.AsynchronousParameters.UserApcContext = v80;
        v48 = (PETHREAD)&v46->Tail.Overlay.CurrentStackLocation[-1];
        Thread = v48;
        v49 = a11;
        v48->Header.LockNV = (a11 != 0) + 13;
        v48->StackLimit = (void *volatile)v23;
        LODWORD(v48->Header.WaitListHead.Flink) = v17;
        LODWORD(v48->Header.WaitListHead.Blink) = v18;
        LODWORD(v48->SListFaultAddress) = a6;
        v50 = NonPagedPoolNxCacheAligned;
        if ( !v49 )
          v50 = NonPagedPoolNx;
        v46->MdlAddress = 0LL;
        v46->AssociatedIrp.MasterIrp = 0LL;
        if ( (DeviceObject->Flags & 0x80000) != 0 && !IsSandboxedToken )
          goto LABEL_131;
        if ( !v62 )
        {
          v48->QuantumTarget = 0LL;
          if ( v18 || v17 )
          {
            if ( v66 )
            {
              v46->AssociatedIrp.MasterIrp = (struct _IRP *)v66;
            }
            else
            {
              v53 = v17;
              if ( v18 > v17 )
                v53 = v18;
              PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v50, v53);
              v47->AssociatedIrp.MasterIrp = PoolWithQuota_0;
              if ( Src )
                memmove(PoolWithQuota_0, Src, v18);
            }
            v47->Flags = 48;
            v47->UserBuffer = Address;
            if ( v17 )
              v47->Flags = 112;
          }
          else
          {
            v46->Flags = 0;
            v46->UserBuffer = 0LL;
          }
          if ( !IopDisableBufferedIoInit && v18 < v17 )
            memset((char *)v47->AssociatedIrp.MasterIrp + v18, 0, v17 - v18);
          goto LABEL_153;
        }
        if ( v62 <= 2 )
        {
          v46->Flags = 0;
          v48->QuantumTarget = 0LL;
          if ( v18 && Src )
          {
            v51 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v50, v18);
            v47->AssociatedIrp.MasterIrp = v51;
            memmove(v51, Src, v18);
            v47->Flags = 48;
            v48 = Thread;
          }
          if ( v17 )
          {
            Mdl = IoAllocateMdl(Address, v17, 0, 1u, v47);
            v47->MdlAddress = Mdl;
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            LOBYTE(v13) = v62 != 1;
            IopProbeAndLockPages((__int64)Mdl, v56, v13, (__int64)DeviceObject, v48->Header.LockNV);
          }
          goto LABEL_153;
        }
        if ( v62 == 3 )
        {
LABEL_131:
          v46->Flags = 0;
          v46->UserBuffer = Address;
          v48->QuantumTarget = (unsigned __int64)Src;
        }
LABEL_153:
        v48->Header.Size |= v72.GrantedAccess & 1 | (unsigned __int8)(2 * (v72.GrantedAccess & 2));
        if ( !a11 )
          v47->Flags |= 0x800u;
        if ( a6 == 589856 )
        {
          _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
          v23 = *(_QWORD *)&DmaAdapter[1];
          v26 = v61;
        }
        if ( !IsSandboxedToken || v59 )
          return IopSynchronousServiceTail(DeviceObject, v47, v56, v57, 2);
        p_ThreadListEntry = &v47->AssociatedIrp.MasterIrp->ThreadListEntry;
        if ( v70 != 590860 )
          p_ThreadListEntry = &v47->AssociatedIrp.MasterIrp->Type;
        if ( *p_ThreadListEntry != -1610612733 )
          return IopSynchronousServiceTail(DeviceObject, v47, v56, v57, 2);
        IopExceptionCleanupEx((PADAPTER_OBJECT)v23, v47, v26, 0LL, (*v75 & 2) != 0);
        return 3221225485LL;
      }
      LOBYTE(v20) = 1;
      v22 = IopSetFileObjectExtensionFlag(*(__int64 *)&DmaAdapter[1], 16, v20, v21);
      if ( v22 < 0 )
      {
LABEL_31:
        HalPutDmaAdapter((PADAPTER_OBJECT)v23);
        return (unsigned int)v22;
      }
    }
    v24 = v56;
    goto LABEL_34;
  }
  return result;
}
