/*
 * XREFs of AlpcpDispatchNewMessage @ 0x140685C20
 * Callers:
 *     AlpcpDispatchMessage @ 0x14062AFD8 (AlpcpDispatchMessage.c)
 *     AlpcpSendMessage @ 0x1406851E0 (AlpcpSendMessage.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x140328360 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x14034A3E0 (PsGetProcessJob.c)
 *     PsGetJobEffectiveFreezeCount @ 0x14057BF38 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpUnlockMessage @ 0x140682914 (AlpcpUnlockMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140685F60 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x140703B60 (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 */

__int64 __fastcall AlpcpDispatchNewMessage(__int64 *a1)
{
  __int64 v1; // r13
  ULONG_PTR v2; // rbp
  int v4; // r12d
  __int64 *v5; // r15
  int v6; // edi
  __int64 *v7; // r14
  __int64 *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int16 v13; // cx
  int v14; // eax
  __int16 v15; // cx
  unsigned int v16; // eax
  __int64 v18; // rcx
  __int64 ProcessJob; // rax
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp+10h]

  v1 = *a1;
  v2 = a1[1];
  v4 = *((_DWORD *)a1 + 12);
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v5 = *(__int64 **)(v1 + 16);
  CurrentThread = KeGetCurrentThread();
  v6 = (*(_DWORD *)(v1 + 416) >> 1) & 3;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v5 - 2), 0LL);
  if ( v6 == 2 )
  {
    v7 = v5 + 1;
  }
  else
  {
    if ( v6 != 1 )
    {
      v8 = v5 + 2;
      v7 = v5 + 2;
      goto LABEL_4;
    }
    v7 = v5;
  }
  v8 = v5;
LABEL_4:
  v9 = *v8;
  v10 = *v7;
  v11 = v9;
  if ( v9 && !ObReferenceObjectSafe(v9) )
    v11 = 0LL;
  v12 = v10;
  if ( v10 && !ObReferenceObjectSafe(v10) )
    v12 = 0LL;
  if ( !v11 || !v12 )
  {
    if ( _InterlockedCompareExchange64(v5 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 - 2);
    KeAbPostRelease((ULONG_PTR)(v5 - 2));
    if ( v11 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v11);
    if ( v12 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    goto LABEL_38;
  }
  ExAcquirePushLockSharedEx(v11 + 352, 0LL);
  if ( v12 != v11 )
    ExAcquirePushLockSharedEx(v12 + 352, 0LL);
  if ( (*(_DWORD *)(v11 + 416) & 0x20) != 0
    || (*(_DWORD *)(v12 + 416) & 0x20) != 0
    || (*(_DWORD *)(v1 + 416) & 0x20) != 0 && (*(_DWORD *)(v1 + 256) & 0x1000) == 0 )
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v5, v11, v12);
LABEL_38:
    AlpcpUnlockMessage(v2);
    return 3221225527LL;
  }
  if ( (*(_DWORD *)(*a1 + 256) & 0x800000) != 0
    && (*(_DWORD *)(a1[1] + 40) & 0x200) == 0
    && (v18 = *(_QWORD *)(v11 + 24), (v18 & 1) == 0)
    && v18
    && (ProcessJob = PsGetProcessJob(v18)) != 0
    && (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v5, v11, v12);
    AlpcpUnlockMessage(v2);
    return 3221225526LL;
  }
  else if ( (*(_DWORD *)(v11 + 256) & 0x20000) != 0 )
  {
    if ( (unsigned __int64)*((unsigned __int16 *)a1 + 26) > *(_QWORD *)(v11 + 272) )
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v5, v11, v12);
      AlpcpUnlockMessage(v2);
      return 3221225507LL;
    }
    else
    {
      *(_QWORD *)(v2 + 200) = 0LL;
      *(_WORD *)(v2 + 242) = *((_WORD *)a1 + 26);
      *(_WORD *)(v2 + 240) = *((_WORD *)a1 + 26) - 40;
      v13 = *((_WORD *)a1 + 27);
      *(_WORD *)(v2 + 244) = v13;
      *(_WORD *)(v2 + 246) = *((_WORD *)a1 + 28);
      v14 = *(_DWORD *)(v2 + 40);
      *(_OWORD *)(v2 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
      if ( (v4 & 0x10000) != 0 )
      {
        v15 = v13 & 0xDFFF;
        v16 = v14 | 0x200;
      }
      else
      {
        v15 = v13 | 0x2000;
        v16 = v14 & 0xFFFFFDFF;
      }
      *(_DWORD *)(v2 + 40) = v16;
      *(_WORD *)(v2 + 244) = v15;
      if ( (_bittest((const signed __int32 *)(v1 + 416), 0xDu) & ((*(_DWORD *)(v2 + 40) & 0x200) != 0)) != 0 )
      {
        *(_DWORD *)(v2 + 40) &= ~0x1000u;
      }
      else
      {
        ObfReferenceObject((PVOID)v1);
        *(_DWORD *)(v2 + 40) |= 0x1000u;
      }
      *(_QWORD *)(v2 + 24) = v1;
      *(_DWORD *)(v2 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v12 + 400));
      *(_QWORD *)(v2 + 120) = *(_QWORD *)(v12 + 56);
      *(_QWORD *)(v2 + 184) = v5;
      *(_QWORD *)(v2 + 192) = *v5;
      if ( v12 != v11 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v12 + 352));
        KeAbPostRelease(v12 + 352);
      }
      if ( (v4 & 0x20000) != 0 )
      {
        *(_DWORD *)(v2 + 40) &= ~0x100u;
        *(_WORD *)(v2 - 30) += 2;
        *(_QWORD *)(v2 + 32) = CurrentThread;
        _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v2);
      }
      a1[4] = v11;
      a1[2] = (__int64)v5;
      AlpcpCompleteDispatchMessage(a1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v12);
      return 0LL;
    }
  }
  else
  {
    AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v5, v11, v12);
    AlpcpUnlockMessage(v2);
    return 3221227271LL;
  }
}
