/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x1406A364C
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x1402F30C0 (CmpTransEnlistUowInKcb.c)
 *     CmpCreateLayerLink @ 0x1405D53EC (CmpCreateLayerLink.c)
 *     CmpFindSubKeyByNumberEx @ 0x140676250 (CmpFindSubKeyByNumberEx.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1406A1D90 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14072F7B8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140762F80 (CmpFindSubkeyInHashByChildCell.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140870F1C (CmpResolveHiveLoadConflict.c)
 *     CmpGetVirtualStoreRoot @ 0x1408730DC (CmpGetVirtualStoreRoot.c)
 *     CmpPrepareDiscardReplacePost @ 0x140878B30 (CmpPrepareDiscardReplacePost.c)
 *     CmpCommitRenameKeyUoW @ 0x140881108 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408822AC (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     CmpRemoveFromDelayedClose @ 0x1406A39B0 (CmpRemoveFromDelayedClose.c)
 */

__int64 __fastcall CmpReferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
    KeBugCheckEx(0x51u, 0x20uLL, BugCheckParameter2, 0LL, 0LL);
  if ( !_InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2) )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 64) & 2) != 0 )
    return CmpRemoveFromDelayedClose();
  return result;
}
