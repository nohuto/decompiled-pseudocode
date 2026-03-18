/*
 * XREFs of RunningHash @ 0x1B6C78
 * Callers:
 *     ComputeEventEntryHash @ 0x1B6672 (ComputeEventEntryHash.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RunningHash(unsigned int *a1, int a2, unsigned int a3)
{
  unsigned int i; // esi
  unsigned int result; // eax

  for ( i = 0; i < a3; *a1 = result )
  {
    result = (1025 * (*a1 + *(unsigned __int8 *)(i + a2))) ^ ((1025 * (*a1 + *(unsigned __int8 *)(i + a2))) >> 6);
    ++i;
  }
  return result;
}
