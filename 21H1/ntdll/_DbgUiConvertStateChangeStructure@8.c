/*
 * XREFs of _DbgUiConvertStateChangeStructure@8 @ 0x4B32D880
 * Callers:
 *     <none>
 * Callees:
 *     _DbgUiConvertStateChangeStructureWorker@12 @ 0x4B32D8B6 (_DbgUiConvertStateChangeStructureWorker@12.c)
 */

NTSTATUS __cdecl DbgUiConvertStateChangeStructure(PDBGUI_WAIT_STATE_CHANGE StateChange, LPDEBUG_EVENT DebugEvent)
{
  return DbgUiConvertStateChangeStructureWorker(0);
}
