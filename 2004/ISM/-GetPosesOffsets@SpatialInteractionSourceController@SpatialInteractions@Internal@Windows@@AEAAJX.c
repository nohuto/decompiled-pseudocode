/*
 * XREFs of ?GetPosesOffsets@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJXZ @ 0x18016C750
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016BA40 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x1800C5E0C (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::GetPosesOffsets(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  int v1; // edx
  char v3; // bl
  __int64 result; // rax
  int v5; // edx
  struct HKEY__ v6; // [rsp+40h] [rbp+8h] BYREF
  struct HKEY__ v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 126);
  v3 = 0;
  LOBYTE(v6.unused) = 0;
  result = SpatialInteractionDevices::GetPoseData((unsigned __int16 *)this + 60, v1, 0, (HKEY)this + 127, &v6);
  if ( (int)result >= 0 )
  {
    v5 = *((_DWORD *)this + 126);
    LOBYTE(v7.unused) = 0;
    result = SpatialInteractionDevices::GetPoseData((unsigned __int16 *)this + 60, v5, 1u, (HKEY)this + 135, &v7);
    if ( (int)result >= 0 )
    {
      if ( *((_BYTE *)this + 456) || LOBYTE(v6.unused) || LOBYTE(v7.unused) )
        v3 = 1;
      *((_BYTE *)this + 1013) = v3;
      return 0LL;
    }
  }
  return result;
}
