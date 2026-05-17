/*
 * XREFs of _AlpcFreeCompletionListMessage@8 @ 0x4B33E9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall AlpcFreeCompletionListMessage(int a1, unsigned int a2)
{
  unsigned int v2; // edx
  unsigned int v3; // edi
  unsigned int v4; // edx
  volatile signed __int32 *v5; // ecx
  unsigned int v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // eax
  volatile signed __int32 *v9; // [esp+4h] [ebp-4h]

  if ( (a2 & 0x3F) == 0 )
  {
    v2 = a2 + *(unsigned __int16 *)(a2 + 2);
    if ( *(_DWORD *)(a1 + 36) )
      v2 += *(_DWORD *)(a1 + 40) + ((v2 & 3) != 0 ? 4 - (v2 & 3) : 0);
    if ( a2 < v2 )
    {
      v3 = a1 + *(_DWORD *)(a1 + 28);
      if ( a2 >= v3 && v2 <= v3 + *(_DWORD *)(a1 + 32) )
      {
        v4 = ((v2 - v3 + 63) >> 6) - ((a2 - v3) >> 6);
        v5 = (volatile signed __int32 *)(a1 + *(_DWORD *)(a1 + 20) + 4 * ((a2 - v3) >> 11));
        v9 = v5;
        v6 = ((a2 - v3) >> 6) & 0x1F;
        if ( v6 )
        {
          v7 = 32 - v6;
          if ( 32 - v6 > v4 )
            v7 = v4;
          _InterlockedAnd(v5++, ~(((1 << v7) - 1) << v6));
          v4 -= v7;
          ++v9;
        }
        if ( v4 >= 0x20 )
        {
          v8 = v4 >> 5;
          do
          {
            _InterlockedAnd(v5++, 0);
            v4 -= 32;
            --v8;
          }
          while ( v8 );
          v9 = v5;
        }
        if ( v4 )
          _InterlockedAnd(v9, -1 << v4);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 192));
      }
    }
  }
}
