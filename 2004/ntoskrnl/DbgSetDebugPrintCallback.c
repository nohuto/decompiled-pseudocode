/*
 * XREFs of DbgSetDebugPrintCallback @ 0x140580270
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140780518 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1407807AC (EtwpDisableKernelTrace.c)
 * Callees:
 *     DbgpInsertDebugPrintCallback @ 0x1405802D4 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14058042C (DbgpRemoveDebugPrintCallback.c)
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
