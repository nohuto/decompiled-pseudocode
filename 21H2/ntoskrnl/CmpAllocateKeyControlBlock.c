/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x1409157D0
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x140914D00 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

PSLIST_ENTRY CmpAllocateKeyControlBlock()
{
  PSLIST_ENTRY v0; // rbx

  _InterlockedIncrement64(&CmPerfCounters);
  ++dword_140CE1C54;
  v0 = RtlpInterlockedPopEntrySList(&CmpKcbLookaside);
  if ( v0
    || (++dword_140CE1C58,
        (v0 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, union _SLIST_HEADER *))qword_140CE1C70)(
                              (unsigned int)dword_140CE1C64,
                              (unsigned int)dword_140CE1C6C,
                              (unsigned int)dword_140CE1C68,
                              &CmpKcbLookaside)) != 0LL) )
  {
    _InterlockedIncrement64(qword_140D3D2E0);
    memset(v0, 0, 0x138uLL);
  }
  return v0;
}
