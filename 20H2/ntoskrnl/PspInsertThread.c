/*
 * XREFs of PspInsertThread @ 0x1406867E0
 * Callers:
 *     PspCreateThread @ 0x140686404 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x14090E7A0 (PspCreatePicoThread.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140210E90 (SepDeleteAccessState.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MmDeleteKernelStack @ 0x1402ADF80 (MmDeleteKernelStack.c)
 *     KeForceResumeThread @ 0x1402D7860 (KeForceResumeThread.c)
 *     KeReadyThread @ 0x1402D87F4 (KeReadyThread.c)
 *     KeStartThread @ 0x1402D8900 (KeStartThread.c)
 *     KeSuspendThread @ 0x1402EC08C (KeSuspendThread.c)
 *     KeRequestTerminationThread @ 0x1402EC780 (KeRequestTerminationThread.c)
 *     ObReferenceObjectExWithTag @ 0x140302C00 (ObReferenceObjectExWithTag.c)
 *     KeRaiseUserException @ 0x1405143E0 (KeRaiseUserException.c)
 *     SeCreateAccessStateEx @ 0x1405FDD90 (SeCreateAccessStateEx.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     PspCallProcessNotifyRoutines @ 0x14062809C (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1406285B0 (PspCallThreadNotifyRoutines.c)
 *     PspChangeProcessExecutionState @ 0x14062E290 (PspChangeProcessExecutionState.c)
 *     PoEnergyContextStart @ 0x14062F73C (PoEnergyContextStart.c)
 *     EtwTraceProcess @ 0x140632174 (EtwTraceProcess.c)
 *     EtwTraceThread @ 0x14063BD44 (EtwTraceThread.c)
 *     MmDeleteTeb @ 0x140658D4C (MmDeleteTeb.c)
 *     PspCreateObjectHandle @ 0x1406880AC (PspCreateObjectHandle.c)
 *     PspDeleteUserStack @ 0x1406DEE58 (PspDeleteUserStack.c)
 *     KeSetUmsThreadKernelLock @ 0x1408BFE58 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x1408BFF28 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x1408BFF9C (KeUpdateUmsThreadState.c)
 *     PspAssignProcessToJobList @ 0x14090C73C (PspAssignProcessToJobList.c)
 *     PspCreateSecureThread @ 0x14090C7EC (PspCreateSecureThread.c)
 */

