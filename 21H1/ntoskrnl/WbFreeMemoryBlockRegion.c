/*
 * XREFs of WbFreeMemoryBlockRegion @ 0x14065C910
 * Callers:
 *     sub_14065C808 @ 0x14065C808 (sub_14065C808.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall WbFreeMemoryBlockRegion(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 i; // rcx
  __int64 v10; // rcx
  __int64 j; // r8
  char v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(a1 + 1072);
  v6 = KeAbPreAcquire(a1 + 1072, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = (unsigned __int64)(a2 - *(_QWORD *)(a1 + 32)) >> 6;
  if ( (_DWORD)v8 )
  {
    for ( i = (unsigned int)(v8 - 1); i >= 0; --i )
    {
      if ( *(_BYTE *)(i + a1 + 44) != 2 )
        break;
    }
    v10 = i + 1;
  }
  else
  {
    v10 = 0LL;
  }
  for ( j = (unsigned int)v8; *(_BYTE *)(j + a1 + 44) == 2; ++j )
    ;
  if ( v10 <= j )
    memset((void *)(a1 + v10 + 44), 0, j - v10 + 1);
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  return 0LL;
}
