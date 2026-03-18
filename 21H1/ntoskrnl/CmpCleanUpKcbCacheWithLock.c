/*
 * XREFs of CmpCleanUpKcbCacheWithLock @ 0x14061C14C
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKCBCacheTable @ 0x140659840 (CmpCleanUpKCBCacheTable.c)
 *     CmpDelayCloseWorker @ 0x140695A00 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C2C50 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086ABD4 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpCleanUpKcbCachedSymlink @ 0x14061C108 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14061C274 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x14061D680 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x1406938FC (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     CmpRemoveKeyHash @ 0x140693954 (CmpRemoveKeyHash.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140693AC8 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140693C54 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpEtwDumpKcb @ 0x140865D08 (CmpEtwDumpKcb.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

_UNKNOWN **__fastcall CmpCleanUpKcbCacheWithLock(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v3; // rbp
  _QWORD *v5; // rcx
  ULONG_PTR v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = 0LL;
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
    v5 = *(_QWORD **)(BugCheckParameter4 + 192);
    if ( v5 )
    {
      v7 = v5[3];
      if ( v7 )
      {
        v8 = *v5;
        v3 = *(_QWORD *)(v7 + 16);
        if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v9 = (_QWORD *)v5[1], (_QWORD *)*v9 != v5) )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
      }
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(BugCheckParameter4 + 192) = 0LL;
    }
    v6 = *(_QWORD *)(BugCheckParameter4 + 72);
    if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x20000) != 0 )
    {
      CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
      CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 32), BugCheckParameter4 + 16);
      result = (_UNKNOWN **)CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
    }
    else
    {
      result = (_UNKNOWN **)CmpRemoveKeyHash(*(_QWORD *)(BugCheckParameter4 + 32), BugCheckParameter4 + 16);
    }
    *(_DWORD *)(BugCheckParameter4 + 8) |= 0x80000u;
    if ( v3 )
      result = (_UNKNOWN **)CmpDelayDerefKeyControlBlock(v3);
    if ( v6 )
      return (_UNKNOWN **)CmpDelayDerefKeyControlBlock(v6);
  }
  return result;
}
