/*
 * XREFs of TpReleaseWork @ 0x18000F180
 * Callers:
 *     LdrpDetectDetour @ 0x180061EAC (LdrpDetectDetour.c)
 *     RtlpFcFreeChangeRegistration @ 0x18007EE20 (RtlpFcFreeChangeRegistration.c)
 *     RtlpCtContextFree @ 0x180102158 (RtlpCtContextFree.c)
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18000F124 (TppCleanupGroupMemberRelease.c)
 *     TppWorkpValidateWork @ 0x18000F214 (TppWorkpValidateWork.c)
 */

char __fastcall TpReleaseWork(__int64 a1)
{
  signed __int32 v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = TppWorkpValidateWork(a1, 1LL);
  if ( v2 )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( v2 )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( v2 == 1 )
        LOBYTE(v2) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return v2;
}
