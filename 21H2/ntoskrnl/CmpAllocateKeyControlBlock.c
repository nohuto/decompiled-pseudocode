/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x1406DF70C
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     CmpCloneToUnbackedKcb @ 0x14086EC3C (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 */

PSLIST_ENTRY CmpAllocateKeyControlBlock()
{
  PSLIST_ENTRY v0; // rbx

  _InterlockedIncrement64(&CmPerfCounters);
  ++dword_140CDB514;
  v0 = RtlpInterlockedPopEntrySList(&CmpKcbLookaside);
  if ( v0
    || (++dword_140CDB518,
        (v0 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_140CDB530)(
                              (unsigned int)dword_140CDB524,
                              (unsigned int)dword_140CDB52C,
                              (unsigned int)dword_140CDB528,
                              &CmpKcbLookaside)) != 0LL) )
  {
    _InterlockedIncrement64(qword_140D2EFA0);
    memset(v0, 0, 0x138uLL);
  }
  return v0;
}
