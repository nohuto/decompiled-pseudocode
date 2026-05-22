/*
 * XREFs of ?TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2@Z @ 0x18016F8BC
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x18016D620 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C6218 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6E84 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?XMQuaternionRotationMatrix@DirectX@@YQ?AT__m128@@UXMMATRIX@1@@Z @ 0x1800E1EA8 (-XMQuaternionRotationMatrix@DirectX@@YQ-AT__m128@@UXMMATRIX@1@@Z.c)
 *     ?ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@4@1@Z @ 0x18016ACA0 (-ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@.c)
 *     ?UpdatePoseError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x18016FE0C (-UpdatePoseError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::TryUpdatePose(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        __int64 a2,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a3,
        __m128 *a4,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a5)
{
  RTL_SRWLOCK *v9; // rbx
  char v10; // di
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v15; // rcx
  int v16; // ecx
  __m128 v17; // xmm4
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v21; // rcx
  _BYTE v23[36]; // [rsp+40h] [rbp-188h] BYREF
  __m128 v24; // [rsp+64h] [rbp-164h]
  __m128 v25; // [rsp+74h] [rbp-154h]
  __m128 v26; // [rsp+84h] [rbp-144h]
  _BYTE v27[160]; // [rsp+E0h] [rbp-E8h] BYREF

  v9 = (RTL_SRWLOCK *)(((unsigned __int64)this + 80) & -(__int64)(TryAcquireSRWLockShared((PSRWLOCK)this + 10) != 0));
  if ( v9 )
  {
    memset_0((char *)this + 1024, 0, 0x40uLL);
    *(_OWORD *)((char *)this + 1148) = 0LL;
    *(_OWORD *)((char *)this + 1164) = 0LL;
    v11 = *((_QWORD *)this + 11);
    if ( v11 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v11 + 32LL))(v11, a2, 0LL, v23);
      if ( v13 >= 0 )
      {
        v16 = v23[16] & 2;
        *((_BYTE *)this + 1144) = v16 != 0;
        if ( v16 )
        {
          v17 = _mm_shuffle_ps(v25, v24, 244);
          *(__m128 *)((char *)this + 1128) = DirectX::XMQuaternionRotationMatrix(
                                               COERCE_DOUBLE(v24.m128_u64[0] & DirectX::g_XMMask3),
                                               COERCE_DOUBLE(_mm_shuffle_ps(v17, v17, 82).m128_u64[0] & DirectX::g_XMMask3),
                                               COERCE_DOUBLE(_mm_shuffle_ps(v25, v26, 14).m128_u64[0] & DirectX::g_XMMask3));
        }
        if ( a3 )
        {
          v19 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, _QWORD, _BYTE *))(*(_QWORD *)a3 + 32LL))(
                  a3,
                  a2,
                  0LL,
                  v27);
          if ( v19 >= 0 )
          {
            Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ComputeControllerPoses(
              this,
              (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v27,
              (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v23,
              a4,
              (__m128 *)a5);
          }
          else if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v18) )
          {
            wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
              v20,
              _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
            SpatialInteractionDevices::SpatialInteractionTrace::UpdatePoseError_(
              v21,
              v19,
              *((_DWORD *)this + 2),
              L"No HMD Pose");
          }
        }
      }
      else
      {
        if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v12) )
        {
          wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
            v14,
            _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
          SpatialInteractionDevices::SpatialInteractionTrace::UpdatePoseError_(
            v15,
            v13,
            *((_DWORD *)this + 2),
            L"No controller Pose");
        }
        *((_BYTE *)this + 1144) = 0;
      }
    }
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( v9 )
    ReleaseSRWLockShared(v9);
  return v10;
}
