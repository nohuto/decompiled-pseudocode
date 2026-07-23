/*
 * XREFs of WbGetWarbirdThread @ 0x14061935C
 * Callers:
 *     sub_140619B04 @ 0x140619B04 (sub_140619B04.c)
 *     WbHeapExecuteCall @ 0x140619EFC (WbHeapExecuteCall.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402743C0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     sub_14061954C @ 0x14061954C (sub_14061954C.c)
 *     sub_1406199DC @ 0x1406199DC (sub_1406199DC.c)
 *     sub_1406DA264 @ 0x1406DA264 (sub_1406DA264.c)
 *     sub_14071109C @ 0x14071109C (sub_14071109C.c)
 */

__int64 __fastcall WbGetWarbirdThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v4; // rbx
  unsigned __int64 *v7; // rdi
  __int64 v8; // rsi
  int v9; // esi
  _QWORD *v10; // rcx
  struct _KTHREAD *v12; // rax
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rsi
  _QWORD *v16; // r14
  char v17; // bp
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v19; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v19 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 128);
  v8 = KeAbPreAcquire(a1 + 128, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v18 = 0LL;
  v9 = sub_1406199DC((int)a1 + 88, (_DWORD)CurrentThread, 8, (unsigned int)&v18, 0LL);
  if ( v9 >= 0 )
  {
    v10 = (_QWORD *)v18;
    if ( v18 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v18 + 8));
      v10 = (_QWORD *)v18;
    }
    v19 = v10;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 == -1073741198 )
  {
    v9 = sub_14071109C(a1, CurrentThread, &v19);
    if ( v9 < 0 )
    {
LABEL_25:
      v4 = v19;
      goto LABEL_15;
    }
    v12 = KeGetCurrentThread();
    --v12->SpecialApcDisable;
    v13 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v13, (ULONG_PTR)v7);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v16 = v19;
    v9 = sub_1406DA264((int)a1 + 88, (_DWORD)v19, v14, *v19, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v16 + 1);
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v9 < 0 || !a3 )
    goto LABEL_25;
  *a3 = v19;
LABEL_15:
  sub_14061954C(a1, v4);
  return (unsigned int)v9;
}
