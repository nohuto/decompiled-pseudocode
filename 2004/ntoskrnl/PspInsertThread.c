/*
 * XREFs of PspInsertThread @ 0x1406AE2E4
 * Callers:
 *     NtCreateUserProcess @ 0x1406149A0 (NtCreateUserProcess.c)
 *     PspCreateThread @ 0x1406B12C0 (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x140908B80 (PspCreatePicoThread.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MmDeleteKernelStack @ 0x140239560 (MmDeleteKernelStack.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     SepDeleteAccessState @ 0x1402990A0 (SepDeleteAccessState.c)
 *     KeReadyThread @ 0x1402EAC4C (KeReadyThread.c)
 *     KeStartThread @ 0x1402EAD58 (KeStartThread.c)
 *     KeForceResumeThread @ 0x1402FA0EC (KeForceResumeThread.c)
 *     KeSuspendThread @ 0x1402FAD18 (KeSuspendThread.c)
 *     KeRequestTerminationThread @ 0x1402FBC30 (KeRequestTerminationThread.c)
 *     ObReferenceObjectExWithTag @ 0x14032EFF0 (ObReferenceObjectExWithTag.c)
 *     KeRaiseUserException @ 0x140510AB0 (KeRaiseUserException.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     PspCallProcessNotifyRoutines @ 0x14060283C (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x140602D50 (PspCallThreadNotifyRoutines.c)
 *     MmDeleteTeb @ 0x140605648 (MmDeleteTeb.c)
 *     EtwTraceThread @ 0x14064E3B4 (EtwTraceThread.c)
 *     PspChangeProcessExecutionState @ 0x14065A9AC (PspChangeProcessExecutionState.c)
 *     EtwTraceProcess @ 0x14065E6E4 (EtwTraceProcess.c)
 *     SeCreateAccessStateEx @ 0x140668A70 (SeCreateAccessStateEx.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     PspCreateObjectHandle @ 0x1406AEB60 (PspCreateObjectHandle.c)
 *     PoEnergyContextStart @ 0x1406E72C0 (PoEnergyContextStart.c)
 *     PspDeleteUserStack @ 0x14070C948 (PspDeleteUserStack.c)
 *     KeSetUmsThreadKernelLock @ 0x1408BA0F8 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x1408BA1C8 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x1408BA23C (KeUpdateUmsThreadState.c)
 *     PspAssignProcessToJobList @ 0x140906B1C (PspAssignProcessToJobList.c)
 *     PspCreateSecureThread @ 0x140906BCC (PspCreateSecureThread.c)
 */

__int64 __fastcall PspInsertThread(
        char *DmaAdapter,
        PEPROCESS Process,
        __int64 a3,
        _DWORD *a4,
        ACCESS_MASK a5,
        _BYTE *a6,
        __int64 a7,
        __int64 a8,
        PACCESS_STATE AccessState,
        PVOID *a10,
        struct _DMA_ADAPTER *a11)
{
  unsigned int v14; // edi
  unsigned int *v15; // r13
  __int64 v16; // r15
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  int SecureThread; // ecx
  __int64 v20; // rdx
  unsigned int DirectoryTableBase_high; // edx
  unsigned int v23; // ecx
  struct _KPROCESS *v24; // rcx
  PEPROCESS *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r9
  char v32; // r12
  struct _KPROCESS *v33; // rdx
  signed int inserted; // r15d
  volatile signed __int64 *v35; // r12
  __int64 v36; // rdx
  __int64 v37; // r8
  _DWORD *v38; // r9
  _BYTE *v39; // rbx
  int v40; // r12d
  KPROCESSOR_MODE v41; // dl
  unsigned __int64 *v42; // [rsp+48h] [rbp-70h]
  unsigned __int64 v43; // [rsp+50h] [rbp-68h]
  _KPROCESS *v44; // [rsp+60h] [rbp-58h]

