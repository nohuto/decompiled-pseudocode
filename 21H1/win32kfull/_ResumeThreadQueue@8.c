/*
 * XREFs of _ResumeThreadQueue@8 @ 0xA7F1A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

volatile __int32 *__stdcall ResumeThreadQueue(_DWORD *a1, int a2)
{
  _DWORD *v2; // esi
  volatile __int32 *result; // eax
  int v4; // ebx
  __int32 v5; // ecx
  int v6; // edi
  unsigned int v7; // edx

  v2 = a1;
  result = (volatile __int32 *)(a1[66] & 0x1000001);
  if ( result == (volatile __int32 *)0x1000000 )
  {
    *(_DWORD *)(a1[59] + 304) = a2;
    if ( a1[165] )
      a1[165] = a2;
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
        v2 = a1;
        v4 = MEMORY[0xFFDF0004];
      }
      v5 = v4 * (v6 << 8) + (((unsigned int)v4 * (unsigned __int64)v7) >> 24);
    }
    else
    {
      v5 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    result = (volatile __int32 *)(v2[61] + 12);
    _InterlockedExchange(result, v5);
    v2[172] &= ~0x20u;
  }
  return result;
}
