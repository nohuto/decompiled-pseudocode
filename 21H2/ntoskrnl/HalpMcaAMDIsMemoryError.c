/*
 * XREFs of HalpMcaAMDIsMemoryError @ 0x1404BD3D4
 * Callers:
 *     HalpCreateMachineCheckErrorRecord @ 0x1404B9D30 (HalpCreateMachineCheckErrorRecord.c)
 * Callees:
 *     HalpMcaAMDMapHwidAndMcaTypeToBlock @ 0x1404BD450 (HalpMcaAMDMapHwidAndMcaTypeToBlock.c)
 */

bool __fastcall HalpMcaAMDIsMemoryError(__int64 a1, __int16 a2)
{
  bool result; // al
  __int16 v4; // cx

  result = 0;
  if ( HalpMcaScalableRasSupported )
    return (unsigned int)HalpMcaAMDMapHwidAndMcaTypeToBlock(
                           HIDWORD(*(_QWORD *)(a1 + 72)) & 0xFFF,
                           HIWORD(*(_QWORD *)(a1 + 72)),
                           a1) == 8;
  v4 = HIWORD(*(_DWORD *)(a1 + 40)) & 0x1F;
  if ( *(_DWORD *)(a1 + 36) == 4 && (a2 & 0xE800) == 0x800 )
    return (v4 & 0xFFF7) == 0;
  return result;
}
