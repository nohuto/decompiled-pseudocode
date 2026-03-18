/*
 * XREFs of ?vCleanupRegions@@YAXK@Z @ 0x1C00A9CB8
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C000B02C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0083120 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     HmgLockEx @ 0x1C0083AE0 (HmgLockEx.c)
 *     HmgNextOwned @ 0x1C00A9DE0 (HmgNextOwned.c)
 *     bDeleteRegion @ 0x1C00A9EB0 (bDeleteRegion.c)
 */

void __fastcall vCleanupRegions(unsigned int a1)
{
  unsigned int Owned; // esi

  Owned = 0;
  do
    Owned = HmgNextOwned(Owned, a1);
  while ( Owned );
}
