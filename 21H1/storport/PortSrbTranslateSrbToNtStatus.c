/*
 * XREFs of PortSrbTranslateSrbToNtStatus @ 0x1C0057E68
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000CDB0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001954C (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C001A028 (RaidUnitLogSenseCommandSrb.c)
 *     RaUnitSmartDataIoctl @ 0x1C0046E38 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C0047390 (RaUnitSmartReturnStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortSrbTranslateSrbToNtStatus(char a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx

  v1 = a1 & 0x3F;
  if ( v1 > 0xB )
  {
    if ( v1 != 14 )
    {
      if ( v1 == 17 )
        return 3221225664LL;
      if ( v1 == 18 )
        return 2147483653LL;
      if ( v1 != 21 )
      {
        if ( v1 <= 0x1F )
          return 3221225861LL;
        if ( v1 <= 0x21 )
          return 3221225664LL;
        if ( v1 != 34 )
          return 3221225861LL;
      }
      return 3221225488LL;
    }
  }
  else if ( v1 != 11 )
  {
    result = 0LL;
    if ( (a1 & 0x3F) == 0 )
      return 259LL;
    v3 = v1 - 1;
    if ( !v3 )
      return result;
    v4 = v3 - 5;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
            return 3221225629LL;
          return 3221225861LL;
        }
        return 3221225653LL;
      }
      return 3221225664LL;
    }
    return 3221225488LL;
  }
  return 3221225653LL;
}
