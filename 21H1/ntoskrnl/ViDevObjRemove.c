/*
 * XREFs of ViDevObjRemove @ 0x1409D32DC
 * Callers:
 *     VfIoDeleteDevice @ 0x1409D30D4 (VfIoDeleteDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x14036EA64 (VfAvlCleanupLockContext.c)
 *     VfAvlDeleteTreeNode @ 0x14036F604 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14036F6C0 (VfAvlLookupTreeNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14036F910 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlInitializeLockContext @ 0x14059CA14 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD34 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViDevObjRemove(ULONG_PTR BugCheckParameter2)
{
  _SLIST_ENTRY *v2; // rbx
  _DWORD *v3; // rax
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( ViDevObjInitialized )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)&v4, 0);
    v3 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v4, BugCheckParameter2, 0LL);
    if ( v3 )
    {
      if ( (v3[4] & 1) != 0 && (MmVerifierData & 0x800) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xDBuLL, BugCheckParameter2, 0LL, 0LL);
      v2 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViDevObjAvl, (__int64)&v4, BugCheckParameter2, 0LL);
    }
    VfAvlCleanupLockContext((__int64)&v4);
    if ( v2 )
    {
      if ( dword_140D48548 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}
