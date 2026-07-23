/*
 * XREFs of PnpSetInvalidIDEvent @ 0x1408AC1AC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x140747310 (PnpQueryID.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x1406FD284 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x1406FE94C (PnpInsertEventInQueue.c)
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
