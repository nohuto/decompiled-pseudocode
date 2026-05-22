/*
 * XREFs of ?UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J@Z @ 0x1800DD200
 * Callers:
 *     ?Parse@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800DC280 (-Parse@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$FailFast_IfNullMsg@PEBW4SPATIAL_GAZE_CALIBRATION_STATE@@$0A@@in1diag3@details@wil@@YAPEBW4SPATIAL_GAZE_CALIBRATION_STATE@@PEAXIPEBDPEBW43@1ZZ @ 0x1800DB34C (--$FailFast_IfNullMsg@PEBW4SPATIAL_GAZE_CALIBRATION_STATE@@$0A@@in1diag3@details@wil@@YAPEBW4SPA.c)
 *     ??$ReadValue@UXMFLOAT3@DirectX@@@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAA?AUXMFLOAT3@DirectX@@AEBV?$PayloadFieldHelper@UXMFLOAT3@DirectX@@@Holographic@23@_KPEBD@Z @ 0x1800DB384 (--$ReadValue@UXMFLOAT3@DirectX@@@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Inter.c)
 *     ??$ReadValue@W4SPATIAL_GAZE_CALIBRATION_STATE@@@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAA?AW4SPATIAL_GAZE_CALIBRATION_STATE@@AEBV?$PayloadFieldHelper@W4SPATIAL_GAZE_CALIBRATION_STATE@@@Holographic@23@_KPEBD@Z @ 0x1800DB410 (--$ReadValue@W4SPATIAL_GAZE_CALIBRATION_STATE@@@SpatialInteractionEyeGazeSourceObject@SpatialInt.c)
 *     ??$SpatialObjectReadNextStateError@U_GUID@@AEAJAEA_J@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEAJAEA_J@Z @ 0x1800DB510 (--$SpatialObjectReadNextStateError@U_GUID@@AEAJAEA_J@SpatialInteractionTrace@SpatialInteractionD.c)
 *     ??$emplace_back@AEBW4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@@?$deque@W4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@V?$allocator@W4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@@std@@@std@@QEAAXAEBW4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@@Z @ 0x1800DB564 (--$emplace_back@AEBW4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@@-$deque@W4SPATIAL_GAZE_CALIBRATIO.c)
 *     ?TryGetFromPayload@?$PayloadFieldHelper@UHAND_POSE_OFFSET@@@Holographic@Internal@Windows@@QEBAPEBUHAND_POSE_OFFSET@@PEBX_K@Z @ 0x1800DD1C0 (-TryGetFromPayload@-$PayloadFieldHelper@UHAND_POSE_OFFSET@@@Holographic@Internal@Windows@@QEBAPE.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::UpdateState(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject *this,
        __int64 a2)
{
  int v4; // eax
  const char *v5; // r9
  unsigned int v6; // esi
  __int64 *v7; // r12
  const char *v8; // r9
  unsigned __int64 v9; // rcx
  const char *v10; // r8
  __int64 v11; // r14
  __int64 *v12; // rbx
  char *v13; // rbx
  char v14; // al
  __int64 v15; // rax
  const char *v16; // r9
  __int64 v17; // rax
  int v18; // eax
  bool v19; // zf
  const char *v20; // r9
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  int *v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  struct _GUID *v26; // rax
  const char *v28; // [rsp+30h] [rbp-30h] BYREF
  int v29; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v30[16]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, const char **))(**((_QWORD **)this + 17) + 32LL))(
         *((_QWORD *)this + 17),
         a2,
         *((_QWORD *)this + 145),
         2LL * *((_QWORD *)this + 144),
         &v28);
  v29 = v4;
  v6 = v4;
  if ( v4 < 0 )
  {
    ++*((_DWORD *)this + 37);
    if ( v4 != *((_DWORD *)this + 292) )
    {
      v25 = *((_QWORD *)this + 15);
      *((_DWORD *)this + 292) = v4;
      v26 = (struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v25 + 48LL))(v25, v30);
      SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectReadNextStateError<_GUID,long &,__int64 &>(
        v26,
        &v29,
        (__int64 *)this + 147);
    }
  }
  else if ( v28 )
  {
    ++*((_DWORD *)this + 36);
    v7 = (__int64 *)Windows::Internal::Holographic::PayloadFieldHelper<HAND_POSE_OFFSET>::TryGetFromPayload(
                      (__int64 *)this + 138,
                      *((_QWORD *)this + 145),
                      *((_QWORD *)this + 144),
                      v5);
    wil::details::in1diag3::FailFast_IfNullMsg<enum SPATIAL_GAZE_CALIBRATION_STATE const *,0>(
      retaddr,
      362LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
      (__int64)v7);
    v9 = *((_QWORD *)this + 144);
    v10 = v28;
    v11 = *v7;
    if ( (unsigned __int64)v28 > v9 )
    {
      v12 = (__int64 *)Windows::Internal::Holographic::PayloadFieldHelper<HAND_POSE_OFFSET>::TryGetFromPayload(
                         (__int64 *)this + 138,
                         v9 + *((_QWORD *)this + 145),
                         *((_QWORD *)this + 144),
                         v8);
      wil::details::in1diag3::FailFast_IfNullMsg<enum SPATIAL_GAZE_CALIBRATION_STATE const *,0>(
        retaddr,
        370LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
        (__int64)v12);
      v10 = v28;
      if ( a2 - *v7 >= *v12 - a2 )
        v11 = *v12;
    }
    *((_QWORD *)this + 147) = v11;
    v13 = (char *)Windows::Internal::Holographic::PayloadFieldHelper<HAND_POSE_OFFSET>::TryGetFromPayload(
                    (__int64 *)this + 139,
                    *((_QWORD *)this + 145),
                    (unsigned __int64)v10,
                    v8);
    wil::details::in1diag3::FailFast_IfNullMsg<enum SPATIAL_GAZE_CALIBRATION_STATE const *,0>(
      retaddr,
      98LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\SpatialInteractionHead.h",
      (__int64)v13);
    v14 = *v13;
    *((_BYTE *)this + 1184) = *v13;
    if ( v14 )
    {
      v15 = Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::ReadValue<DirectX::XMFLOAT3>(
              (__int64)this,
              (__int64)v30,
              (__int64 *)this + 140,
              v28);
      v16 = v28;
      *(_QWORD *)((char *)this + 1188) = *(_QWORD *)v15;
      *((_DWORD *)this + 299) = *(_DWORD *)(v15 + 8);
      v17 = Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::ReadValue<DirectX::XMFLOAT3>(
              (__int64)this,
              (__int64)v30,
              (__int64 *)this + 141,
              v16);
      *((_QWORD *)this + 150) = *(_QWORD *)v17;
      *((_DWORD *)this + 302) = *(_DWORD *)(v17 + 8);
    }
    v18 = Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::ReadValue<enum SPATIAL_GAZE_CALIBRATION_STATE>(
            (__int64)this,
            (__int64 *)this + 142,
            (unsigned __int64)v28);
    v19 = *((_QWORD *)this + 143) == 0LL;
    *((_BYTE *)this + 1212) = v18 == 1;
    if ( !v19 )
    {
      while ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, const char **))(**((_QWORD **)this + 17) + 24LL))(
                *((_QWORD *)this + 17),
                *((_QWORD *)this + 157),
                *((_QWORD *)this + 145),
                *((_QWORD *)this + 144),
                &v28) >= 0
           && v28 == *((const char **)this + 144) )
      {
        v21 = (_QWORD *)Windows::Internal::Holographic::PayloadFieldHelper<HAND_POSE_OFFSET>::TryGetFromPayload(
                          (__int64 *)this + 138,
                          *((_QWORD *)this + 145),
                          (unsigned __int64)v28,
                          v20);
        wil::details::in1diag3::FailFast_IfNullMsg<enum SPATIAL_GAZE_CALIBRATION_STATE const *,0>(
          retaddr,
          403LL,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
          (__int64)v21);
        *((_QWORD *)this + 157) = *v21;
        v22 = *((_QWORD *)this + 143);
        if ( v22 )
        {
          if ( (unsigned int)(*(_DWORD *)(v22 + 16) + *(_DWORD *)(v22 + 20)) > (unsigned __int64)v28 )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              652LL,
              (__int64)"onecoreuap\\internal\\analog\\inc\\SpatialObjectDDIClient.h",
              (const char *)retaddr);
            __debugbreak();
          }
          v23 = (int *)(*((_QWORD *)this + 145) + *(unsigned int *)(v22 + 16));
        }
        else
        {
          v23 = 0LL;
        }
        wil::details::in1diag3::FailFast_IfNullMsg<enum SPATIAL_GAZE_CALIBRATION_STATE const *,0>(
          retaddr,
          98LL,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\SpatialInteractionHead.h",
          (__int64)v23);
        v24 = *v23;
        v29 = v24;
        if ( v24 != *((_DWORD *)this + 316) )
        {
          *((_DWORD *)this + 316) = v24;
          std::deque<enum SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS>::emplace_back<enum SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS const &>(
            (_QWORD *)this + 159,
            (unsigned int *)&v29);
        }
      }
    }
  }
  return v6;
}
