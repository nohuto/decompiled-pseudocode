/*
 * XREFs of _GreEnsureDpiDepDefaultGuiFontForPlateau@4 @ 0x1F3762
 * Callers:
 *     _NtGdiEnsureDpiDepDefaultGuiFontForPlateau@4 @ 0x21251F (_NtGdiEnsureDpiDepDefaultGuiFontForPlateau@4.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     _GetDpiDepStockObjectPlateauSlot@8 @ 0x1F3723 (_GetDpiDepStockObjectPlateauSlot@8.c)
 *     _hfontInitDefaultGuiFont@4 @ 0x2927A4 (_hfontInitDefaultGuiFont@4.c)
 */

void __stdcall GreEnsureDpiDepDefaultGuiFontForPlateau(int a1)
{
  unsigned __int16 LogPixels; // ax
  int DpiDepStockObjectPlateauSlot; // eax
  int v3; // esi
  int v4; // [esp+4h] [ebp-4h] BYREF

  LogPixels = DrvGetLogPixels();
  DpiDepStockObjectPlateauSlot = GetDpiDepStockObjectPlateauSlot(a1, LogPixels);
  v3 = DpiDepStockObjectPlateauSlot;
  if ( DpiDepStockObjectPlateauSlot >= 0 && !gahDpiDepDefaultGuiFonts[DpiDepStockObjectPlateauSlot] )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v4, gDpiDepDefaultGuiFontsPushLock);
    if ( !gahDpiDepDefaultGuiFonts[v3] )
      gahDpiDepDefaultGuiFonts[v3] = (void *)hfontInitDefaultGuiFont(a1);
    if ( v4 )
    {
      ExReleasePushLockExclusiveEx(v4, 0);
      KeLeaveCriticalRegion();
    }
  }
}
