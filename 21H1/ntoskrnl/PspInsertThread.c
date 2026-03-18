/*
 * XREFs of PspInsertThread @ 0x1406F3184
 * Callers:
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 *     PspCreateThread @ 0x140707180 (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x1409078D0 (PspCreatePicoThread.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140206590 (SepDeleteAccessState.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MmDeleteKernelStack @ 0x1402925B0 (MmDeleteKernelStack.c)
 *     ObReferenceObjectExWithTag @ 0x1402F3250 (ObReferenceObjectExWithTag.c)
 *     KeReadyThread @ 0x14032FD8C (KeReadyThread.c)
 *     KeStartThread @ 0x14032FE98 (KeStartThread.c)
 *     KeForceResumeThread @ 0x1403560CC (KeForceResumeThread.c)
 *     KeSuspendThread @ 0x140356CF8 (KeSuspendThread.c)
 *     KeRequestTerminationThread @ 0x140357C10 (KeRequestTerminationThread.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeRaiseUserException @ 0x140510460 (KeRaiseUserException.c)
 *     EtwTraceProcess @ 0x1405D83E4 (EtwTraceProcess.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     SeCreateAccessStateEx @ 0x140613790 (SeCreateAccessStateEx.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     PspCallProcessNotifyRoutines @ 0x14063787C (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x140637D90 (PspCallThreadNotifyRoutines.c)
 *     MmDeleteTeb @ 0x14063A688 (MmDeleteTeb.c)
 *     PspChangeProcessExecutionState @ 0x14065E324 (PspChangeProcessExecutionState.c)
 *     PoEnergyContextStart @ 0x1406C69C8 (PoEnergyContextStart.c)
 *     PspDeleteUserStack @ 0x1406E8978 (PspDeleteUserStack.c)
 *     PspCreateObjectHandle @ 0x1406F3A00 (PspCreateObjectHandle.c)
 *     EtwTraceThread @ 0x140700C44 (EtwTraceThread.c)
 *     KeSetUmsThreadKernelLock @ 0x1408B8DD8 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x1408B8EA8 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x1408B8F1C (KeUpdateUmsThreadState.c)
 *     PspAssignProcessToJobList @ 0x14090583C (PspAssignProcessToJobList.c)
 *     PspCreateSecureThread @ 0x1409058EC (PspCreateSecureThread.c)
 */

