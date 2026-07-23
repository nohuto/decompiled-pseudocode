/*
 * XREFs of WbGetHeapExecutedBlock @ 0x140619C48
 * Callers:
 *     WbHeapExecuteCall @ 0x140619EFC (WbHeapExecuteCall.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402743C0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     sub_140619308 @ 0x140619308 (sub_140619308.c)
 *     sub_140619DB0 @ 0x140619DB0 (sub_140619DB0.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x14061A0D0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbCreateHeapExecutedBlock @ 0x1406D8EB0 (WbCreateHeapExecutedBlock.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406DA080 (WbAddHeapExecutedBlockToCache.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406F8B48 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 */

__int64 __fastcall WbGetHeapExecutedBlock(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  int v9; // edi
  __int64 v10; // rbx
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+88h] [rbp+58h] BYREF

  v5 = (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 56));
  v14 = 0LL;
  v15 = 0LL;
  WbReleaseLeastRecentlyUsedHeapExecutedBlocks(a1, v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 48), v8, a1 + 48);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = sub_140619308(a1, *(_QWORD *)(a2 + 272), &v14, 0LL);
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
      sub_140619DB0(a1, v10);
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
  sub_140619DB0(a1, v10);
  sub_140619DB0(a1, v15);
  return (unsigned int)v9;
}
