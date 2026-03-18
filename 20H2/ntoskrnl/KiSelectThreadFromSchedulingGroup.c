/*
 * XREFs of KiSelectThreadFromSchedulingGroup @ 0x14035EB30
 * Callers:
 *     KiSwapThread @ 0x14021C4C0 (KiSwapThread.c)
 *     KiSelectLowestRankedThread @ 0x1402D9B60 (KiSelectLowestRankedThread.c)
 *     KiSearchForNewThread @ 0x1402D9CEC (KiSearchForNewThread.c)
 *     KiChooseLowestRankedThread @ 0x14035E8B4 (KiChooseLowestRankedThread.c)
 *     KiSelectThreadFromScbQueue @ 0x140521E1C (KiSelectThreadFromScbQueue.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x14035EB80 (KiRemoveThreadFromScbQueue.c)
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
