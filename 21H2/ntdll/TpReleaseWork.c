/*
 * XREFs of TpReleaseWork @ 0x18000F180
 * Callers:
 *     LdrpDetectDetour @ 0x1800634AC (LdrpDetectDetour.c)
 *     RtlpFcFreeChangeRegistration @ 0x18007F840 (RtlpFcFreeChangeRegistration.c)
 *     RtlpCtContextFree @ 0x1801024C8 (RtlpCtContextFree.c)
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18000F124 (TppCleanupGroupMemberRelease.c)
 *     TppWorkpValidateWork @ 0x18000F214 (TppWorkpValidateWork.c)
 */

void __cdecl TpReleaseWork(PTP_WORK Work)
{
  int v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppWorkpValidateWork(Work, 1LL) )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease((__int64)Work, 1LL);
    if ( v2 )
    {
      *((_QWORD *)Work + 23) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Work, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_WORK))Work + 1))(Work);
    }
  }
}
