/*
 * XREFs of CmpCloseKeyObject @ 0x1406B1340
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpDelayedDerefKeys @ 0x1405F3AAC (CmpDelayedDerefKeys.c)
 *     CmpPostNotify @ 0x1405F3C84 (CmpPostNotify.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpSignalDeferredPosts @ 0x14061C8F0 (CmpSignalDeferredPosts.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140678E00 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpCloseKeyObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdi
  char IsKeyDeletedForKeyBody; // al
  ULONG_PTR v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int128 v16; // [rsp+40h] [rbp-58h] BYREF
  __int128 v17; // [rsp+50h] [rbp-48h] BYREF
  _OWORD v18[2]; // [rsp+60h] [rbp-38h] BYREF

  v4 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  memset(v18, 0, sizeof(v18));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v18, 0x20000u);
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      if ( a2 )
        v4 = *(_QWORD *)(a2 + 8);
    }
  }
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    *((_QWORD *)&v17 + 1) = &v17;
    *(_QWORD *)&v17 = &v17;
    *((_QWORD *)&v16 + 1) = &v16;
    *(_QWORD *)&v16 = &v16;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry();
    v9 = *(_QWORD *)(a2 + 8);
    ExAcquirePushLockSharedEx(v9 + 48, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 56));
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a2, 0LL);
    v11 = *(_QWORD *)(a2 + 8);
    if ( IsKeyDeletedForKeyBody )
    {
      CmpUnlockKcb(v11);
      CmpUnlockRegistry();
    }
    else
    {
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v11 + 32) + 1672LL, 0LL);
      v14 = *(_QWORD *)(a2 + 16);
      if ( v14 && *(_QWORD *)(v14 + 16) != v14 + 16 )
        CmpPostNotify(v14, v12, v13, 267LL, 0, (void **)&v16, &v17);
      v15 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 1672));
      KeAbPostRelease(v15 + 1672);
      CmpUnlockKcb(*(_QWORD *)(a2 + 8));
      CmpUnlockRegistry();
      CmpDelayedDerefKeys((void **)&v16);
      CmpSignalDeferredPosts((_QWORD **)&v17);
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  result = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(a1) = 27;
    return (*(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
             a1,
             v18,
             0LL,
             0LL,
             v4,
             0LL);
  }
  return result;
}
