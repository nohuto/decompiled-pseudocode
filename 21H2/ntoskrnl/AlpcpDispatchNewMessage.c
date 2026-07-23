/*
 * XREFs of AlpcpDispatchNewMessage @ 0x1406D49B0
 * Callers:
 *     AlpcpDispatchMessage @ 0x1406D0764 (AlpcpDispatchMessage.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x140212AE0 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x14023BBD0 (PsGetProcessJob.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     PsGetJobEffectiveFreezeCount @ 0x1405815B8 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x14061461C (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406D4D10 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x1406D57A0 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpDispatchNewMessage(__int64 *a1)
{
  __int64 v1; // rbp
  int v2; // eax
  ULONG_PTR v4; // rsi
  __int64 *v5; // r14
  struct _KTHREAD *CurrentThread; // r13
  int v7; // ebx
  int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 ProcessJob; // rax
  __int16 v14; // cx
  int v15; // eax
  __int16 v16; // cx
  unsigned int v17; // eax
  int v18; // [rsp+60h] [rbp+8h]

  v1 = *a1;
  v2 = *((_DWORD *)a1 + 12);
  v4 = a1[1];
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v5 = *(__int64 **)(v1 + 16);
  CurrentThread = KeGetCurrentThread();
  v18 = v2;
  v7 = (*(_DWORD *)(v1 + 416) >> 1) & 3;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v5 - 2), 0LL);
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *v5;
    goto LABEL_6;
  }
  if ( v8 != 1 )
  {
    v9 = v5[2];
LABEL_6:
    v10 = v9;
    goto LABEL_7;
  }
  v9 = *v5;
  v10 = v5[1];
LABEL_7:
  if ( v9 && !ObReferenceObjectSafe(v9) )
    v9 = 0LL;
  if ( v10 && !ObReferenceObjectSafe(v10) )
    v10 = 0LL;
  if ( !v9 || !v10 )
  {
    if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 - 2);
    KeAbPostRelease((ULONG_PTR)(v5 - 2));
    if ( v9 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v9);
    if ( v10 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v10);
    goto LABEL_49;
  }
  ExAcquirePushLockSharedEx(v9 + 352, 0LL);
  if ( v10 != v9 )
    ExAcquirePushLockSharedEx(v10 + 352, 0LL);
  if ( (*(_DWORD *)(v9 + 416) & 0x20) != 0
    || (*(_DWORD *)(v10 + 416) & 0x20) != 0
    || (*(_DWORD *)(v1 + 416) & 0x20) != 0 && (*(_DWORD *)(v1 + 256) & 0x1000) == 0 )
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, v9, v10);
LABEL_49:
    AlpcpUnlockMessage(v4);
    return 3221225527LL;
  }
  if ( (*(_DWORD *)(*a1 + 256) & 0x800000) != 0
    && (*(_DWORD *)(a1[1] + 40) & 0x200) == 0
    && (v11 = *(_QWORD *)(v9 + 24), (v11 & 1) == 0)
    && v11
    && (ProcessJob = PsGetProcessJob(v11)) != 0
    && (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, v9, v10);
    AlpcpUnlockMessage(v4);
    return 3221225526LL;
  }
  else if ( (*(_DWORD *)(v9 + 256) & 0x20000) != 0 )
  {
    if ( (unsigned __int64)*((unsigned __int16 *)a1 + 26) <= *(_QWORD *)(v9 + 272) )
    {
      *(_QWORD *)(v4 + 200) = 0LL;
      *(_WORD *)(v4 + 242) = *((_WORD *)a1 + 26);
      *(_WORD *)(v4 + 240) = *((_WORD *)a1 + 26) - 40;
      v14 = *((_WORD *)a1 + 27);
      *(_WORD *)(v4 + 244) = v14;
      *(_WORD *)(v4 + 246) = *((_WORD *)a1 + 28);
      v15 = *(_DWORD *)(v4 + 40);
      *(_OWORD *)(v4 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
      if ( (v18 & 0x10000) != 0 )
      {
        v16 = v14 & 0xDFFF;
        v17 = v15 | 0x200;
      }
      else
      {
        v16 = v14 | 0x2000;
        v17 = v15 & 0xFFFFFDFF;
      }
      *(_DWORD *)(v4 + 40) = v17;
      *(_WORD *)(v4 + 244) = v16;
      AlpcpSetOwnerPortMessage(v4, v1);
      *(_DWORD *)(v4 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v10 + 400));
      *(_QWORD *)(v4 + 120) = *(_QWORD *)(v10 + 56);
      *(_QWORD *)(v4 + 184) = v5;
      *(_QWORD *)(v4 + 192) = *v5;
      if ( v10 != v9 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v10 + 352));
        KeAbPostRelease(v10 + 352);
      }
      if ( (v18 & 0x20000) != 0 )
      {
        *(_DWORD *)(v4 + 40) &= ~0x100u;
        *(_WORD *)(v4 - 30) += 2;
        *(_QWORD *)(v4 + 32) = CurrentThread;
        _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v4);
      }
      a1[4] = v9;
      a1[2] = (__int64)v5;
      AlpcpCompleteDispatchMessage(a1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v10);
      return 0LL;
    }
    else
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, v9, v10);
      AlpcpUnlockMessage(v4);
      return 3221225507LL;
    }
  }
  else
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v5, v9, v10);
    AlpcpUnlockMessage(v4);
    return 3221227271LL;
  }
}
