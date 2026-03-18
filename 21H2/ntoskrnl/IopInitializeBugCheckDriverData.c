/*
 * XREFs of IopInitializeBugCheckDriverData @ 0x140658604
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN IopInitializeBugCheckDriverData()
{
  IopBugCheckDriverDataCallbackRecord.State = 0;
  return KeRegisterBugCheckReasonCallback(
           &IopBugCheckDriverDataCallbackRecord,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)IoBugCheckDriverDataCallback,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"IoBugCheckDriverData");
}
