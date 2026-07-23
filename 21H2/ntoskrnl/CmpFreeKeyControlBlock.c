/*
 * XREFs of CmpFreeKeyControlBlock @ 0x1405E0C60
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x1405E0B60 (CmpCleanUpKCBCacheTable.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405F2A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     DelistKeyBodyFromKCB @ 0x14065C750 (DelistKeyBodyFromKCB.c)
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x1406E30B0 (CmpUnlockTwoKcbs.c)
 *     CmEnumerateValueKey @ 0x1406E4650 (CmEnumerateValueKey.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1406E6E60 (CmQueryValueKey.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x14070A290 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 *     CmpCloneToUnbackedKcb @ 0x14086EC3C (CmpCloneToUnbackedKcb.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F334 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  ++dword_140CDB51C;
  if ( LOWORD(CmpKcbLookaside.Alignment) >= (unsigned __int16)word_140CDB510 )
  {
    ++dword_140CDB520;
    result = (PSLIST_ENTRY)((__int64 (__fastcall *)(ULONG_PTR, _SLIST_HEADER *))qword_140CDB538)(
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
