/*
 * XREFs of USBCntrlGetSetProcessingUnitEnable @ 0x1C00318F0
 * Callers:
 *     TopologyProcessProcessUnit @ 0x1C0027010 (TopologyProcessProcessUnit.c)
 *     TopologyProcessExtensionUnit @ 0x1C0027110 (TopologyProcessExtensionUnit.c)
 * Callees:
 *     USBCntrlGetSetProcessingUnitValue @ 0x1C0031870 (USBCntrlGetSetProcessingUnitValue.c)
 */

__int64 __fastcall USBCntrlGetSetProcessingUnitEnable(__int64 a1, __int64 a2, UCHAR a3, void *a4)
{
  return USBCntrlGetSetProcessingUnitValue(a1, a2, a3, 1, a4, 1u);
}
