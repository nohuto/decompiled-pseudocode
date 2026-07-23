/*
 * XREFs of WbRemoveWarbirdProcess @ 0x14065E8CC
 * Callers:
 *     WbDispatchOperation @ 0x14065ECA0 (WbDispatchOperation.c)
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     sub_14065EE88 @ 0x14065EE88 (sub_14065EE88.c)
 *     sub_14065F098 @ 0x14065F098 (sub_14065F098.c)
 *     sub_1406D5844 @ 0x1406D5844 (sub_1406D5844.c)
 */

__int64 __fastcall WbRemoveWarbirdProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *v9; // rax
  __int64 v10; // rax
  signed __int8 v11; // cf
  __int64 v12; // rbx
  char v13; // di
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v17 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_140C53CB8, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53CB8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140C53CB8, v3, (ULONG_PTR)&qword_140C53CB8);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  v4 = sub_14065F098(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53CB8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C53CB8);
  KeAbPostRelease((ULONG_PTR)&qword_140C53CB8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
  if ( v4 >= 0 )
  {
    v9 = KeGetCurrentThread();
    --v9->SpecialApcDisable;
    v10 = KeAbPreAcquire((ULONG_PTR)&qword_140C53CB8, 0LL, 0);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C53CB8, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&qword_140C53CB8, v10, (ULONG_PTR)&qword_140C53CB8);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v4 = sub_1406D5844((unsigned int)&qword_140C53C90, a1, 8, -1, (__int64)&v17);
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53CB8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C53CB8);
    KeAbPostRelease((ULONG_PTR)&qword_140C53CB8);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
    sub_14065EE88(v17);
  }
  return (unsigned int)v4;
}
