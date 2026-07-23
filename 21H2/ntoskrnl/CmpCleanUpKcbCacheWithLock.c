/*
 * XREFs of CmpCleanUpKcbCacheWithLock @ 0x1406DDFD4
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x1405E0B60 (CmpCleanUpKCBCacheTable.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405F2A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDelayCloseWorker @ 0x1406DBAF0 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F334 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x140661668 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     CmpRemoveKeyHash @ 0x1406616C0 (CmpRemoveKeyHash.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140661844 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140661914 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406DDF90 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1406DE0FC (CmpDelayDerefKeyControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1406DF600 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpEtwDumpKcb @ 0x14086A7D8 (CmpEtwDumpKcb.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpCleanUpKcbCacheWithLock(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  ULONG_PTR v2; // rbp
  _QWORD *v4; // rcx
  ULONG_PTR v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax

  v2 = 0LL;
  if ( !*(_QWORD *)BugCheckParameter4 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      LOBYTE(a2) = 23;
      CmpEtwDumpKcb(BugCheckParameter4, a2);
    }
    CmpCleanUpKcbCachedSymlink(BugCheckParameter4);
    CmpDereferenceNameControlBlockWithLock(*(_QWORD *)(BugCheckParameter4 + 80));
    if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter4 + 112), 0x6E494D43u);
    v4 = *(_QWORD **)(BugCheckParameter4 + 192);
    if ( v4 )
    {
      v6 = v4[3];
      if ( v6 )
      {
        v7 = *v4;
        v2 = *(_QWORD *)(v6 + 16);
        if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v8 = (_QWORD *)v4[1], (_QWORD *)*v8 != v4) )
          __fastfail(3u);
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
      }
      ExFreePoolWithTag(v4, 0);
      *(_QWORD *)(BugCheckParameter4 + 192) = 0LL;
    }
    v5 = *(_QWORD *)(BugCheckParameter4 + 72);
    if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x20000) != 0 )
    {
      CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
      CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 32), (_DWORD *)(BugCheckParameter4 + 16));
      CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
    }
    else
    {
      CmpRemoveKeyHash(*(_QWORD *)(BugCheckParameter4 + 32), (_DWORD *)(BugCheckParameter4 + 16));
    }
    *(_DWORD *)(BugCheckParameter4 + 8) |= 0x80000u;
    if ( v2 )
      CmpDelayDerefKeyControlBlock(v2);
    if ( v5 )
      CmpDelayDerefKeyControlBlock(v5);
  }
}
