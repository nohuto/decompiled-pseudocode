/*
 * XREFs of DpiAcpiDockEventCallback @ 0x1C02D15E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z @ 0x1C00574D4 (-DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z.c)
 */

__int64 __fastcall DpiAcpiDockEventCallback(PVOID NotificationStructure, PVOID Context)
{
  return DpiAcpiCallAcpiEventHandler(Context, DxgkDockingEvent, 0x77u, 0LL);
}
