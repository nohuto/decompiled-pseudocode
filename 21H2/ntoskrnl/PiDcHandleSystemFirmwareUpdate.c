/*
 * XREFs of PiDcHandleSystemFirmwareUpdate @ 0x1408A37B0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiDcContainerRequiresConfiguration @ 0x140759828 (PiDcContainerRequiresConfiguration.c)
 */

__int64 PiDcHandleSystemFirmwareUpdate()
{
  return PiDcContainerRequiresConfiguration((wchar_t *)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
}
