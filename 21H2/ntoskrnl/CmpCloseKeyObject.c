/*
 * XREFs of CmpCloseKeyObject @ 0x14065FDA0
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpSignalDeferredPosts @ 0x14065C6B0 (CmpSignalDeferredPosts.c)
 *     CmpPostNotify @ 0x1406DC820 (CmpPostNotify.c)
 *     CmpDelayedDerefKeys @ 0x1406DCCDC (CmpDelayedDerefKeys.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpCloseKeyObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdi
  char IsKeyDeletedForKeyBody; // al
  ULONG_PTR v11; // rcx
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int128 v23; // [rsp+40h] [rbp-58h] BYREF
  __int128 v24; // [rsp+50h] [rbp-48h] BYREF
  _OWORD v25[2]; // [rsp+60h] [rbp-38h] BYREF

  v4 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  memset(v25, 0, sizeof(v25));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v25, 0x20000u);
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      if ( a2 )
        v4 = *(_QWORD *)(a2 + 8);
    }
  }
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    *((_QWORD *)&v24 + 1) = &v24;
    *(_QWORD *)&v24 = &v24;
    *((_QWORD *)&v23 + 1) = &v23;
    *(_QWORD *)&v23 = &v23;
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
      CmpUnlockRegistry(v22, v21);
    }
    else
    {
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v11 + 32) + 1672LL, 0LL);
      v14 = *(_QWORD *)(a2 + 16);
      if ( v14 && *(_QWORD *)(v14 + 16) != v14 + 16 )
        CmpPostNotify(v14, v12, v13, 267, 0, (__int64)&v23, (__int64)&v24);
      v15 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15 + 1672);
      KeAbPostRelease(v15 + 1672);
      CmpUnlockKcb(*(_QWORD *)(a2 + 8));
      CmpUnlockRegistry(v17, v16);
      CmpDelayedDerefKeys(&v23);
      CmpSignalDeferredPosts((_QWORD **)&v24);
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
  }
  result = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(a1) = 27;
    return (*(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
             a1,
             v25,
             0LL,
             0LL,
             v4,
             0LL);
  }
  return result;
}
