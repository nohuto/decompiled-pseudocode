/*
 * XREFs of _RtlGetTickCount@0 @ 0x4B344CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlGetTickCount()
{
  if ( MEMORY[0x7FFE0004] >= 0x1000000u )
    return (MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24;
  while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
    _mm_pause();
  return MEMORY[0x7FFE0004] * (MEMORY[0x7FFE0324] << 8)
       + ((MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24);
}
