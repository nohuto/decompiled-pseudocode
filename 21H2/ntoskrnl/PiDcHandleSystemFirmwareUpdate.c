/*
 * XREFs of PiDcHandleSystemFirmwareUpdate @ 0x140949450
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiDcContainerRequiresConfiguration @ 0x14076DAF0 (PiDcContainerRequiresConfiguration.c)
 */

__int64 PiDcHandleSystemFirmwareUpdate()
{
  return PiDcContainerRequiresConfiguration((wchar_t *)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
}
