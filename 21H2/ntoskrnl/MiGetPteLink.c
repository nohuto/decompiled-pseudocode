/*
 * XREFs of MiGetPteLink @ 0x14031D930
 * Callers:
 *     RemoveListEntryPte @ 0x14023C638 (RemoveListEntryPte.c)
 *     MiReleaseSystemCacheView @ 0x14031AA4C (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x14031BB30 (MmMapViewInSystemCache.c)
 *     InsertTailListPte @ 0x14031CFF0 (InsertTailListPte.c)
 *     RemoveListHeadPte @ 0x14031D144 (RemoveListHeadPte.c)
 *     MiObtainSystemCacheView @ 0x14031D250 (MiObtainSystemCacheView.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037FA80 (MiWaitForSystemCacheViewFlush.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_140C4DF80 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DF80;
  }
  return a1 >> 28;
}
