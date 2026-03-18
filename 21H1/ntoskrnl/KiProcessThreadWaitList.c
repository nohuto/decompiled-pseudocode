/*
 * XREFs of KiProcessThreadWaitList @ 0x1402443B0
 * Callers:
 *     KeRemovePriQueue @ 0x140225BC0 (KeRemovePriQueue.c)
 *     KiTimer2Expiration @ 0x140242E60 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140243360 (KiExpireTimer2.c)
 *     KiProcessExpiredTimerList @ 0x140244DA0 (KiProcessExpiredTimerList.c)
 *     KiCommitThreadWait @ 0x140264C30 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x140265350 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x140268450 (KeRemoveQueueEx.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14030F7B4 (KiPriQueueThreadPriorityChanged.c)
 *     KeTerminateThread @ 0x140355A18 (KeTerminateThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiReadyThread @ 0x140244C00 (KiReadyThread.c)
 *     EtwTraceReadyThread @ 0x1405A23B0 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiProcessThreadWaitList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 **v4; // r14
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // r13
  __int64 v8; // rax
  __int64 *v9; // rsi
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  volatile signed __int32 *v12; // rbp
  __int64 *v13; // rax
  __int64 result; // rax
  __int64 **v15; // rcx
  unsigned int v16; // [rsp+68h] [rbp+20h]

  v16 = a4;
  v4 = *(__int64 ***)(a1 + 11528);
  v5 = a3;
  *(_QWORD *)(a1 + 11528) = 0LL;
  v6 = a2;
  do
  {
    v8 = *((unsigned __int8 *)v4 + 371);
    v9 = (__int64 *)(v4 - 27);
    v10 = *(v4 - 1);
    v4 = (__int64 **)*v4;
    v11 = &v10[6 * v8];
    do
    {
      if ( *((_BYTE *)v10 + 17) < 5u )
      {
        v12 = (volatile signed __int32 *)v10[4];
        KiAcquireKobjectLockSafe(v12, a2, a3, a4);
        if ( *((_BYTE *)v10 + 17) == 4 )
        {
          v13 = (__int64 *)*v10;
          if ( *(__int64 **)(*v10 + 8) != v10 || (v15 = (__int64 **)v10[1], *v15 != v10) )
            __fastfail(3u);
          *v15 = v13;
          v13[1] = (__int64)v15;
        }
        _InterlockedAnd(v12, 0xFFFFFF7F);
      }
      v10 += 6;
    }
    while ( v10 != v11 );
    *((_BYTE *)v9 + 566) = v6;
    *((_BYTE *)v9 + 567) = v5;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v9, v6, v5, v16);
    result = KiReadyThread(a1, v9);
  }
  while ( v4 );
  return result;
}
