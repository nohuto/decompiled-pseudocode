/*
 * XREFs of _FractionToMantissa @ 0xEDA58
 * Callers:
 *     _Log @ 0x1BC88F (_Log.c)
 * Callees:
 *     <none>
 */

__int64 __cdecl FractionToMantissa(int a1, unsigned int a2)
{
  int v2; // ebp
  int v3; // ebx
  __int64 result; // rax
  char v5; // cl
  char v6; // cl
  char v7; // cl
  char v8; // cl
  unsigned int v9; // edi
  unsigned int v10; // ebp

  HIDWORD(result) = a1 % 0x186A0uLL;
  v2 = a2 & 0x1FF;
  v3 = 0;
  LODWORD(result) = (((a2 >> 1) | (__CFSHL__(a2, 1) << 31)) >> 8) & 7;
  v5 = a1 / 0x186A0uLL;
  if ( v5 )
  {
    v3 = v2 + result;
    LODWORD(result) = (((a2 >> 1) | (__CFSHL__(a2, 1) << 31)) >> 11) & 7;
    v6 = v5 - 1;
    if ( v6 )
    {
      v3 += v2 + result;
      LODWORD(result) = (((a2 >> 1) | (__CFSHL__(a2, 1) << 31)) >> 15) & 7;
      v7 = v6 - 1;
      if ( v7 )
      {
        v3 += v2 + result;
        LODWORD(result) = (((a2 >> 1) | (__CFSHL__(a2, 1) << 31)) >> 18) & 7;
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = ((a2 >> 1) | (__CFSHL__(a2, 1) << 31)) >> 19;
          do
          {
            v3 += v2 + result;
            v9 >>= 2;
            LODWORD(result) = v9 & 3;
            --v8;
          }
          while ( v8 );
        }
      }
    }
  }
  v10 = result + v2;
  LODWORD(result) = v3;
  if ( HIDWORD(result) )
    LODWORD(result) = v3 + (HIDWORD(result) * (unsigned __int64)v10 + 50000) / 0x186A0;
  return (int)result;
}
