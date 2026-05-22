/*
 * XREFs of ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x18015D5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800A7E8C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$GetPoseAtTime_LatestPoseFromDriver@AEAIAEAKAEB_JAEB_JAEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEBUXMFLOAT4X3@DirectX@@@HolographicDriverClientContinuousTrace@@SAXAEAIAEAKAEB_J2AEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEBUXMFLOAT4X3@DirectX@@@Z @ 0x18014E6AC (--$GetPoseAtTime_LatestPoseFromDriver@AEAIAEAKAEB_JAEB_JAEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AE.c)
 *     ??$GetPoseAtTime_PredictFromPoses@AEBJAEA_JAEA_JAEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOAT4X3@DirectX@@@HolographicDriverClientContinuousTrace@@SAXAEBJAEA_J1AEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOAT4X3@DirectX@@@Z @ 0x18014E72C (--$GetPoseAtTime_PredictFromPoses@AEBJAEA_JAEA_JAEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOA.c)
 *     _lambda_f2d9a31b738d46358cc103eee0272db8_::operator() @ 0x180158448 (_lambda_f2d9a31b738d46358cc103eee0272db8_--operator().c)
 *     SpatialGraphDriverClientHelpers::GetLatestPoses @ 0x18015CF4C (SpatialGraphDriverClientHelpers--GetLatestPoses.c)
 *     ?GetPoseAtTime_NotEnoughPosesToExtrapolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x18015DDB4 (-GetPoseAtTime_NotEnoughPosesToExtrapolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ.c)
 *     ?GetPoseAtTime_NotEnoughPosesToInterpolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x18015DE58 (-GetPoseAtTime_NotEnoughPosesToInterpolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ.c)
 *     SpatialGraphDriverClientHelpers::GetPosesAroundTime @ 0x18015E184 (SpatialGraphDriverClientHelpers--GetPosesAroundTime.c)
 *     ?IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z @ 0x180160188 (-IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z.c)
 *     ?IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z @ 0x1801601D0 (-IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z.c)
 *     ?UpdateMostRecentNodePoseValidity@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_VALIDITY_FLAGS@@@Z @ 0x180166864 (-UpdateMostRecentNodePoseValidity@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167ABC (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphNodeReference::GetPoseAtTime(
        Windows::Internal::Holographic::SpatialGraphNodeReference *this,
        __int64 a2,
        __int64 *a3,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a4)
{
  __int64 v5; // rcx
  unsigned int v6; // r15d
  signed int v7; // ebx
  __int64 v8; // rdx
  int LatestPoses; // eax
  __int64 v10; // rcx
  char *v11; // rdx
  unsigned int v12; // edi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int8 v15; // cl
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  HolographicDriverClientContinuousTrace *v19; // rcx
  _OWORD *v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int8 v22; // cl
  __int64 v23; // rcx
  __int64 v24; // rcx
  HolographicDriverClientContinuousTrace *v25; // rcx
  struct DirectX::XMFLOAT4X3 *v27; // [rsp+28h] [rbp-D8h]
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  void *v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v33; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v35[7]; // [rsp+70h] [rbp-90h] BYREF
  char v36; // [rsp+A8h] [rbp-58h]
  __int128 v37; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v38[9]; // [rsp+C0h] [rbp-40h]
  _BYTE v39[160]; // [rsp+150h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v32 = a2;
  v33 = a3;
  v29 = a4;
  QueryPerformanceCounter(&PerformanceCount);
  v34 = PerformanceCount;
  v28 = 2;
  memset_0(v29, 0, 0xA0uLL);
  *((_DWORD *)v29 + 4) = 0;
  *(_QWORD *)v29 = v32;
  if ( v33 )
    *v33 = 0LL;
  v5 = *((_QWORD *)this + 13);
  v35[0] = (__int64 *)&v29;
  v35[1] = (__int64 *)((char *)this - 8);
  v35[2] = (__int64 *)&v28;
  v35[3] = (__int64 *)&v37;
  v35[4] = &v32;
  v35[5] = (__int64 *)&v33;
  v35[6] = (__int64 *)&v34;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( v6 - 1 <= 1 )
  {
    LatestPoses = SpatialGraphDriverClientHelpers::GetLatestPoses(
                    *((Windows::Internal::Holographic::HolographicDriverHandleWrapper **)this + 8),
                    (char *)this + 80,
                    v6,
                    &v37,
                    (DWORD *)&v30);
    v10 = *((_QWORD *)this + 8);
    v11 = (char *)this + 80;
    if ( LatestPoses < 0 )
    {
      Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::UpdateMostRecentNodePoseValidity(v10, v11, 0LL);
      goto LABEL_25;
    }
    v12 = v30;
    Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::UpdateMostRecentNodePoseValidity(
      v10,
      v11,
      LODWORD(v38[10 * (unsigned int)(v30 - 1)]));
    if ( HolographicDriverClientContinuousTrace::IsVerboseTracingEnabled(v13) )
    {
      v16 = 0LL;
      for ( PerformanceCount.LowPart = 0; (unsigned int)v16 < v12; PerformanceCount.LowPart = v16 )
      {
        HolographicDriverClientContinuousTrace::GetPoseAtTime_LatestPoseFromDriver<unsigned int &,unsigned long &,__int64 const &,__int64 const &,enum SPATIAL_TRACKING_VALIDITY_FLAGS const &,DirectX::XMFLOAT4X3 const &>(
          (unsigned int *)&PerformanceCount,
          (unsigned int *)&v30,
          (__int64 *)&v38[10 * v16 - 1],
          (__int64 *)&v38[10 * v16 - 1] + 1,
          (unsigned int *)&v38[10 * v16],
          (struct DirectX::XMFLOAT4X3 *)((char *)&v38[10 * v16 + 1] + 4));
        v16 = (unsigned int)(v16 + 1);
      }
    }
    if ( v12 < v6 || v32 < *((_QWORD *)&v37 + 20 * v6 - 20) )
    {
      if ( (int)SpatialGraphDriverClientHelpers::GetPosesAroundTime(
                  *((_QWORD *)this + 8),
                  (char *)this + 80,
                  v32,
                  &v37,
                  &v30) < 0 )
        goto LABEL_25;
      if ( (unsigned int)v30 >= 2 )
      {
        v23 = *((_QWORD *)this + 13);
        v28 = 1;
        v7 = (*(__int64 (__fastcall **)(__int64, __int128 *, _BYTE *, __int64, void *))(*(_QWORD *)v23 + 24LL))(
               v23,
               &v37,
               v39,
               v32,
               v29);
        PerformanceCount.LowPart = v7;
        HolographicDriverClientContinuousTrace::GetPoseAtTime_PredictFromPoses<long const &,__int64 &,__int64 &,enum SPATIAL_TRACKING_VALIDITY_FLAGS &,DirectX::XMFLOAT4X3 &>(
          (int *)&PerformanceCount,
          (__int64 *)v29,
          (__int64 *)v29 + 1,
          (unsigned int *)v29 + 4,
          (struct DirectX::XMFLOAT4X3 *)((char *)v29 + 36));
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_HrMsg(
            retaddr,
            2403LL,
            (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
            (const char *)(unsigned int)v7,
            (int)"Failed to interpolate historical poses",
            (const char *)v27);
          goto LABEL_26;
        }
        goto LABEL_25;
      }
      if ( HolographicDriverClientContinuousTrace::IsEnabled(v22, v21) )
      {
        wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
          v24,
          _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
        HolographicDriverClientContinuousTrace::GetPoseAtTime_NotEnoughPosesToInterpolate_(v25);
      }
    }
    else
    {
      if ( v32 - (__int64)v37 < qword_180208320 )
      {
        v17 = *((_QWORD *)this + 13);
        v28 = 0;
        v7 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64, void *))(*(_QWORD *)v17 + 16LL))(
               v17,
               &v37,
               v6,
               v32,
               v29);
        PerformanceCount.LowPart = v7;
        HolographicDriverClientContinuousTrace::GetPoseAtTime_PredictFromPoses<long const &,__int64 &,__int64 &,enum SPATIAL_TRACKING_VALIDITY_FLAGS &,DirectX::XMFLOAT4X3 &>(
          (int *)&PerformanceCount,
          (__int64 *)v29,
          (__int64 *)v29 + 1,
          (unsigned int *)v29 + 4,
          (struct DirectX::XMFLOAT4X3 *)((char *)v29 + 36));
        if ( v7 < 0 )
        {
          v8 = 2371LL;
          goto LABEL_14;
        }
LABEL_25:
        v7 = 0;
        goto LABEL_26;
      }
      if ( HolographicDriverClientContinuousTrace::IsEnabled(v15, v14) )
      {
        wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
          v18,
          _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
        HolographicDriverClientContinuousTrace::GetPoseAtTime_NotEnoughPosesToExtrapolate_(v19);
      }
    }
    v20 = v29;
    v28 = 2;
    *(_OWORD *)v29 = v37;
    v20[1] = v38[0];
    v20[2] = v38[1];
    v20[3] = v38[2];
    v20[4] = v38[3];
    v20[5] = v38[4];
    v20[6] = v38[5];
    v20[7] = v38[6];
    v20[8] = v38[7];
    v20[9] = v38[8];
    goto LABEL_25;
  }
  v7 = -2147418113;
  v8 = 2323LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(unsigned int)v7);
LABEL_26:
  v36 = 0;
  lambda_f2d9a31b738d46358cc103eee0272db8_::operator()(v35);
  return (unsigned int)v7;
}
