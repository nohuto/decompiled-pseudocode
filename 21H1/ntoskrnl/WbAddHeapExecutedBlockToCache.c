/*
 * XREFs of WbAddHeapExecutedBlockToCache @ 0x1406D6A70
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14065F368 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     sub_14065EA28 @ 0x14065EA28 (sub_14065EA28.c)
 *     sub_14065FA3C @ 0x14065FA3C (sub_14065FA3C.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1406D6B84 (WbAddHeapExecutedBlockToLRU.c)
 *     sub_1406D6C54 @ 0x1406D6C54 (sub_1406D6C54.c)
 */

__int64 __fastcall WbAddHeapExecutedBlockToCache(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // r8d
  int v12; // ebx
  char v13; // bp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v18 = 0;
  v19 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 48);
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = sub_14065EA28(a1, *(_QWORD *)(a2 + 48), &v19, (__int64)&v18);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a3 )
      *a3 = v19;
  }
  else if ( v10 == -1073741198 )
  {
    v12 = sub_1406D6C54((int)a1 + 8, a2, v11, *(_QWORD *)(a2 + 48), 8, v18);
    if ( v12 >= 0 )
    {
      v12 = sub_14065FA3C(a2);
      if ( v12 >= 0 )
      {
        if ( a3 )
          *a3 = 0LL;
        v12 = WbAddHeapExecutedBlockToLRU(a1, a2);
      }
    }
  }
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
  return (unsigned int)v12;
}
