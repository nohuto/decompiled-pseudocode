/*
 * XREFs of VfCheckForLookaside @ 0x1409DE508
 * Callers:
 *     ExpCheckForLookaside @ 0x1405B14B8 (ExpCheckForLookaside.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14036F694 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1403702F0 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x14059D0CC (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x14059D104 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForLookaside(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR *v5; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( !ViLookasideInitialized )
    return 0LL;
  if ( !(unsigned int)VfPoolIsInternalFree() )
  {
    VfAvlInitializeLockContext((__int64)&v6, 1);
    v5 = (ULONG_PTR *)VfAvlLookupTreeNode(ViLookasideAvl, (__int64)&v6, BugCheckParameter3, a2);
    if ( v5 )
    {
      if ( (MmVerifierData & 0x800) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xCCuLL, *v5, BugCheckParameter3, a2);
    }
    VfAvlCleanupLockContext((__int64)&v6);
  }
  return 1LL;
}
