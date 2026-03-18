/*
 * XREFs of _MantissaToFraction @ 0xEDB24
 * Callers:
 *     _AntiLog @ 0x1BC57A (_AntiLog.c)
 * Callees:
 *     <none>
 */

__int64 __cdecl MantissaToFraction(unsigned __int16 a1, unsigned int a2)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // edi
  __int64 result; // rax
  bool v6; // cc
  int v7; // ebx

  v2 = a2 & 0x1FF;
  v3 = 1;
  v4 = v2 + ((((a2 >> 1) | (__CFSHL__(a2, 1) << 31)) >> 8) & 7);
  LODWORD(result) = a1 - v4;
  if ( a1 > v4 )
  {
    v3 = 2;
    v4 = v2 + ((((a2 >> 1) | (__CFSHL__(a2, 1) << 31)) >> 11) & 7);
    v6 = (int)result <= v4;
    LODWORD(result) = result - v4;
    if ( !v6 )
    {
      v3 = 3;
      v4 = v2 + ((((a2 >> 1) | (__CFSHL__(a2, 1) << 31)) >> 15) & 7);
      v6 = (int)result <= v4;
      LODWORD(result) = result - v4;
      if ( !v6 )
      {
        v3 = 4;
        v4 = v2 + ((((a2 >> 1) | (__CFSHL__(a2, 1) << 31)) >> 18) & 7);
        v6 = (int)result <= v4;
        LODWORD(result) = result - v4;
        if ( !v6 )
        {
          HIDWORD(result) = ((a2 >> 1) | (__CFSHL__(a2, 1) << 31)) >> 19;
          do
          {
            HIDWORD(result) >>= 2;
            ++v3;
            v4 = v2 + (BYTE4(result) & 3);
            v6 = (int)result <= v4;
            LODWORD(result) = result - v4;
          }
          while ( !v6 );
        }
      }
    }
  }
  if ( (_DWORD)result )
  {
    --v3;
    LODWORD(result) = (((unsigned int)v4 >> 1) + 100000 * (unsigned __int64)(unsigned int)(v4 + result))
                    / (unsigned int)v4;
  }
  v7 = v3 - 1;
  if ( v7 >= 0 )
    LODWORD(result) = dword_EDAFA[v7] + result;
  return (int)result;
}
