/*
 * XREFs of ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x180162010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800A824C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??0PoseWithDifferentials@PosePredictionTools@@QEAA@XZ @ 0x180156BE8 (--0PoseWithDifferentials@PosePredictionTools@@QEAA@XZ.c)
 *     Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x18015AE1C (Windows--Internal--Holographic--PosePredictionHelpers--CreatePredictionNode.c)
 *     PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials @ 0x18016455C (PoseClientStatics--SpatialTrackingPoseToInversePoseWithDifferentials.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x1801A53EC (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x1801A54B8 (--$SE3_log@M@ST@@YAXQEAMAEBU-$SE3@M@0@@Z.c)
 *     ??$SE3_mult_a_binv@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x1801A564C (--$SE3_mult_a_binv@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::ComputeVelocityFallbackPosePredictionModel::PredictFromPoses(
        Windows::Internal::Holographic::ComputeVelocityFallbackPosePredictionModel *this,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        unsigned __int64 a3,
        __int64 a4,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a5)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  const char *v10; // rax
  __int64 v11; // rdx
  char *v12; // r14
  __int64 v13; // rax
  int v14; // eax
  char v15; // di
  int v16; // ecx
  bool v17; // r8
  int v18; // edx
  bool v19; // al
  bool v20; // r15
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __m128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int64 v36; // rax
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  double v44; // xmm7_8
  float v45; // xmm6_4
  float v46; // xmm7_4
  __m128 v47; // xmm4
  __m128 v48; // xmm1
  __m128 v49; // xmm2
  __m128 v50; // xmm4
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  const char *v60; // [rsp+30h] [rbp-D8h]
  __m128 v61; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v62; // [rsp+48h] [rbp-C0h]
  __int128 v63; // [rsp+58h] [rbp-B0h]
  __m128 v64; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v65; // [rsp+78h] [rbp-90h]
  __int128 v66; // [rsp+88h] [rbp-80h]
  __m128 v67; // [rsp+98h] [rbp-70h] BYREF
  __int128 v68; // [rsp+A8h] [rbp-60h]
  __int128 v69; // [rsp+B8h] [rbp-50h]
  __int128 v70; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v71; // [rsp+D8h] [rbp-30h]
  __int128 v72; // [rsp+E8h] [rbp-20h]
  __m128 v73; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v74; // [rsp+108h] [rbp+0h]
  __int128 v75; // [rsp+118h] [rbp+10h]
  __int128 v76; // [rsp+128h] [rbp+20h] BYREF
  __int128 v77; // [rsp+138h] [rbp+30h]
  __int128 v78; // [rsp+148h] [rbp+40h]
  __int128 v79; // [rsp+158h] [rbp+50h]
  __int128 v80; // [rsp+168h] [rbp+60h]
  __int128 v81; // [rsp+178h] [rbp+70h]
  __int128 v82; // [rsp+188h] [rbp+80h]
  __int128 v83; // [rsp+198h] [rbp+90h]
  __int128 v84; // [rsp+1A8h] [rbp+A0h]
  __int128 v85; // [rsp+1B8h] [rbp+B0h]
  _BYTE v86[96]; // [rsp+1C8h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  if ( !a2 )
  {
    v7 = 217LL;
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
    v7 = 218LL;
    goto LABEL_3;
  }
  if ( a3 < 2 )
  {
    v10 = "Incorrect number of poses provided";
    v11 = 220LL;
LABEL_10:
    v8 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      v11,
      (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PosePredictionModels.h",
      (const char *)0x80070057LL,
      (int)v10,
      v60);
    return v8;
  }
  v12 = (char *)a2 + 160;
  v13 = *((_QWORD *)a2 + 20);
  if ( *(_QWORD *)a2 > v13 )
  {
    v10 = "Poses incorrectly ordered";
    v11 = 224LL;
    goto LABEL_10;
  }
  if ( v13 > a4 )
  {
    v10 = "timestamp predates poses";
    v11 = 225LL;
    goto LABEL_10;
  }
  v14 = *((_DWORD *)a2 + 4);
  v15 = 1;
  v16 = v14 & 4;
  v17 = (v14 & 1) != 0 && (*((_BYTE *)a2 + 176) & 1) != 0;
  v18 = v14 & 0x10;
  v19 = (v14 & 2) != 0 && (v12[16] & 2) != 0;
  v20 = !v16 && v17;
  if ( v18 || !v19 )
    v15 = 0;
  v21 = *(_OWORD *)((char *)a2 + 52);
  v64 = *(__m128 *)((char *)a2 + 36);
  v22 = *(_OWORD *)((char *)a2 + 68);
  v65 = v21;
  v23 = *(__m128 *)(v12 + 36);
  v66 = v22;
  v24 = *(_OWORD *)(v12 + 52);
  v67 = v23;
  v25 = *(_OWORD *)(v12 + 68);
  v68 = v24;
  v69 = v25;
  PosePredictionTools::PoseWithDifferentials::PoseWithDifferentials((PosePredictionTools::PoseWithDifferentials *)&v70);
  if ( v20 || v15 )
  {
    v36 = PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials(v86, &v64);
    v70 = *(_OWORD *)v36;
    v71 = *(_OWORD *)(v36 + 16);
    v72 = *(_OWORD *)(v36 + 32);
    v73 = *(__m128 *)(v36 + 48);
    v74 = *(_OWORD *)(v36 + 64);
    v37 = *(_OWORD *)a2;
    v75 = *(_OWORD *)(v36 + 80);
    v38 = *((_OWORD *)a2 + 1);
    v76 = v37;
    v39 = *((_OWORD *)a2 + 2);
    v77 = v38;
    v40 = *((_OWORD *)a2 + 3);
    v78 = v39;
    v41 = *((_OWORD *)a2 + 4);
    v79 = v40;
    v42 = *((_OWORD *)a2 + 5);
    v80 = v41;
    v43 = *((_OWORD *)a2 + 6);
    v81 = v42;
    v34 = *((_OWORD *)a2 + 8);
    v82 = v43;
    v83 = *((_OWORD *)a2 + 7);
    v35 = *((_OWORD *)a2 + 9);
  }
  else
  {
    v26 = PoseClientStatics::SpatialTrackingPoseToInversePoseWithDifferentials(v86, &v67);
    v70 = *(_OWORD *)v26;
    v71 = *(_OWORD *)(v26 + 16);
    v72 = *(_OWORD *)(v26 + 32);
    v73 = *(__m128 *)(v26 + 48);
    v74 = *(_OWORD *)(v26 + 64);
    v27 = *(_OWORD *)v12;
    v75 = *(_OWORD *)(v26 + 80);
    v28 = *((_OWORD *)v12 + 1);
    v76 = v27;
    v29 = *((_OWORD *)v12 + 2);
    v77 = v28;
    v30 = *((_OWORD *)v12 + 3);
    v78 = v29;
    v31 = *((_OWORD *)v12 + 4);
    v79 = v30;
    v32 = *((_OWORD *)v12 + 5);
    v80 = v31;
    v33 = *((_OWORD *)v12 + 6);
    v81 = v32;
    v34 = *((_OWORD *)v12 + 8);
    v82 = v33;
    v83 = *((_OWORD *)v12 + 7);
    v35 = *((_OWORD *)v12 + 9);
  }
  v84 = v34;
  v85 = v35;
  v44 = (double)(int)qword_180209308;
  v45 = (double)((int)a4 - (int)v76) / (double)(int)qword_180209308;
  if ( v45 <= 0.0 )
  {
    v51 = v77;
    *(_OWORD *)a5 = v76;
    v52 = v78;
    *((_OWORD *)a5 + 1) = v51;
    v53 = v79;
    *((_OWORD *)a5 + 2) = v52;
    v54 = v80;
    *((_OWORD *)a5 + 3) = v53;
    v55 = v81;
    *((_OWORD *)a5 + 4) = v54;
    v56 = v82;
    *((_OWORD *)a5 + 5) = v55;
    v57 = v83;
    *((_OWORD *)a5 + 6) = v56;
    v58 = v84;
    *((_OWORD *)a5 + 7) = v57;
    v59 = v85;
    *((_OWORD *)a5 + 8) = v58;
    *((_OWORD *)a5 + 9) = v59;
  }
  else
  {
    if ( !v20 && !v15 )
      goto LABEL_40;
    v61.m128_u64[0] = __PAIR64__(v64.m128_u32[3], v64.m128_u32[0]);
    v61.m128_u64[1] = __PAIR64__(v64.m128_u32[1], DWORD2(v65));
    *(_QWORD *)&v62 = __PAIR64__(HIDWORD(v65), v65);
    *((_QWORD *)&v62 + 1) = __PAIR64__(DWORD1(v65), v64.m128_u32[2]);
    v64 = v61;
    v65 = v62;
    ST::SE3_invert<float>(v86, &v64);
    v61.m128_u64[0] = __PAIR64__(v67.m128_u32[3], v67.m128_u32[0]);
    v61.m128_u64[1] = __PAIR64__(v67.m128_u32[1], DWORD2(v68));
    *(_QWORD *)&v62 = __PAIR64__(HIDWORD(v68), v68);
    *((_QWORD *)&v62 + 1) = __PAIR64__(DWORD1(v68), v67.m128_u32[2]);
    v63 = v69;
    v67 = v61;
    v68 = v62;
    ST::SE3_invert<float>(&v64, &v67);
    v46 = (double)(*(_DWORD *)v12 - *(_DWORD *)a2) / v44;
    if ( v46 >= 0.000000059600001 )
    {
      ST::SE3_mult_a_binv<float>(&v61, &v64, v86);
      v67 = v61;
      v68 = v62;
      v69 = v63;
      ST::SE3_log<float>(&v73, &v67);
      v47 = (__m128)LODWORD(FLOAT_1_0);
      v48 = (__m128)(unsigned int)v74;
      v49 = (__m128)DWORD1(v74);
      v47.m128_f32[0] = 1.0 / v46;
      v50 = _mm_shuffle_ps(v47, v47, 0);
      v48.m128_f32[0] = *(float *)&v74 * v50.m128_f32[0];
      v49.m128_f32[0] = *((float *)&v74 + 1) * v50.m128_f32[0];
      v64 = _mm_mul_ps(v73, v50);
      *(_QWORD *)&v74 = _mm_unpacklo_ps(v48, v49).m128_u64[0];
      v73 = v64;
    }
    if ( !v20 )
    {
LABEL_40:
      if ( (v77 & 4) != 0 )
      {
        v73.m128_i32[0] = DWORD1(v81);
        *(unsigned __int64 *)((char *)v73.m128_u64 + 4) = *((_QWORD *)&v81 + 1);
      }
    }
    if ( !v15 && (v77 & 0x10) != 0 )
    {
      v73.m128_i32[3] = v82;
      *(_QWORD *)&v74 = *(_QWORD *)((char *)&v82 + 4);
    }
    if ( !Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode(
            (__int64)&v76,
            (float *)&v70,
            a4,
            v45,
            (__int64)a5) )
    {
      v8 = -2147418113;
      v7 = 296LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
