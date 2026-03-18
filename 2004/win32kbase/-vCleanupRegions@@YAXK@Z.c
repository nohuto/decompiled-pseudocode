/*
 * XREFs of ?vCleanupRegions@@YAXK@Z @ 0x1C00C06F4
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00BCF4C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0089E90 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     HmgLockEx @ 0x1C008ABB0 (HmgLockEx.c)
 *     HmgNextOwned @ 0x1C00C0810 (HmgNextOwned.c)
 *     bDeleteRegion @ 0x1C00C0D10 (bDeleteRegion.c)
 */

void __fastcall vCleanupRegions(unsigned int a1)
{
  unsigned int Owned; // esi

  Owned = 0;
  do
    Owned = HmgNextOwned(Owned, a1);
  while ( Owned );
}
