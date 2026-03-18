/*
 * XREFs of _Log @ 0x1BC88F
 * Callers:
 *     _RaisePower @ 0x1BC9A2 (_RaisePower.c)
 *     _AdjustSrcDevGamma @ 0x1BCB73 (_AdjustSrcDevGamma.c)
 *     _ComputeRGBLUTAA @ 0x1BDE20 (_ComputeRGBLUTAA.c)
 *     _pDCIAdjClr @ 0x1BEB31 (_pDCIAdjClr.c)
 * Callees:
 *     _FD6DivL @ 0xEDA24 (_FD6DivL.c)
 *     _FractionToMantissa @ 0xEDA58 (_FractionToMantissa.c)
 */

int __fastcall Log(int a1)
{
  int v2; // ebx
  int v3; // esi

  if ( a1 < 10000 )
  {
    if ( a1 < 100 )
    {
      if ( a1 < 10 )
      {
        if ( a1 <= 0 )
          return -6000000;
        v2 = -6000000;
        a1 *= 100000000;
      }
      else
      {
        v2 = -5000000;
        a1 *= 10000000;
      }
    }
    else
    {
      v2 = a1 >= 1000 ? -3000000 : -4000000;
      a1 *= a1 >= 1000 ? 100000 : 1000000;
    }
  }
  else if ( a1 < 1000000 )
  {
    if ( a1 < 100000 )
    {
      v2 = -2000000;
      a1 *= 10000;
    }
    else
    {
      v2 = -1000000;
      a1 *= 1000;
    }
  }
  else if ( a1 < 10000000 )
  {
    v2 = 0;
    a1 *= 100;
  }
  else if ( a1 < 100000000 )
  {
    v2 = 1000000;
    a1 *= 10;
  }
  else if ( a1 < 1000000000 )
  {
    v2 = (int)&loc_1E8480;
  }
  else
  {
    if ( a1 >= 2147483642 )
      return 3331930;
    v2 = 3000000;
    a1 = FD6DivL(a1, 10);
  }
  v3 = dword_259A38[a1 / 1000000];
  if ( a1 % 1000000 )
    v3 += FractionToMantissa(a1 % 1000000, dword_25A850[a1 / 1000000]);
  return v3 + v2;
}
