/*
 * XREFs of VfTargetDriversEnableVerifier @ 0x1409D9DA4
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1409DCBA8 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1403715E4 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140372240 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1405A0BA4 (VfAvlInitializeLockContext.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1409DA360 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversEnableVerifier(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *VerifiedData; // rdi
  _QWORD *v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v7 = 0LL;
  if ( !VfSafeMode )
  {
    if ( ViTargetInitialized )
    {
      VerifiedData = (void *)ViTargetDriversAllocateVerifiedData(a2);
      if ( VerifiedData )
      {
        VfAvlInitializeLockContext((__int64)&v7, 0);
        v5 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v7, a1, 1LL);
        if ( v5 )
        {
          v5[7] = VerifiedData;
          v2 = 1;
          ++dword_140C1CF48;
        }
        VfAvlCleanupLockContext((__int64)&v7);
        if ( !v2 )
          ExFreePoolWithTag(VerifiedData, 0x44566656u);
      }
    }
  }
  return v2;
}
