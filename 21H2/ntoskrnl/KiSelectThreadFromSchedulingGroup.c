/*
 * XREFs of KiSelectThreadFromSchedulingGroup @ 0x14021087C
 * Callers:
 *     KiChooseLowestRankedThread @ 0x140210224 (KiChooseLowestRankedThread.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x140343DC0 (KiSearchForNewThread.c)
 *     KiSelectLowestRankedThread @ 0x14034412C (KiSelectLowestRankedThread.c)
 *     KiSelectThreadFromScbQueue @ 0x14057A898 (KiSelectThreadFromScbQueue.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x1402108CC (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiSelectThreadFromSchedulingGroup(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // r9d
  __int64 v6; // r9

  v3 = 0LL;
  v4 = *(unsigned __int16 *)(a2 + 114) >> a3;
  if ( v4 )
  {
    _BitScanReverse(&v5, v4);
    v6 = a3 + v5;
    v3 = *(_QWORD *)(a2 + 16LL * (unsigned int)v6 + 136) - 216LL;
    KiRemoveThreadFromScbQueue(a1, a2, v3, v6);
  }
  return v3;
}
