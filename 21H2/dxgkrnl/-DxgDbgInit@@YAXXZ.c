/*
 * XREFs of ?DxgDbgInit@@YAXXZ @ 0x1C01F6030
 * Callers:
 *     DriverEntry @ 0x1C03C7238 (DriverEntry.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

void DxgDbgInit(void)
{
  if ( byte_1C0130B7D )
  {
    WdLogSingleEntry1(1LL, 137LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"_DxgBugcheckCallbackRegisterSuccess == FALSE",
      137LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  CallbackRecord.State = 0;
  xmmword_1C0130B90 = WdDxgkSecondaryDataGUID;
  strcpy((char *)&Component, "\\Device\\DxgKrnl");
  byte_1C0130B7D = KeRegisterBugCheckReasonCallback(
                     &CallbackRecord,
                     (PKBUGCHECK_REASON_CALLBACK_ROUTINE)DxgDbgBugcheckCallback,
                     KbCallbackSecondaryDumpData,
                     &Component);
  if ( !byte_1C0130B7D )
  {
    WdLogSingleEntry1(1LL, 154LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"_DxgBugcheckCallbackRegisterSuccess",
      154LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
