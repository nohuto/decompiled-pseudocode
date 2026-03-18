/*
 * XREFs of CmpMarkKeyUnbacked @ 0x140644960
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
 *     CmpCleanUpKcbCachedSymlink @ 0x1405E6AE8 (CmpCleanUpKcbCachedSymlink.c)
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
