/*
 * XREFs of MiGetPteLink @ 0x14029A1C0
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402983C0 (MmMapViewInSystemCache.c)
 *     InsertTailListPte @ 0x140299880 (InsertTailListPte.c)
 *     RemoveListHeadPte @ 0x1402999D4 (RemoveListHeadPte.c)
 *     MiObtainSystemCacheView @ 0x140299AE0 (MiObtainSystemCacheView.c)
 *     MiReleaseSystemCacheView @ 0x14029AFD0 (MiReleaseSystemCacheView.c)
 *     RemoveListEntryPte @ 0x14031C7A8 (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037F6F0 (MiWaitForSystemCacheViewFlush.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_140C4DDC0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DDC0;
  }
  return a1 >> 28;
}
