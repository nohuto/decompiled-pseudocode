/*
 * XREFs of MiReturnFreeZeroPage @ 0x14034B8A8
 * Callers:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiCoalesceFreePages @ 0x140297E40 (MiCoalesceFreePages.c)
 *     MiGetPerfectColorHeadPage @ 0x1402EA0F8 (MiGetPerfectColorHeadPage.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140381E20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403B8F80 (MiFreeLargeInitializationCodePages.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054C484 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsFreeZeroPfnCold @ 0x14034B978 (MiIsFreeZeroPfnCold.c)
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
