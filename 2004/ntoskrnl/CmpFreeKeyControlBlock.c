/*
 * XREFs of CmpFreeKeyControlBlock @ 0x140652CD0
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1405E7810 (CmpCreateKeyControlBlock.c)
 *     CmEnumerateValueKey @ 0x1405E9400 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     DelistKeyBodyFromKCB @ 0x1405ED3B0 (DelistKeyBodyFromKCB.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcbStack @ 0x1405F0B30 (CmpUnlockKcbStack.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1405F0F80 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpCleanUpKCBCacheTable @ 0x140652BC8 (CmpCleanUpKCBCacheTable.c)
 *     CmpUnlockTwoKcbs @ 0x140672190 (CmpUnlockTwoKcbs.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406E31D0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCloneToUnbackedKcb @ 0x14086B84C (CmpCloneToUnbackedKcb.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086BF24 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402036B8 (CmpFreeTransientPoolWithTag.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall CmpFreeKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx
  unsigned __int64 v3; // rcx
  PSLIST_ENTRY result; // rax

  _InterlockedDecrement64(&CmPerfCounters);
  if ( *(_QWORD *)(BugCheckParameter2 + 120) != BugCheckParameter2 + 120 )
    KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x10000) != 0 )
    KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 1uLL, 0LL);
  v2 = *(void **)(BugCheckParameter2 + 200);
  if ( (unsigned __int64)v2 >= 2 )
    ExFreePoolWithTag(v2, 0x624E4D43u);
  v3 = *(_QWORD *)(BugCheckParameter2 + 296);
  if ( (v3 & 1) != 0 )
    v3 &= ~1uLL;
  if ( v3 )
    CmpFreeTransientPoolWithTag((void *)v3, 0x624E4D43u);
  *(_DWORD *)(BugCheckParameter2 + 8) |= 0x10000u;
  *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  ++dword_140CDB0DC;
  if ( LOWORD(CmpKcbLookaside.Alignment) >= (unsigned __int16)word_140CDB0D0 )
  {
    ++dword_140CDB0E0;
    result = (PSLIST_ENTRY)((__int64 (__fastcall *)(ULONG_PTR, _SLIST_HEADER *))qword_140CDB0F8)(
                             BugCheckParameter2,
                             &CmpKcbLookaside);
  }
  else
  {
    result = RtlpInterlockedPushEntrySList(&CmpKcbLookaside, (PSLIST_ENTRY)BugCheckParameter2);
  }
  _InterlockedDecrement64(qword_140D2EFA0);
  return result;
}
