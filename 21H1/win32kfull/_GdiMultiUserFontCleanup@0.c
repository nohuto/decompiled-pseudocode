/*
 * XREFs of _GdiMultiUserFontCleanup@0 @ 0xCD5AC
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?MultiUserGreCleanupAllFonts@@YGXXZ @ 0xCD5E0 (-MultiUserGreCleanupAllFonts@@YGXXZ.c)
 *     ?CleanUpEUDC@@YGXXZ @ 0xCE864 (-CleanUpEUDC@@YGXXZ.c)
 *     ?vCleanUpFntCacheInternal@@YGXXZ @ 0xD62E6 (-vCleanUpFntCacheInternal@@YGXXZ.c)
 */

void __thiscall GdiMultiUserFontCleanup(void *this)
{
  void *v1; // [esp+0h] [ebp-4h] BYREF

  v1 = this;
  CleanUpEUDC();
  MultiUserGreCleanupAllFonts();
  if ( _ghsemFntCache )
  {
    v1 = (void *)_ghsemFntCache;
    GreAcquireSemaphore(_ghsemFntCache);
    vCleanUpFntCacheInternal();
    SEMOBJ::vUnlock((SEMOBJ *)&v1);
  }
}
