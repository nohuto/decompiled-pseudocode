/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x140652A3C
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x1402787F0 (CmpTransEnlistUowInKcb.c)
 *     CmpCreateLayerLink @ 0x1405CEF48 (CmpCreateLayerLink.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x14064FD5C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpFindSubKeyByNumberEx @ 0x140671DE0 (CmpFindSubKeyByNumberEx.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407217C8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140754340 (CmpFindSubkeyInHashByChildCell.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x14086B4C8 (CmpResolveHiveLoadConflict.c)
 *     CmpPrepareDiscardReplacePost @ 0x140872FE0 (CmpPrepareDiscardReplacePost.c)
 *     CmpCommitRenameKeyUoW @ 0x14087B598 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087C6F4 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     CmpRemoveFromDelayedClose @ 0x140652DA0 (CmpRemoveFromDelayedClose.c)
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
