/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x140648964
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14036DA2C (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14037013C (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037BD40 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpInsertNoopEvent @ 0x1405CCDA4 (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x1406489B4 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x140739BC8 (PnpSetPlugPlayEvent.c)
 *     PnpSetDeviceClassChange @ 0x14074424C (PnpSetDeviceClassChange.c)
 *     PnpShutdownDevices @ 0x14089E37C (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x1408AE864 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1408AE8D4 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1408AE9E0 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1408AEA7C (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1408AEB34 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
