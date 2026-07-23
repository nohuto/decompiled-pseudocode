/*
 * XREFs of KiSelectThreadFromSchedulingGroup @ 0x14029CA8C
 * Callers:
 *     KiSearchForNewThread @ 0x140278228 (KiSearchForNewThread.c)
 *     KiSelectLowestRankedThread @ 0x140278714 (KiSelectLowestRankedThread.c)
 *     KiChooseLowestRankedThread @ 0x14029C310 (KiChooseLowestRankedThread.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 *     KiSelectThreadFromScbQueue @ 0x140523B3C (KiSelectThreadFromScbQueue.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x14029CADC (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiSelectThreadFromSchedulingGroup(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // r9d

  v3 = 0LL;
  v4 = *(unsigned __int16 *)(a2 + 114) >> a3;
  if ( v4 )
  {
    _BitScanReverse(&v5, v4);
    v3 = *(_QWORD *)(a2 + 16LL * (a3 + v5) + 136) - 216LL;
    KiRemoveThreadFromScbQueue(a1, a2);
  }
  return v3;
}
