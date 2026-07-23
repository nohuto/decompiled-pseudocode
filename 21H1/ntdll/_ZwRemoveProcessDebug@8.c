/*
 * XREFs of _ZwRemoveProcessDebug@8 @ 0x4B2F4090
 * Callers:
 *     _DbgUiDebugActiveProcess@4 @ 0x4B32DAA0 (_DbgUiDebugActiveProcess@4.c)
 *     _DbgUiStopDebugging@4 @ 0x4B32DBE0 (_DbgUiStopDebugging@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwRemoveProcessDebug(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  return Wow64SystemServiceCall();
}
