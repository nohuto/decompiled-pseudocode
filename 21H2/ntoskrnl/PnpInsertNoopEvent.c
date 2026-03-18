/*
 * XREFs of PnpInsertNoopEvent @ 0x140768194
 * Callers:
 *     PnpSynchronizeDeviceEventQueue @ 0x1406EA5EC (PnpSynchronizeDeviceEventQueue.c)
 *     PnpDeferNotification @ 0x140768798 (PnpDeferNotification.c)
 * Callees:
 *     PnpInsertEventInQueue @ 0x14078C398 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x14078C4EC (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpInsertNoopEvent(__int64 a1, __int64 a2)
{
  __int64 DeviceEventEntry; // rax

  DeviceEventEntry = PnpCreateDeviceEventEntry(192LL);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  *(_QWORD *)(DeviceEventEntry + 24) = a1;
  *(_DWORD *)(DeviceEventEntry + 128) = 1;
  *(_QWORD *)(DeviceEventEntry + 136) = a2;
  *(GUID *)(DeviceEventEntry + 112) = GUID_DEVICE_NOOP;
  *(_DWORD *)(DeviceEventEntry + 148) = 80;
  return PnpInsertEventInQueue(DeviceEventEntry);
}
