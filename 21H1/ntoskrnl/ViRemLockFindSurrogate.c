/*
 * XREFs of ViRemLockFindSurrogate @ 0x1409D3840
 * Callers:
 *     VerifierIoAcquireRemoveLockEx @ 0x1409D33C0 (VerifierIoAcquireRemoveLockEx.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D3450 (VerifierIoInitializeRemoveLockEx.c)
 *     VerifierIoReleaseRemoveLockAndWaitEx @ 0x1409D35C0 (VerifierIoReleaseRemoveLockAndWaitEx.c)
 *     VerifierIoReleaseRemoveLockEx @ 0x1409D3630 (VerifierIoReleaseRemoveLockEx.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14036EA64 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14036F6C0 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14059CA14 (VfAvlInitializeLockContext.c)
 */

PVOID ViRemLockFindSurrogate()
{
  int v0; // edx
  unsigned __int64 v1; // r8
  PVOID v2; // rbx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  VfAvlInitializeLockContext((__int64)&v4, 1);
  v2 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)&v4, v1, (unsigned int)(v0 + 31));
  VfAvlCleanupLockContext((__int64)&v4);
  return v2;
}
