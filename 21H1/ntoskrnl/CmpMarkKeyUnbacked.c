/*
 * XREFs of CmpMarkKeyUnbacked @ 0x140691E68
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
 *     CmpCleanUpKcbCachedSymlink @ 0x14061C108 (CmpCleanUpKcbCachedSymlink.c)
 */

__int64 __fastcall CmpMarkKeyUnbacked(__int64 a1)
{
  char v1; // al
  __int64 v3; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 40) = -1;
  v1 = 1;
  ++*(_QWORD *)(a1 + 304);
  v3 = *(_QWORD *)(a1 + 72);
  if ( !v3 || *(_BYTE *)(v3 + 65) != 3 )
    v1 = 0;
  *(_BYTE *)(a1 + 65) = v1;
  result = CmpCleanUpKcbCachedSymlink(a1);
  *(_DWORD *)(a1 + 100) = -1;
  *(_WORD *)(a1 + 186) &= 4u;
  *(_DWORD *)(a1 + 184) &= 0xFFFFFF00;
  *(_BYTE *)(a1 + 185) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  return result;
}
