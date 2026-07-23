/*
 * XREFs of RtlpMuiRegGetLangInfoIndex @ 0x180104F64
 * Callers:
 *     RtlpMuiRegGetOrAddLangInfo @ 0x18010509C (RtlpMuiRegGetOrAddLangInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetLangInfoIndex(__int64 a1, char *a2)
{
  __int16 v3; // r11
  char *v4; // r9
  __int64 v5; // rdx
  char v7; // al
  unsigned int v8; // r10d

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = *((_WORD *)a2 + 2);
      if ( v3 || *((__int16 *)a2 + 3) >= 0 )
      {
        v4 = *(char **)(a1 + 16);
        v5 = (a2 - v4) / 28;
        if ( v5 >= 0 && v5 < *(unsigned __int16 *)(a1 + 6) )
          return (unsigned __int16)v5;
        v5 = 0LL;
        if ( *(_WORD *)(a1 + 6) )
        {
          while ( 1 )
          {
            if ( *(_WORD *)v4 == *(_WORD *)a2
              && *((_WORD *)v4 + 2) == v3
              && *((_WORD *)v4 + 3) == *((_WORD *)a2 + 3)
              && *((_WORD *)v4 + 5) == *((_WORD *)a2 + 5)
              && ((*((_WORD *)v4 + 4) ^ *((_WORD *)a2 + 4)) & 0xC000) == 0 )
            {
              v7 = 1;
              v8 = 0;
              do
              {
                if ( v8 >= 4 )
                  break;
                if ( (((unsigned __int16)(*((_WORD *)v4 + 4) ^ *((_WORD *)a2 + 4)) >> (2 * v8)) & 3) == 0 )
                {
                  v7 = 1;
                  if ( *(_WORD *)&v4[2 * v8 + 12] == *(_WORD *)&a2[2 * v8 + 12] )
                    continue;
                }
                v7 = 0;
                ++v8;
              }
              while ( v7 );
              if ( v7 )
                break;
            }
            ++v5;
            v4 += 28;
            if ( v5 >= *(unsigned __int16 *)(a1 + 6) )
              return 0xFFFFFFFFLL;
          }
          return (unsigned __int16)v5;
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
