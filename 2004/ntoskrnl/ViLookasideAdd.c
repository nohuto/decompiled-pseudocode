/*
 * XREFs of ViLookasideAdd @ 0x1409DE5A4
 * Callers:
 *     VerifierExInitializeLookasideListEx @ 0x1409DE190 (VerifierExInitializeLookasideListEx.c)
 *     ViLookasideTrackList @ 0x1409DE7AC (ViLookasideTrackList.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x14036F694 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x14036F6E0 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x14036F860 (VfAvlReserveNode.c)
 *     VfAvlDeleteTreeNode @ 0x140370234 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403702F0 (VfAvlLookupTreeNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140370540 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlInitializeLockContext @ 0x14059D104 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViLookasideAdd(ULONG_PTR BugCheckParameter2)
{
  char *v2; // rsi
  _SLIST_ENTRY *v3; // rbx
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( ViLookasideInitialized )
  {
    v2 = VfAvlReserveNode(ViLookasideAvl, BugCheckParameter2, 0LL);
    if ( v2 )
    {
      v3 = 0LL;
      VfAvlInitializeLockContext((__int64)&v4, 0);
      if ( VfAvlLookupTreeNode(ViLookasideAvl, (__int64)&v4, BugCheckParameter2, 0LL) )
      {
        if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
          VerifierBugCheckIfAppropriate(0xC4u, 0xCAuLL, BugCheckParameter2, 0LL, 0LL);
        v3 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViLookasideAvl, (__int64)&v4, BugCheckParameter2, 0LL);
      }
      VfAvlInsertReservedTreeNode((__int64)ViLookasideAvl, (__int64)&v4, v2);
      VfAvlCleanupLockContext((__int64)&v4);
      if ( v3 )
      {
        if ( dword_140D494F8 == 1 )
          ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
        else
          VfUtilFreePoolCheckIRQL(v3);
      }
    }
    else
    {
      _InterlockedExchange(&ViLookasideAllocationFailures, 1);
    }
  }
}
