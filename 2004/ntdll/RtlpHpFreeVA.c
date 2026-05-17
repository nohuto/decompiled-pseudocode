/*
 * XREFs of RtlpHpFreeVA @ 0x180020824
 * Callers:
 *     RtlpHpLargeFree @ 0x180003280 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapDestroy @ 0x1800048E4 (RtlpHpHeapDestroy.c)
 *     RtlpHpSegMgrRelease @ 0x180004F04 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrReserve @ 0x18000662C (RtlpHpSegMgrReserve.c)
 *     RtlpHpHeapAllocate @ 0x180007E6C (RtlpHpHeapAllocate.c)
 *     RtlpHpSegMgrCommit @ 0x180022E90 (RtlpHpSegMgrCommit.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18010E460 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpLargeReAlloc @ 0x18010E5CC (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x180005248 (RtlpHpVaMgrCtxFree.c)
 *     ZwFreeVirtualMemory @ 0x18009D1D0 (ZwFreeVirtualMemory.c)
 *     RtlpHpTlLogVAChange @ 0x18010B3DC (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, int a3, __int128 *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int128 v13; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v5 = a3 & 0xFEFFFFFF;
  v13 = *a4;
  if ( (a3 & 0xFEFFFFFF) != 0x8000 || (a3 & 0x1000000) != 0 )
  {
    if ( BYTE1(v13) < 2u )
      v4 = ZwFreeVirtualMemory(-1LL, a1, a2, (unsigned __int16)a3 & 0xC000);
  }
  else
  {
    v9 = *a1;
    v10 = v9 + *a2;
    v11 = (v9 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v12 = v10 - v11;
    *a1 = v11;
    *a2 = v12;
    if ( !v12 )
      return v4;
    RtlpHpVaMgrCtxFree((__int64)&unk_18016BC68, a1, a2);
  }
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v5, *a2, *a1, v4, v13, *((_QWORD *)&v13 + 1));
  return v4;
}
