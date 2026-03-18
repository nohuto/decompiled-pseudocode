/*
 * XREFs of BgpFwLibraryDestroy @ 0x1409F6F0C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409F59E8 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x1409F95E0 (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039B490 (BgpFwFreeMemory.c)
 *     ResFwBackgroundTransition @ 0x1409F6408 (ResFwBackgroundTransition.c)
 *     BgpFwInitializeReservePool @ 0x1409F65B8 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x1409F6FE8 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x1409F71CC (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_140C133D8 )
  {
    BgpFoDestroy(qword_140C133D8);
    if ( *(_QWORD *)qword_140C133D8 && (*(_DWORD *)(qword_140C133D8 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140C133D8);
    BgpFwFreeMemory(qword_140C133D8);
    qword_140C133D8 = 0LL;
  }
  if ( qword_140C13360 )
  {
    BgpFwFreeMemory(qword_140C13360);
    qword_140C13360 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140C133E0 = 0LL;
    qword_140C133F8 = 0LL;
    qword_140C133F0 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_140C13330 = 0;
  return 0LL;
}
