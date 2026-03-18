/*
 * XREFs of PiDcHandleSystemFirmwareUpdate @ 0x1408A0550
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiDcContainerRequiresConfiguration @ 0x140743CB8 (PiDcContainerRequiresConfiguration.c)
 */

__int64 PiDcHandleSystemFirmwareUpdate()
{
  return PiDcContainerRequiresConfiguration((wchar_t *)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
}
