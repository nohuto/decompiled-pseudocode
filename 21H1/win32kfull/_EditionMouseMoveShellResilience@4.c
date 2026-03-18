/*
 * XREFs of _EditionMouseMoveShellResilience@4 @ 0xA4760
 * Callers:
 *     <none>
 * Callees:
 *     _IsAdaptiveQueueDetachExempted@4 @ 0xC1162 (_IsAdaptiveQueueDetachExempted@4.c)
 */

LONG __stdcall EditionMouseMoveShellResilience(LONG a1)
{
  LONG result; // eax
  int v2; // esi
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // ebx
  unsigned int v7; // edx

  result = a1;
  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v2 + 368);
  if ( v3 && (*(_DWORD *)(v2 + 688) & 0x40000) != 0 && (*(_DWORD *)(v3 + 184) & 0x100000) != 0 && *(_DWORD *)(v2 + 792) )
  {
    if ( !*(_DWORD *)(v3 + 296) )
    {
      v4 = MEMORY[0xFFDF0004];
      if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
      {
        v6 = MEMORY[0xFFDF0324];
        v7 = MEMORY[0xFFDF0320];
        if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
        {
          do
          {
            _mm_pause();
            v6 = MEMORY[0xFFDF0324];
            v7 = MEMORY[0xFFDF0320];
          }
          while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
          v4 = MEMORY[0xFFDF0004];
        }
        v5 = v4 * (v6 << 8) + (((unsigned int)v4 * (unsigned __int64)v7) >> 24);
      }
      else
      {
        v5 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
      }
      *(_DWORD *)(v3 + 296) = v5;
    }
    result = IsAdaptiveQueueDetachExempted(v2);
    if ( !result )
      return KeSetEvent(*(PRKEVENT *)(v2 + 792), 1, 0);
  }
  return result;
}
