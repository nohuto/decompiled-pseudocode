/*
 * XREFs of HalGetAdapter @ 0x140864260
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetAdapter @ 0x14076474C (HalpGetAdapter.c)
 */

PADAPTER_OBJECT __stdcall HalGetAdapter(PDEVICE_DESCRIPTION DeviceDescription, PULONG NumberOfMapRegisters)
{
  return (PADAPTER_OBJECT)HalpGetAdapter((__int64)DeviceDescription, 0LL, NumberOfMapRegisters);
}
