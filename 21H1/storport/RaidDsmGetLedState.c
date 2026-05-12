/*
 * XREFs of RaidDsmGetLedState @ 0x1C00436E8
 * Callers:
 *     RaidSetLedStateByAcpiDsm @ 0x1C004432C (RaidSetLedStateByAcpiDsm.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     RaDsmLedStatusToNtStatus @ 0x1C0042D1C (RaDsmLedStatusToNtStatus.c)
 *     RaidEvaluateDsmLedState @ 0x1C004398C (RaidEvaluateDsmLedState.c)
 */

__int64 __fastcall RaidDsmGetLedState(struct _DEVICE_OBJECT *a1, _DWORD *a2)
{
  int v3; // ecx
  unsigned int v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-20h]

  v5 = 24;
  v6 = 0LL;
  v7 = 0LL;
  v3 = RaidEvaluateDsmLedState(a1, (__int64)&v5);
  if ( v3 >= 0 )
  {
    if ( v5 >= 0x18 && (_DWORD)v6 == 1114596673 && DWORD2(v6) && WORD6(v6) == 2 )
    {
      if ( (_WORD)v7 )
        return (unsigned int)RaDsmLedStatusToNtStatus((unsigned __int16)v7);
      else
        *a2 = HIDWORD(v7);
    }
    else
    {
      return (unsigned int)-1072431089;
    }
  }
  return (unsigned int)v3;
}
