/*
 * XREFs of Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x18015A92C
 * Callers:
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x180161B60 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 *     ?PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x180162180 (-PredictFromPoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPA.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x1801A4F3C (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     ??$SE3_left_update@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x1801A4FA0 (--$SE3_left_update@M@ST@@YAXAEAU-$SE3@M@0@QEBM@Z.c)
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x1801A513C (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 *     ??$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU?$SE3@M@0@QEBM@Z @ 0x1801A526C (--$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU-$SE3@M@0@QEBM@Z.c)
 */

char __fastcall Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode(
        __int64 a1,
        float *a2,
        __int64 a3,
        float a4,
        __int64 a5)
{
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  __int128 v17; // xmm0
  float v18; // xmm4_4
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  char result; // al
  __int128 v23; // [rsp+28h] [rbp-61h] BYREF
  __int128 v24; // [rsp+38h] [rbp-51h]
  __int128 v25; // [rsp+48h] [rbp-41h]
  unsigned int v26; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v27; // [rsp+5Ch] [rbp-2Dh]
  unsigned int v28; // [rsp+60h] [rbp-29h]
  unsigned int v29; // [rsp+64h] [rbp-25h]
  int v30; // [rsp+68h] [rbp-21h]
  int v31; // [rsp+6Ch] [rbp-1Dh]
  unsigned int v32; // [rsp+70h] [rbp-19h]
  unsigned int v33; // [rsp+74h] [rbp-15h]
  __int128 v34; // [rsp+78h] [rbp-11h]
  _DWORD v35[4]; // [rsp+88h] [rbp-1h] BYREF
  __int128 v36; // [rsp+98h] [rbp+Fh] BYREF
  __int128 v37; // [rsp+A8h] [rbp+1Fh]
  __int128 v38; // [rsp+B8h] [rbp+2Fh]

  *(_OWORD *)a5 = *(_OWORD *)a1;
  *(_OWORD *)(a5 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a5 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a5 + 48) = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(a5 + 64) = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(a5 + 80) = *(_OWORD *)(a1 + 80);
  *(_OWORD *)(a5 + 96) = *(_OWORD *)(a1 + 96);
  *(_OWORD *)(a5 + 112) = *(_OWORD *)(a1 + 112);
  *(_OWORD *)(a5 + 128) = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(a5 + 144) = *(_OWORD *)(a1 + 144);
  if ( a4 < 0.000000059600001 )
    return 0;
  v7 = (float)((float)(a2[20] * 0.5) * a4) * a4;
  v8 = a4 * a2[13];
  *(float *)&v23 = (float)((float)((float)(a2[18] * 0.5) * a4) * a4) + (float)(a4 * a2[12]);
  v9 = v7 + (float)(a4 * a2[14]);
  *((float *)&v23 + 1) = (float)((float)((float)(a2[19] * 0.5) * a4) * a4) + v8;
  v10 = a4 * a2[15];
  v11 = a2[21] * 0.5;
  *((float *)&v23 + 2) = v9;
  v12 = a2[22];
  v13 = (float)((float)(v11 * a4) * a4) + v10;
  v14 = a4 * a2[16];
  *((float *)&v23 + 3) = v13;
  v15 = (float)((float)((float)(v12 * 0.5) * a4) * a4) + v14;
  v16 = (float)(a2[23] * 0.5) * a4;
  v36 = *(_OWORD *)a2;
  v17 = *((_OWORD *)a2 + 2);
  v18 = a4 * a2[17];
  *(float *)&v24 = v15;
  v38 = v17;
  *((float *)&v24 + 1) = (float)(v16 * a4) + v18;
  v37 = *((_OWORD *)a2 + 1);
  ST::SE3_left_update<float>(&v36, &v23);
  ST::SE3_invert<float>(&v26, &v36);
  *(_QWORD *)&v23 = __PAIR64__(v29, v26);
  *((_QWORD *)&v23 + 1) = __PAIR64__(v27, v32);
  LODWORD(v24) = v30;
  *(_QWORD *)((char *)&v24 + 4) = __PAIR64__(v28, v33);
  v25 = v34;
  HIDWORD(v24) = v31;
  v19 = v24;
  *(_OWORD *)(a5 + 36) = v23;
  v20 = v25;
  *(_OWORD *)(a5 + 52) = v19;
  *(_OWORD *)(a5 + 68) = v20;
  LODWORD(v20) = *(_DWORD *)(a1 + 48);
  v26 = *(_DWORD *)(a1 + 36);
  v28 = *(_DWORD *)(a1 + 60);
  LODWORD(v19) = *(_DWORD *)(a1 + 52);
  v27 = v20;
  LODWORD(v20) = *(_DWORD *)(a1 + 40);
  v30 = v19;
  LODWORD(v19) = *(_DWORD *)(a1 + 44);
  v29 = v20;
  LODWORD(v20) = *(_DWORD *)(a1 + 64);
  v32 = v19;
  v21 = *(_OWORD *)(a1 + 68);
  v31 = v20;
  LODWORD(v20) = *(_DWORD *)(a1 + 56);
  v34 = v21;
  v33 = v20;
  ST::SE3_mult<float>(&v23, &v36, &v26);
  v36 = v23;
  v37 = v24;
  LODWORD(v21) = *(_DWORD *)(a1 + 132);
  v38 = v25;
  LODWORD(v20) = *(_DWORD *)(a1 + 136);
  v35[0] = v21;
  LODWORD(v21) = *(_DWORD *)(a1 + 140);
  v35[1] = v20;
  v35[2] = v21;
  ST::SE3_transform_direction3<float,float,float>(&v23, &v36, v35);
  result = 1;
  LODWORD(v21) = DWORD1(v23);
  *(_DWORD *)(a5 + 132) = v23;
  *(_QWORD *)(a5 + 136) = __PAIR64__(DWORD2(v23), v21);
  *(_QWORD *)a5 = a3;
  return result;
}
