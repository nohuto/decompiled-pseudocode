/*
 * XREFs of SpatialInteractionDevices::ReadPoseOrientation @ 0x1800C9ED8
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800C94FC (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT4_ @ 0x1800C7860 (SpatialInteractionDevices--ParseFloatData_DirectX--XMFLOAT4_.c)
 */

bool __fastcall SpatialInteractionDevices::ReadPoseOrientation(
        SpatialInteractionDevices::Internal *a1,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        __int64 a3,
        __int64 a4)
{
  bool result; // al
  int v6; // [rsp+20h] [rbp-18h]

  result = SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT4_(a1, a2, a3, a4, v6, a3 + 12);
  if ( result )
    *(_BYTE *)(a3 + 29) = 1;
  return result;
}
