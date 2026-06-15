/*
 * XREFs of __tailMerge_rmclient_dll @ 0x18006D485
 * Callers:
 *     __imp_load_RmGetNotification @ 0x18006D479 (__imp_load_RmGetNotification.c)
 *     __imp_load_RmReleaseResources @ 0x18006D504 (__imp_load_RmReleaseResources.c)
 *     __imp_load_RmAvailabilityCheck @ 0x18006D516 (__imp_load_RmAvailabilityCheck.c)
 *     __imp_load_RmAcquireResources @ 0x18006D528 (__imp_load_RmAcquireResources.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180046E80 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_rmclient_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_RMCLIENT_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
