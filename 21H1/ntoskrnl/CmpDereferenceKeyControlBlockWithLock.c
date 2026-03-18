/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x1406C2C50
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpUnfreezeHive @ 0x14071CE04 (CmpUnfreezeHive.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14071F908 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpCleanupDiscardReplacePost @ 0x1408717B0 (CmpCleanupDiscardReplacePost.c)
 *     CmpCommitDiscardReplacePost @ 0x1408718A0 (CmpCommitDiscardReplacePost.c)
 *     CmpCommitRenameKeyUoW @ 0x14087A2A8 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087AB10 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087B404 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpCleanUpKcbCacheWithLock @ 0x14061C14C (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140659940 (CmpFreeKeyControlBlock.c)
 *     CmpDeleteHive @ 0x14065B4F8 (CmpDeleteHive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14069107C (CmpDoQueueLateUnloadWorker.c)
 *     CmpAddToDelayedClose @ 0x1406C2DA4 (CmpAddToDelayedClose.c)
 */

void __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v5; // rcx
  signed __int64 v7; // rdi
  int v8; // r9d
  bool v9; // dl
  bool v10; // r8
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax

  v5 = *(_QWORD *)(BugCheckParameter2 + 32);
  v7 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( v7 == 2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) == 0 || *(_BYTE *)(v5 + 2936) != 1 )
      return;
    CmpDoQueueLateUnloadWorker(v5);
  }
  if ( !v7 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 )
    {
      v11 = *(_QWORD *)(BugCheckParameter2 + 32);
      CmpCleanUpKcbCacheWithLock(BugCheckParameter2, a2);
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v11 + 160) |= 0x80u;
      *(_QWORD *)(v11 + 4216) = CurrentThread;
      *(_DWORD *)(v11 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 4276), 1u) & 0x7F) + 4280) = 31;
      if ( (*(_DWORD *)(v11 + 160) & 0x20) == 0
        && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 4272), 0xFFFFFFFF) == 1 )
      {
        CmpDeleteHive((_QWORD *)v11);
      }
    }
    else
    {
      v8 = *(_DWORD *)(BugCheckParameter2 + 8);
      v9 = 0;
      v10 = 0;
      if ( (v8 & 0x20000) == 0 )
        v9 = a3 == 0;
      if ( (v8 & 0x20) == 0 )
        v10 = v9;
      if ( CmpHoldLazyFlush
        && (*(_WORD *)(BugCheckParameter2 + 186) & 0x10) == 0
        && (*(_BYTE *)(BugCheckParameter2 + 8) & 8) == 0 )
      {
        v10 = 0;
      }
      if ( v10 )
      {
        CmpAddToDelayedClose(BugCheckParameter2);
      }
      else
      {
        CmpCleanUpKcbCacheWithLock(BugCheckParameter2, a2);
        if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread()
          && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
        {
          CmpFreeKeyControlBlock(BugCheckParameter2);
        }
      }
    }
  }
}
