/*
 * XREFs of TpWaitForWork @ 0x18007EF70
 * Callers:
 *     LdrpDetectDetour @ 0x180061FBC (LdrpDetectDetour.c)
 *     RtlpFcFreeChangeRegistration @ 0x18007EF20 (RtlpFcFreeChangeRegistration.c)
 * Callees:
 *     TppWorkpValidateWork @ 0x18000F214 (TppWorkpValidateWork.c)
 *     TppWorkWait @ 0x180013D78 (TppWorkWait.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)TppWorkpValidateWork((_PEB_LDR_DATA *)Work, 0LL, 0LL) )
    TppWorkWait(Work, CancelPendingCallbacks);
}
