/*
 * XREFs of _AntiLog @ 0x1BC57A
 * Callers:
 *     _RaisePower @ 0x1BC9A2 (_RaisePower.c)
 * Callees:
 *     _FD6DivL @ 0xEDA24 (_FD6DivL.c)
 *     _MantissaToFraction @ 0xEDB24 (_MantissaToFraction.c)
 */

int __fastcall AntiLog(int a1)
{
  int v1; // esi
  int v3; // edi
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int i; // ebx
  int v8; // esi

  v1 = a1;
  if ( a1 >= 0 )
  {
    if ( a1 < 1000000 )
    {
      v3 = 0;
    }
    else
    {
      if ( a1 >= 3331930 )
        return 0x7FFFFFFF;
      v3 = (a1 + 999999) / 1000000;
      v1 = 1000000 * v3 - a1;
    }
  }
  else
  {
    if ( a1 <= -6000000 )
      return 1;
    v3 = (a1 - 999999) / 1000000;
    v1 = -1000000 * v3 + a1;
  }
  if ( v1 )
  {
    v4 = v1 / 10000;
    if ( v1 / 10000 >= 0 && v4 <= 0x63 )
    {
      _mm_lfence();
      v5 = (unsigned __int16)MantSearchTable[v4];
      v6 = (unsigned __int16)word_259AFA[v4] + 1;
      for ( i = (v5 + v6) >> 1; i != v5; i = (int)(v5 + v6) >> 1 )
      {
        if ( v1 >= MantissaTable[i] )
        {
          if ( v1 <= MantissaTable[i] )
          {
            v1 = 0;
            break;
          }
          v5 = i;
        }
        else
        {
          v6 = i;
        }
      }
      if ( v1 )
        v1 = MantissaToFraction((unsigned __int16)v1 - LOWORD(MantissaTable[v5]), MantissaCorrectData[v5]);
      v8 = 1000000 * (i + 100) + v1;
      v3 -= 2;
      goto LABEL_26;
    }
    return 0x7FFFFFFF;
  }
  v8 = 1000000;
LABEL_26:
  if ( v3 < 0 )
    return FD6DivL(v8, Power10ExpNum[-v3]);
  if ( v3 <= 0 )
    return v8;
  return v8 * Power10ExpNum[v3];
}
