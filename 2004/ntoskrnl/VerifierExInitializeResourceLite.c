/*
 * XREFs of VerifierExInitializeResourceLite @ 0x1409DF1F0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x14036F694 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x14036F6E0 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x14036F860 (VfAvlReserveNode.c)
 *     VfAvlDeleteTreeNode @ 0x140370234 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403702F0 (VfAvlLookupTreeNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140370540 (VfUtilFreePoolCheckIRQL.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     VfAvlInitializeLockContext @ 0x14059D104 (VfAvlInitializeLockContext.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C3AFC (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierExInitializeResourceLite(ULONG_PTR BugCheckParameter2)
{
  int v2; // ebp
  char *v3; // r14
  _SLIST_ENTRY *v4; // rdi
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  VfUtilSynchronizationObjectSanityChecks((PVOID)BugCheckParameter2, 0x68uLL);
  v2 = ((__int64 (__fastcall *)(ULONG_PTR))pXdvExInitializeResourceLite)(BugCheckParameter2);
  if ( v2 >= 0 )
  {
    if ( (MmVerifierData & 0x800) != 0 )
    {
      if ( !ViResourceInitialized )
        return (unsigned int)v2;
      v3 = VfAvlReserveNode(&ViResourceAvl, BugCheckParameter2, 0LL);
      if ( !v3 )
        goto LABEL_4;
      v4 = 0LL;
      VfAvlInitializeLockContext((__int64)&v6, 0);
      if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v6, BugCheckParameter2, 0LL) )
      {
        if ( !ViResourcesAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
          VerifierBugCheckIfAppropriate(0xC4u, 0xD0uLL, BugCheckParameter2, 0LL, 0LL);
        _InterlockedAdd(&ViResourceStaleNodes, 1u);
        v4 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViResourceAvl, (__int64)&v6, BugCheckParameter2, 0LL);
      }
      VfAvlInsertReservedTreeNode((__int64)&ViResourceAvl, (__int64)&v6, v3);
      VfAvlCleanupLockContext((__int64)&v6);
      if ( v4 )
      {
        if ( dword_140D48398 == 1 )
          ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v4);
        else
          VfUtilFreePoolCheckIRQL(v4);
      }
    }
    else if ( !ViResourceNotTracked )
    {
LABEL_4:
      _InterlockedExchange(&ViResourceNotTracked, 1);
    }
  }
  return (unsigned int)v2;
}
