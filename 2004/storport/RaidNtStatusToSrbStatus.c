/*
 * XREFs of RaidNtStatusToSrbStatus @ 0x1C00444AC
 * Callers:
 *     RaUnitStartIo @ 0x1C0005020 (RaUnitStartIo.c)
 *     RaUnitScsiIrp @ 0x1C000A8C0 (RaUnitScsiIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0013604 (RaidUnitProcessBusyRequest.c)
 *     RaUnitStartResetIo @ 0x1C0047DE8 (RaUnitStartResetIo.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004AEB4 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidNtStatusToSrbStatus(int a1)
{
  char result; // al

  switch ( a1 )
  {
    case -2147483643:
      return 18;
    case -2147483631:
      return 5;
    case -1073741808:
      return 34;
    case -1073741670:
      return 48;
    case -1073741667:
      return 10;
    case -1073741643:
      return 9;
    case -1073741632:
      return 8;
  }
  result = 4;
  if ( a1 >= 0 )
    return 1;
  return result;
}
