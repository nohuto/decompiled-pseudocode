/*
 * XREFs of HalSetBusData @ 0x1404B8A70
 * Callers:
 *     <none>
 * Callees:
 *     HalSetBusDataByOffset @ 0x14039E860 (HalSetBusDataByOffset.c)
 */

ULONG __fastcall HalSetBusData(BUS_DATA_TYPE a1, ULONG a2, ULONG a3, void *a4, ULONG Length)
{
  return HalSetBusDataByOffset(a1, a2, a3, a4, 0, Length);
}
