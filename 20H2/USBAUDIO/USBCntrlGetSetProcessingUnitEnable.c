/*
 * XREFs of USBCntrlGetSetProcessingUnitEnable @ 0x1C0031F50
 * Callers:
 *     TopologyProcessProcessUnit @ 0x1C0027380 (TopologyProcessProcessUnit.c)
 *     TopologyProcessExtensionUnit @ 0x1C0027480 (TopologyProcessExtensionUnit.c)
 * Callees:
 *     USBCntrlGetSetProcessingUnitValue @ 0x1C0031ED0 (USBCntrlGetSetProcessingUnitValue.c)
 */

__int64 __fastcall USBCntrlGetSetProcessingUnitEnable(__int64 a1, __int64 a2, UCHAR a3, void *a4)
{
  return USBCntrlGetSetProcessingUnitValue(a1, a2, a3, 1, a4, 1u);
}
