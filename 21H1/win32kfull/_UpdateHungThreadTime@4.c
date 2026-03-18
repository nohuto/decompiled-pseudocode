/*
 * XREFs of _UpdateHungThreadTime@4 @ 0x142024
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     <none>
 */

__int32 __thiscall UpdateHungThreadTime(_DWORD *this)
{
  int v1; // edi
  _DWORD *v2; // ebx
  __int32 v3; // eax
  int v4; // esi
  unsigned int v5; // edx

  v1 = MEMORY[0xFFDF0004];
  v2 = this;
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v4 = MEMORY[0xFFDF0324];
    v5 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v4 = MEMORY[0xFFDF0324];
        v5 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v1 = MEMORY[0xFFDF0004];
      v2 = this;
    }
    v3 = v1 * (v4 << 8) + (((unsigned int)v1 * (unsigned __int64)v5) >> 24);
  }
  else
  {
    v3 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  return _InterlockedExchange((volatile __int32 *)(v2[61] + 12), v3);
}
