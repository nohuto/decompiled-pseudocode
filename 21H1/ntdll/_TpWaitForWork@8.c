/*
 * XREFs of _TpWaitForWork@8 @ 0x4B2AB500
 * Callers:
 *     _RtlpFcFreeChangeRegistration@4 @ 0x4B2AB4C2 (_RtlpFcFreeChangeRegistration@4.c)
 *     _LdrpDetectDetour@0 @ 0x4B2AEB06 (_LdrpDetectDetour@0.c)
 * Callees:
 *     _TppWorkWait@8 @ 0x4B2B1F6A (_TppWorkWait@8.c)
 *     _TppWorkpValidateWork@12 @ 0x4B2EC4DD (_TppWorkpValidateWork@12.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  if ( TppWorkpValidateWork(0) )
    TppWorkWait(Work, CancelPendingCallbacks);
}