__int64 __fastcall PspInsertThread(
        char *DmaAdapter,
        ULONG_PTR BugCheckParameter1,
        _QWORD *a3,
        _DWORD *a4,
        ACCESS_MASK a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        struct _DMA_ADAPTER *a11)
{
  unsigned int v14; // edi
  unsigned int *v15; // r13
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rdx
  int SecureThread; // ecx
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  unsigned int v24; // edx
  unsigned int v25; // ecx
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  _DWORD *v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  _DWORD *v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  _DWORD *v36; // r9
  char v37; // r12
  struct _KPROCESS *v38; // rdx
  signed int AccessState; // r15d
  volatile signed __int64 *v40; // r12
  __int64 v41; // rdx
  __int64 v42; // r8
  _DWORD *v43; // r9
  _BYTE *v44; // rbx
  int v45; // r12d
  KPROCESSOR_MODE v46; // dl
  unsigned __int64 *v47; // [rsp+48h] [rbp-70h]
  unsigned __int64 v48; // [rsp+50h] [rbp-68h]
  _KPROCESS *Process; // [rsp+60h] [rbp-58h]

  v14 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v48 = *((_QWORD *)DmaAdapter + 30);
  v15 = 0LL;
  v16 = 0LL;
  if ( a7 )
  {
    v47 = *(unsigned __int64 **)(a7 + 24);
    v15 = (unsigned int *)((a7 + 252) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x4000) != 0));
    v16 = (a7 + 320) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x1000) != 0);
  }
  else
  {
    v47 = 0LL;
  }
  if ( (*a4 & 0x20) == 0 )
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
  v17 = *(_QWORD *)(BugCheckParameter1 + 1296);
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
    && (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x4000008) == 0x4000000
    && ((*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000000) == 0
     || (*((_DWORD *)DmaAdapter + 29) & 0x400) != 0
     || (*a4 & 2) != 0) )
  {
    SecureThread = 0;
  }
  else
  {
    SecureThread = -1073741823;
  }
  if ( SecureThread >= 0 && (*(_BYTE *)(BugCheckParameter1 + 992) & 1) != 0 )
    SecureThread = PspCreateSecureThread(DmaAdapter);
  if ( SecureThread < 0 )
  {
    if ( (v14 & 1) != 0 )
      ExReleaseResourceLite((PERESOURCE)(v17 + 56));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter1 + 1080);
    KeAbPostRelease(BugCheckParameter1 + 1080);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)DmaAdapter + 160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(DmaAdapter + 1280);
    KeAbPostRelease((ULONG_PTR)(DmaAdapter + 1280));
    MmDeleteKernelStack(*((_QWORD *)DmaAdapter + 7), 2);
    *((_QWORD *)DmaAdapter + 5) = 0LL;
    if ( a6 )
    {
      if ( v48 )
        MmDeleteTeb((_KPROCESS *)BugCheckParameter1, v48, v21, v22);
      if ( *(_BYTE *)a6 )
        PspDeleteUserStack((_KPROCESS *)BugCheckParameter1, v20, a3, a6);
    }
    return (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 ? -1073741558 : -1073741823;
  }
  KeStartThread((__int64)DmaAdapter, (__int128 *)v16, v15);
  if ( (v14 & 1) != 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(v17 + 56));
    v14 &= ~1u;
  }
  v24 = *(_DWORD *)(BugCheckParameter1 + 1124);
  if ( (v24 & 0x40000000) != 0 && (*a4 & 2) != 0 )
  {
    *((_DWORD *)DmaAdapter + 325) |= 0x40u;
    v24 = *(_DWORD *)(BugCheckParameter1 + 1124);
  }
  v25 = (((v24 >> 27) & 7) << 9) | *((_DWORD *)DmaAdapter + 324) & 0xFFFFF1FF;
  *((_DWORD *)DmaAdapter + 324) = v25;
  *((_DWORD *)DmaAdapter + 324) = v25 ^ ((unsigned __int16)v25 ^ (unsigned __int16)*(_DWORD *)(BugCheckParameter1 + 1120)) & 0x7000;
  if ( ++*(_DWORD *)(BugCheckParameter1 + 1520) > *(_DWORD *)(BugCheckParameter1 + 2136) )
    *(_DWORD *)(BugCheckParameter1 + 2136) = *(_DWORD *)(BugCheckParameter1 + 1520);
  if ( *(_DWORD *)(BugCheckParameter1 + 1520) == 1 )
  {
    v14 |= 2u;
  }
  else if ( *(_DWORD *)(BugCheckParameter1 + 1520) == 2 && (*(_DWORD *)(BugCheckParameter1 + 1120) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 1120), 0xFu);
  }
  ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 2144, 0LL);
  v26 = DmaAdapter + 1256;
  v27 = *(_QWORD **)(BugCheckParameter1 + 1512);
  if ( *v27 != BugCheckParameter1 + 1504 )
    __fastfail(3u);
  *v26 = BugCheckParameter1 + 1504;
  *((_QWORD *)DmaAdapter + 158) = v27;
  *v27 = v26;
  *(_QWORD *)(BugCheckParameter1 + 1512) = v26;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 2144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter1 + 2144);
  KeAbPostRelease(BugCheckParameter1 + 2144);
  if ( *(_QWORD *)(BugCheckParameter1 + 984) )
    _interlockedbittestandset((volatile signed __int32 *)DmaAdapter, 0x19u);
  if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 0x2000000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)DmaAdapter, 0x1Du);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter1 + 1080);
  KeAbPostRelease(BugCheckParameter1 + 1080);
  if ( (*a4 & 0x40) != 0 )
    PspChangeProcessExecutionState((PEPROCESS)BugCheckParameter1, v28, v29, v30);
  ObReferenceObjectExWithTag((ULONG_PTR)DmaAdapter, 2);
  *((_DWORD *)DmaAdapter + 343) = 1;
  if ( (*a4 & 1) != 0 )
  {
    KeSuspendThread((__int64)DmaAdapter, v31, v32, v33);
    if ( (*((_DWORD *)DmaAdapter + 324) & 1) != 0 )
      KeForceResumeThread((__int64)DmaAdapter, v34, v35, v36);
  }
  v37 = 0;
  if ( !*(_BYTE *)(a9 + 388) || (*a4 & 0x10) != 0 )
  {
    v38 = (struct _KPROCESS *)BugCheckParameter1;
    v37 = 1;
  }
  else
  {
    v38 = Process;
  }
  AccessState = SeCreateAccessStateEx(
                  0LL,
                  v38,
                  (_QWORD *)a9,
                  (_QWORD *)(a9 + 160),
                  a5,
                  (GENERIC_MAPPING *)((char *)PsThreadType + 76));
  if ( AccessState < 0 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
  }
  else
  {
    AccessState = ObInsertObjectEx((PADAPTER_OBJECT)DmaAdapter, (struct _ACCESS_STATE *)a9, a5, 0, v37, 0LL, 0LL);
    if ( AccessState >= 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
      if ( v47 )
        *v47 = v48;
      if ( a11 )
        *a11 = *(struct _DMA_ADAPTER *)(DmaAdapter + 1144);
    }
    if ( AccessState < 0 )
    {
      SepDeleteAccessState(a9);
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a9 + 32));
    }
  }
  v40 = (volatile signed __int64 *)(DmaAdapter + 1280);
  if ( AccessState < 0 )
  {
    if ( (_InterlockedExchangeAdd64(v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(DmaAdapter + 1280);
    KeAbPostRelease((ULONG_PTR)(DmaAdapter + 1280));
    if ( (*a4 & 1) != 0 )
      KeForceResumeThread((__int64)DmaAdapter, v41, v42, v43);
    v44 = a6;
    if ( a6 && *(_BYTE *)a6 )
      PspDeleteUserStack((_KPROCESS *)BugCheckParameter1, v41, a3, a6);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)DmaAdapter + 324, 2u);
    if ( (_InterlockedExchangeAdd64(v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(DmaAdapter + 1280);
    KeAbPostRelease((ULONG_PTR)(DmaAdapter + 1280));
    v44 = a6;
  }
  v45 = 0;
  if ( (v14 & 2) != 0 )
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess(BugCheckParameter1, 769);
    if ( *(_QWORD *)(BugCheckParameter1 + 2280) )
      PoEnergyContextStart(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 2240) )
      v45 = PspCallProcessNotifyRoutines((_QWORD *)BugCheckParameter1, a7, 1);
  }
  if ( (PerfGlobalGroupMask & 2) != 0 )
  {
    LOBYTE(v42) = 1;
    EtwTraceThread(DmaAdapter, a3, v42);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 2240) )
    PspCallThreadNotifyRoutines(DmaAdapter, 1u, 0);
  if ( AccessState >= 0 )
  {
    if ( v45 < 0 )
      AccessState = v45;
    else
      AccessState = PspCreateObjectHandle(DmaAdapter, a9, PsThreadType);
    SepDeleteAccessState(a9);
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a9 + 32));
    if ( AccessState >= 0 )
    {
      if ( a7 )
      {
        v41 = *(_QWORD *)(a7 + 400);
        if ( v41 )
          AccessState = PspAssignProcessToJobList((PEPROCESS)BugCheckParameter1);
      }
      if ( AccessState >= 0 )
      {
        *a10 = *(_QWORD *)(a9 + 392);
        goto LABEL_125;
      }
      v46 = (*(_DWORD *)(a9 + 384) & 0x200) == 0 && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0;
      ObCloseHandle(*(HANDLE *)(a9 + 392), v46);
      if ( v44 && (*v44 & 1) != 0 )
        KeRaiseUserException(AccessState);
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)DmaAdapter + 324, 0) )
      v14 |= 8u;
    if ( (*((_DWORD *)DmaAdapter + 29) & 0x400) != 0 )
    {
      if ( (*a4 & 1) != 0 )
        KeForceResumeThread((__int64)DmaAdapter, v41, v42, v43);
    }
    else
    {
      if ( v14 >= 8 )
        *((_DWORD *)DmaAdapter + 338) = AccessState;
      KeRequestTerminationThread((__int64)DmaAdapter, v41, v42, v43);
    }
  }
LABEL_125:
  if ( (DmaAdapter[3] & 0x40) != 0 && AccessState < 0 )
  {
    KeSetUmsThreadKernelLock(**((_QWORD **)DmaAdapter + 62), 0LL);
    KeUpdateUmsThreadState(**((_QWORD **)DmaAdapter + 62), 2LL, 0LL);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(*((_QWORD *)DmaAdapter + 62) + 16LL));
    KeUnInitializeUmsThread(DmaAdapter);
  }
  KeReadyThread((__int64)DmaAdapter, v41, v42, (__int64)v43);
  return (unsigned int)AccessState;
}
