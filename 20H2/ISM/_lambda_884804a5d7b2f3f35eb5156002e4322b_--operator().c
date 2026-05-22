/*
 * XREFs of _lambda_884804a5d7b2f3f35eb5156002e4322b_::operator() @ 0x1800DE5E4
 * Callers:
 *     ?ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ @ 0x1800E0FE0 (-ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ.c)
 * Callees:
 *     ??$FailFast_IfNullMsg@PEBW4SPATIAL_GAZE_CALIBRATION_STATE@@$0A@@in1diag3@details@wil@@YAPEBW4SPATIAL_GAZE_CALIBRATION_STATE@@PEAXIPEBDPEBW43@1ZZ @ 0x1800DADFC (--$FailFast_IfNullMsg@PEBW4SPATIAL_GAZE_CALIBRATION_STATE@@$0A@@in1diag3@details@wil@@YAPEBW4SPA.c)
 *     ?TryGetFromPayload@?$PayloadFieldHelper@UHAND_POSE_OFFSET@@@Holographic@Internal@Windows@@QEBAPEBUHAND_POSE_OFFSET@@PEBX_K@Z @ 0x1800DCC70 (-TryGetFromPayload@-$PayloadFieldHelper@UHAND_POSE_OFFSET@@@Holographic@Internal@Windows@@QEBAPE.c)
 */

bool __fastcall lambda_884804a5d7b2f3f35eb5156002e4322b_::operator()(unsigned __int64 **a1, __int64 *a2)
{
  _BYTE *v2; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*a2 )
    return 0;
  v2 = (_BYTE *)Windows::Internal::Holographic::PayloadFieldHelper<HAND_POSE_OFFSET>::TryGetFromPayload(
                  a2,
                  (*a1)[29],
                  *a1[1],
                  (const char *)a2);
  wil::details::in1diag3::FailFast_IfNullMsg<enum SPATIAL_GAZE_CALIBRATION_STATE const *,0>(
    retaddr,
    691LL,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
    (__int64)v2);
  return *v2 != 0;
}
