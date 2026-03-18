/*
 * XREFs of NtNotifyChangeKey @ 0x1405F3C90
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406DF6A0 (ExpWatchProductTypeWork.c)
 *     SepAdtRegNotificationCallback @ 0x1407A7810 (SepAdtRegNotificationCallback.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1407A79B8 (SepAdtOpenRegAndSetupNotification.c)
 *     ExpWatchLicenseInfoWork @ 0x1409476A0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A3E1A4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
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
