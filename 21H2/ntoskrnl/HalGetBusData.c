/*
 * XREFs of HalGetBusData @ 0x1403C8540
 * Callers:
 *     HalpPiix4Detect @ 0x14099B3E0 (HalpPiix4Detect.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x14039EAD0 (HalGetBusDataByOffset.c)
 */

ULONG __fastcall HalGetBusData(BUS_DATA_TYPE a1, ULONG a2, ULONG a3, void *a4, ULONG Length)
{
  return HalGetBusDataByOffset(a1, a2, a3, a4, 0, Length);
}
