/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x14061D78C
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x14061CE30 (CmpCreateKeyControlBlock.c)
 *     CmpCloneToUnbackedKcb @ 0x14086A4FC (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 */

PSLIST_ENTRY CmpAllocateKeyControlBlock()
{
  PSLIST_ENTRY v0; // rbx

  _InterlockedIncrement64(&CmPerfCounters);
  ++dword_140CDB214;
  v0 = RtlpInterlockedPopEntrySList(&CmpKcbLookaside);
  if ( v0
    || (++dword_140CDB218,
        (v0 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_140CDB230)(
                              (unsigned int)dword_140CDB224,
                              (unsigned int)dword_140CDB22C,
                              (unsigned int)dword_140CDB228,
                              &CmpKcbLookaside)) != 0LL) )
  {
    _InterlockedIncrement64(qword_140D2DFE0);
    memset(v0, 0, 0x138uLL);
  }
  return v0;
}
