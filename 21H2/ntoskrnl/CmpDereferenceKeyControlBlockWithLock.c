/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x1405F2A10
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     CmpTransMgrFreeVolatileData @ 0x140663F6C (CmpTransMgrFreeVolatileData.c)
 *     CmpUnfreezeHive @ 0x140730E04 (CmpUnfreezeHive.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140734C64 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpCleanupDiscardReplacePost @ 0x140876090 (CmpCleanupDiscardReplacePost.c)
 *     CmpCommitDiscardReplacePost @ 0x140876180 (CmpCommitDiscardReplacePost.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087F024 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087F924 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpDeleteHive @ 0x1405E0094 (CmpDeleteHive.c)
 *     CmpFreeKeyControlBlock @ 0x1405E0C60 (CmpFreeKeyControlBlock.c)
 *     CmpAddToDelayedClose @ 0x1405F2B64 (CmpAddToDelayedClose.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14066782C (CmpDoQueueLateUnloadWorker.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1406DDFD4 (CmpCleanUpKcbCacheWithLock.c)
 */

void __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v5; // rcx
  signed __int64 v6; // rdi
  int v7; // r9d
  bool v8; // dl
  bool v9; // r8
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rax

  v5 = *(_QWORD *)(BugCheckParameter2 + 32);
  v6 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( v6 == 2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) == 0 || *(_BYTE *)(v5 + 2936) != 1 )
      return;
    CmpDoQueueLateUnloadWorker();
  }
  if ( !v6 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 )
    {
      v10 = *(_QWORD *)(BugCheckParameter2 + 32);
      CmpCleanUpKcbCacheWithLock(BugCheckParameter2);
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v10 + 160) |= 0x80u;
      *(_QWORD *)(v10 + 4216) = CurrentThread;
      *(_DWORD *)(v10 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 4276), 1u) & 0x7F) + 4280) = 31;
      if ( (*(_DWORD *)(v10 + 160) & 0x20) == 0
        && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 4272), 0xFFFFFFFF) == 1 )
      {
        CmpDeleteHive((_QWORD *)v10);
      }
    }
    else
    {
      v7 = *(_DWORD *)(BugCheckParameter2 + 8);
      v8 = 0;
      v9 = 0;
      if ( (v7 & 0x20000) == 0 )
        v8 = a3 == 0;
      if ( (v7 & 0x20) == 0 )
        v9 = v8;
      if ( CmpHoldLazyFlush
        && (*(_WORD *)(BugCheckParameter2 + 186) & 0x10) == 0
        && (*(_BYTE *)(BugCheckParameter2 + 8) & 8) == 0 )
      {
        v9 = 0;
      }
      if ( v9 )
      {
        CmpAddToDelayedClose(BugCheckParameter2);
      }
      else
      {
        CmpCleanUpKcbCacheWithLock(BugCheckParameter2);
        if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread()
          && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
        {
          CmpFreeKeyControlBlock(BugCheckParameter2);
        }
      }
    }
  }
}
