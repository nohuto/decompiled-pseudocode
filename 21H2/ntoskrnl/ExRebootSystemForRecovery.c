/*
 * XREFs of ExRebootSystemForRecovery @ 0x1406396B8
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x140579150 (KiDeferredBugcheckRecoveryWorker.c)
 *     NtShutdownSystem @ 0x1406398E0 (NtShutdownSystem.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x140232788 (ExNotifyWithProcessing.c)
 *     KeRebootSystemForRecovery @ 0x140578830 (KeRebootSystemForRecovery.c)
 *     CmShutdownSystem @ 0x140911B58 (CmShutdownSystem.c)
 */

void ExRebootSystemForRecovery()
{
  if ( PnpKsrCallbackObject )
  {
    CmShutdownSystem(0LL);
    CmShutdownSystem(1LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 10LL, 0LL, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 15LL, 0LL, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 20LL, 0LL, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 22LL, 0LL, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 25LL, 0LL, 0LL);
    KeRebootSystemForRecovery();
  }
}
