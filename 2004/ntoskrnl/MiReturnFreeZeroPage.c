/*
 * XREFs of MiReturnFreeZeroPage @ 0x14031C568
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiCoalesceFreePages @ 0x14023EE10 (MiCoalesceFreePages.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiGetPerfectColorHeadPage @ 0x14031D940 (MiGetPerfectColorHeadPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140382660 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403BA2F0 (MiFreeLargeInitializationCodePages.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054CAD4 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsFreeZeroPfnCold @ 0x14031C638 (MiIsFreeZeroPfnCold.c)
 */

void __fastcall MiReturnFreeZeroPage(__int64 a1)
{
  char v3; // cl
  char v4; // al
  int IsFreeZeroPfnCold; // eax
  __int16 v6; // r8
  ULONG_PTR v7; // r10
  __int16 v8; // r11
  __int16 v9; // dx

  v3 = *(_BYTE *)(a1 + 34);
  if ( (v3 & 7) == 6 )
  {
    *(_BYTE *)(a1 + 34) = v3 & 0xF8 | 5;
    v3 = *(_BYTE *)(a1 + 34);
  }
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  v4 = *(_BYTE *)(a1 + 35) & 0xDF;
  *(_BYTE *)(a1 + 34) = v3 & 0xC7;
  *(_BYTE *)(a1 + 35) = v4;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 35) = v4 & 0xEF;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(
                        a1,
                        (unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                        (unsigned int)((*(_DWORD *)(a1 + 16) & 0x3E0) != 0LL) + 1,
                        a1);
  v9 = v6 | 0x400;
  if ( !IsFreeZeroPfnCold )
    v9 = v6;
  MiInsertPageInFreeOrZeroedList(v7, v8 | v9);
}
