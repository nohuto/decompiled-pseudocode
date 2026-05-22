/*
 * XREFs of SpatialInteractionDevices::ReadPosePosition @ 0x1800C9F94
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800C958C (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT3_ @ 0x1800C7830 (SpatialInteractionDevices--ParseFloatData_DirectX--XMFLOAT3_.c)
 */

bool __fastcall SpatialInteractionDevices::ReadPosePosition(
        SpatialInteractionDevices::Internal *a1,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        __int64 a3,
        __int64 a4)
{
  bool result; // al
  int v6; // [rsp+20h] [rbp-18h]

  result = SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT3_(a1, a2, a3, a4, v6, a3);
  if ( result )
    *(_BYTE *)(a3 + 28) = 1;
  return result;
}