__int64 __fastcall PspInsertThread(
        char *DmaAdapter,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        _DWORD *a4,
        ACCESS_MASK a5,
        _BYTE *a6,
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
  unsigned int v22; // edx
  unsigned int v23; // ecx
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  char v29; // r12
  struct _KPROCESS *v30; // rdx
  signed int AccessState; // r15d
  volatile signed __int64 *v32; // r12
  __int64 v33; // rdx
  __int64 v34; // r8
  _BYTE *v35; // rbx
  int v36; // r12d
  _DWORD *v37; // r9
  KPROCESSOR_MODE v38; // dl
  unsigned __int64 *v39; // [rsp+48h] [rbp-70h]
  unsigned __int64 v40; // [rsp+50h] [rbp-68h]
  _KPROCESS *Process; // [rsp+60h] [rbp-58h]

  v14 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v40 = *((_QWORD *)DmaAdapter + 30);
  v15 = 0LL;
  v16 = 0LL;
  if ( a7 )
  {
    v39 = *(unsigned __int64 **)(a7 + 24);
    v15 = (unsigned int *)((a7 + 252) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x4000) != 0));
    v16 = (a7 + 320) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x1000) != 0);
  }
  else
  {
    v39 = 0LL;
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
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 1080));
    KeAbPostRelease(BugCheckParameter1 + 1080);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)DmaAdapter + 160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)DmaAdapter + 160);
    KeAbPostRelease((ULONG_PTR)(DmaAdapter + 1280));
    MmDeleteKernelStack(*((_QWORD *)DmaAdapter + 7), 2);
    *((_QWORD *)DmaAdapter + 5) = 0LL;
    if ( a6 )
    {
      if ( v40 )
        MmDeleteTeb((_KPROCESS *)BugCheckParameter1, v40);
      if ( *a6 )
        PspDeleteUserStack(BugCheckParameter1, v20, a3, a6);
    }
    return (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 ? -1073741558 : -1073741823;
  }
  KeStartThread((__int64)DmaAdapter, (__int128 *)v16, v15);
  if ( (v14 & 1) != 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(v17 + 56));
    v14 &= ~1u;
  }
  v22 = *(_DWORD *)(BugCheckParameter1 + 1124);
  if ( (v22 & 0x40000000) != 0 && (*a4 & 2) != 0 )
  {
    *((_DWORD *)DmaAdapter + 325) |= 0x40u;
    v22 = *(_DWORD *)(BugCheckParameter1 + 1124);
  }
  v23 = (((v22 >> 27) & 7) << 9) | *((_DWORD *)DmaAdapter + 324) & 0xFFFFF1FF;
  *((_DWORD *)DmaAdapter + 324) = v23;
  *((_DWORD *)DmaAdapter + 324) = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)*(_DWORD *)(BugCheckParameter1 + 1120)) & 0x7000;
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
  v24 = DmaAdapter + 1256;
  v25 = *(_QWORD **)(BugCheckParameter1 + 1512);
  if ( *v25 != BugCheckParameter1 + 1504 )
    __fastfail(3u);
  *v24 = BugCheckParameter1 + 1504;
  *((_QWORD *)DmaAdapter + 158) = v25;
  *v25 = v24;
  *(_QWORD *)(BugCheckParameter1 + 1512) = v24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 2144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 2144));
  KeAbPostRelease(BugCheckParameter1 + 2144);
  if ( *(_QWORD *)(BugCheckParameter1 + 984) )
    _interlockedbittestandset((volatile signed __int32 *)DmaAdapter, 0x19u);
  if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 0x2000000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)DmaAdapter, 0x1Du);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 1080));
  KeAbPostRelease(BugCheckParameter1 + 1080);
  if ( (*a4 & 0x40) != 0 )
    PspChangeProcessExecutionState((PEPROCESS)BugCheckParameter1);
  ObReferenceObjectExWithTag((ULONG_PTR)DmaAdapter, 2);
  *((_DWORD *)DmaAdapter + 343) = 1;
  if ( (*a4 & 1) != 0 )
  {
    KeSuspendThread((__int64)DmaAdapter, v26, v27, v28);
    if ( (*((_DWORD *)DmaAdapter + 324) & 1) != 0 )
      KeForceResumeThread((__int64)DmaAdapter);
  }
  v29 = 0;
  if ( !*(_BYTE *)(a9 + 388) || (*a4 & 0x10) != 0 )
  {
    v30 = (struct _KPROCESS *)BugCheckParameter1;
    v29 = 1;
  }
  else
  {
    v30 = Process;
  }
  AccessState = SeCreateAccessStateEx(
                  0LL,
                  v30,
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
    AccessState = ObInsertObjectEx((PADAPTER_OBJECT)DmaAdapter, (struct _ACCESS_STATE *)a9, a5, 0, v29, 0LL, 0LL);
    if ( AccessState >= 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
      if ( v39 )
        *v39 = v40;
      if ( a11 )
        *a11 = *(struct _DMA_ADAPTER *)(DmaAdapter + 1144);
    }
    if ( AccessState < 0 )
    {
      SepDeleteAccessState(a9);
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a9 + 32));
    }
  }
  v32 = (volatile signed __int64 *)(DmaAdapter + 1280);
  if ( AccessState < 0 )
  {
    if ( (_InterlockedExchangeAdd64(v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)DmaAdapter + 160);
    KeAbPostRelease((ULONG_PTR)(DmaAdapter + 1280));
    if ( (*a4 & 1) != 0 )
      KeForceResumeThread((__int64)DmaAdapter);
    v35 = a6;
    if ( a6 && *a6 )
      PspDeleteUserStack(BugCheckParameter1, v33, a3, a6);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)DmaAdapter + 324, 2u);
    if ( (_InterlockedExchangeAdd64(v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)DmaAdapter + 160);
    KeAbPostRelease((ULONG_PTR)(DmaAdapter + 1280));
    v35 = a6;
  }
  v36 = 0;
  if ( (v14 & 2) != 0 )
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess(BugCheckParameter1, 769);
    if ( *(_QWORD *)(BugCheckParameter1 + 2280) )
      PoEnergyContextStart(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 2240) )
      v36 = PspCallProcessNotifyRoutines((_QWORD *)BugCheckParameter1, a7, 1);
  }
  if ( (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread((__int64)DmaAdapter, a3, 1);
  if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 2240) )
    PspCallThreadNotifyRoutines(DmaAdapter, 1u, 0);
  if ( AccessState >= 0 )
  {
    if ( v36 < 0 )
      AccessState = v36;
    else
      AccessState = PspCreateObjectHandle(DmaAdapter, a9, PsThreadType);
    SepDeleteAccessState(a9);
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a9 + 32));
    if ( AccessState >= 0 )
    {
      if ( a7 )
      {
        v33 = *(_QWORD *)(a7 + 400);
        if ( v33 )
          AccessState = PspAssignProcessToJobList(BugCheckParameter1, v33, *(unsigned int *)(a7 + 412));
      }
      if ( AccessState >= 0 )
      {
        *a10 = *(_QWORD *)(a9 + 392);
        goto LABEL_125;
      }
      v38 = (*(_DWORD *)(a9 + 384) & 0x200) == 0 && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0;
      ObCloseHandle(*(HANDLE *)(a9 + 392), v38);
      if ( v35 && (*v35 & 1) != 0 )
        KeRaiseUserException(AccessState);
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)DmaAdapter + 324, 0) )
      v14 |= 8u;
    if ( (*((_DWORD *)DmaAdapter + 29) & 0x400) != 0 )
    {
      if ( (*a4 & 1) != 0 )
        KeForceResumeThread((__int64)DmaAdapter);
    }
    else
    {
      if ( v14 >= 8 )
        *((_DWORD *)DmaAdapter + 338) = AccessState;
      KeRequestTerminationThread((__int64)DmaAdapter, v33, v34, v37);
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
  KeReadyThread((__int64)DmaAdapter, v33, v34);
  return (unsigned int)AccessState;
}
