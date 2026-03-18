/*
 * XREFs of CmpDiscardKcb @ 0x1406447A4
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14027262C (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1404E7EF8 (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140642ECC (CmpTransMgrFreeVolatileData.c)
 *     CmpCompleteUnloadKey @ 0x14064364C (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x140721608 (CmpCommitDeleteKeyUoW.c)
 *     CmpInvalidateSubtreeWorker @ 0x14075F7A0 (CmpInvalidateSubtreeWorker.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140872B90 (CmpCommitDiscardReplacePost.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140872DE0 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x14087A330 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitRenameKeyUoW @ 0x14087B598 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14087BC0C (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087BE00 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1405DC07C (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1405E6C54 (CmpDelayDerefKeyControlBlock.c)
 *     CmpRemoveKeyHash @ 0x14064471C (CmpRemoveKeyHash.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140644890 (CmpUnlockDeletedHashEntryByKcb.c)
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
