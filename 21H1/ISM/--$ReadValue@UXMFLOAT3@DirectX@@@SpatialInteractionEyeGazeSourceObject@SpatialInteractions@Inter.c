/*
 * XREFs of ??$ReadValue@UXMFLOAT3@DirectX@@@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAA?AUXMFLOAT3@DirectX@@AEBV?$PayloadFieldHelper@UXMFLOAT3@DirectX@@@Holographic@23@_KPEBD@Z @ 0x1800DB384
 * Callers:
 *     ?UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J@Z @ 0x1800DD200 (-UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$FailFast_IfNullMsg@PEBW4SPATIAL_GAZE_CALIBRATION_STATE@@$0A@@in1diag3@details@wil@@YAPEBW4SPATIAL_GAZE_CALIBRATION_STATE@@PEAXIPEBDPEBW43@1ZZ @ 0x1800DB34C (--$FailFast_IfNullMsg@PEBW4SPATIAL_GAZE_CALIBRATION_STATE@@$0A@@in1diag3@details@wil@@YAPEBW4SPA.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::ReadValue<DirectX::XMFLOAT3>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        const char *a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 1160);
  v7 = *a3;
  if ( *a3 )
  {
    if ( (unsigned int)(*(_DWORD *)(v7 + 16) + *(_DWORD *)(v7 + 20)) > (unsigned __int64)a4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        652LL,
        (__int64)"onecoreuap\\internal\\analog\\inc\\SpatialObjectDDIClient.h",
        a4);
      __debugbreak();
    }
    v5 = v6 + *(unsigned int *)(v7 + 16);
  }
  wil::details::in1diag3::FailFast_IfNullMsg<enum SPATIAL_GAZE_CALIBRATION_STATE const *,0>(
    retaddr,
    98LL,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\SpatialInteractionHead.h",
    v5);
  v8 = *(_DWORD *)(v5 + 8);
  *(_QWORD *)a2 = *(_QWORD *)v5;
  *(_DWORD *)(a2 + 8) = v8;
  return a2;
}
