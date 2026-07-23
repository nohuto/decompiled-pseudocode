/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x140672D2C
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1406723D0 (CmpCreateKeyControlBlock.c)
 *     CmpCloneToUnbackedKcb @ 0x1408712D4 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 */

PSLIST_ENTRY CmpAllocateKeyControlBlock()
{
  PSLIST_ENTRY v0; // rbx

  _InterlockedIncrement64(&CmPerfCounters);
  ++dword_140CDB154;
  v0 = RtlpInterlockedPopEntrySList(&CmpKcbLookaside);
  if ( v0
    || (++dword_140CDB158,
        (v0 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_140CDB170)(
                              (unsigned int)dword_140CDB164,
                              (unsigned int)dword_140CDB16C,
                              (unsigned int)dword_140CDB168,
                              &CmpKcbLookaside)) != 0LL) )
  {
    _InterlockedIncrement64(qword_140D2EFA0);
    memset(v0, 0, 0x138uLL);
  }
  return v0;
}
