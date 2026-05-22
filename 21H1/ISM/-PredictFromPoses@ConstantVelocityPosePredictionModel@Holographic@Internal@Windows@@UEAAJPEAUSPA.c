/*
 * XREFs of ?PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1801626D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800A834C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x18015AE7C (Windows--Internal--Holographic--PosePredictionHelpers--CreatePredictionNode.c)
 *     PoseClientStatics::SpatialGraphDifferentialsToSE3 @ 0x180164404 (PoseClientStatics--SpatialGraphDifferentialsToSE3.c)
 *     PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials @ 0x1801645FC (PoseClientStatics--SpatialTrackingPoseToInversePoseWithDifferentials.c)
 */

__int64 __fastcall Windows::Internal::Holographic::ConstantVelocityPosePredictionModel::PredictFromPoses(
        Windows::Internal::Holographic::ConstantVelocityPosePredictionModel *this,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        __int64 a3,
        __int64 a4,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a5)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  const char *v10; // rax
  __int64 v11; // rdx
  float v12; // xmm3_4
  const char *v13; // [rsp+28h] [rbp-80h]
  float v14[24]; // [rsp+30h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( !a2 )
  {
    v7 = 156LL;
LABEL_3:
    v8 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PosePredictionModels.h",
      (const char *)v8);
    return v8;
  }
  if ( !a5 )
  {
    v7 = 157LL;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v10 = "Incorrect number of poses provided";
    v11 = 159LL;
LABEL_10:
    v8 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      v11,
      (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PosePredictionModels.h",
      (const char *)0x80070057LL,
      (int)v10,
      v13);
    return v8;
  }
  if ( *(_QWORD *)a2 > a4 )
  {
    v10 = "timestamp predates poses";
    v11 = 162LL;
    goto LABEL_10;
  }
  PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials(v14, (char *)a2 + 36);
  v12 = (double)((int)a4 - *(_DWORD *)a2) / (double)(int)qword_1802092F0;
  if ( v12 <= 0.0 )
  {
    *(_OWORD *)a5 = *(_OWORD *)a2;
    *((_OWORD *)a5 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)a5 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)a5 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)a5 + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)a5 + 5) = *((_OWORD *)a2 + 5);
    *((_OWORD *)a5 + 6) = *((_OWORD *)a2 + 6);
    *((_OWORD *)a5 + 7) = *((_OWORD *)a2 + 7);
    *((_OWORD *)a5 + 8) = *((_OWORD *)a2 + 8);
    *((_OWORD *)a5 + 9) = *((_OWORD *)a2 + 9);
  }
  else
  {
    PoseClientStatics::SpatialGraphDifferentialsToSE3(v14, a2);
    if ( !Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode(
            (__int64)a2,
            v14,
            a4,
            v12,
            (__int64)a5) )
    {
      v8 = -2147418113;
      v7 = 181LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
