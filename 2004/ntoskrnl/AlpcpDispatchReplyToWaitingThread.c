/*
 * XREFs of AlpcpDispatchReplyToWaitingThread @ 0x140684350
 * Callers:
 *     AlpcpDispatchMessage @ 0x14062AFD8 (AlpcpDispatchMessage.c)
 *     AlpcpSendMessage @ 0x1406851E0 (AlpcpSendMessage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x1402EBC30 (KeReleaseSemaphoreEx.c)
 *     AlpcpSetOwnerPortMessage @ 0x14062D914 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14062EAF0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpUnlockMessage @ 0x140682914 (AlpcpUnlockMessage.c)
 *     AlpcpUnlockBlob @ 0x140685070 (AlpcpUnlockBlob.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406869F0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408BF664 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x1408C0800 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x1408C09D4 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpDispatchReplyToWaitingThread(__int64 a1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // r12
  signed __int32 *v4; // r15
  __int64 v5; // r14
  int v6; // ecx
  int v7; // ebp
  struct _KTHREAD *CurrentThread; // r13
  __int16 v9; // dx
  __int16 v10; // dx
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // r15d
  __int64 v14; // r13
  unsigned int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // r9
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  bool v24; // zf
  char v25; // [rsp+80h] [rbp+8h]
  __int16 v26; // [rsp+88h] [rbp+10h]
  __int64 v27; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *v28; // [rsp+98h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 8);
  LODWORD(v2) = *(_DWORD *)(a1 + 48);
  v4 = *(signed __int32 **)a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(_QWORD *)(v1 + 24);
  v6 = *(_DWORD *)(v1 + 40);
  v27 = *(_QWORD *)(v1 + 32);
  v7 = *(_DWORD *)(v5 + 416) >> 1;
  v25 = v2;
  v26 = v6;
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) > *(_QWORD *)(v5 + 272) )
  {
    AlpcpUnlockMessage(v1);
    return 3221225507LL;
  }
  else
  {
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(v1 + 200) = 0LL;
    if ( *(_WORD *)(a1 + 54) == 11 )
    {
      ExAcquirePushLockExclusiveEx(v5 + 352, 0LL);
      *(_DWORD *)(v5 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
      KeAbPostRelease(v5 + 352);
      v6 = *(_DWORD *)(v1 + 40);
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v1 + 242) = *(_WORD *)(a1 + 52);
    v28 = CurrentThread;
    *(_WORD *)(v1 + 240) = *(_WORD *)(a1 + 52) - 40;
    v9 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v1 + 244) = v9;
    *(_WORD *)(v1 + 246) = *(_WORD *)(a1 + 56);
    *(_OWORD *)(v1 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    if ( (v2 & 0x10000) != 0 )
    {
      v10 = v9 & 0xDFFF;
      v11 = v6 | 0x200;
    }
    else
    {
      v10 = v9 | 0x2000;
      v11 = v6 & 0xFFFFFDFF;
    }
    *(_DWORD *)(v1 + 40) = v11;
    *(_WORD *)(v1 + 244) = v10;
    if ( (_bittest(v4 + 104, 0xDu) & _bittest((const signed __int32 *)(v1 + 40), 9u)) != 0 )
    {
      AlpcpSetOwnerPortMessage(v1, v4, 0);
    }
    else
    {
      ObfReferenceObject(v4);
      *(_DWORD *)(v1 + 40) |= 0x1000u;
      *(_QWORD *)(v1 + 24) = v4;
    }
    v12 = *(_DWORD *)(v1 + 40);
    v13 = v2 & 0x20000;
    if ( (v2 & 0x20000) != 0 )
    {
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v1);
      *(_DWORD *)(v1 + 40) |= 0x800u;
      ++*(_WORD *)(v1 - 30);
      v12 = *(_DWORD *)(v1 + 40);
    }
    v14 = *(_QWORD *)(v1 + 16);
    *(_DWORD *)(v1 + 40) = v12 | 0x100;
    if ( v14 )
    {
      v2 = v14 + 176;
      ExAcquirePushLockExclusiveEx(v14 + 176, 0LL);
      --*(_DWORD *)(v14 + 456);
      *(_DWORD *)(v1 + 40) &= 0xFFFFFFF8;
      *(_QWORD *)(v1 + 16) = 0LL;
      **(_QWORD **)(v1 + 8) = *(_QWORD *)v1;
      *(_QWORD *)(*(_QWORD *)v1 + 8LL) = *(_QWORD *)(v1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v2);
      KeAbPostRelease(v2);
      --*(_WORD *)(v1 - 30);
      LOBYTE(v2) = v25;
    }
    *(_DWORD *)(v1 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v5 + 400));
    v15 = *(_DWORD *)(v1 + 40) & 0xFFFFFF87 | (8 * (v7 & 3));
    *(_DWORD *)(v1 + 40) = v15;
    if ( ((v15 >> 3) & 0xF) == 1 )
    {
      v21 = *(_QWORD *)(v5 + 16);
      ExAcquirePushLockSharedEx(v21 - 16, 0LL);
      v22 = *(_QWORD *)(v21 + 8);
      if ( v22 )
        v23 = *(_QWORD *)(v22 + 56);
      else
        v23 = 0LL;
      *(_QWORD *)(v1 + 120) = v23;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v21 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v21 - 16));
      KeAbPostRelease(v21 - 16);
    }
    else
    {
      *(_QWORD *)(v1 + 120) = *(_QWORD *)(v5 + 56);
    }
    if ( *(_QWORD *)(v1 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v1);
      *(_QWORD *)(v1 + 176) = 0LL;
    }
    ExAcquirePushLockSharedEx(v5 + 352, 0LL);
    if ( *(_QWORD *)(v1 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v5, v1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
    KeAbPostRelease(v5 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogSendMessage(v1);
    if ( v13 )
    {
      v24 = AlpcpLogEnabled == 0;
      *(_QWORD *)(v1 + 32) = v28;
      *(_QWORD *)(a1 + 24) = v27;
      if ( !v24 )
        AlpcpLogWaitForReply(v1);
      AlpcpUnlockMessage(v1);
    }
    else
    {
      --*(_WORD *)(v1 - 30);
      *(_QWORD *)(v1 + 32) = 0LL;
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v1, v16, v17, v18);
      AlpcpUnlockBlob(v1);
      if ( (v2 & 4) != 0 )
        *(_QWORD *)(a1 + 24) = v27;
      else
        KeReleaseSemaphoreEx(v27 + 1160, 1LL, 1LL, v19, 2);
    }
    if ( (v26 & 0x1000) != 0 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v5);
    return 0LL;
  }
}
