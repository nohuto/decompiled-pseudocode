/*
 * XREFs of WbGetHeapExecutedBlock @ 0x14065F368
 * Callers:
 *     WbHeapExecuteCall @ 0x14065F61C (WbHeapExecuteCall.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     WbCreateHeapExecutedBlock @ 0x14065CA04 (WbCreateHeapExecutedBlock.c)
 *     sub_14065EA28 @ 0x14065EA28 (sub_14065EA28.c)
 *     sub_14065F4D0 @ 0x14065F4D0 (sub_14065F4D0.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14065F7F0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406D56C8 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406D6A70 (WbAddHeapExecutedBlockToCache.c)
 */

__int64 __fastcall WbGetHeapExecutedBlock(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF
  __int64 v18; // [rsp+88h] [rbp+58h] BYREF

  v5 = (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 56));
  v17 = 0LL;
  v18 = 0LL;
  WbReleaseLeastRecentlyUsedHeapExecutedBlocks(a1, v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 48), v8, a1 + 48);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = sub_14065EA28(a1, *(_QWORD *)(a2 + 272), &v17, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  if ( v9 == -1073741198 )
  {
    v15 = WbCreateHeapExecutedBlock(a1, a2, &v17);
    v13 = v17;
    v9 = v15;
    if ( v15 < 0 )
      goto LABEL_11;
    v9 = WbAddHeapExecutedBlockToCache(a1, v17, &v18);
    if ( v9 < 0 )
      goto LABEL_11;
    v16 = v18;
    if ( v18 )
    {
      sub_14065F4D0(a1, v13);
      v13 = v16;
      v18 = 0LL;
    }
  }
  else
  {
    v13 = v17;
    if ( v9 < 0 )
      goto LABEL_11;
  }
  WbMoveHeapExecutedBlockToBackOfLRU(a1, v13);
  if ( a3 )
  {
    *a3 = v13;
    v13 = 0LL;
  }
LABEL_11:
  sub_14065F4D0(a1, v13);
  sub_14065F4D0(a1, v18);
  return (unsigned int)v9;
}
