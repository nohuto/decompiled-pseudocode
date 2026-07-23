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

NTSTATUS SepAdtRegNotificationCallback()
{
  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
  return NtNotifyChangeKey(
           SepAdtRegNotifyHandle,
           0LL,
           SepAdtLsaRegWatchWorkItem,
           (PVOID)1,
           &SepAdtIoStatusBlock,
           5u,
           0,
           0LL,
           0,
           1u);
}
