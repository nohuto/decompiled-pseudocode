/*
 * XREFs of PnpInsertNoopEvent @ 0x1405C6B94
 * Callers:
 *     PnpDeferNotification @ 0x1406B3854 (PnpDeferNotification.c)
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpCreateDeviceEventEntry @ 0x140684FB8 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14070AC58 (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpInsertNoopEvent(__int64 a1, __int64 a2)
{
  __int64 DeviceEventEntry; // rax

  DeviceEventEntry = PnpCreateDeviceEventEntry(0xC0uLL);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_QWORD *)(DeviceEventEntry + 24) = a1;
  *(_DWORD *)(DeviceEventEntry + 128) = 1;
  *(_QWORD *)(DeviceEventEntry + 136) = a2;
  *(GUID *)(DeviceEventEntry + 112) = GUID_DEVICE_NOOP;
  *(_DWORD *)(DeviceEventEntry + 148) = 80;
  return PnpInsertEventInQueue(DeviceEventEntry);
}
