/*
 * XREFs of AlpcpReceiveSynchronousReply @ 0x1407AD8F0
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406640F0 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x140667A4C (AlpcpProcessConnectionRequest.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407AD040 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     AlpcpWaitForSingleObject @ 0x1402F5DDC (AlpcpWaitForSingleObject.c)
 *     AlpcpSignalAndWait @ 0x1402F63D0 (AlpcpSignalAndWait.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     AlpcpCancelMessage @ 0x140662E08 (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x1407A7628 (AlpcpUnlockMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1407A7FBC (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpLogReceiveMessage @ 0x140967B4C (AlpcpLogReceiveMessage.c)
 */

__int64 __fastcall AlpcpReceiveSynchronousReply(
        __int64 *a1,
        KPROCESSOR_MODE a2,
        __int64 *a3,
        int a4,
        PLARGE_INTEGER a5)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rbp
  unsigned int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rbx
  signed __int64 BugCheckParameter4; // rax
  int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  int v17; // ecx
  volatile signed __int64 *v18; // rsi
  int v19; // ecx

  CurrentThread = KeGetCurrentThread();
  v8 = *a1;
  v9 = AlpcpSignalAndWait((__int64)a1, &CurrentThread[1].KernelStack, WrLpcReply, a2, a5, 1);
  v10 = v9;
  v11 = _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, 0LL);
  if ( !v11 )
  {
    if ( v9 )
      AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReply, 0, 0, 0LL);
    return 3221227265LL;
  }
  ExAcquirePushLockExclusiveEx(v11 - 16, 0LL);
  *(_BYTE *)(v11 - 32) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 24), 0x10000uLL) + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v11, 0x26uLL, BugCheckParameter4);
  v14 = *(_DWORD *)(v11 + 40);
  if ( (v14 & 0x800) != 0 )
  {
    v14 &= ~0x800u;
    *(_DWORD *)(v11 + 40) = v14;
  }
  --*(_WORD *)(v11 - 30);
  if ( (v14 & 7) != 5 )
  {
    if ( *(struct _KTHREAD **)(v11 + 32) == CurrentThread )
    {
      if ( !v10 )
        v10 = -1073740031;
      goto LABEL_14;
    }
    goto LABEL_19;
  }
  v15 = v14 & 0xFFFFFFF8;
  *(_DWORD *)(v11 + 40) = v15;
  if ( v10 )
  {
    if ( *(struct _KTHREAD **)(v11 + 32) == CurrentThread )
    {
LABEL_14:
      *(_QWORD *)(v11 + 32) = 0LL;
      --*(_WORD *)(v11 - 30);
      if ( (*(_DWORD *)(v11 + 40) & 0x80u) != 0 )
        AlpcpUnlockMessage(v11);
      else
        AlpcpCancelMessage(v8, v11, 0);
      return v10;
    }
    AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReply, 0, 0, 0LL);
    v15 = *(_DWORD *)(v11 + 40);
    v10 = 0;
  }
  if ( (v15 & 0x80u) != 0 )
  {
LABEL_19:
    AlpcpUnlockMessage(v11);
    return 3221227265LL;
  }
  if ( (v15 & 0x200) != 0 )
  {
    v16 = (*(_QWORD *)(v11 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
    if ( !*(_QWORD *)(v11 + 144) )
      v16 = *(_QWORD *)(v11 + 136) != 0LL ? 0x80000000 : 0;
    v17 = v16 | 0x10000000;
    if ( !*(_QWORD *)(v11 + 152) )
      v17 = v16;
    if ( (v17 & a4) == 0 )
    {
      *(_WORD *)(v11 + 244) &= ~0x2000u;
LABEL_38:
      if ( AlpcpLogEnabled )
        AlpcpLogReceiveMessage(v11);
      *a3 = v11;
      return v10;
    }
  }
  v18 = (volatile signed __int64 *)(v8 + 352);
  *(_WORD *)(v11 + 244) |= 0x2000u;
  ExAcquirePushLockSharedEx(v8 + 352, 0LL);
  v19 = *(_DWORD *)(v8 + 416);
  if ( (v19 & 0x40) == 0 )
  {
    if ( (*(_DWORD *)(v8 + 256) & 0x1000) == 0 || (v19 & 0x20) == 0 || !*(_QWORD *)(v11 + 32) )
    {
      ++*(_WORD *)(v11 - 30);
      AlpcpInsertMessagePendingQueue(v8, v11);
    }
    if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
    KeAbPostRelease(v8 + 352);
    goto LABEL_38;
  }
  if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
  KeAbPostRelease(v8 + 352);
  AlpcpCancelMessage(v8, v11, 0);
  return 3221227264LL;
}
