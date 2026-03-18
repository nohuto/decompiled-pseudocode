/*
 * XREFs of MiGetPteLink @ 0x1402B9B90
 * Callers:
 *     InsertTailListPte @ 0x1402B60C0 (InsertTailListPte.c)
 *     RemoveListHeadPte @ 0x1402B93AC (RemoveListHeadPte.c)
 *     MiObtainSystemCacheView @ 0x1402B94B0 (MiObtainSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1402BCE70 (MmMapViewInSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x1402C220C (MiReleaseSystemCacheView.c)
 *     RemoveListEntryPte @ 0x14034B7E8 (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037D9C0 (MiWaitForSystemCacheViewFlush.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_140C4DD40 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DD40;
  }
  return a1 >> 28;
}
