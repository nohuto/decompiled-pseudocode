/*
 * XREFs of _WPP_INIT_CONTROL_ARRAY@4 @ 0xE7C74
 * Callers:
 *     _EditionInitializeWppLogging@8 @ 0xE7B64 (_EditionInitializeWppLogging@8.c)
 * Callees:
 *     <none>
 */

int WPP_INIT_CONTROL_ARRAY()
{
  int result; // eax

  WPP_MAIN_CB.ReferenceCount = (LONG)&WPP_ThisDir_CTLGUID_Win32kFullTraceGuid;
  result = 0;
  *(_DWORD *)&WPP_MAIN_CB.Type = 0;
  WPP_MAIN_CB.DriverObject = 0;
  WPP_MAIN_CB.Timer = 0;
  WPP_MAIN_CB.Flags = 1;
  WPP_MAIN_CB.Characteristics = 0;
  *(_DWORD *)&WPP_MAIN_CB.StackSize = 0;
  WPP_MAIN_CB.Queue.ListEntry.Flink = 0;
  return result;
}
