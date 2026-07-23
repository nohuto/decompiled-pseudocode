/*
 * XREFs of sub_14065C808 @ 0x14065C808
 * Callers:
 *     sub_14065F4D0 @ 0x14065F4D0 (sub_14065F4D0.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     WbFreeMemoryBlockRegion @ 0x14065C910 (WbFreeMemoryBlockRegion.c)
 *     sub_14065F0FC @ 0x14065F0FC (sub_14065F0FC.c)
 */

__int64 __fastcall sub_14065C808(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  unsigned __int64 *v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h]
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v15 = 0LL;
  v4 = a1;
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(a1 + 224);
  v6 = KeAbPreAcquire(a1 + 224, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, v6, (ULONG_PTR)v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v16 = 0LL;
  v7 = sub_14065F0FC(v4 + 184, a2, 8, (unsigned int)&v16, (__int64)&v14);
  v8 = v15;
  v9 = v7;
  if ( v7 >= 0 )
    v8 = v16;
  v15 = v8;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  if ( v9 >= 0 )
    return (unsigned int)WbFreeMemoryBlockRegion(v15, a2);
  return (unsigned int)v9;
}
