/*
 * XREFs of _MulFD6 @ 0xED8A8
 * Callers:
 *     _HT_CreateDeviceHalftoneInfo@8 @ 0x96E72 (_HT_CreateDeviceHalftoneInfo@8.c)
 *     _ComputeInverseMatrix3x3 @ 0x1BC698 (_ComputeInverseMatrix3x3.c)
 *     _RaisePower @ 0x1BC9A2 (_RaisePower.c)
 *     _AdjustSrcDevGamma @ 0x1BCB73 (_AdjustSrcDevGamma.c)
 *     _CacheRGBToXYZ @ 0x1BCECA (_CacheRGBToXYZ.c)
 *     _ComputeBGRMappingTable @ 0x1BCF91 (_ComputeBGRMappingTable.c)
 *     _ComputeColorSpaceXForm @ 0x1BDAAF (_ComputeColorSpaceXForm.c)
 *     _ComputeRGBLUTAA @ 0x1BDE20 (_ComputeRGBLUTAA.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __cdecl MulFD6(int a1, int a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rcx
  int v4; // ebx
  char *v5; // et0

  result = a2;
  LODWORD(result) = abs32(a2);
  if ( (_DWORD)result )
  {
    v3 = result;
    result = a1;
    LODWORD(result) = abs32(a1);
    if ( (_DWORD)result )
    {
      v4 = HIDWORD(result) ^ HIDWORD(v3);
      if ( (_UNKNOWN *)v3 != (_UNKNOWN *)((char *)&loc_F423E + 2) )
      {
        v5 = (char *)result;
        result = __PAIR64__(result, v3);
        if ( v5 != (char *)&loc_F423E + 2 )
        {
          result = (unsigned __int64)&loc_7A120 + HIDWORD(result) * (unsigned __int64)(unsigned int)v3;
          if ( HIDWORD(result) >= (unsigned int)&loc_F423E + 2 )
            LODWORD(result) = 0x7FFFFFFF;
          else
            LODWORD(result) = result / ((unsigned int)&loc_F423E + 2);
        }
      }
      LODWORD(result) = (v4 ^ result) - v4;
    }
  }
  return (int)result;
}
