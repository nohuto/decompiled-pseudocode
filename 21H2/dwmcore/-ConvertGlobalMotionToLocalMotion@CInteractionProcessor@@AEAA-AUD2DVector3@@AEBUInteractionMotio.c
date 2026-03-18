/*
 * XREFs of ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18018C6F0
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x180187810 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18009A3CC (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800E0B5C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@444444444444444444444444@Z @ 0x1801896B8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@_ea_1801896B8.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18026CB5C (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18026D158 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x18026DD0C (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18026E788 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

float *__fastcall CInteractionProcessor::ConvertGlobalMotionToLocalMotion(
        __int64 *a1,
        float *a2,
        int *a3,
        const struct D2DMatrix *a4,
        struct D2DMatrix *a5,
        struct D2DMatrix *a6)
{
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  struct _D3DMATRIX *v14; // rcx
  struct _D3DMATRIX *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  float *v19; // r8
  struct _D3DMATRIX *v20; // rcx
  struct _D3DMATRIX *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int128 *v29; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v30; // r8
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  struct _D3DMATRIX *v35; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  const struct D2DMatrix *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  D3DVALUE _33; // [rsp+110h] [rbp-80h] BYREF
  D3DVALUE _32; // [rsp+114h] [rbp-7Ch] BYREF
  D3DVALUE _31; // [rsp+118h] [rbp-78h] BYREF
  D3DVALUE _23; // [rsp+11Ch] [rbp-74h] BYREF
  D3DVALUE _22; // [rsp+120h] [rbp-70h] BYREF
  D3DVALUE _21; // [rsp+124h] [rbp-6Ch] BYREF
  D3DVALUE _13; // [rsp+128h] [rbp-68h] BYREF
  D3DVALUE _12; // [rsp+12Ch] [rbp-64h] BYREF
  D3DVALUE _11; // [rsp+130h] [rbp-60h] BYREF
  int v53; // [rsp+134h] [rbp-5Ch] BYREF
  int v54; // [rsp+138h] [rbp-58h] BYREF
  int v55; // [rsp+13Ch] [rbp-54h] BYREF
  int v56; // [rsp+140h] [rbp-50h] BYREF
  int v57; // [rsp+144h] [rbp-4Ch] BYREF
  int v58; // [rsp+148h] [rbp-48h] BYREF
  int v59; // [rsp+14Ch] [rbp-44h] BYREF
  int v60; // [rsp+150h] [rbp-40h] BYREF
  int v61; // [rsp+154h] [rbp-3Ch] BYREF
  int v62; // [rsp+158h] [rbp-38h] BYREF
  int v63; // [rsp+15Ch] [rbp-34h] BYREF
  int v64; // [rsp+160h] [rbp-30h] BYREF
  int v65; // [rsp+164h] [rbp-2Ch] BYREF
  int v66; // [rsp+168h] [rbp-28h] BYREF
  float v67; // [rsp+16Ch] [rbp-24h] BYREF
  int v68; // [rsp+170h] [rbp-20h] BYREF
  __int64 v69; // [rsp+178h] [rbp-18h] BYREF
  __int64 v70; // [rsp+180h] [rbp-10h] BYREF
  __int64 v71; // [rsp+188h] [rbp-8h] BYREF
  __int64 v72; // [rsp+190h] [rbp+0h] BYREF
  __int64 *v73; // [rsp+198h] [rbp+8h] BYREF
  struct _D3DMATRIX v74; // [rsp+1A0h] [rbp+10h] BYREF
  int v75; // [rsp+1E0h] [rbp+50h]
  struct _D3DMATRIX v76; // [rsp+1F0h] [rbp+60h] BYREF
  struct _D3DMATRIX v77; // [rsp+230h] [rbp+A0h] BYREF

  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v77);
  v11 = *(_OWORD *)&D3DMatrix->_21;
  v12 = *(_OWORD *)&D3DMatrix->_31;
  v13 = *(_OWORD *)&D3DMatrix->_41;
  *(_OWORD *)a5 = *(_OWORD *)&D3DMatrix->_11;
  *((_OWORD *)a5 + 1) = v11;
  *((_OWORD *)a5 + 2) = v12;
  *((_OWORD *)a5 + 3) = v13;
  v15 = CMILMatrix::GetD3DMatrix(v14, &v77);
  v16 = *(_OWORD *)&v15->_21;
  v17 = *(_OWORD *)&v15->_31;
  v18 = *(_OWORD *)&v15->_41;
  *(_OWORD *)a6 = *(_OWORD *)&v15->_11;
  *((_OWORD *)a6 + 1) = v16;
  *((_OWORD *)a6 + 2) = v17;
  *((_OWORD *)a6 + 3) = v18;
  *(float *)&v17 = v19[1];
  *(float *)&v16 = 1.0 / v19[2];
  *a2 = *v19;
  *((_DWORD *)a2 + 1) = v17;
  a2[2] = *(float *)&v16 - 1.0;
  v21 = CMILMatrix::GetD3DMatrix(v20, &v76);
  v22 = *(_OWORD *)&v21->_21;
  *(_OWORD *)&v77._11 = *(_OWORD *)&v21->_11;
  v23 = *(_OWORD *)&v21->_31;
  *(_OWORD *)&v77._21 = v22;
  v24 = *(_OWORD *)&v21->_41;
  *(_OWORD *)&v77._31 = v23;
  *(_OWORD *)&v77._41 = v24;
  if ( !CMILMatrix::IsIdentity<0>((__int64)a1 + 1044, v25, v26, v27) )
  {
    v31 = *v29;
    v32 = v29[1];
    v75 = *((_DWORD *)v29 + 16);
    *(_OWORD *)&v74._11 = v31;
    v33 = v29[2];
    *(_OWORD *)&v74._21 = v32;
    v34 = v29[3];
    *(_OWORD *)&v74._31 = v33;
    *(_OWORD *)&v74._41 = v34;
    if ( CMILMatrix::Invert((CMILMatrix *)&v74, v28, v30) )
    {
      v35 = CMILMatrix::GetD3DMatrix(&v74, &v76);
      v36 = *(_OWORD *)&v35->_21;
      *(_OWORD *)&v77._11 = *(_OWORD *)&v35->_11;
      v37 = *(_OWORD *)&v35->_31;
      *(_OWORD *)&v77._21 = v36;
      v38 = *(_OWORD *)&v35->_41;
      *(_OWORD *)&v77._31 = v37;
      *(_OWORD *)&v77._41 = v38;
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, (const struct D2DMatrix *)&v77);
    }
  }
  if ( !(unsigned int)D2DMatrixIsIdentity(a4) )
  {
    v39 = D2DMatrixTranspose(a5, a4);
    if ( D2DMatrixInverse(a6, 0LL, v39) )
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, a6);
  }
  if ( (unsigned int)dword_1803D0EF0 > 4 && tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
  {
    _33 = v77._33;
    _32 = v77._32;
    _31 = v77._31;
    _23 = v77._23;
    _22 = v77._22;
    _21 = v77._21;
    _13 = v77._13;
    _12 = v77._12;
    _11 = v77._11;
    v53 = *((_DWORD *)a6 + 10);
    v54 = *((_DWORD *)a6 + 9);
    v55 = *((_DWORD *)a6 + 8);
    v56 = *((_DWORD *)a6 + 6);
    v57 = *((_DWORD *)a6 + 5);
    v58 = *((_DWORD *)a6 + 4);
    v59 = *((_DWORD *)a6 + 2);
    v60 = *((_DWORD *)a6 + 1);
    v61 = *(_DWORD *)a6;
    v62 = a3[2];
    v63 = a3[1];
    v64 = *a3;
    v65 = *((_DWORD *)a2 + 2);
    v66 = *((_DWORD *)a2 + 1);
    v67 = *a2;
    v68 = *((_DWORD *)a1 + 197);
    v69 = a1[60];
    v70 = a1[40];
    v71 = a1[20];
    v72 = *a1;
    v73 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v40,
      byte_18036A910,
      v41,
      v42,
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
      (__int64)&v53,
      (__int64)&_11,
      (__int64)&_12,
      (__int64)&_13,
      (__int64)&_21,
      (__int64)&_22,
      (__int64)&_23,
      (__int64)&_31,
      (__int64)&_32,
      (__int64)&_33);
  }
  return a2;
}
