/*
 * XREFs of CmpFreeKeyControlBlock @ 0x14069FA30
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x14069F904 (CmpCleanUpKCBCacheTable.c)
 *     CmpDecommisssionKcb @ 0x14069FA08 (CmpDecommisssionKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406FEA54 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 *     CmpCreateKeyControlBlock @ 0x1407C3850 (CmpCreateKeyControlBlock.c)
 *     CmpCloneToUnbackedKcb @ 0x140914D00 (CmpCloneToUnbackedKcb.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140915544 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  ++dword_140CE1C5C;
  if ( LOWORD(CmpKcbLookaside.Alignment) >= (unsigned __int16)word_140CE1C50 )
  {
    ++dword_140CE1C60;
    result = (PSLIST_ENTRY)((__int64 (__fastcall *)(ULONG_PTR, union _SLIST_HEADER *))qword_140CE1C78)(
                             BugCheckParameter2,
                             &CmpKcbLookaside);
  }
  else
  {
    result = RtlpInterlockedPushEntrySList(&CmpKcbLookaside, (PSLIST_ENTRY)BugCheckParameter2);
  }
  _InterlockedDecrement64(qword_140D3D2E0);
  return result;
}
