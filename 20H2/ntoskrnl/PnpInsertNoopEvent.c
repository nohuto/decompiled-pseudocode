/*
 * XREFs of PnpInsertNoopEvent @ 0x1405CCDA4
 * Callers:
 *     PnpDeferNotification @ 0x1406ECE54 (PnpDeferNotification.c)
 *     PipProcessDevNodeTree @ 0x140735A50 (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpCreateDeviceEventEntry @ 0x140648964 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14064AECC (PnpInsertEventInQueue.c)
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
