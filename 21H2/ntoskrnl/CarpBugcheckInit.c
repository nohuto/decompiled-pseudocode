/*
 * XREFs of CarpBugcheckInit @ 0x140605200
 * Callers:
 *     CarInit @ 0x140603974 (CarInit.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN CarpBugcheckInit()
{
  dword_140C18F4C = CarTipTag;
  dword_140C18F50 = CarTriageContext;
  dword_140C18F48 = (unsigned __int16)NtBuildNumber;
  CarViolationSnapshot = 1;
  dword_140C18F24 = 128;
  qword_140C18F54 = CarRuleClasses;
  CarBugCheckCallback.State = 0;
  return KeRegisterBugCheckReasonCallback(
           &CarBugCheckCallback,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)CarpSecondaryDataCallback,
           KbCallbackSecondaryDumpData,
           &CarComponentName);
}
