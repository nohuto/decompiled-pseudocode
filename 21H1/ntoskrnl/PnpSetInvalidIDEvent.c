/*
 * XREFs of PnpSetInvalidIDEvent @ 0x1408A7C2C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x14072C7E0 (PnpQueryID.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x140684FB8 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14070AC58 (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetInvalidIDEvent(const void **a1)
{
  int v3; // ebx
  GUID *DeviceEventEntry; // rax
  __int64 v5; // rdi

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v3 = *(unsigned __int16 *)a1 + 82;
  DeviceEventEntry = (GUID *)PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)a1 + 194);
  v5 = (__int64)DeviceEventEntry;
  if ( !DeviceEventEntry )
    return 3221225626LL;
  DeviceEventEntry[8].Data1 = 8;
  *(_DWORD *)&DeviceEventEntry[9].Data2 = v3;
  DeviceEventEntry[7] = GUID_DEVICE_INVALID_ID;
  memmove(&DeviceEventEntry[10], a1[1], *(unsigned __int16 *)a1);
  *(_WORD *)(v5 + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 160) = 0;
  *(_WORD *)(v5 + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 162) = 0;
  return PnpInsertEventInQueue(v5);
}
