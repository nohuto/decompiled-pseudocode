/*
 * XREFs of HvlAddSecureHvPagesCallbackRoutine @ 0x14054A5C0
 * Callers:
 *     <none>
 * Callees:
 *     HvlAddSecurePagesCallbackRoutine @ 0x14054A610 (HvlAddSecurePagesCallbackRoutine.c)
 *     IoIsPartialDumpRetry @ 0x1405529A8 (IoIsPartialDumpRetry.c)
 */

void __fastcall HvlAddSecureHvPagesCallbackRoutine(
        __int64 Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        __int64 ReasonSpecificDataLength)
{
  __int64 v4; // rcx

  if ( (HvlpForceAllPages & 1) != 0
    || ReasonSpecificData[3] == 131073
    && !(unsigned __int8)IoIsPartialDumpRetry(Reason, Record, ReasonSpecificData, ReasonSpecificDataLength) )
  {
    HvlpAllPages = 1;
    v4 = 2LL;
  }
  else
  {
    HvlpAllPages = 0;
    v4 = 8LL;
  }
  HvlAddSecurePagesCallbackRoutine(v4, Record, ReasonSpecificData, ReasonSpecificData);
}
