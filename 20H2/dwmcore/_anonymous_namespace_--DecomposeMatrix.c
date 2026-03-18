/*
 * XREFs of _anonymous_namespace_::DecomposeMatrix @ 0x18022A7BC
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18022B6D4 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 * Callees:
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180022D48 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18008CFA0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18008E560 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800C38BC (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     acosf_0 @ 0x1800EE917 (acosf_0.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x18020E304 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x18020EA90 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 *     ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x18020EC3C (-Set2DRotation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333333333333333333333333333@Z @ 0x180227740 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U_ea_180227740.c)
 *     TransformPoint @ 0x18022CA20 (TransformPoint.c)
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x1802343A0 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 */

void __fastcall anonymous_namespace_::DecomposeMatrix(
        CMILMatrix *this,
        void *a2,
        CMILMatrix *a3,
        CMILMatrix *a4,
        struct CMILMatrix *a5,
        CMILMatrix *a6)
{
  float v10; // xmm6_4
  struct CMILMatrix *v11; // rbx
  CMILMatrix *v12; // r14
  __int128 v13; // xmm0
  int v14; // xmm1_4
  int v15; // xmm8_4
  int v16; // xmm9_4
  int v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  const struct DEVICE_INFO *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // xmm0_4
  int v25; // xmm1_4
  int v26; // xmm0_4
  int v27; // xmm1_4
  int v28; // xmm0_4
  int v29; // xmm1_4
  int v30; // xmm0_4
  int v31; // xmm1_4
  int v32; // xmm0_4
  int v33; // xmm1_4
  int v34; // xmm0_4
  int v35; // xmm1_4
  int v36; // xmm0_4
  int v37; // xmm1_4
  int v38; // xmm0_4
  int v39; // xmm1_4
  int v40; // [rsp+148h] [rbp-80h] BYREF
  int v41; // [rsp+14Ch] [rbp-7Ch]
  int v42; // [rsp+150h] [rbp-78h] BYREF
  int v43; // [rsp+154h] [rbp-74h]
  int v44; // [rsp+158h] [rbp-70h] BYREF
  int v45; // [rsp+15Ch] [rbp-6Ch]
  float v46; // [rsp+160h] [rbp-68h]
  float v47; // [rsp+164h] [rbp-64h]
  int v48; // [rsp+168h] [rbp-60h] BYREF
  int v49; // [rsp+16Ch] [rbp-5Ch] BYREF
  int v50; // [rsp+170h] [rbp-58h] BYREF
  int v51; // [rsp+174h] [rbp-54h] BYREF
  int v52; // [rsp+178h] [rbp-50h] BYREF
  int v53; // [rsp+17Ch] [rbp-4Ch] BYREF
  float v54; // [rsp+180h] [rbp-48h] BYREF
  float v55; // [rsp+184h] [rbp-44h] BYREF
  int v56; // [rsp+188h] [rbp-40h] BYREF
  int v57; // [rsp+18Ch] [rbp-3Ch] BYREF
  int v58; // [rsp+190h] [rbp-38h] BYREF
  int v59; // [rsp+194h] [rbp-34h] BYREF
  int v60; // [rsp+198h] [rbp-30h] BYREF
  int v61; // [rsp+19Ch] [rbp-2Ch] BYREF
  int v62; // [rsp+1A0h] [rbp-28h] BYREF
  int v63; // [rsp+1A4h] [rbp-24h] BYREF
  int v64; // [rsp+1A8h] [rbp-20h] BYREF
  int v65; // [rsp+1ACh] [rbp-1Ch] BYREF
  int v66; // [rsp+1B0h] [rbp-18h] BYREF
  int v67; // [rsp+1B4h] [rbp-14h] BYREF
  int v68; // [rsp+1B8h] [rbp-10h] BYREF
  int v69; // [rsp+1BCh] [rbp-Ch] BYREF
  int v70; // [rsp+1C0h] [rbp-8h] BYREF
  int v71; // [rsp+1C4h] [rbp-4h] BYREF
  int v72; // [rsp+1C8h] [rbp+0h] BYREF
  int v73; // [rsp+1CCh] [rbp+4h] BYREF
  int v74; // [rsp+1D0h] [rbp+8h] BYREF
  int v75; // [rsp+1D4h] [rbp+Ch] BYREF
  _OWORD v76[4]; // [rsp+1D8h] [rbp+10h] BYREF
  __int16 v77; // [rsp+218h] [rbp+50h]
  int v78; // [rsp+2A8h] [rbp+E0h] BYREF
  int v79; // [rsp+2ACh] [rbp+E4h]
  int v80; // [rsp+2B8h] [rbp+F0h] BYREF
  int v81; // [rsp+2BCh] [rbp+F4h]
  int v82; // [rsp+2C0h] [rbp+F8h] BYREF
  char v83; // [rsp+2C4h] [rbp+FCh] BYREF

  *(_OWORD *)a3 = *(_OWORD *)this;
  v10 = 0.0;
  *((_OWORD *)a3 + 1) = *((_OWORD *)this + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)this + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)this + 3);
  *((_DWORD *)a3 + 16) = *((_DWORD *)this + 16);
  *(_QWORD *)a4 = 1065353216LL;
  *((_QWORD *)a4 + 1) = 0LL;
  *((_DWORD *)a4 + 4) = 0;
  *(_QWORD *)((char *)a4 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a4 + 28) = 0LL;
  *((_DWORD *)a4 + 9) = 0;
  *((_QWORD *)a4 + 5) = 1065353216LL;
  *((_QWORD *)a4 + 6) = 0LL;
  *((_DWORD *)a4 + 14) = 0;
  *((_DWORD *)a4 + 15) = 1065353216;
  v11 = a5;
  *((_WORD *)a4 + 32) = 32085;
  *(_QWORD *)v11 = 1065353216LL;
  *((_QWORD *)v11 + 1) = 0LL;
  *((_DWORD *)v11 + 4) = 0;
  *(_QWORD *)((char *)v11 + 20) = 1065353216LL;
  *(_QWORD *)((char *)v11 + 28) = 0LL;
  *((_DWORD *)v11 + 9) = 0;
  *((_QWORD *)v11 + 5) = 1065353216LL;
  *((_QWORD *)v11 + 6) = 0LL;
  *((_DWORD *)v11 + 14) = 0;
  *((_DWORD *)v11 + 15) = 1065353216;
  v12 = a6;
  *((_WORD *)v11 + 32) = 32085;
  v13 = *(_OWORD *)a3;
  LOBYTE(a5) = 0;
  LODWORD(a6) = 0;
  *(_OWORD *)v12 = v13;
  v77 = 32085;
  *((_OWORD *)v12 + 1) = *((_OWORD *)a3 + 1);
  *((_OWORD *)v12 + 2) = *((_OWORD *)a3 + 2);
  *((_OWORD *)v12 + 3) = *((_OWORD *)a3 + 3);
  *((_DWORD *)v12 + 16) = *((_DWORD *)a3 + 16);
  v14 = *((_DWORD *)this + 5);
  v15 = *((_DWORD *)this + 12);
  v16 = *((_DWORD *)this + 13);
  v40 = *(_DWORD *)this;
  v41 = v14;
  v76[0] = _xmm;
  v76[1] = _xmm;
  v76[2] = _xmm;
  v76[3] = _xmm;
  v42 = v15;
  v43 = v16;
  CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(this, v11, (struct CMILMatrix *)v76, (bool *)&a5);
  if ( (_BYTE)a5 )
  {
    v17 = *((_DWORD *)v11 + 5);
    v40 = *(_DWORD *)v11;
    v41 = v17;
    D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v44, (const struct D2DMatrix *)v76);
    v44 = 0;
    v45 = 0;
    D3DXQuaternionNormalize((struct D2DQuaternion *)&v44, (const struct D2DQuaternion *)&v44);
    if ( v46 >= 0.0 )
      v18 = *(float *)&FLOAT_1_0;
    else
      v18 = FLOAT_N1_0;
    v19 = acosf_0(v47 * v18);
    v10 = v19 + v19;
    *(float *)&a6 = v19 + v19;
    CMILMatrix::Set2DRotation(a4, v19 + v19, 0.0, 0.0);
  }
  if ( !CMILMatrix::Is2DAffine<1>((__int64)this, 1) )
  {
    v78 = 0;
    v79 = 0;
    v80 = 0;
    v81 = 0;
    CMILMatrix::Set2DAffineMatrix(
      a3,
      (const struct Windows::Foundation::Numerics::float2 *)&v40,
      v10,
      (const struct Windows::Foundation::Numerics::float2 *)&v42,
      (const struct Windows::Foundation::Numerics::float2 *)&v80,
      (const struct Windows::Foundation::Numerics::float2 *)&v78);
    *(_OWORD *)v12 = *(_OWORD *)a3;
    *((_OWORD *)v12 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)v12 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)v12 + 3) = *((_OWORD *)a3 + 3);
    *((_DWORD *)v12 + 16) = *((_DWORD *)a3 + 16);
  }
  v20 = CPointerDeviceCache::Query(a2);
  if ( !CMILMatrix::IsIdentity<0>((__int64)a3) && *((_BYTE *)v20 + 48) )
  {
    TransformPoint((_DWORD)v20, (_DWORD)v20 + 16, v22, v23, (__int64)&v82, (__int64)&v83);
    v78 = 0;
    v79 = 0;
    v80 = 0;
    v81 = 0;
    CMILMatrix::Set2DAffineMatrix(
      v12,
      (const struct Windows::Foundation::Numerics::float2 *)&v40,
      v10,
      (const struct Windows::Foundation::Numerics::float2 *)&v82,
      (const struct Windows::Foundation::Numerics::float2 *)&v80,
      (const struct Windows::Foundation::Numerics::float2 *)&v78);
  }
  if ( (unsigned int)dword_180341E80 > 4 && (qword_180341E90 & 2) != 0 && (qword_180341E98 & 2) == qword_180341E98 )
  {
    v24 = *((_DWORD *)this + 15);
    v25 = *((_DWORD *)this + 14);
    v78 = *((_DWORD *)v20 + 3);
    v80 = *((_DWORD *)v20 + 2);
    v82 = *((_DWORD *)v20 + 1);
    v48 = *(_DWORD *)v20;
    v49 = *((_DWORD *)v20 + 7);
    v50 = *((_DWORD *)v20 + 6);
    v51 = *((_DWORD *)v20 + 5);
    v52 = *((_DWORD *)v20 + 4);
    v54 = v47;
    v55 = v46;
    v56 = v45;
    v57 = v44;
    v58 = v41;
    v59 = v40;
    v60 = v43;
    v61 = v42;
    v62 = v24;
    v26 = *((_DWORD *)this + 13);
    v63 = v25;
    v27 = *((_DWORD *)this + 12);
    LODWORD(a5) = (unsigned __int8)a5;
    v64 = v26;
    v28 = *((_DWORD *)this + 11);
    v65 = v27;
    v29 = *((_DWORD *)this + 10);
    v66 = v28;
    v30 = *((_DWORD *)this + 9);
    v67 = v29;
    v31 = *((_DWORD *)this + 8);
    v68 = v30;
    v32 = *((_DWORD *)this + 7);
    v69 = v31;
    v33 = *((_DWORD *)this + 6);
    v70 = v32;
    v34 = *((_DWORD *)this + 5);
    v71 = v33;
    v35 = *((_DWORD *)this + 4);
    v72 = v34;
    v36 = *((_DWORD *)this + 3);
    v73 = v35;
    v37 = *((_DWORD *)this + 2);
    v74 = v36;
    v38 = *((_DWORD *)this + 1);
    v75 = v37;
    v39 = *(_DWORD *)this;
    v42 = v38;
    v40 = v39;
    v53 = (int)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v21,
      byte_1802E910B,
      v22,
      v23,
      (__int64)&a5,
      (__int64)&v40,
      (__int64)&v42,
      (__int64)&v75,
      (__int64)&v74,
      (__int64)&v73,
      (__int64)&v72,
      (__int64)&v71,
      (__int64)&v70,
      (__int64)&v69,
      (__int64)&v68,
      (__int64)&v67,
      (__int64)&v66,
      (__int64)&v65,
      (__int64)&v64,
      (__int64)&v63,
      (__int64)&v62,
      (__int64)&v61,
      (__int64)&v60,
      (__int64)&v59,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&a6,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v82,
      (__int64)&v80,
      (__int64)&v78);
  }
}
