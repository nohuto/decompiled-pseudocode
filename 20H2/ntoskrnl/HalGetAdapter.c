/*
 * XREFs of HalGetAdapter @ 0x140866660
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetAdapter @ 0x140761470 (HalpGetAdapter.c)
 */

PADAPTER_OBJECT __stdcall HalGetAdapter(PDEVICE_DESCRIPTION DeviceDescription, PULONG NumberOfMapRegisters)
{
  return (PADAPTER_OBJECT)HalpGetAdapter(&DeviceDescription->Version, 0LL, NumberOfMapRegisters);
}
