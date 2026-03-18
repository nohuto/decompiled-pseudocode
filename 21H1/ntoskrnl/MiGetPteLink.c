/*
 * XREFs of MiGetPteLink @ 0x140226F10
 * Callers:
 *     InsertTailListPte @ 0x140223440 (InsertTailListPte.c)
 *     RemoveListHeadPte @ 0x14022672C (RemoveListHeadPte.c)
 *     MiObtainSystemCacheView @ 0x140226830 (MiObtainSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x14022A1F0 (MmMapViewInSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x14022F3DC (MiReleaseSystemCacheView.c)
 *     RemoveListEntryPte @ 0x14030E308 (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037CF00 (MiWaitForSystemCacheViewFlush.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_140C4DE80 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DE80;
  }
  return a1 >> 28;
}
