/*
 * XREFs of SpatialInteractionDevices::ReadBatteryLevel @ 0x1800CA350
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800C9A4C (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     SpatialInteractionDevices::ReadKnownFloats_float_1_ @ 0x1800C7E70 (SpatialInteractionDevices--ReadKnownFloats_float_1_.c)
 */

void __fastcall SpatialInteractionDevices::ReadBatteryLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_BYTE *)(a2 + 137) )
  {
    if ( (int)SpatialInteractionDevices::ReadKnownFloats_float_1_(a1, a3, a3, (USAGE **)(a2 + 40), (float *)(a4 + 96)) >= 0 )
      *(_BYTE *)(a4 + 100) = 1;
  }
}
