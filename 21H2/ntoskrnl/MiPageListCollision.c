/*
 * XREFs of MiPageListCollision @ 0x140226804
 * Callers:
 *     MiReplenishPageSlist @ 0x140264720 (MiReplenishPageSlist.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C8740 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402CB2D0 (MiUnlinkNodeLargePageHelper.c)
 *     MiUnlinkHugeRange @ 0x1405891A4 (MiUnlinkHugeRange.c)
 *     MiScrubNodeLargePageList @ 0x1405AF6F0 (MiScrubNodeLargePageList.c)
 * Callees:
 *     MiStopPageAccessor @ 0x140226844 (MiStopPageAccessor.c)
 *     MiZeroPageWorkMapping @ 0x14022689C (MiZeroPageWorkMapping.c)
 */

__int64 __fastcall MiPageListCollision(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  _BYTE *v5; // rdx

  result = MiStopPageAccessor(a1, a3);
  v5 = *(_BYTE **)(result + 32);
  if ( v5 )
  {
    if ( (*v5 & 1) != 0 )
      return MiZeroPageWorkMapping(*(unsigned int *)(result + 64), v5, a2 == 0 ? 2 : 0);
  }
  return result;
}
