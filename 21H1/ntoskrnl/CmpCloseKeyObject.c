/*
 * XREFs of CmpCloseKeyObject @ 0x1406B8480
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpPostNotify @ 0x14061A9A8 (CmpPostNotify.c)
 *     CmpDelayedDerefKeys @ 0x14061B06C (CmpDelayedDerefKeys.c)
 *     CmpSignalDeferredPosts @ 0x140622DA0 (CmpSignalDeferredPosts.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406231D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v19; // [rsp+40h] [rbp-58h] BYREF
  __int128 v20; // [rsp+50h] [rbp-48h] BYREF
  _OWORD v21[2]; // [rsp+60h] [rbp-38h] BYREF

  v4 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  memset(v21, 0, sizeof(v21));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v21, 0x20000u);
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      if ( a2 )
        v4 = *(_QWORD *)(a2 + 8);
    }
  }
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    *((_QWORD *)&v20 + 1) = &v20;
    *(_QWORD *)&v20 = &v20;
    *((_QWORD *)&v19 + 1) = &v19;
    *(_QWORD *)&v19 = &v19;
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
        CmpPostNotify(v14, v12, v13, 0x10Bu, 0, &v19, &v20);
      v15 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15 + 1672);
      KeAbPostRelease(v15 + 1672);
      CmpUnlockKcb(*(_QWORD *)(a2 + 8));
      CmpUnlockRegistry();
      CmpDelayedDerefKeys((void **)&v19);
      CmpSignalDeferredPosts((_QWORD **)&v20);
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
  }
  result = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(a1) = 27;
    return (*(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
             a1,
             v21,
             0LL,
             0LL,
             v4,
             0LL);
  }
  return result;
}
