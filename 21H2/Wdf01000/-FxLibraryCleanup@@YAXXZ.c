/*
 * XREFs of ?FxLibraryCleanup@@YAXXZ @ 0x1C0052A38
 * Callers:
 *     DriverEntry @ 0x1C0032660 (DriverEntry.c)
 *     DriverUnload @ 0x1C0052C70 (DriverUnload.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
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
