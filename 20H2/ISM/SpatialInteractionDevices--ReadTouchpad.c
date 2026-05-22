/*
 * XREFs of SpatialInteractionDevices::ReadTouchpad @ 0x1800C9FB8
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800C94FC (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_ @ 0x1800C79F0 (SpatialInteractionDevices--ReadKnownFloats_DirectX--XMFLOAT2_2_.c)
 */

void __fastcall SpatialInteractionDevices::ReadTouchpad(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  float *v6; // rsi

  if ( *(_BYTE *)(a2 + 138) )
  {
    v6 = (float *)(a4 + 44);
    if ( (int)SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_(
                (__int64)a1,
                a3,
                a3,
                (USAGE **)(a2 + 8),
                (float *)(a4 + 44)) >= 0 )
    {
      *(_BYTE *)(a4 + 52) = 1;
      if ( !a1[232] )
      {
        if ( a1[233] )
          *v6 = 1.0 - *v6;
        if ( a1[234] )
          *(float *)(a4 + 48) = 1.0 - *(float *)(a4 + 48);
      }
    }
  }
}
