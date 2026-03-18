/*
 * XREFs of MulFD6 @ 0x1C00D6350
 * Callers:
 *     RaisePower @ 0x1C00C8EB8 (RaisePower.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00CA454 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeRGBLUTAA @ 0x1C00D5DAC (ComputeRGBLUTAA.c)
 *     AdjustSrcDevGamma @ 0x1C00D6E04 (AdjustSrcDevGamma.c)
 *     ComputeColorSpaceXForm @ 0x1C0111974 (ComputeColorSpaceXForm.c)
 *     ComputeInverseMatrix3x3 @ 0x1C0111ECC (ComputeInverseMatrix3x3.c)
 *     CacheRGBToXYZ @ 0x1C0262878 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C0262968 (ComputeBGRMappingTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MulFD6(int a1, int a2)
{
  signed int v2; // r11d
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // r10d
  int v7; // r11d
  unsigned int v8; // r10d
  unsigned int v9; // edx
  int v10; // ebx
  unsigned int v11; // r9d
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // r11d
  int v15; // r9d
  __int64 result; // rax

  v2 = a2;
  v3 = a1;
  if ( a1 <= 0 )
  {
    v3 = -a1;
    v4 = 1;
    if ( !a1 )
      return 0LL;
  }
  else
  {
    v4 = 0;
  }
  if ( a2 <= 0 )
  {
    v2 = -a2;
    if ( a2 )
    {
      v4 ^= 1u;
      goto LABEL_4;
    }
    return 0LL;
  }
LABEL_4:
  if ( v3 != 1000000 )
  {
    if ( v2 == 1000000 )
    {
      v2 = v3;
    }
    else
    {
      v5 = (unsigned __int16)v2;
      v6 = (unsigned __int16)v2;
      v7 = v2 >> 16;
      v8 = (unsigned __int16)v3 * v6;
      v9 = (unsigned __int16)v3 * v7;
      v10 = v3 >> 16;
      v11 = v5 * v10;
      v12 = (unsigned __int16)(v5 * v10) + HIWORD(v8) + (unsigned __int16)v9;
      v13 = HIWORD(v12) + HIWORD(v11) + HIWORD(v9) + v10 * v7;
      v14 = ((v12 << 16) | (unsigned __int16)v8) + 500000;
      v15 = v13 + 1;
      if ( v14 >= 0x7A120 )
        v15 = v13;
      v2 = ((((v14 >> 20) | (v15 << 12)) / 0xF424) << 16) | (((unsigned __int16)(v14 >> 4) | ((((v14 >> 20) | (v15 << 12))
                                                                                             + 3036
                                                                                             * (((v14 >> 20) | (v15 << 12))
                                                                                              / 0xF424)) << 16))
                                                           / 0xF424);
    }
  }
  result = (unsigned int)-v2;
  if ( !v4 )
    return (unsigned int)v2;
  return result;
}
