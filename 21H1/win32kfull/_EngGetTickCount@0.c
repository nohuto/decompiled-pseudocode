/*
 * XREFs of _EngGetTickCount@0 @ 0x1E7D65
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall EngGetTickCount()
{
  int v0; // edi
  int v2; // esi
  unsigned int v3; // edx

  v0 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] >= 0x1000000 )
    return ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  v2 = MEMORY[0xFFDF0324];
  v3 = MEMORY[0xFFDF0320];
  if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
  {
    do
    {
      _mm_pause();
      v2 = MEMORY[0xFFDF0324];
      v3 = MEMORY[0xFFDF0320];
    }
    while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
    v0 = MEMORY[0xFFDF0004];
  }
  return v0 * (v2 << 8) + (((unsigned int)v0 * (unsigned __int64)v3) >> 24);
}
