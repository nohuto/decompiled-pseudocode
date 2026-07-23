/*
 * XREFs of WbRemoveWarbirdProcess @ 0x14065ED00
 * Callers:
 *     WbDispatchOperation @ 0x14065F0D4 (WbDispatchOperation.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140241E40 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     sub_14065D1C4 @ 0x14065D1C4 (sub_14065D1C4.c)
 *     sub_14065F2BC @ 0x14065F2BC (sub_14065F2BC.c)
 *     sub_14065F4CC @ 0x14065F4CC (sub_14065F4CC.c)
 */

__int64 __fastcall WbRemoveWarbirdProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  int v4; // ebx
  struct _KTHREAD *v6; // rax
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rbx
  char v10; // di
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_140C53C38, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53C38, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140C53C38, v3, (ULONG_PTR)&qword_140C53C38);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  v4 = sub_14065F4CC(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53C38, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C53C38);
  KeAbPostRelease((ULONG_PTR)&qword_140C53C38);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 >= 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->SpecialApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&qword_140C53C38, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C53C38, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_140C53C38, v7, (ULONG_PTR)&qword_140C53C38);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v4 = sub_14065D1C4((__int64)&qword_140C53C10, a1, 8, -1, (__int64)&v11);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53C38, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C53C38);
    KeAbPostRelease((ULONG_PTR)&qword_140C53C38);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    sub_14065F2BC(v11);
  }
  return (unsigned int)v4;
}
