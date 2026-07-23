/*
 * XREFs of ViDevObjRemove @ 0x1409D935C
 * Callers:
 *     VfIoDeleteDevice @ 0x1409D9154 (VfIoDeleteDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14020B100 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1403715E4 (VfAvlCleanupLockContext.c)
 *     VfAvlDeleteTreeNode @ 0x140372184 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140372240 (VfAvlLookupTreeNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140372490 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlInitializeLockContext @ 0x1405A0BA4 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
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
      if ( dword_140D4B520 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}
