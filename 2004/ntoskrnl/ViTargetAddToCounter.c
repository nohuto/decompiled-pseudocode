/*
 * XREFs of ViTargetAddToCounter @ 0x1409D42A0
 * Callers:
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1409E3260 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1409E3400 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1409E34F0 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmFreePagesFromMdl @ 0x1409E38E0 (VerifierMmFreePagesFromMdl.c)
 *     VerifierMmMapIoSpace @ 0x1409E3980 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1409E3AF0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E3BD0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1409E3DB0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1409E3EA0 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x1409E3FE0 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x1409E4120 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x1409E41B0 (VerifierMmUnmapLockedPages.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14036F694 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1403702F0 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14059D104 (VfAvlInitializeLockContext.c)
 *     ViTargetUpdateTreeAllowed @ 0x1409D47B8 (ViTargetUpdateTreeAllowed.c)
 */

char __fastcall ViTargetAddToCounter(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  int updated; // eax
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  volatile signed __int64 *v13; // rcx
  volatile signed __int64 v14; // rtt
  _OWORD v16[2]; // [rsp+28h] [rbp-20h] BYREF

  v4 = a3;
  v16[0] = 0LL;
  v6 = (unsigned int)a2;
  updated = ViTargetUpdateTreeAllowed(a1, a2, a1);
  if ( updated )
  {
    VfAvlInitializeLockContext((__int64)v16, 1);
    v10 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v16, v8, v9);
    if ( v10 )
    {
      v11 = v10[7];
      if ( v11 )
      {
        v12 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + v11), a4);
        v13 = (volatile signed __int64 *)(v11 + v4);
        do
        {
          if ( *v13 > v12 )
            break;
          v14 = *v13;
        }
        while ( v14 != _InterlockedCompareExchange64(v13, v12, *v13) );
      }
    }
    LOBYTE(updated) = VfAvlCleanupLockContext((__int64)v16);
  }
  return updated;
}