  v14 = 0;
  v44 = KeGetCurrentThread()->ApcState.Process;
  v43 = *((_QWORD *)DmaAdapter + 30);
  v15 = 0LL;
  v16 = 0LL;
  if ( a7 )
  {
    v42 = *(unsigned __int64 **)(a7 + 24);
    v15 = (unsigned int *)((a7 + 252) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x4000) != 0));
    v16 = (a7 + 320) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x1000) != 0);
  }
  else
  {
    v42 = 0LL;
  }
  if ( (*a4 & 0x20) == 0 )
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1], 0LL);
  v17 = Process[1].Affinity.Bitmap[16];
  if ( v17 )
  {
    if ( (*((_DWORD *)DmaAdapter + 29) & 0x400) == 0 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v17 + 56), 1u);
      v14 = 1;
      if ( v16 )
      {
        if ( (*(_DWORD *)(v17 + 848) & 0x10) != 0 )
        {
          v18 = *(_QWORD *)(v17 + 8LL * *(unsigned __int16 *)(v16 + 8) + 624);
          if ( !v18 || (v18 & *(_QWORD *)v16) != *(_QWORD *)v16 )
            v14 = 5;
        }
      }
    }
  }
  if ( v14 < 4
    && (HIDWORD(Process[1].DirectoryTableBase) & 0x4000008) == 0x4000000
    && ((Process[1].DirectoryTableBase & 0x4000000000000000LL) == 0
     || (*((_DWORD *)DmaAdapter + 29) & 0x400) != 0
     || (*a4 & 2) != 0) )
  {
    SecureThread = 0;
  }
  else
  {
    SecureThread = -1073741823;
  }
  if ( SecureThread >= 0 && (Process->SecureState.SecureHandle & 1) != 0 )
    SecureThread = PspCreateSecureThread(DmaAdapter);
  if ( SecureThread < 0 )
  {
    if ( (v14 & 1) != 0 )
      ExReleaseResourceLite((PERESOURCE)(v17 + 56));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Header.Lock);
    KeAbPostRelease((ULONG_PTR)&Process[1]);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)DmaAdapter + 160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)DmaAdapter + 160);
    KeAbPostRelease((ULONG_PTR)(DmaAdapter + 1280));
    MmDeleteKernelStack(*((_QWORD *)DmaAdapter + 7), 2u);
    *((_QWORD *)DmaAdapter + 5) = 0LL;
    if ( a6 )
    {
      if ( v43 )
        MmDeleteTeb(Process, v43);
      if ( *a6 )
        PspDeleteUserStack(Process, v20, a3, a6);
    }
    return (Process[1].DirectoryTableBase & 0x4000000800000000LL) != 0 ? -1073741558 : -1073741823;
  }
  KeStartThread((__int64)DmaAdapter, (__int128 *)v16, v15);
  if ( (v14 & 1) != 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(v17 + 56));
    v14 &= ~1u;
  }
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( (DirectoryTableBase_high & 0x40000000) != 0 && (*a4 & 2) != 0 )
  {
    *((_DWORD *)DmaAdapter + 325) |= 0x40u;
    DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  }
  v23 = (((DirectoryTableBase_high >> 27) & 7) << 9) | *((_DWORD *)DmaAdapter + 324) & 0xFFFFF1FF;
  *((_DWORD *)DmaAdapter + 324) = v23;
  *((_DWORD *)DmaAdapter + 324) = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)LODWORD(Process[1].DirectoryTableBase)) & 0x7000;
  if ( ++LODWORD(Process[1].ActiveProcessors.Bitmap[8]) > LODWORD(Process[1].EndPadding[5]) )
    LODWORD(Process[1].EndPadding[5]) = Process[1].ActiveProcessors.Bitmap[8];
  if ( LODWORD(Process[1].ActiveProcessors.Bitmap[8]) == 1 )
  {
    v14 |= 2u;
  }
  else if ( LODWORD(Process[1].ActiveProcessors.Bitmap[8]) == 2 && (Process[1].DirectoryTableBase & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFu);
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].EndPadding[6], 0LL);
  v24 = (struct _KPROCESS *)(DmaAdapter + 1256);
  v25 = (PEPROCESS *)Process[1].ActiveProcessors.Bitmap[7];
  if ( *v25 != (PEPROCESS)&Process[1].ActiveProcessors.Bitmap[6] )
    __fastfail(3u);
  *(_QWORD *)&v24->Header.Lock = (char *)Process + 1504;
  *((_QWORD *)DmaAdapter + 158) = v25;
  *v25 = v24;
  Process[1].ActiveProcessors.Bitmap[7] = (unsigned __int64)v24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].EndPadding[6], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].EndPadding[6]);
  KeAbPostRelease((ULONG_PTR)&Process[1].EndPadding[6]);
  if ( Process->InstrumentationCallback )
    _interlockedbittestandset((volatile signed __int32 *)DmaAdapter, 0x19u);
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x2000000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)DmaAdapter, 0x1Du);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Header.Lock);
  KeAbPostRelease((ULONG_PTR)&Process[1]);
  if ( (*a4 & 0x40) != 0 )
    PspChangeProcessExecutionState(Process);
  ObReferenceObjectExWithTag((ULONG_PTR)DmaAdapter, 2);
  *((_DWORD *)DmaAdapter + 343) = 1;
  if ( (*a4 & 1) != 0 )
  {
    KeSuspendThread((__int64)DmaAdapter, v26, v27, v28);
    if ( (*((_DWORD *)DmaAdapter + 324) & 1) != 0 )
      KeForceResumeThread((__int64)DmaAdapter, v29, v30, v31);
  }
  v32 = 0;
  if ( !BYTE4(AccessState[2].SecurityDescriptor) || (*a4 & 0x10) != 0 )
  {
    v33 = Process;
    v32 = 1;
  }
  else
  {
    v33 = v44;
  }
  inserted = SeCreateAccessStateEx(
               0LL,
               v33,
               AccessState,
               &AccessState[1].OperationID,
               a5,
               (GENERIC_MAPPING *)((char *)PsThreadType + 76));
  if ( inserted < 0 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
  }
  else
  {
    inserted = ObInsertObjectEx((PADAPTER_OBJECT)DmaAdapter, AccessState, a5, 0, v32, 0LL, 0LL);
    if ( inserted >= 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
      if ( v42 )
        *v42 = v43;
      if ( a11 )
        *a11 = *(struct _DMA_ADAPTER *)(DmaAdapter + 1144);
    }
    if ( inserted < 0 )
    {
      SepDeleteAccessState((__int64)AccessState);
      SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
    }
  }
  v35 = (volatile signed __int64 *)(DmaAdapter + 1280);
  if ( inserted < 0 )
  {
    if ( (_InterlockedExchangeAdd64(v35, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)DmaAdapter + 160);
    KeAbPostRelease((ULONG_PTR)(DmaAdapter + 1280));
    if ( (*a4 & 1) != 0 )
      KeForceResumeThread((__int64)DmaAdapter, v36, v37, v38);
    v39 = a6;
    if ( a6 && *a6 )
      PspDeleteUserStack(Process, v36, a3, a6);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)DmaAdapter + 324, 2u);
    if ( (_InterlockedExchangeAdd64(v35, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)DmaAdapter + 160);
    KeAbPostRelease((ULONG_PTR)(DmaAdapter + 1280));
    v39 = a6;
  }
  v40 = 0;
  if ( (v14 & 2) != 0 )
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess((ULONG_PTR)Process, 769);
    if ( Process[2].Affinity.Bitmap[4] )
      PoEnergyContextStart((ULONG_PTR)Process);
    if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) == 0 || *(_QWORD *)&Process[2].Affinity.Count )
      v40 = PspCallProcessNotifyRoutines(Process, a7, 1);
  }
  if ( (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread((__int64)DmaAdapter, a3, 1);
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) == 0 || *(_QWORD *)&Process[2].Affinity.Count )
    PspCallThreadNotifyRoutines(DmaAdapter, 1u, 0);
  if ( inserted >= 0 )
  {
    if ( v40 < 0 )
      inserted = v40;
    else
      inserted = PspCreateObjectHandle(DmaAdapter, AccessState, PsThreadType);
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
    if ( inserted >= 0 )
    {
      if ( a7 )
      {
        v36 = *(_QWORD *)(a7 + 400);
        if ( v36 )
          inserted = PspAssignProcessToJobList(Process, v36, *(unsigned int *)(a7 + 412));
      }
      if ( inserted >= 0 )
      {
        *a10 = AccessState[2].AuxData;
        goto LABEL_125;
      }
      v41 = ((__int64)AccessState[2].SecurityDescriptor & 0x200) == 0
         && (HIDWORD(v44[2].Header.WaitListHead.Flink) & 0x1000) == 0;
      ObCloseHandle(AccessState[2].AuxData, v41);
      if ( v39 && (*v39 & 1) != 0 )
        KeRaiseUserException(inserted);
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)DmaAdapter + 324, 0) )
      v14 |= 8u;
    if ( (*((_DWORD *)DmaAdapter + 29) & 0x400) != 0 )
    {
      if ( (*a4 & 1) != 0 )
        KeForceResumeThread((__int64)DmaAdapter, v36, v37, v38);
    }
    else
    {
      if ( v14 >= 8 )
        *((_DWORD *)DmaAdapter + 338) = inserted;
      KeRequestTerminationThread((__int64)DmaAdapter, v36, v37, v38);
    }
  }
LABEL_125:
  if ( (DmaAdapter[3] & 0x40) != 0 && inserted < 0 )
  {
    KeSetUmsThreadKernelLock(**((_QWORD **)DmaAdapter + 62), 0LL);
    KeUpdateUmsThreadState(**((_QWORD **)DmaAdapter + 62), 2LL, 0LL);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(*((_QWORD *)DmaAdapter + 62) + 16LL));
    KeUnInitializeUmsThread(DmaAdapter);
  }
  KeReadyThread((__int64)DmaAdapter, v36, v37, v38);
  return (unsigned int)inserted;
}
