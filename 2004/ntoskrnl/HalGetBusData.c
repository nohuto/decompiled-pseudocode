/*
 * XREFs of HalGetBusData @ 0x1403C4B70
 * Callers:
 *     HalpPiix4Detect @ 0x140996E20 (HalpPiix4Detect.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x14039BBF0 (HalGetBusDataByOffset.c)
 */

ULONG __fastcall HalGetBusData(BUS_DATA_TYPE a1, ULONG a2, ULONG a3, void *a4, ULONG Length)
{
  return HalGetBusDataByOffset(a1, a2, a3, a4, 0, Length);
}
