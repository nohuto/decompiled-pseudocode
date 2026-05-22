/*
 * XREFs of ?ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z @ 0x1800CBBBC
 * Callers:
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_ @ 0x1800C79E0 (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT3_3_.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_ @ 0x1800C7B7C (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT4_4_.c)
 *     SpatialInteractionDevices::ReadKnownFloats_float_1_ @ 0x1800C7E70 (SpatialInteractionDevices--ReadKnownFloats_float_1_.c)
 *     SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_ @ 0x1800C7F40 (SpatialInteractionDevices--ReadKnownFloats_DirectX--XMFLOAT2_2_.c)
 *     SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT4_4_ @ 0x1800C8010 (SpatialInteractionDevices--ReadKnownFloats_DirectX--XMFLOAT4_4_.c)
 *     ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_REPORT_TYPE@@GGGGPEAM@Z @ 0x1800CBEB8 (-HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_RE.c)
 * Callees:
 *     <none>
 */

double __fastcall SpatialInteractionDevices::Internal::ConvertHIDValueToDouble(
        __int64 this,
        __int64 a2,
        const struct _HIDP_VALUE_CAPS *a3)
{
  unsigned int v3; // r8d
  int v4; // r9d
  double result; // xmm0_8
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  double v18; // xmm2_8
  double v19; // xmm4_8
  double v20; // xmm3_8
  __int64 v21; // rax
  double v22; // xmm1_8
  int v23; // ecx
  unsigned __int64 v24; // rax

  v3 = *(_DWORD *)(a2 + 32);
  v4 = this;
  if ( v3 )
  {
    if ( *(int *)(a2 + 40) < 0 || this >= 0 )
      result = (double)(int)this;
    else
      result = (double)(int)(this & 1 | ((unsigned __int64)this >> 1))
             + (double)(int)(this & 1 | ((unsigned __int64)this >> 1));
    if ( v3 > 8 )
    {
      v12 = v3 - 9;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 == 1 )
                    return result * 0.1;
                }
                else
                {
                  return result * 0.01;
                }
              }
              else
              {
                return result * 0.001;
              }
            }
            else
            {
              return result * 0.0001;
            }
          }
          else
          {
            return result * 0.00001;
          }
        }
        else
        {
          return result * 0.000001;
        }
      }
      else
      {
        return result * 0.0000001;
      }
    }
    else if ( v3 == 8 )
    {
      return result * 0.00000001;
    }
    else
    {
      v6 = v3 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                v11 = v10 - 1;
                if ( v11 )
                {
                  if ( v11 == 1 )
                    return result * 10000000.0;
                }
                else
                {
                  return result * 1000000.0;
                }
              }
              else
              {
                return result * 100000.0;
              }
            }
            else
            {
              return result * 10000.0;
            }
          }
          else
          {
            return result * 1000.0;
          }
        }
        else
        {
          return result * 100.0;
        }
      }
      else
      {
        return result * 10.0;
      }
    }
  }
  else
  {
    v18 = 0.0;
    if ( *(_DWORD *)(a2 + 48) )
      v19 = (float)*(int *)(a2 + 48);
    else
      v19 = 0.0;
    if ( *(_DWORD *)(a2 + 52) )
      v20 = (float)*(int *)(a2 + 52);
    else
      v20 = DOUBLE_1_0;
    if ( v19 >= v20 )
      return DOUBLE_N2_147418113e9;
    if ( *(_DWORD *)(a2 + 40) )
      v18 = (float)*(int *)(a2 + 40);
    v21 = (unsigned int)~(-1 << *(_BYTE *)(a2 + 18));
    if ( *(_DWORD *)(a2 + 44) )
    {
      v23 = v21 & *(_DWORD *)(a2 + 44);
      if ( (v21 & *(int *)(a2 + 44)) < 0 )
      {
        v24 = v23 & 1 | ((v21 & (unsigned __int64)*(int *)(a2 + 44)) >> 1);
        v22 = (double)(int)v24 + (double)(int)v24;
      }
      else
      {
        v22 = (double)v23;
      }
    }
    else
    {
      v22 = (double)(int)v21;
    }
    if ( v18 >= v22 )
      return DOUBLE_N2_147418113e9;
    else
      return ((double)v4 - v18) / (v22 - v18) * (v20 - v19) + v19;
  }
  return result;
}
