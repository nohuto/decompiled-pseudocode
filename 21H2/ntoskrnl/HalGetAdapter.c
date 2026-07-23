/*
 * XREFs of HalGetAdapter @ 0x1408643C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetAdapter @ 0x14076490C (HalpGetAdapter.c)
 */

PADAPTER_OBJECT __stdcall HalGetAdapter(PDEVICE_DESCRIPTION DeviceDescription, PULONG NumberOfMapRegisters)
{
  return (PADAPTER_OBJECT)HalpGetAdapter((__int64)DeviceDescription, 0LL, NumberOfMapRegisters);
}
