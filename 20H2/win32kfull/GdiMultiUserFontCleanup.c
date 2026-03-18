/*
 * XREFs of GdiMultiUserFontCleanup @ 0x1C00225A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C001C378 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C0022500 (-CleanUpEUDC@@YAXXZ.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C0022BE8 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 */

void GdiMultiUserFontCleanup()
{
  int v0; // edx
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  CleanUpEUDC();
  if ( gpPFTPrivate )
    bCleanupFontTable(gpPFTPrivate, v0);
  if ( gpPFTPublic )
    bCleanupFontTable((struct PFT **)&gpPFTPublic, v0);
  if ( gpPFTDevice )
    bCleanupFontTable(&gpPFTDevice, v0);
  v1 = gpPrintKViewList;
  if ( gpPrintKViewList )
  {
    do
    {
      v2 = v1;
      v1 = *(_QWORD *)(v1 + 32);
      Win32FreePool(v2);
    }
    while ( v1 );
    gpPrintKViewList = 0LL;
  }
  if ( ghsemFntCache )
  {
    v3 = ghsemFntCache;
    GreAcquireSemaphore(ghsemFntCache);
    vCleanUpFntCacheInternal();
    SEMOBJ::vUnlock((SEMOBJ *)&v3);
  }
}
