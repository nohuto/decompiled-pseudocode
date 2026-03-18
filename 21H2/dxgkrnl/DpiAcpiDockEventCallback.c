/*
 * XREFs of DpiAcpiDockEventCallback @ 0x1C0394770
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcpiCallAcpiEventHandler @ 0x1C0066024 (DpiAcpiCallAcpiEventHandler.c)
 */

__int64 __fastcall DpiAcpiDockEventCallback(PVOID NotificationStructure, PVOID Context)
{
  return DpiAcpiCallAcpiEventHandler(Context, 3u, 0x77u, 0LL);
}
