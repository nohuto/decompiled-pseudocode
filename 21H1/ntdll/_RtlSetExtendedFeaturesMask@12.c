/*
 * XREFs of _RtlSetExtendedFeaturesMask@12 @ 0x4B35BC40
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpLocateXStateChunk@4 @ 0x4B35C522 (_RtlpLocateXStateChunk@4.c)
 */

unsigned int *__stdcall RtlSetExtendedFeaturesMask(int a1, int a2, int a3)
{
  unsigned int *result; // eax
  int v4; // ecx

  result = (unsigned int *)RtlpLocateXStateChunk(a1);
  v4 = a3 & (MEMORY[0x7FFE070C] | MEMORY[0x7FFE03DC]);
  *result = a2 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0xFFFFFFFC;
  result[1] = v4;
  return result;
}
