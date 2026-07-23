/*
 * XREFs of _RtlpUpdateLfhRandomDataArray@0 @ 0x4B379CD7
 * Callers:
 *     _RtlpHpLfhSubsegmentInitialize@20 @ 0x4B377743 (_RtlpHpLfhSubsegmentInitialize@20.c)
 * Callees:
 *     _RtlpHeapGenerateRandomValue32@0 @ 0x4B2B22F0 (_RtlpHeapGenerateRandomValue32@0.c)
 */

ULONG __stdcall RtlpUpdateLfhRandomDataArray()
{
  ULONG RandomValue32; // esi
  ULONG result; // eax
  int v2; // ecx
  __int16 HeapData_high; // [esp+4h] [ebp-4h]

  HeapData_high = HIWORD(NtCurrentTeb()->HeapData);
  RandomValue32 = RtlpHeapGenerateRandomValue32();
  result = RtlpHeapGenerateRandomValue32() & 0x7F7F7F7F;
  v2 = (unsigned __int8)HeapData_high >> 3;
  RtlpLowFragHeapRandomData[2 * v2] = result;
  dword_4B3A4204[2 * v2] = RandomValue32 & 0x7F7F7F7F;
  return result;
}
