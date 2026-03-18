/*
 * XREFs of BgpFwLibraryDestroy @ 0x1409F0F0C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x1409F35E0 (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140398840 (BgpFwFreeMemory.c)
 *     ResFwBackgroundTransition @ 0x1409F0408 (ResFwBackgroundTransition.c)
 *     BgpFwInitializeReservePool @ 0x1409F05B8 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x1409F0FE8 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x1409F11CC (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_140C13378 )
  {
    BgpFoDestroy(qword_140C13378);
    if ( *(_QWORD *)qword_140C13378 && (*(_DWORD *)(qword_140C13378 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140C13378);
    BgpFwFreeMemory(qword_140C13378);
    qword_140C13378 = 0LL;
  }
  if ( qword_140C13300 )
  {
    BgpFwFreeMemory(qword_140C13300);
    qword_140C13300 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140C13380 = 0LL;
    qword_140C13398 = 0LL;
    qword_140C13390 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_140C132D0 = 0;
  return 0LL;
}
