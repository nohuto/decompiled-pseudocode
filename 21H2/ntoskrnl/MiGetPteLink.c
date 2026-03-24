/*
 * XREFs of MiGetPteLink @ 0x140312BE0
 * Callers:
 *     RemoveListEntryPte @ 0x1402BDFF8 (RemoveListEntryPte.c)
 *     MiReleaseSystemCacheView @ 0x14030FCFC (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x140310DE0 (MmMapViewInSystemCache.c)
 *     InsertTailListPte @ 0x1403122A0 (InsertTailListPte.c)
 *     RemoveListHeadPte @ 0x1403123F4 (RemoveListHeadPte.c)
 *     MiObtainSystemCacheView @ 0x140312500 (MiObtainSystemCacheView.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14037FF30 (MiWaitForSystemCacheViewFlush.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_140C4DF40 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DF40;
  }
  return a1 >> 28;
}
