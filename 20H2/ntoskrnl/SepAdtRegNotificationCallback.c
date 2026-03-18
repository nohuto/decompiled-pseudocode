/*
 * XREFs of SepAdtRegNotificationCallback @ 0x1407B88B0
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x1406BF900 (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x1407B8914 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1407B8998 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x1407B89F8 (SepAdtInitializeCrashOnFail.c)
 */

__int64 SepAdtRegNotificationCallback()
{
  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
  return NtNotifyChangeKey(
           (__int64)SepAdtRegNotifyHandle,
           0LL,
           (void (__stdcall *)(POPLOCK))&SepAdtLsaRegWatchWorkItem,
           1LL,
           SepAdtIoStatusBlock,
           5u,
           0,
           0LL,
           0,
           1);
}
