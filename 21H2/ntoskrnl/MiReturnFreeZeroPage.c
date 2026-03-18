/*
 * XREFs of MiReturnFreeZeroPage @ 0x14026845C
 * Callers:
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiCoalesceFreePages @ 0x1402C7DF0 (MiCoalesceFreePages.c)
 *     MiGetPerfectColorHeadPage @ 0x140325830 (MiGetPerfectColorHeadPage.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14038E608 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiAllocateDriverPageFromRange @ 0x1403C9C90 (MiAllocateDriverPageFromRange.c)
 *     MiFinishDriverPageRangeAllocation @ 0x1403CA0E4 (MiFinishDriverPageRangeAllocation.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403CB284 (MiFreeLargeInitializationCodePages.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140599EBC (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14059A31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405B4BA8 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiIsFreeZeroPfnCold @ 0x140268620 (MiIsFreeZeroPfnCold.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiReturnFreeZeroPage(__int64 a1, __int64 a2)
{
  char v2; // r8
  char v3; // al
  __int64 v4; // rax
  ULONG_PTR v5; // r9

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
  *(_BYTE *)(a1 + 35) = v3 & 0xEF;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  v4 = *(_DWORD *)(a1 + 16) & 0x3E0;
  *(_WORD *)(a1 + 32) = 0;
  MiIsFreeZeroPfnCold(a1, a2, (unsigned int)(v4 != 0) + 1, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  return MiInsertPageInFreeOrZeroedList(v5);
}
