/*
 * XREFs of _AlpcFreeCompletionListMessage@8 @ 0x4B33E9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl AlpcFreeCompletionListMessage(PVOID CompletionList, PPORT_MESSAGE Message)
{
  unsigned int v2; // edx
  _PORT_MESSAGE *v3; // edi
  unsigned int v4; // edx
  volatile signed __int32 *v5; // ecx
  unsigned int v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // eax
  volatile signed __int32 *v9; // [esp+4h] [ebp-4h]

  if ( ((unsigned __int8)Message & 0x3F) == 0 )
  {
    v2 = (unsigned int)Message + (unsigned __int16)Message->u1.s1.TotalLength;
    if ( *((_DWORD *)CompletionList + 9) )
      v2 += *((_DWORD *)CompletionList + 10) + ((v2 & 3) != 0 ? 4 - (v2 & 3) : 0);
    if ( (unsigned int)Message < v2 )
    {
      v3 = (_PORT_MESSAGE *)((char *)CompletionList + *((_DWORD *)CompletionList + 7));
      if ( Message >= v3 && v2 <= (unsigned int)v3 + *((_DWORD *)CompletionList + 8) )
      {
        v4 = ((v2 - (unsigned int)v3 + 63) >> 6) - ((unsigned int)((char *)Message - (char *)v3) >> 6);
        v5 = (volatile signed __int32 *)((char *)CompletionList
                                       + 4 * ((unsigned int)((char *)Message - (char *)v3) >> 11)
                                       + *((_DWORD *)CompletionList + 5));
        v9 = v5;
        v6 = ((unsigned int)((char *)Message - (char *)v3) >> 6) & 0x1F;
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
        _InterlockedIncrement((volatile signed __int32 *)CompletionList + 48);
      }
    }
  }
}
