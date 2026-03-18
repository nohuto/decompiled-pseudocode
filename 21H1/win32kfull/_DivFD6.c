/*
 * XREFs of _DivFD6 @ 0xED9D4
 * Callers:
 *     _HT_CreateDeviceHalftoneInfo@8 @ 0x96E72 (_HT_CreateDeviceHalftoneInfo@8.c)
 *     _HT_ComputeRGBGammaTable@24 @ 0x1BA3C7 (_HT_ComputeRGBGammaTable@24.c)
 *     _HT_Get8BPPFormatPalette@16 @ 0x1BA735 (_HT_Get8BPPFormatPalette@16.c)
 *     _HT_Get8BPPMaskPalette@24 @ 0x1BA810 (_HT_Get8BPPMaskPalette@24.c)
 *     _CreateStandardMonoPattern @ 0x1BBAAF (_CreateStandardMonoPattern.c)
 *     _ComputeInverseMatrix3x3 @ 0x1BC698 (_ComputeInverseMatrix3x3.c)
 *     _RaisePower @ 0x1BC9A2 (_RaisePower.c)
 *     _AdjustSrcDevGamma @ 0x1BCB73 (_AdjustSrcDevGamma.c)
 *     _CacheRGBToXYZ @ 0x1BCECA (_CacheRGBToXYZ.c)
 *     _ComputeBGRMappingTable @ 0x1BCF91 (_ComputeBGRMappingTable.c)
 *     _ComputeColorSpaceXForm @ 0x1BDAAF (_ComputeColorSpaceXForm.c)
 *     _ComputeRGBLUTAA @ 0x1BDE20 (_ComputeRGBLUTAA.c)
 *     _ScaleRGB @ 0x1BE8D9 (_ScaleRGB.c)
 *     _pDCIAdjClr @ 0x1BEB31 (_pDCIAdjClr.c)
 *     _BuildExpandAAInfo @ 0x1C17F7 (_BuildExpandAAInfo.c)
 * Callees:
 *     <none>
 */

int __cdecl DivFD6(int a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx
  unsigned __int64 v4; // rax
  int v5; // ebx
  void *v6; // et0

  v2 = abs32(a2);
  if ( !v2 )
    v2 = 1;
  v3 = v2;
  v4 = a1;
  LODWORD(v4) = abs32(a1);
  if ( (_DWORD)v4 )
  {
    v5 = HIDWORD(v4) ^ (a2 >> 31);
    if ( (_UNKNOWN *)v3 != (_UNKNOWN *)((char *)&loc_F423E + 2) )
    {
      v6 = (void *)v4;
      LODWORD(v4) = (char *)&loc_F423E + 2;
      HIDWORD(v4) = v6;
      if ( v6 != (void *)v3 )
      {
        v4 = HIDWORD(v4) * (unsigned __int64)((unsigned int)&loc_F423E + 2);
        if ( HIDWORD(v4) >= v3 )
          LODWORD(v4) = 0x7FFFFFFF;
        else
          LODWORD(v4) = (v4 % v3 >= v3 - v4 % v3) + (unsigned int)(v4 / v3);
      }
    }
    LODWORD(v4) = (v5 ^ v4) - v5;
  }
  return v4;
}
