/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x140684FB8
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14036B918 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037B818 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14037E5FC (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpInsertNoopEvent @ 0x1405C6B94 (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x140683A54 (PnpSetCustomTargetEvent.c)
 *     PnpSetDeviceClassChange @ 0x14073038C (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x1407308D4 (PnpSetPlugPlayEvent.c)
 *     PnpShutdownDevices @ 0x14089752C (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x1408A7A14 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1408A7A84 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1408A7B90 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1408A7C2C (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1408A7CE4 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
