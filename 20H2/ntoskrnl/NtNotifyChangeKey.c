/*
 * XREFs of NtNotifyChangeKey @ 0x1406BF900
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406BF270 (ExpWatchProductTypeWork.c)
 *     SepAdtRegNotificationCallback @ 0x1407B88B0 (SepAdtRegNotificationCallback.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1407B8A58 (SepAdtOpenRegAndSetupNotification.c)
 *     ExpWatchLicenseInfoWork @ 0x14094E800 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A49CA8 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 */

__int64 __fastcall NtNotifyChangeKey(
        __int64 a1,
        void *a2,
        void (__stdcall *a3)(POPLOCK Oplock),
        __int64 a4,
        int *a5,
        unsigned int a6,
        char a7,
        volatile void *a8,
        int a9,
        char a10)
{
  SIZE_T Length; // [rsp+50h] [rbp-18h]

  LODWORD(Length) = a9;
  return NtNotifyChangeMultipleKeys(a1, 0, 0LL, a2, a3, a4, a5, a6, a7, a8, Length, a10);
}
