/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x14071B250
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x1402A21B0 (CmpTransEnlistUowInKcb.c)
 *     CmpCreateLayerLink @ 0x1406CAE28 (CmpCreateLayerLink.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1406DAD3C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406E93C0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14071B730 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpFindSubKeyByNumberEx @ 0x1407C3070 (CmpFindSubKeyByNumberEx.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140914914 (CmpResolveHiveLoadConflict.c)
 *     CmpGetVirtualStoreRoot @ 0x140917348 (CmpGetVirtualStoreRoot.c)
 *     CmpPrepareDiscardReplacePost @ 0x14091CFF0 (CmpPrepareDiscardReplacePost.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140923ED0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CmpRemoveFromDelayedClose @ 0x14069FB00 (CmpRemoveFromDelayedClose.c)
 */

void __fastcall CmpReferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
    KeBugCheckEx(0x51u, 0x20uLL, BugCheckParameter2, 0LL, 0LL);
  if ( !_InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2) )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 64) & 2) != 0 )
    CmpRemoveFromDelayedClose(BugCheckParameter2);
}
