/*
 * XREFs of WbGetHeapExecutedBlock @ 0x14065F79C
 * Callers:
 *     WbHeapExecuteCall @ 0x14065FA50 (WbHeapExecuteCall.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x140241E40 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x14065D048 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14065D374 (WbAddHeapExecutedBlockToCache.c)
 *     WbCreateHeapExecutedBlock @ 0x14065E314 (WbCreateHeapExecutedBlock.c)
 *     sub_14065EE5C @ 0x14065EE5C (sub_14065EE5C.c)
 *     sub_14065F904 @ 0x14065F904 (sub_14065F904.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14065FC24 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 */

__int64 __fastcall WbGetHeapExecutedBlock(__int64 a1, __int64 a2, __int64 *a3)
{
  int v5; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  int v9; // edi
  __int64 v10; // rbx
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+88h] [rbp+58h] BYREF

  v5 = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 56);
  v14 = 0LL;
  v15 = 0LL;
  WbReleaseLeastRecentlyUsedHeapExecutedBlocks((unsigned __int64 *)a1, v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 48), v8, a1 + 48);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = sub_14065EE5C(a1, *(_QWORD *)(a2 + 272), &v14, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 == -1073741198 )
  {
    v12 = WbCreateHeapExecutedBlock(a1, a2, &v14);
    v10 = v14;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_11;
    v9 = WbAddHeapExecutedBlockToCache(a1, v14, &v15);
    if ( v9 < 0 )
      goto LABEL_11;
    v13 = v15;
    if ( v15 )
    {
      sub_14065F904(a1, v10);
      v10 = v13;
      v15 = 0LL;
    }
  }
  else
  {
    v10 = v14;
    if ( v9 < 0 )
      goto LABEL_11;
  }
  WbMoveHeapExecutedBlockToBackOfLRU(a1, v10);
  if ( a3 )
  {
    *a3 = v10;
    v10 = 0LL;
  }
LABEL_11:
  sub_14065F904(a1, v10);
  sub_14065F904(a1, v15);
  return (unsigned int)v9;
}
