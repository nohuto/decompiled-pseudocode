/*
 * XREFs of CmpDiscardKcb @ 0x1406939DC
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402D2EA0 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     CmpCompleteUnloadKey @ 0x14065AE8C (CmpCompleteUnloadKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x14071F748 (CmpCommitDeleteKeyUoW.c)
 *     CmpInvalidateSubtreeWorker @ 0x14075D4F0 (CmpInvalidateSubtreeWorker.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x1408718A0 (CmpCommitDiscardReplacePost.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140871AF0 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x140879040 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitRenameKeyUoW @ 0x14087A2A8 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14087A91C (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087AB10 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x14061C274 (CmpDelayDerefKeyControlBlock.c)
 *     CmpRemoveKeyHash @ 0x140693954 (CmpRemoveKeyHash.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140693AC8 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140693C54 (CmpLockDeletedHashEntryExclusiveByKcb.c)
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
