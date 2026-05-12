/*
 * XREFs of RaidDsmSetLedState @ 0x1C0044008
 * Callers:
 *     RaidSetLedStateByAcpiDsm @ 0x1C0044A14 (RaidSetLedStateByAcpiDsm.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     RaDsmLedStatusToNtStatus @ 0x1C0043404 (RaDsmLedStatusToNtStatus.c)
 *     RaidEvaluateDsmLedState @ 0x1C0044074 (RaidEvaluateDsmLedState.c)
 */

__int64 __fastcall RaidDsmSetLedState(struct _DEVICE_OBJECT *a1)
{
  __int64 result; // rax
  int v2; // [rsp+30h] [rbp-38h] BYREF
  __int128 v3; // [rsp+38h] [rbp-30h]
  __int64 v4; // [rsp+48h] [rbp-20h]

  v2 = 24;
  v3 = 0LL;
  v4 = 0LL;
  result = RaidEvaluateDsmLedState(a1, (__int64)&v2);
  if ( (int)result >= 0 )
    return RaDsmLedStatusToNtStatus((unsigned __int16)v4);
  return result;
}
