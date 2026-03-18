/*
 * XREFs of SepAdtRegNotificationCallback @ 0x1407A7810
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x1405F3C90 (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x1407A7874 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1407A78F8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x1407A7958 (SepAdtInitializeCrashOnFail.c)
 */

__int64 SepAdtRegNotificationCallback()
{
  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
  return NtNotifyChangeKey(
           (int)SepAdtRegNotifyHandle,
           0,
           (__int64)&SepAdtLsaRegWatchWorkItem,
           1LL,
           &SepAdtIoStatusBlock,
           5,
           0,
           0LL,
           0,
           1);
}
