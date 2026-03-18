/*
 * XREFs of ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x1800AC488
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800AB300 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     ?GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x1800AC7D0 (-GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     _lambda_2aa7631b7b0557a21a5592a2a4bfddf8_::operator() @ 0x1800D63C4 (_lambda_2aa7631b7b0557a21a5592a2a4bfddf8_--operator().c)
 *     ?GetEdgeFlagsListForRectangle@Mesh@@CAXW4D2D1_EDGE_FLAGS@@PEAW42@111@Z @ 0x1800D948C (-GetEdgeFlagsListForRectangle@Mesh@@CAXW4D2D1_EDGE_FLAGS@@PEAW42@111@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

void __fastcall Mesh::GenerateGeometryForRectangle(const struct Mesh::MeshDesc *a1, struct Mesh::GeometryBuffers *a2)
{
  int v2; // xmm1_4
  int v3; // xmm0_4
  __int64 v4; // rbx
  int v5; // xmm2_4
  struct Mesh::GeometryBuffers *v6; // rdi
  char v7; // al
  int v8; // xmm1_4
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 *v11; // r8
  __int64 v12; // r8
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // [rsp+30h] [rbp-79h] BYREF
  __int64 v30; // [rsp+38h] [rbp-71h]
  _DWORD *v31; // [rsp+40h] [rbp-69h]
  __m128i *p_si128; // [rsp+48h] [rbp-61h]
  __int128 *v33; // [rsp+50h] [rbp-59h]
  char v34; // [rsp+58h] [rbp-51h]
  char v35; // [rsp+59h] [rbp-50h]
  char v36; // [rsp+5Ah] [rbp-4Fh]
  __int128 v37; // [rsp+60h] [rbp-49h] BYREF
  __int128 v38; // [rsp+70h] [rbp-39h]
  __int128 v39; // [rsp+80h] [rbp-29h]
  __int128 v40; // [rsp+90h] [rbp-19h]
  __int128 v41; // [rsp+A0h] [rbp-9h]
  __int128 v42; // [rsp+B0h] [rbp+7h]
  __m128i si128; // [rsp+C0h] [rbp+17h] BYREF
  _DWORD v44[8]; // [rsp+D0h] [rbp+27h] BYREF

  v2 = *((_DWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 4);
  v4 = 4LL;
  v5 = *((_DWORD *)a1 + 2);
  v6 = a2;
  v31 = v44;
  v36 = *((_BYTE *)a1 + 42);
  v7 = *((_BYTE *)a1 + 41);
  v44[1] = v2;
  v44[3] = v2;
  v8 = *((_DWORD *)a1 + 5);
  v9 = *((unsigned int *)a1 + 6);
  v44[2] = v3;
  v44[4] = v3;
  v44[0] = v5;
  v44[5] = v8;
  v44[6] = v5;
  v44[7] = v8;
  v29 = FLOAT_0_015625;
  v34 = 0;
  v30 = 4LL;
  v35 = v7;
  if ( (_DWORD)v9 == 50529027 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v38 = _xmm;
    v37 = _xmm_bf0000003f3504f33f0000003f000000;
    v40 = _xmm;
    v39 = _xmm;
    v42 = _xmm;
    v41 = _xmm_bf0000003f0000003f3504f33f000000;
    goto LABEL_5;
  }
  if ( (_DWORD)v9 )
  {
    Mesh::GetEdgeFlagsListForRectangle(v9, &si128, (char *)si128.m128i_i64 + 4, &si128.m128i_u64[1]);
    memset_0(&v37, 0, 0x60uLL);
    switch ( si128.m128i_i32[0] )
    {
      case 1:
        v15 = *(float *)&v38 + 0.5;
        *((float *)&v38 + 3) = *((float *)&v38 + 3) + 0.5;
        v16 = *((float *)&v39 + 2) + 0.5;
        break;
      case 2:
        DWORD1(v37) = -1090519040;
        v15 = *(float *)&v38 + -0.5;
        *((float *)&v38 + 3) = *((float *)&v38 + 3) + -0.5;
        v16 = *((float *)&v39 + 2) + -0.5;
        goto LABEL_28;
      case 3:
        v15 = *(float *)&v38 + -0.5;
        *((float *)&v38 + 3) = *((float *)&v38 + 3) + 0.5;
        v16 = *((float *)&v39 + 2) + -0.5;
        break;
      default:
        goto LABEL_10;
    }
    DWORD1(v37) = 1056964608;
LABEL_28:
    *(float *)&v38 = v15;
    *((float *)&v39 + 2) = v16;
LABEL_10:
    if ( si128.m128i_i32[1] == 1 )
    {
      *((float *)&v38 + 2) = *((float *)&v38 + 2) + -0.5;
      *(float *)&v40 = *(float *)&v40 + -0.5;
      v19 = *((float *)&v39 + 1) + -0.5;
      v20 = *((float *)&v40 + 3) + -0.5;
    }
    else
    {
      if ( si128.m128i_i32[1] == 2 )
      {
        v17 = *((float *)&v38 + 2) + 0.5;
        v18 = *(float *)&v40 + 0.5;
      }
      else
      {
        if ( si128.m128i_i32[1] != 3 )
          goto LABEL_13;
        v17 = *((float *)&v38 + 2) + -0.5;
        v18 = *(float *)&v40 + -0.5;
      }
      *((float *)&v38 + 2) = v17;
      *(float *)&v40 = v18;
      v19 = *((float *)&v39 + 1) + 0.5;
      v20 = *((float *)&v40 + 3) + 0.5;
    }
    *((float *)&v39 + 1) = v19;
    *((float *)&v40 + 3) = v20;
LABEL_13:
    if ( si128.m128i_i32[2] == 1 )
    {
      *((float *)&v41 + 3) = *((float *)&v41 + 3) + -0.5;
      *((float *)&v40 + 1) = *((float *)&v40 + 1) + -0.5;
      v23 = *((float *)&v42 + 2) + -0.5;
      v24 = *(float *)&v41 + -0.5;
    }
    else
    {
      if ( si128.m128i_i32[2] == 2 )
      {
        v21 = *((float *)&v41 + 3) + 0.5;
        v22 = *((float *)&v40 + 1) + 0.5;
      }
      else
      {
        if ( si128.m128i_i32[2] != 3 )
          goto LABEL_16;
        v21 = *((float *)&v41 + 3) + -0.5;
        v22 = *((float *)&v40 + 1) + -0.5;
      }
      *((float *)&v41 + 3) = v21;
      *((float *)&v40 + 1) = v22;
      v23 = *((float *)&v42 + 2) + 0.5;
      v24 = *(float *)&v41 + 0.5;
    }
    *((float *)&v42 + 2) = v23;
    *(float *)&v41 = v24;
LABEL_16:
    v10 = (unsigned int)(si128.m128i_i32[3] - 1);
    if ( si128.m128i_i32[3] == 1 )
    {
      *(float *)&v37 = *(float *)&v37 + 0.5;
      *((float *)&v41 + 2) = *((float *)&v41 + 2) + 0.5;
      v27 = *((float *)&v37 + 3) + 0.5;
      v28 = *((float *)&v42 + 1) + 0.5;
    }
    else
    {
      v10 = (unsigned int)(si128.m128i_i32[3] - 2);
      if ( si128.m128i_i32[3] == 2 )
      {
        v25 = *(float *)&v37 + -0.5;
        v26 = *((float *)&v41 + 2) + -0.5;
      }
      else
      {
        if ( si128.m128i_i32[3] != 3 )
          goto LABEL_19;
        v25 = *(float *)&v37 + 0.5;
        v26 = *((float *)&v41 + 2) + 0.5;
      }
      *(float *)&v37 = v25;
      *((float *)&v41 + 2) = v26;
      v27 = *((float *)&v37 + 3) + -0.5;
      v28 = *((float *)&v42 + 1) + -0.5;
    }
    *((float *)&v37 + 3) = v27;
    *((float *)&v42 + 1) = v28;
LABEL_19:
    v11 = &v37;
    do
    {
      v13 = lambda_2aa7631b7b0557a21a5592a2a4bfddf8_::operator()(v10, v11);
      *(float *)(v12 + 8) = v13;
      if ( *(float *)v12 == *(float *)(v12 + 12) && *(float *)(v12 + 4) == *(float *)(v12 + 16) )
      {
        *(_DWORD *)(v12 + 20) = 0;
      }
      else
      {
        v14 = lambda_2aa7631b7b0557a21a5592a2a4bfddf8_::operator()(v10, v12 + 12);
        *(float *)(v12 + 20) = v14;
      }
      v11 = (__int128 *)(v12 + 24);
      --v4;
    }
    while ( v4 );
    goto LABEL_4;
  }
  si128 = 0LL;
  memset_0(&v37, 0, 0x60uLL);
LABEL_4:
  a2 = v6;
LABEL_5:
  p_si128 = &si128;
  v33 = &v37;
  Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)&v29, a2);
}
