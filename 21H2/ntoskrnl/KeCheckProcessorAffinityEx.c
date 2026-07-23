/*
 * XREFs of KeCheckProcessorAffinityEx @ 0x1402CDCD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorAffinityEx(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax

  v2 = (unsigned int)KiProcessorIndexToNumberMappingTable[a2];
  return (*(_QWORD *)(a1 + 8 * (v2 >> 6) + 8) >> (v2 & 0x3F)) & 1LL;
}
