/*
 * XREFs of BgpFwLibraryDestroy @ 0x140AAE918
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AAD490 (BgpFwLibraryInitialize.c)
 *     BgLibraryDestroy @ 0x140AB0910 (BgLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     ResFwBackgroundTransition @ 0x140AADBBC (ResFwBackgroundTransition.c)
 *     BgpFwInitializeReservePool @ 0x140AADC80 (BgpFwInitializeReservePool.c)
 *     BgpFwLibraryDisable @ 0x140AAE9F4 (BgpFwLibraryDisable.c)
 *     BgpFoDestroy @ 0x140AAEBD8 (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_140C0E038 )
  {
    BgpFoDestroy(qword_140C0E038);
    if ( *(_QWORD *)qword_140C0E038 && (*(_DWORD *)(qword_140C0E038 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140C0E038);
    BgpFwFreeMemory(qword_140C0E038);
    qword_140C0E038 = 0LL;
  }
  if ( qword_140C0DFC0 )
  {
    BgpFwFreeMemory(qword_140C0DFC0);
    qword_140C0DFC0 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140C0E040 = 0LL;
    qword_140C0E058 = 0LL;
    qword_140C0E050 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2);
  dword_140C0DF90 = 0;
  return 0LL;
}
