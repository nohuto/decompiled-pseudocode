/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x140719888
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x140360610 (CmpTransEnlistUowInKcb.c)
 *     CmpCreateLayerLink @ 0x1405D8378 (CmpCreateLayerLink.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405F35A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1406BCD00 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140734AA4 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140766570 (CmpFindSubkeyInHashByChildCell.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E724 (CmpResolveHiveLoadConflict.c)
 *     CmpGetVirtualStoreRoot @ 0x14087090C (CmpGetVirtualStoreRoot.c)
 *     CmpPrepareDiscardReplacePost @ 0x1408764A0 (CmpPrepareDiscardReplacePost.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087F7C4 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     CmpRemoveFromDelayedClose @ 0x140719BF0 (CmpRemoveFromDelayedClose.c)
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
