/*
 * XREFs of WdipSemWriteEvent @ 0x140784C1C
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x1407849C4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x1407A9A18 (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x140932D74 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x140932E5C (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x140932EEC (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x140932F58 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x140932FE0 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x140933074 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x1409332AC (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x140933460 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
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
