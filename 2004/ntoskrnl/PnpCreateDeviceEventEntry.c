/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x140647374
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14036BA4C (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14036D53C (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037A010 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpInsertNoopEvent @ 0x1405C7B94 (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x1406473C4 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x14072B138 (PnpSetPlugPlayEvent.c)
 *     PnpSetDeviceClassChange @ 0x140734DBC (PnpSetDeviceClassChange.c)
 *     PnpShutdownDevices @ 0x14089884C (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x1408A8D34 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1408A8DA4 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1408A8EB0 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1408A8F4C (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1408A9004 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall PnpCreateDeviceEventEntry(size_t Size)
{
  unsigned int v1; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx

  v1 = Size;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B706E50u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v1);
    v3[16] = 1;
  }
  return v3;
}
