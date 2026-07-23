/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x1406FD284
 * Callers:
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14036DC14 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x140370148 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037E1A8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpInsertNoopEvent @ 0x1405CEEA0 (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x1406FD2D4 (PnpSetCustomTargetEvent.c)
 *     PnpSetDeviceClassChange @ 0x140749B2C (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x14074B1A8 (PnpSetPlugPlayEvent.c)
 *     PnpShutdownDevices @ 0x14089BAAC (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x1408ABF94 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1408AC004 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1408AC110 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1408AC1AC (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1408AC264 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
