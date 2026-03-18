/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C006B008
 * Callers:
 *     DriverEntry @ 0x1C0071878 (DriverEntry.c)
 *     DriverCleanup @ 0x1C0077510 (DriverCleanup.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    WPP_MAIN_CB.Queue.ListEntry.Flink = 0LL;
  }
  return result;
}
