/*
 * XREFs of _anonymous_namespace_::GetPoseSubKey @ 0x1800C5F74
 * Callers:
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x1800C5D7C (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800C5D38 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

const wchar_t *__fastcall anonymous_namespace_::GetPoseSubKey(char *a1)
{
  char *v2; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !(_DWORD)a1 )
    return L"HoldingPose";
  if ( (_DWORD)a1 != 1 )
  {
    LODWORD(v2) = (_DWORD)a1;
    wil::details::in1diag3::FailFast_UnexpectedMsg(
      retaddr,
      103LL,
      (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      "Unknown pose type %d",
      v2);
    __debugbreak();
  }
  return L"PointingPose";
}
