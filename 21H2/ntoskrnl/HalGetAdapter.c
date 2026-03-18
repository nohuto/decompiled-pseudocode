/*
 * XREFs of HalGetAdapter @ 0x1409084A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetAdapter @ 0x140845CD8 (HalpGetAdapter.c)
 */

PADAPTER_OBJECT __stdcall HalGetAdapter(PDEVICE_DESCRIPTION DeviceDescription, PULONG NumberOfMapRegisters)
{
  return (PADAPTER_OBJECT)HalpGetAdapter((__int64)DeviceDescription, 0LL, NumberOfMapRegisters);
}
