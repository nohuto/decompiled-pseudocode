/*
 * XREFs of ViTargetTrackContiguousMemory @ 0x1409D46A0
 * Callers:
 *     VerifierMmAllocateContiguousMemory @ 0x1409E2DD0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1409E2EC0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1409E2FE0 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E3100 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x1409E3380 (VerifierMmAllocateNonCachedMemory.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14036F694 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1403702F0 (VfAvlLookupTreeNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140370540 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlInitializeLockContext @ 0x14059D104 (VfAvlInitializeLockContext.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 *     ViTargetUpdateTreeAllowed @ 0x1409D47B8 (ViTargetUpdateTreeAllowed.c)
 */

char __fastcall ViTargetTrackContiguousMemory(unsigned __int64 a1, _SLIST_ENTRY *a2, __int64 a3)
{
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v7; // rbx
  int v8; // esi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  _SLIST_ENTRY **v13; // rax
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF

  v15 = 0LL;
  LODWORD(PoolWithTag) = ViTargetUpdateTreeAllowed(a1, a2, a3);
  if ( (_DWORD)PoolWithTag )
  {
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x61436656u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[1].Next = a2;
      *((_QWORD *)&PoolWithTag[1].Next + 1) = a3;
      v8 = 0;
      PoolWithTag[2].Next = (_SLIST_ENTRY *)a1;
      VfAvlInitializeLockContext((__int64)&v15, 0);
      v9 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v15, a1, 1LL);
      if ( v9 )
      {
        v10 = v9[7];
        if ( v10 )
        {
          qword_140C1D110 += a3;
          v11 = a3 + *(_QWORD *)(v10 + 240);
          *(_QWORD *)(v10 + 240) = v11;
          if ( *(_QWORD *)(v10 + 248) < v11 )
            *(_QWORD *)(v10 + 248) = v11;
          v12 = v10 + 256;
          v13 = *(_SLIST_ENTRY ***)(v12 + 8);
          if ( *v13 != (_SLIST_ENTRY *)v12 )
            __fastfail(3u);
          v7->Next = (_SLIST_ENTRY *)v12;
          v8 = 1;
          *((_QWORD *)&v7->Next + 1) = v13;
          *v13 = v7;
          *(_QWORD *)(v12 + 8) = v7;
        }
      }
      LOBYTE(PoolWithTag) = VfAvlCleanupLockContext((__int64)&v15);
      if ( !v8 )
        LOBYTE(PoolWithTag) = VfUtilFreePoolCheckIRQL(v7);
    }
  }
  return (char)PoolWithTag;
}
