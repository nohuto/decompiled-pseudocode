/*
 * XREFs of DbgSetDebugPrintCallback @ 0x1405855E0
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1407981D8 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x14079846C (EtwpDisableKernelTrace.c)
 * Callees:
 *     DbgpInsertDebugPrintCallback @ 0x140585644 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14058579C (DbgpRemoveDebugPrintCallback.c)
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
