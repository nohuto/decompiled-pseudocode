/*
 * XREFs of _EditionUninitializeWppLogging@4 @ 0xD46CA
 * Callers:
 *     <none>
 * Callees:
 *     _WppCleanupKm@4 @ 0x27A5A4 (_WppCleanupKm@4.c)
 */

int __stdcall EditionUninitializeWppLogging(int a1)
{
  if ( gFullLog )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control, gFullLog);
    gFullLog = 0;
  }
  return WppCleanupKm(a1);
}
