/*
 * XREFs of Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses @ 0x18015FC50
 * Callers:
 *     ?InterpolatePoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0_JPEAU5@@Z @ 0x18015FC30 (-InterpolatePoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJAEBUSPA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800A824C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$SE3_interpolate@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1M@Z @ 0x1801A5314 (--$SE3_interpolate@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1M@Z.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x1801A53EC (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x1801A55EC (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 *     ??$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU?$SE3@M@0@QEBM@Z @ 0x1801A571C (--$SE3_transform_direction3@MMM@ST@@YAXQEAMAEBU-$SE3@M@0@QEBM@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  const char *v10; // rax
  __int64 v11; // rdx
  float v12; // xmm2_4
  float v14; // xmm6_4
  int v15; // xmm1_4
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // xmm0_4
  int v19; // xmm1_4
  __int128 v20; // xmm0
  int v21; // xmm1_4
  int v22; // xmm1_4
  int v23; // xmm1_4
  int v24; // xmm1_4
  __int128 v25; // xmm0
  int v26; // xmm1_4
  unsigned int v27; // xmm1_4
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  const char *v31; // [rsp+30h] [rbp-D8h]
  __int128 v32; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v33; // [rsp+48h] [rbp-C0h]
  __int128 v34; // [rsp+58h] [rbp-B0h]
  __int128 v35; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+78h] [rbp-90h]
  __int128 v37; // [rsp+88h] [rbp-80h]
  _DWORD v38[4]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v39[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v40; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v41; // [rsp+C8h] [rbp-40h]
  __int128 v42; // [rsp+D8h] [rbp-30h]
  _BYTE v43[48]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  if ( a4 )
  {
    if ( *(_QWORD *)a1 > *(_QWORD *)a2 )
    {
      v10 = "Poses incorrectly ordered";
      v11 = 23LL;
LABEL_16:
      v8 = -2147024809;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        v11,
        (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PosePredictionModels.h",
        (const char *)0x80070057LL,
        (int)v10,
        v31);
      return v8;
    }
    v12 = (float)(*(_DWORD *)a2 - *(_DWORD *)a1);
    if ( COERCE_FLOAT(LODWORD(v12) & _xmm) >= 0.00000011920929 )
    {
      v14 = (float)(a3 - *(_DWORD *)a1) / v12;
      if ( v14 < 0.0 || v14 > 1.0 )
      {
        v10 = "Timestamp outside valid range";
        v11 = 33LL;
        goto LABEL_16;
      }
      v15 = *(_DWORD *)(a1 + 48);
      LODWORD(v32) = *(_DWORD *)(a1 + 36);
      DWORD2(v32) = *(_DWORD *)(a1 + 60);
      v16 = *(_DWORD *)(a1 + 52);
      DWORD1(v32) = v15;
      v17 = *(_DWORD *)(a1 + 40);
      LODWORD(v33) = v16;
      v18 = *(_DWORD *)(a1 + 44);
      HIDWORD(v32) = v17;
      v19 = *(_DWORD *)(a1 + 64);
      DWORD2(v33) = v18;
      v20 = *(_OWORD *)(a1 + 68);
      DWORD1(v33) = v19;
      v21 = *(_DWORD *)(a1 + 56);
      v34 = v20;
      HIDWORD(v33) = v21;
      ST::SE3_invert<float>(v43, &v32);
      v22 = *(_DWORD *)(a2 + 48);
      LODWORD(v32) = *(_DWORD *)(a2 + 36);
      DWORD2(v32) = *(_DWORD *)(a2 + 60);
      LODWORD(v20) = *(_DWORD *)(a2 + 52);
      DWORD1(v32) = v22;
      v23 = *(_DWORD *)(a2 + 40);
      LODWORD(v33) = v20;
      LODWORD(v20) = *(_DWORD *)(a2 + 44);
      HIDWORD(v32) = v23;
      v24 = *(_DWORD *)(a2 + 64);
      DWORD2(v33) = v20;
      v25 = *(_OWORD *)(a2 + 68);
      DWORD1(v33) = v24;
      v26 = *(_DWORD *)(a2 + 56);
      v34 = v25;
      HIDWORD(v33) = v26;
      ST::SE3_invert<float>(&v40, &v32);
      if ( v14 < 0.0 && v14 > 1.0 )
      {
        v8 = -2147418113;
        v9 = 49LL;
        goto LABEL_3;
      }
      ST::SE3_interpolate<float>(&v35, v43, &v40);
      v40 = v35;
      v41 = v36;
      v42 = v37;
      ST::SE3_invert<float>(&v35, &v40);
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(a4 + 48) = *(_OWORD *)(a1 + 48);
      *(_OWORD *)(a4 + 64) = *(_OWORD *)(a1 + 64);
      *(_OWORD *)(a4 + 80) = *(_OWORD *)(a1 + 80);
      *(_OWORD *)(a4 + 96) = *(_OWORD *)(a1 + 96);
      *(_OWORD *)(a4 + 112) = *(_OWORD *)(a1 + 112);
      *(_OWORD *)(a4 + 128) = *(_OWORD *)(a1 + 128);
      v27 = v35;
      *(_OWORD *)(a4 + 144) = *(_OWORD *)(a1 + 144);
      *(_QWORD *)&v32 = __PAIR64__(HIDWORD(v35), v27);
      *((_QWORD *)&v32 + 1) = __PAIR64__(DWORD1(v35), DWORD2(v36));
      LODWORD(v33) = v36;
      *(_QWORD *)((char *)&v33 + 4) = __PAIR64__(DWORD2(v35), HIDWORD(v36));
      v34 = v37;
      HIDWORD(v33) = DWORD1(v36);
      v28 = v33;
      *(_OWORD *)(a4 + 36) = v32;
      v29 = v34;
      *(_OWORD *)(a4 + 52) = v28;
      *(_OWORD *)(a4 + 68) = v29;
      LODWORD(v29) = *(_DWORD *)(a1 + 48);
      LODWORD(v35) = *(_DWORD *)(a1 + 36);
      DWORD2(v35) = *(_DWORD *)(a1 + 60);
      LODWORD(v28) = *(_DWORD *)(a1 + 52);
      DWORD1(v35) = v29;
      LODWORD(v29) = *(_DWORD *)(a1 + 40);
      LODWORD(v36) = v28;
      LODWORD(v28) = *(_DWORD *)(a1 + 44);
      HIDWORD(v35) = v29;
      LODWORD(v29) = *(_DWORD *)(a1 + 64);
      DWORD2(v36) = v28;
      v30 = *(_OWORD *)(a1 + 68);
      DWORD1(v36) = v29;
      LODWORD(v29) = *(_DWORD *)(a1 + 56);
      v37 = v30;
      HIDWORD(v36) = v29;
      ST::SE3_mult<float>(&v32, &v40, &v35);
      v40 = v32;
      v41 = v33;
      LODWORD(v29) = *(_DWORD *)(a4 + 132);
      v42 = v34;
      LODWORD(v30) = *(_DWORD *)(a4 + 136);
      v38[0] = v29;
      LODWORD(v29) = *(_DWORD *)(a4 + 140);
      v38[1] = v30;
      v38[2] = v29;
      ST::SE3_transform_direction3<float,float,float>(v39, &v40, v38);
      LODWORD(v29) = v39[1];
      *(_DWORD *)(a4 + 132) = v39[0];
      *(_DWORD *)(a4 + 140) = v39[2];
      *(_DWORD *)(a4 + 136) = v29;
      *(_QWORD *)a4 = a3;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(a4 + 48) = *(_OWORD *)(a1 + 48);
      *(_OWORD *)(a4 + 64) = *(_OWORD *)(a1 + 64);
      *(_OWORD *)(a4 + 80) = *(_OWORD *)(a1 + 80);
      *(_OWORD *)(a4 + 96) = *(_OWORD *)(a1 + 96);
      *(_OWORD *)(a4 + 112) = *(_OWORD *)(a1 + 112);
      *(_OWORD *)(a4 + 128) = *(_OWORD *)(a1 + 128);
      *(_OWORD *)(a4 + 144) = *(_OWORD *)(a1 + 144);
    }
    return 0LL;
  }
  v8 = -2147467261;
  v9 = 22LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PosePredictionModels.h",
    (const char *)v8);
  return v8;
}
