/*
 * XREFs of WbRemoveWarbirdProcess @ 0x1406191AC
 * Callers:
 *     WbDispatchOperation @ 0x140619580 (WbDispatchOperation.c)
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402743C0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     sub_140619768 @ 0x140619768 (sub_140619768.c)
 *     sub_140619978 @ 0x140619978 (sub_140619978.c)
 *     sub_1406F8CC4 @ 0x1406F8CC4 (sub_1406F8CC4.c)
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
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_140C53BB8, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53BB8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140C53BB8, v3, (ULONG_PTR)&qword_140C53BB8);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  v4 = sub_140619978(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C53BB8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C53BB8);
  KeAbPostRelease((ULONG_PTR)&qword_140C53BB8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 >= 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->SpecialApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&qword_140C53BB8, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C53BB8, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_140C53BB8, v7, (ULONG_PTR)&qword_140C53BB8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v4 = sub_1406F8CC4((unsigned int)&qword_140C53B90, a1, 8, -1, (__int64)&v11);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53BB8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C53BB8);
    KeAbPostRelease((ULONG_PTR)&qword_140C53BB8);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    sub_140619768(v11);
  }
  return (unsigned int)v4;
}
