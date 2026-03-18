/*
 * XREFs of ?FxLibraryCleanup@@YAXXZ @ 0x1C002D67C
 * Callers:
 *     DriverEntry @ 0x1C002DD60 (DriverEntry.c)
 *     DriverUnload @ 0x1C002DFD0 (DriverUnload.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void FxLibraryCleanup(void)
{
  if ( FxLibraryGlobals.LibraryDeviceObject )
  {
    IoDeleteDevice(FxLibraryGlobals.LibraryDeviceObject);
    FxLibraryGlobals.LibraryDeviceObject = 0LL;
  }
  if ( FxLibraryGlobals.CompanionLibrary )
  {
    FxPoolFree((FX_POOL_TRACKER *)FxLibraryGlobals.CompanionLibrary);
    FxLibraryGlobals.CompanionLibrary = 0LL;
  }
}
