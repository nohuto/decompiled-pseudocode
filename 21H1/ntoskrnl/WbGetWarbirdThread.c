/*
 * XREFs of WbGetWarbirdThread @ 0x14065EA7C
 * Callers:
 *     sub_14065F224 @ 0x14065F224 (sub_14065F224.c)
 *     WbHeapExecuteCall @ 0x14065F61C (WbHeapExecuteCall.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     sub_14065EC6C @ 0x14065EC6C (sub_14065EC6C.c)
 *     sub_14065F0FC @ 0x14065F0FC (sub_14065F0FC.c)
 *     sub_1406D6C54 @ 0x1406D6C54 (sub_1406D6C54.c)
 *     sub_1406ED56C @ 0x1406ED56C (sub_1406ED56C.c)
 */

__int64 __fastcall WbGetWarbirdThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v4; // rbx
  unsigned __int64 *v7; // rdi
  __int64 v8; // rsi
  int v9; // esi
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v15; // rax
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rsi
  _QWORD *v19; // r14
  char v20; // bp
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v25; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v25 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 128);
  v8 = KeAbPreAcquire(a1 + 128, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v24 = 0LL;
  v9 = sub_14065F0FC((int)a1 + 88, (_DWORD)CurrentThread, 8, (unsigned int)&v24, 0LL);
  if ( v9 >= 0 )
  {
    v10 = (_QWORD *)v24;
    if ( v24 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v24 + 8));
      v10 = (_QWORD *)v24;
    }
    v25 = v10;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  if ( v9 == -1073741198 )
  {
    v9 = sub_1406ED56C(a1, CurrentThread, &v25);
    if ( v9 < 0 )
    {
LABEL_25:
      v4 = v25;
      goto LABEL_15;
    }
    v15 = KeGetCurrentThread();
    --v15->SpecialApcDisable;
    v16 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v16, (ULONG_PTR)v7);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    v19 = v25;
    v9 = sub_1406D6C54((int)a1 + 88, (_DWORD)v25, v17, *v25, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v19 + 1);
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v20 & 2) != 0 && (v20 & 4) == 0 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
  }
  if ( v9 < 0 || !a3 )
    goto LABEL_25;
  *a3 = v25;
LABEL_15:
  sub_14065EC6C(a1, v4);
  return (unsigned int)v9;
}
