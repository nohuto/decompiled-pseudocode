/*
 * XREFs of ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1C005121C
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0128480 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

CAsyncKeyEventMonitor *__fastcall CAsyncKeyEventMonitor::`scalar deleting destructor'(CAsyncKeyEventMonitor *this)
{
  if ( this )
    Win32FreePool(this);
  return this;
}
