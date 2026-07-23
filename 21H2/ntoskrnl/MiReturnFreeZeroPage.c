/*
 * XREFs of MiReturnFreeZeroPage @ 0x14030DDA0
 * Callers:
 *     MiGetPerfectColorHeadPage @ 0x140215F28 (MiGetPerfectColorHeadPage.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiCoalesceFreePages @ 0x1402DA4F0 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403BD3F0 (MiFreeLargeInitializationCodePages.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405521B4 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsFreeZeroPfnCold @ 0x14030DE70 (MiIsFreeZeroPfnCold.c)
 */

__int64 __fastcall MiReturnFreeZeroPage(__int64 a1)
{
  char v2; // cl
  char v3; // al
  int IsFreeZeroPfnCold; // eax
  __int16 v5; // r8
  ULONG_PTR v6; // r10
  __int16 v7; // r11
  __int16 v8; // dx

  v2 = *(_BYTE *)(a1 + 34);
  if ( (v2 & 7) == 6 )
  {
    *(_BYTE *)(a1 + 34) = v2 & 0xF8 | 5;
    v2 = *(_BYTE *)(a1 + 34);
  }
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  v3 = *(_BYTE *)(a1 + 35) & 0xDF;
  *(_BYTE *)(a1 + 34) = v2 & 0xC7;
  *(_BYTE *)(a1 + 35) = v3;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 35) = v3 & 0xEF;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a1);
  v8 = v5 | 0x400;
  if ( !IsFreeZeroPfnCold )
    v8 = v5;
  return MiInsertPageInFreeOrZeroedList(v6, v7 | v8);
}
