/*
 * XREFs of PiAuditDeviceEnableDisableRequest @ 0x1408B5764
 * Callers:
 *     PiPnpRtlSetDeviceRegProperty @ 0x140739E5C (PiPnpRtlSetDeviceRegProperty.c)
 *     PiPnpRtlSetObjectProperty @ 0x14074594C (PiPnpRtlSetObjectProperty.c)
 * Callees:
 *     PiAuditDeviceOperation @ 0x1408B57A8 (PiAuditDeviceOperation.c)
 */

unsigned __int8 __fastcall PiAuditDeviceEnableDisableRequest(__int64 a1, char a2, __int64 a3, char a4)
{
  __int64 v5; // rdx
  unsigned __int8 result; // al

  v5 = 1LL;
  result = (a3 & 1) != 0;
  if ( (((a2 & 1) == 0) & result) != 0 )
    goto LABEL_5;
  if ( (a2 & 1) != 0 && (a3 & 1) == 0 )
  {
    v5 = 3LL;
LABEL_5:
    LOBYTE(a3) = a4;
    return PiAuditDeviceOperation(a1, v5, a3);
  }
  return result;
}
