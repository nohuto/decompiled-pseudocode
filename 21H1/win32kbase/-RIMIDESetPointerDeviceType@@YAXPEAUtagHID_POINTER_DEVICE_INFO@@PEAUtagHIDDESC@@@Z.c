/*
 * XREFs of ?RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1C016F41C
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C016FF48 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMIDESetPointerDeviceType(struct tagHID_POINTER_DEVICE_INFO *a1, struct tagHIDDESC *a2)
{
  if ( *((_WORD *)a2 + 21) != 13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  switch ( *((_WORD *)a2 + 20) )
  {
    case 1:
      *((_DWORD *)a1 + 6) = 6;
      break;
    case 2:
      *((_DWORD *)a1 + 6) = 5;
      break;
    case 4:
      *((_DWORD *)a1 + 6) = 3;
      break;
    case 5:
      *((_DWORD *)a1 + 6) = 7;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
      break;
  }
}
