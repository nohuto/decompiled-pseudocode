/*
 * XREFs of DivFD6 @ 0x1C00D7050
 * Callers:
 *     RaisePower @ 0x1C00C8EB8 (RaisePower.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00CA454 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeRGBLUTAA @ 0x1C00D5DAC (ComputeRGBLUTAA.c)
 *     pDCIAdjClr @ 0x1C00D6484 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x1C00D6E04 (AdjustSrcDevGamma.c)
 *     BuildExpandAAInfo @ 0x1C00E9C30 (BuildExpandAAInfo.c)
 *     ComputeColorSpaceXForm @ 0x1C0111974 (ComputeColorSpaceXForm.c)
 *     ComputeInverseMatrix3x3 @ 0x1C0111ECC (ComputeInverseMatrix3x3.c)
 *     CreateStandardMonoPattern @ 0x1C01461D0 (CreateStandardMonoPattern.c)
 *     HT_Get8BPPMaskPalette @ 0x1C0147DB0 (HT_Get8BPPMaskPalette.c)
 *     HT_ComputeRGBGammaTable @ 0x1C02621F0 (HT_ComputeRGBGammaTable.c)
 *     HT_Get8BPPFormatPalette @ 0x1C0262510 (HT_Get8BPPFormatPalette.c)
 *     CacheRGBToXYZ @ 0x1C0262878 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C0262968 (ComputeBGRMappingTable.c)
 *     ScaleRGB @ 0x1C026370C (ScaleRGB.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x1C00D7FDC (U64DivU32RoundUp.c)
 */

__int64 __fastcall DivFD6(int a1, int a2)
{
  unsigned int v2; // r10d
  int v3; // ebx
  __int64 result; // rax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // eax
  bool v8; // cf
  unsigned int v9; // ecx

  v2 = a2;
  if ( a2 <= 0 )
  {
    v2 = -a2;
    v3 = 1;
    if ( !a2 )
      return (a1 >> 31) + 0x80000000;
  }
  else
  {
    v3 = 0;
  }
  if ( v2 == 1000000 )
  {
    result = (unsigned int)-a1;
    if ( !v3 )
      return (unsigned int)a1;
  }
  else
  {
    if ( a1 <= 0 )
    {
      a1 = -a1;
      if ( !a1 )
        return 0LL;
      v3 ^= 1u;
    }
    if ( a1 == v2 )
    {
      return v3 != 0 ? -1000000 : 1000000;
    }
    else
    {
      v5 = 62500 * (unsigned __int16)a1;
      v6 = v5 - 198967296 * HIWORD(a1);
      v7 = (unsigned int)(62500 * HIWORD(a1)) >> 16;
      v8 = v5 >= 198967296 * HIWORD(a1);
      v9 = v7 + 1;
      if ( !v8 )
        v9 = v7;
      result = U64DivU32RoundUp((v6 >> 28) | (16 * v9), 16 * v6, v2);
      if ( v3 )
        return (unsigned int)-(int)result;
    }
  }
  return result;
}
