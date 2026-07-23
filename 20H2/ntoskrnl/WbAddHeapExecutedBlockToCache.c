/*
 * XREFs of WbAddHeapExecutedBlockToCache @ 0x14065D374
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14065F79C (WbGetHeapExecutedBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     sub_14065D248 @ 0x14065D248 (sub_14065D248.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14065D488 (WbAddHeapExecutedBlockToLRU.c)
 *     sub_14065EE5C @ 0x14065EE5C (sub_14065EE5C.c)
 *     sub_14065FE70 @ 0x14065FE70 (sub_14065FE70.c)
 */

__int64 __fastcall WbAddHeapExecutedBlockToCache(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r8
  int v12; // ebx
  char v13; // bp
  int v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v15 = 0;
  v16 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 48);
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = sub_14065EE5C(a1, *(_QWORD *)(a2 + 48), &v16, &v15);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a3 )
      *a3 = v16;
  }
  else if ( v10 == -1073741198 )
  {
    v12 = sub_14065D248(a1 + 8, a2, v11, *(_QWORD *)(a2 + 48), 8, v15);
    if ( v12 >= 0 )
    {
      v12 = sub_14065FE70(a2);
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
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
