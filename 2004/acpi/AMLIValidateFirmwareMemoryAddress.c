/*
 * XREFs of AMLIValidateFirmwareMemoryAddress @ 0x1C0063674
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C00B15F4 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C0029EAC (AmlpValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AMLIValidateFirmwareMemoryAddress(__int64 *a1, unsigned int a2)
{
  return AmlpValidateFirmwareMemoryAddress(a1, a2);
}
