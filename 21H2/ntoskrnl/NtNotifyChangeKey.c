/*
 * XREFs of NtNotifyChangeKey @ 0x1407E5590
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406A5770 (ExpWatchProductTypeWork.c)
 *     SepAdtRegNotificationCallback @ 0x14084CA10 (SepAdtRegNotificationCallback.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14084CBB8 (SepAdtOpenRegAndSetupNotification.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8680 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140B1CC84 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x1407E5600 (NtNotifyChangeMultipleKeys.c)
 */

__int64 __fastcall NtNotifyChangeKey(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        volatile void *a5,
        int a6,
        char a7,
        volatile void *a8,
        int a9,
        char a10)
{
  SIZE_T Length; // [rsp+50h] [rbp-18h]

  LODWORD(Length) = a9;
  return NtNotifyChangeMultipleKeys(a1, 0, 0, a2, a3, a4, a5, a6, a7, a8, Length, a10);
}
