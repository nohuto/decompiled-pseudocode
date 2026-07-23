/*
 * XREFs of BgpFwLibraryDestroy @ 0x1409F4F0C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409F39E8 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x1409F75E0 (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     ResFwBackgroundTransition @ 0x1409F4408 (ResFwBackgroundTransition.c)
 *     BgpFwInitializeReservePool @ 0x1409F45B8 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x1409F4FE8 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x1409F51CC (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_140C13598 )
  {
    BgpFoDestroy(qword_140C13598);
    if ( *(_QWORD *)qword_140C13598 && (*(_DWORD *)(qword_140C13598 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140C13598);
    BgpFwFreeMemory(qword_140C13598);
    qword_140C13598 = 0LL;
  }
  if ( qword_140C13520 )
  {
    BgpFwFreeMemory(qword_140C13520);
    qword_140C13520 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140C135A0 = 0LL;
    qword_140C135B8 = 0LL;
    qword_140C135B0 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_140C134F0 = 0;
  return 0LL;
}
