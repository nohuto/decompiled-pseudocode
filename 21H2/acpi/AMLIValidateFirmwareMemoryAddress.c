/*
 * XREFs of AMLIValidateFirmwareMemoryAddress @ 0x1C0064A88
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C00B0BB4 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C00256B8 (AmlpValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AMLIValidateFirmwareMemoryAddress(__int64 *a1, unsigned int a2)
{
  return AmlpValidateFirmwareMemoryAddress(a1, a2);
}
