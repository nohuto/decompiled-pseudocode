/*
 * XREFs of WdipSemWriteEvent @ 0x14077661C
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x1407763C4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x14079A6E8 (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x14092CF44 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x14092D02C (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x14092D0BC (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x14092D128 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x14092D1B0 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x14092D244 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x14092D47C (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x14092D630 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 */

NTSTATUS __fastcall WdipSemWriteEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *UserData)
{
  REGHANDLE v5; // rdi

  v5 = WdipSemRegHandle;
  if ( !a2 )
    return -1073741811;
  if ( EtwEventEnabled(WdipSemRegHandle, a2) )
    return EtwWrite(v5, a2, a3, a4, UserData);
  return -1073741816;
}
