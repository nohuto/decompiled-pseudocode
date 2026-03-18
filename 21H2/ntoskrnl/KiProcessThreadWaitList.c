/*
 * XREFs of KiProcessThreadWaitList @ 0x140340390
 * Callers:
 *     KiPriQueueThreadPriorityChanged @ 0x140291EE4 (KiPriQueueThreadPriorityChanged.c)
 *     KiProcessExpiredTimerList @ 0x1402A7C20 (KiProcessExpiredTimerList.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KiCommitThreadWait @ 0x1402B5240 (KiCommitThreadWait.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeTerminateThread @ 0x1402F00BC (KeTerminateThread.c)
 *     KiTimer2Expiration @ 0x1402F27B0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1402F2CA0 (KiExpireTimer2.c)
 *     KeRemovePriQueue @ 0x14033D110 (KeRemovePriQueue.c)
 * Callees:
 *     KiInswapAndReadyThread @ 0x140211410 (KiInswapAndReadyThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     HalRequestIpiSpecifyVector @ 0x140300100 (HalRequestIpiSpecifyVector.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     HalSendSoftwareInterrupt @ 0x140342650 (HalSendSoftwareInterrupt.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTraceReadyThread @ 0x14062E258 (EtwTraceReadyThread.c)
 */

unsigned int __fastcall KiProcessThreadWaitList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  char v6; // r13
  _QWORD *v7; // rdi
  _QWORD *v8; // r15
  _QWORD *v9; // r15
  __int64 *v10; // rsi
  __int64 *v11; // rbp
  volatile signed __int32 *v12; // r12
  __int64 *v13; // rcx
  __int64 **v14; // rax
  int v15; // eax
  _QWORD *v16; // rsi
  unsigned int result; // eax
  bool v18; // zf
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // r8d
  _QWORD *v23; // rdx
  _QWORD *v24; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+78h] [rbp+10h]
  unsigned int v26; // [rsp+80h] [rbp+18h]
  int v27; // [rsp+88h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v25 = a2;
  v4 = *(_QWORD **)(a1 + 11528);
  v24 = 0LL;
  *(_QWORD *)(a1 + 11528) = 0LL;
  v6 = 0;
  v7 = 0LL;
  while ( v4 )
  {
    v8 = v4;
    v4 = (_QWORD *)*v4;
    v9 = v8 - 27;
    v10 = (__int64 *)v9[26];
    v11 = &v10[6 * *((unsigned __int8 *)v9 + 587)];
    do
    {
      if ( *((_BYTE *)v10 + 17) < 5u )
      {
        v12 = (volatile signed __int32 *)v10[4];
        KiAcquireKobjectLockSafe(v12, a2, a3, a4);
        if ( *((_BYTE *)v10 + 17) == 4 )
        {
          v13 = (__int64 *)*v10;
          v14 = (__int64 **)v10[1];
          if ( *(__int64 **)(*v10 + 8) != v10 || *v14 != v10 )
            __fastfail(3u);
          *v14 = v13;
          v13[1] = (__int64)v14;
        }
        _InterlockedAnd(v12, 0xFFFFFF7F);
      }
      v10 += 6;
    }
    while ( v10 != v11 );
    a2 = v25;
    a3 = v26;
    *((_BYTE *)v9 + 566) = v25;
    *((_BYTE *)v9 + 567) = a3;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v9, a2, a3);
    v15 = *((_DWORD *)v9 + 30);
    if ( (v15 & 0x20000) == 0 || (v15 & 0x100000) != 0 )
    {
      v9[27] = v7;
      v7 = v9 + 27;
    }
    else
    {
      v16 = v9 + 27;
      v9[27] = v24;
      do
      {
        KiDeferredReadySingleThread(a1, v16 - 27, &v24);
        v16 = v24;
        ++v6;
        if ( v24 )
          v24 = (_QWORD *)*v24;
        if ( (v6 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
      }
      while ( v16 );
    }
  }
  result = *(unsigned __int8 *)(a1 + 12761);
  if ( (_BYTE)result )
  {
    v18 = (_BYTE)result == 1;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v18 )
    {
      v20 = *(unsigned __int8 *)(a1 + 12760);
      v21 = *(unsigned int *)(a1 + 12764);
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalSendSoftwareInterrupt(v21, v20);
    }
    else
    {
      v22 = 47;
      if ( *(_BYTE *)(a1 + 12760) == 1 )
        v22 = 31;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalRequestIpiSpecifyVector(0, (_WORD *)(a1 + 12768), v22);
    }
    if ( *(_BYTE *)(a1 + 12761) == 2 )
    {
      *(_QWORD *)(a1 + 12768) = 2097153LL;
      result = (unsigned int)memset((void *)(a1 + 12776), 0, 0x100uLL);
    }
    *(_BYTE *)(a1 + 12761) = 0;
    *(_DWORD *)(a1 + 12764) = 0xFFFF;
  }
  for ( ; v7; result = KiInswapAndReadyThread(a1, (__int64)(v23 - 27)) )
  {
    v23 = v7;
    v7 = (_QWORD *)*v7;
  }
  return result;
}
