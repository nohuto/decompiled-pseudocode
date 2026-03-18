/*
 * XREFs of KeCheckProcessorGroupAffinity @ 0x140389050
 * Callers:
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorGroupAffinity(__int64 a1, int a2)
{
  return (unsigned int)(*(_QWORD *)a1 >> (KiProcessorIndexToNumberMappingTable[a2] & 0x3F)) & (KiProcessorIndexToNumberMappingTable[a2] >> 6 == *(unsigned __int16 *)(a1 + 8));
}
