/*
 * XREFs of WbAllocateSlots @ 0x14065BFB4
 * Callers:
 *     sub_14065BF18 @ 0x14065BF18 (sub_14065BF18.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     memset @ 0x140408F80 (memset.c)
 *     sub_14065C18C @ 0x14065C18C (sub_14065C18C.c)
 */

__int64 __fastcall WbAllocateSlots(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // rbx
  __int64 v11; // rsi
  signed __int64 v12; // r11
  unsigned int v13; // r10d
  _BYTE *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTHREAD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  char v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9

  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v10 = (unsigned __int64 *)(a1 + 1072);
  v11 = KeAbPreAcquire(a1 + 1072, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, v11, (ULONG_PTR)v10);
  v12 = 0LL;
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v13 = a3 + 1;
  while ( 1 )
  {
    if ( a2 >= v13 )
    {
LABEL_10:
      a2 = -1;
    }
    else
    {
      v14 = (_BYTE *)(a2 + a1 + 44);
      while ( *v14 != (_BYTE)v12 )
      {
        ++a2;
        ++v14;
        if ( a2 >= v13 )
          goto LABEL_10;
      }
    }
    if ( a2 == -1 )
      break;
    v15 = sub_14065C18C(a1, a2 + 1, a4 - 1);
    if ( v15 == -1 )
      break;
    a2 = v15 + 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, v12, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
  if ( a2 != -1 )
  {
    v19 = KeGetCurrentThread();
    --v19->SpecialApcDisable;
    v20 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
    v21 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v20, (ULONG_PTR)v10);
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
    if ( (unsigned int)sub_14065C18C(a1, a2, a4) == -1 )
    {
      v4 = *(_QWORD *)(a1 + 32) + (a2 << 6);
      if ( a4 )
        memset((void *)(a1 + a2 + 44LL), 2, a4 - 1);
      *(_BYTE *)(a2 + a4 - 1 + a1 + 44) = 1;
    }
    v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v22 & 2) != 0 && (v22 & 4) == 0 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
  }
  return v4;
}
