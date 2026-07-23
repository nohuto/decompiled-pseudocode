/*
 * XREFs of KiProcessThreadWaitList @ 0x1402EFB20
 * Callers:
 *     KiPriQueueThreadPriorityChanged @ 0x14021C900 (KiPriQueueThreadPriorityChanged.c)
 *     KeTerminateThread @ 0x140266490 (KeTerminateThread.c)
 *     KeRemoveQueueEx @ 0x1402A9110 (KeRemoveQueueEx.c)
 *     KeRemovePriQueue @ 0x1402E6A20 (KeRemovePriQueue.c)
 *     KiProcessExpiredTimerList @ 0x1402EC2F0 (KiProcessExpiredTimerList.c)
 *     KiTimer2Expiration @ 0x1402ED030 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1402EFE10 (KiExpireTimer2.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 * Callees:
 *     KiReadyThread @ 0x1402ECE90 (KiReadyThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     EtwTraceReadyThread @ 0x1405A81A0 (EtwTraceReadyThread.c)
 */

char __fastcall KiProcessThreadWaitList(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned int a4)
{
  __int64 **v4; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  volatile signed __int32 *v12; // rbp
  __int64 *v13; // rax
  char result; // al
  __int64 **v15; // rcx

  v4 = *(__int64 ***)(a1 + 11528);
  *(_QWORD *)(a1 + 11528) = 0LL;
  do
  {
    v8 = *((unsigned __int8 *)v4 + 371);
    v9 = (__int64)(v4 - 27);
    v10 = *(v4 - 1);
    v4 = (__int64 **)*v4;
    v11 = &v10[6 * v8];
    do
    {
      if ( *((_BYTE *)v10 + 17) < 5u )
      {
        v12 = (volatile signed __int32 *)v10[4];
        KiAcquireKobjectLockSafe(v12);
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
    *(_BYTE *)(v9 + 566) = a2;
    *(_BYTE *)(v9 + 567) = a3;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v9, a2, a3, a4);
    result = KiReadyThread(a1, v9);
  }
  while ( v4 );
  return result;
}
