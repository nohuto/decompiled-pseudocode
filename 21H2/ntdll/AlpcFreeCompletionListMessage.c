/*
 * XREFs of AlpcFreeCompletionListMessage @ 0x180071760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl AlpcFreeCompletionListMessage(PVOID CompletionList, PPORT_MESSAGE Message)
{
  unsigned __int64 v3; // r8
  int v4; // ecx
  _PORT_MESSAGE *v5; // rbx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r8
  volatile signed __int32 *v8; // r11
  int v9; // r10d
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx

  if ( ((unsigned __int8)Message & 0x3F) == 0 )
  {
    v3 = (unsigned __int64)Message + (unsigned __int16)Message->u1.s1.TotalLength;
    if ( *((_DWORD *)CompletionList + 9) )
    {
      if ( (v3 & 7) != 0 )
        v4 = 8 - (v3 & 7);
      else
        v4 = 0;
      v3 += (unsigned int)(v4 + *((_DWORD *)CompletionList + 10));
    }
    if ( (unsigned __int64)Message < v3 )
    {
      v5 = (_PORT_MESSAGE *)((char *)CompletionList + *((unsigned int *)CompletionList + 7));
      if ( Message >= v5 && v3 <= (unsigned __int64)v5 + *((unsigned int *)CompletionList + 8) )
      {
        v6 = (unsigned __int64)((char *)Message - (char *)v5) >> 6;
        v7 = ((v3 - (unsigned __int64)v5 + 63) >> 6) - v6;
        v8 = (volatile signed __int32 *)((char *)CompletionList
                                       + 4 * ((unsigned __int64)((char *)Message - (char *)v5) >> 11)
                                       + *((unsigned int *)CompletionList + 5));
        v9 = v6 & 0x1F;
        if ( v9 )
        {
          v10 = v7;
          if ( (unsigned int)(32 - v9) <= v7 )
            v10 = 32 - v9;
          _InterlockedAnd(v8++, ~(((1 << v10) - 1) << v9));
          v7 -= v10;
        }
        if ( v7 >= 0x20 )
        {
          v11 = v7 >> 5;
          v7 += -32LL * (v7 >> 5);
          do
          {
            _InterlockedAnd(v8++, 0);
            --v11;
          }
          while ( v11 );
        }
        if ( v7 )
          _InterlockedAnd(v8, -1 << v7);
        _InterlockedIncrement((volatile signed __int32 *)CompletionList + 48);
      }
    }
  }
}
