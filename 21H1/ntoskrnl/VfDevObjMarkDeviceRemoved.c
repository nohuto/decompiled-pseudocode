/*
 * XREFs of VfDevObjMarkDeviceRemoved @ 0x1409D2FD8
 * Callers:
 *     IovpCallDriver1 @ 0x1409CCC2C (IovpCallDriver1.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14036EA64 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14036F6C0 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14059CA14 (VfAvlInitializeLockContext.c)
 */

char VfDevObjMarkDeviceRemoved()
{
  char result; // al
  unsigned __int64 v1; // r8
  volatile signed __int32 *v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  result = MmVerifierData;
  v3 = 0LL;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    VfAvlInitializeLockContext((__int64)&v3, 1);
    v2 = (volatile signed __int32 *)VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v3, v1, 0LL);
    if ( v2 )
      _InterlockedOr(v2 + 4, 2u);
    return VfAvlCleanupLockContext((__int64)&v3);
  }
  return result;
}
