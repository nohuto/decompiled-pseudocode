/*
 * XREFs of HalGetBusData @ 0x1403C7610
 * Callers:
 *     HalpPiix4Detect @ 0x14099CE60 (HalpPiix4Detect.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x14039ED40 (HalGetBusDataByOffset.c)
 */

ULONG __fastcall HalGetBusData(BUS_DATA_TYPE a1, ULONG a2, ULONG a3, void *a4, ULONG Length)
{
  return HalGetBusDataByOffset(a1, a2, a3, a4, 0, Length);
}
