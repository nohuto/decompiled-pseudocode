/*
 * XREFs of ViRemLockFindSurrogate @ 0x1409D98C0
 * Callers:
 *     VerifierIoAcquireRemoveLockEx @ 0x1409D9440 (VerifierIoAcquireRemoveLockEx.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D94D0 (VerifierIoInitializeRemoveLockEx.c)
 *     VerifierIoReleaseRemoveLockAndWaitEx @ 0x1409D9640 (VerifierIoReleaseRemoveLockAndWaitEx.c)
 *     VerifierIoReleaseRemoveLockEx @ 0x1409D96B0 (VerifierIoReleaseRemoveLockEx.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1403715E4 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140372240 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1405A0BA4 (VfAvlInitializeLockContext.c)
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
