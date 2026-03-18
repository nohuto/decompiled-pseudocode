/*
 * XREFs of ?FxLibraryCleanup@@YAXXZ @ 0x1C002CDBC
 * Callers:
 *     DriverEntry @ 0x1C002D4A0 (DriverEntry.c)
 *     DriverUnload @ 0x1C002D700 (DriverUnload.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void FxLibraryCleanup(void)
{
  if ( *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceType )
  {
    IoDeleteDevice(*(PDEVICE_OBJECT *)&WPP_GLOBAL_WDF_Control.DeviceType);
    *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceType = 0LL;
  }
  if ( qword_1C00A9FC8 )
  {
    FxPoolFree((FX_POOL_TRACKER *)qword_1C00A9FC8);
    qword_1C00A9FC8 = 0LL;
  }
}
