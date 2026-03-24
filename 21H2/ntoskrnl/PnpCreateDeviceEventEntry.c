/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x1406E5E9C
 * Callers:
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14036DA64 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14036FF98 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037E658 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpInsertNoopEvent @ 0x1405CEEA0 (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x1406E5EEC (PnpSetCustomTargetEvent.c)
 *     PnpSetDeviceClassChange @ 0x14074996C (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x14074AFE8 (PnpSetPlugPlayEvent.c)
 *     PnpShutdownDevices @ 0x14089B94C (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x1408ABE34 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1408ABEA4 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1408ABFB0 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1408AC04C (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1408AC104 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
