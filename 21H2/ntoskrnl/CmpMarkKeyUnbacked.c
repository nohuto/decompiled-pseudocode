/*
 * XREFs of CmpMarkKeyUnbacked @ 0x14067EDC0
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402089E0 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmpCompleteUnloadKey @ 0x14067BE48 (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x1406E8680 (CmpInvalidateSubtreeWorker.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071BC94 (CmpTransMgrFreeVolatileData.c)
 *     CmpRefreshWorkerRoutine @ 0x14090DEF0 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitDiscardReplacePost @ 0x14091CBB0 (CmpCommitDiscardReplacePost.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x14091CE30 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1409237B4 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x1409239EC (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpCleanUpKcbCachedSymlink @ 0x14071EE7C (CmpCleanUpKcbCachedSymlink.c)
 */

__int64 __fastcall CmpMarkKeyUnbacked(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v4; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 40) = -1;
  v2 = 1;
  ++*(_QWORD *)(a1 + 304);
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v4 || *(_BYTE *)(v4 + 65) != 3 )
    v2 = 0;
  *(_BYTE *)(a1 + 65) = v2;
  result = CmpCleanUpKcbCachedSymlink(a1, a2);
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
