/*
 * XREFs of SepAdtRegNotificationCallback @ 0x1407AA970
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x1405E2150 (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x1407AA9D4 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1407AAA58 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x1407AAAB8 (SepAdtInitializeCrashOnFail.c)
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
