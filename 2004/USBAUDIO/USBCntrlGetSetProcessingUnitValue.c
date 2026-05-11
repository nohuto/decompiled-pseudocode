/*
 * XREFs of USBCntrlGetSetProcessingUnitValue @ 0x1C00318F0
 * Callers:
 *     USBCntrlGetSetProcessingUnitEnable @ 0x1C0031970 (USBCntrlGetSetProcessingUnitEnable.c)
 * Callees:
 *     USBHwGetSetProperty @ 0x1C002C6B8 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBCntrlGetSetProcessingUnitValue(__int64 a1, __int64 a2, UCHAR a3, __int16 a4, void *a5, ULONG a6)
{
  return USBHwGetSetProperty(
           a1,
           0x1Bu,
           a3 >> 7,
           a3,
           a4,
           0,
           *(_WORD *)(a2 + 80),
           *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 48LL) + 2LL),
           a5,
           a6);
}
