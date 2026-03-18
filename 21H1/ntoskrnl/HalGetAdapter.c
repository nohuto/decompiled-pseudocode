/*
 * XREFs of HalGetAdapter @ 0x14085F8F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetAdapter @ 0x14074E200 (HalpGetAdapter.c)
 */

PADAPTER_OBJECT __stdcall HalGetAdapter(PDEVICE_DESCRIPTION DeviceDescription, PULONG NumberOfMapRegisters)
{
  return (PADAPTER_OBJECT)HalpGetAdapter(&DeviceDescription->Version, 0LL, NumberOfMapRegisters);
}
