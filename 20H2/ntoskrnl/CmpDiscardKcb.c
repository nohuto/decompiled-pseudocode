/*
 * XREFs of CmpDiscardKcb @ 0x140701A1C
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402F2DB4 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmpCompleteUnloadKey @ 0x1406A2C9C (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x14072F5F8 (CmpCommitDeleteKeyUoW.c)
 *     CmpInvalidateSubtreeWorker @ 0x14076DE10 (CmpInvalidateSubtreeWorker.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x1408786E0 (CmpCommitDiscardReplacePost.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140878930 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x14087FEA0 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitRenameKeyUoW @ 0x140881108 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1408817B0 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x1408819A4 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x14067232C (CmpDelayDerefKeyControlBlock.c)
 *     CmpRemoveKeyHash @ 0x140701994 (CmpRemoveKeyHash.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140701B08 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140701BD8 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 */

__int64 __fastcall CmpDiscardKcb(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  ULONG_PTR v12; // rcx
  _QWORD *v13; // rdx

  v2 = *(_QWORD **)(BugCheckParameter4 + 192);
  if ( v2 )
  {
    v10 = v2[3];
    if ( v10 )
    {
      v11 = *v2;
      v12 = *(_QWORD *)(v10 + 16);
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v13 = (_QWORD *)v2[1], (_QWORD *)*v13 != v2) )
        __fastfail(3u);
      *v13 = v11;
      *(_QWORD *)(v11 + 8) = v13;
      *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 192) + 24LL) = 0LL;
      CmpDelayDerefKeyControlBlock(v12, a2);
    }
  }
  v5 = *(_QWORD *)(BugCheckParameter4 + 32);
  ++*(_QWORD *)(BugCheckParameter4 + 304);
  *(_DWORD *)(BugCheckParameter4 + 8) |= 0x20000u;
  *(_WORD *)(BugCheckParameter4 + 66) = 0;
  CmpRemoveKeyHash(v5, (_DWORD *)(BugCheckParameter4 + 16));
  CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
  v6 = *(_QWORD *)(BugCheckParameter4 + 32);
  v7 = *(_QWORD *)(v6 + 1656);
  v8 = 3
     * ((unsigned int)(*(_DWORD *)(v6 + 1664) - 1) & ((unsigned int)(101027
                                                                   * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9)));
  *(_QWORD *)(BugCheckParameter4 + 24) = *(_QWORD *)(v7
                                                   + 24
                                                   * ((unsigned int)(*(_DWORD *)(v6 + 1664) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9)))
                                                   + 16);
  *(_QWORD *)(v7 + 8 * v8 + 16) = BugCheckParameter4 + 16;
  return CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
}
