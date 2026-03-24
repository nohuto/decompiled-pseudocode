/*
 * XREFs of BgpFwLibraryDestroy @ 0x1409F3F0C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x1409F65E0 (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     ResFwBackgroundTransition @ 0x1409F3408 (ResFwBackgroundTransition.c)
 *     BgpFwInitializeReservePool @ 0x1409F35B8 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x1409F3FE8 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x1409F41CC (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  _DWORD *v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *v5; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9

  BgpFoDestroy(0LL);
  if ( qword_140C13598 )
  {
    BgpFoDestroy(qword_140C13598);
    if ( *(_QWORD *)qword_140C13598 && (*(_DWORD *)(qword_140C13598 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140C13598, v7, v8, v9);
    BgpFwFreeMemory(qword_140C13598, v7, v8, v9);
    qword_140C13598 = 0LL;
  }
  if ( qword_140C13520 )
  {
    BgpFwFreeMemory(qword_140C13520, v0, v1, v2);
    qword_140C13520 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140C135A0 = 0LL;
    qword_140C135B8 = 0LL;
    qword_140C135B0 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2, v3, v4, v5);
  dword_140C134F0 = 0;
  return 0LL;
}
