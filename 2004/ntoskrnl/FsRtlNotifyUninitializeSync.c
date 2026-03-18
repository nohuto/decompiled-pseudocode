/*
 * XREFs of FsRtlNotifyUninitializeSync @ 0x14070DC10
 * Callers:
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406E08E0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406E1100 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlNotifyUninitializeSync(PNOTIFY_SYNC *NotifySync)
{
  PNOTIFY_SYNC v2; // rcx

  v2 = *NotifySync;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *NotifySync = 0LL;
  }
}
