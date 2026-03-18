/*
 * XREFs of DbgSetDebugPrintCallback @ 0x140583BD0
 * Callers:
 *     EtwpDisableKernelTrace @ 0x14078DD44 (EtwpDisableKernelTrace.c)
 *     EtwpEnableKernelTrace @ 0x14078DF64 (EtwpEnableKernelTrace.c)
 * Callees:
 *     DbgpInsertDebugPrintCallback @ 0x140583C34 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x140583D8C (DbgpRemoveDebugPrintCallback.c)
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
