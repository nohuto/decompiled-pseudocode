/*
 * XREFs of WdipSemWriteEvent @ 0x14077420C
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x140773FB4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x140784D10 (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x14092BC94 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x14092BD7C (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x14092BE0C (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x14092BE78 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x14092BF00 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x14092BF94 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x14092C1CC (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x14092C380 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
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
