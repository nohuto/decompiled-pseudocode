/*
 * XREFs of ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801A173C
 * Callers:
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x1801A212C (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x1800AD764 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 *     ?AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z @ 0x1800AD7F0 (-AddPolygon@MeshGraph@Mesh@@QEAAJPEAUMeshEdge@2@@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800CDB58 (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800EECEB (sqrtf_0.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801656F0 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019E704 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 *     ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x1801A1624 (-AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z.c)
 *     ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x1801A1674 (-AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z.c)
 *     ?AllocateVertex@Mesh@@AEAAJHPEAH@Z @ 0x1801A16C4 (-AllocateVertex@Mesh@@AEAAJHPEAH@Z.c)
 *     ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x1801A16EC (-AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z.c)
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x1801A202C (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 *     ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x1801A24CC (-InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z.c)
 *     ?reserve_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_VECTOR_2F@@_K0@Z @ 0x1801A27E0 (-reserve_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_ex.c)
 *     ?reserve_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4D2D1_EDGE_FLAGS@@_K0@Z @ 0x1801A2900 (-reserve_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibe.c)
 */

__int64 __fastcall Mesh::BuildPolygon(
        Mesh *this,
        struct D2D_POINT_2F *a2,
        const enum D2D1_EDGE_FLAGS *a3,
        int a4,
        const struct _D3DCOLORVALUE *a5)
{
  _BYTE *v5; // r15
  _BYTE *v6; // rsi
  int v7; // r8d
  __int64 v8; // r14
  __int64 v9; // rax
  int v12; // r12d
  __int64 v13; // rcx
  int v14; // ebx
  float x; // xmm8_4
  float y; // xmm9_4
  float v17; // xmm10_4
  float v18; // xmm11_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  unsigned __int64 v22; // rsi
  unsigned int v23; // ebx
  float v24; // xmm8_4
  float v25; // xmm9_4
  float *v26; // rax
  _DWORD *v27; // rax
  bool v28; // sf
  int Vertex; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  Mesh::MeshGraph *v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  Mesh::MeshGraph *v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  Mesh::MeshGraph *v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  _BYTE *v41; // rcx
  __int64 v42; // r9
  int v43; // r10d
  unsigned __int64 v44; // r8
  int v45; // r11d
  FLOAT v46; // xmm0_4
  FLOAT v47; // xmm1_4
  char *v48; // r8
  unsigned int v49; // r8d
  unsigned __int64 v50; // rcx
  _QWORD *v51; // r13
  char *v52; // rsi
  char *v53; // r14
  float *v54; // rbx
  float v55; // xmm7_4
  float v56; // xmm6_4
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r15
  float *v60; // rax
  char *v61; // r15
  float v62; // xmm8_4
  float v63; // xmm9_4
  float v64; // xmm7_4
  char *v65; // r12
  float v66; // xmm6_4
  float v67; // xmm0_4
  float v68; // xmm1_4
  float v69; // xmm2_4
  float v70; // xmm0_4
  __int128 v71; // xmm0
  int v72; // eax
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  int v82; // eax
  __int64 v83; // rcx
  unsigned __int64 v84; // r8
  void *v85; // rcx
  bool v86; // zf
  __int64 v87; // rdx
  _BYTE *v88; // rcx
  unsigned __int64 v89; // r8
  int v91[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct Mesh::MeshVertex *v92; // [rsp+40h] [rbp-C8h] BYREF
  struct Mesh::MeshLine *v93; // [rsp+48h] [rbp-C0h] BYREF
  struct Mesh::MeshEdge *v94; // [rsp+50h] [rbp-B8h] BYREF
  struct Mesh::MeshVertex *v95; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v96[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v97; // [rsp+78h] [rbp-90h]
  char *v98; // [rsp+80h] [rbp-88h]
  __int64 v99; // [rsp+88h] [rbp-80h]
  unsigned __int64 v100; // [rsp+90h] [rbp-78h]
  _BYTE *v101; // [rsp+98h] [rbp-70h] BYREF
  _BYTE *v102; // [rsp+A0h] [rbp-68h]
  char *v103; // [rsp+A8h] [rbp-60h]
  _BYTE v104[64]; // [rsp+B0h] [rbp-58h] BYREF
  char v105; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE *v106; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE *v107; // [rsp+100h] [rbp-8h]
  __int64 *v108; // [rsp+108h] [rbp+0h]
  _BYTE v109[32]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v110; // [rsp+130h] [rbp+28h] BYREF

  v103 = &v105;
  v5 = v104;
  v96[0] = a3;
  v106 = v109;
  v6 = v104;
  v94 = (struct Mesh::MeshEdge *)a2;
  v107 = v109;
  v7 = a4 - 1;
  v101 = v104;
  v8 = 0LL;
  v108 = &v110;
  v9 = -1LL;
  v102 = v104;
  v93 = (struct Mesh::MeshLine *)-1LL;
  v12 = 0;
  if ( a4 > 0 )
  {
    v13 = v7;
    v14 = a4;
    v92 = (struct Mesh::MeshVertex *)v7;
    *(_QWORD *)v91 = -1LL;
    do
    {
      if ( v14 < 3 )
        break;
      x = a2[v8].x;
      y = a2[v8].y;
      v95 = (struct Mesh::MeshVertex *)(v8 + 1);
      v17 = x - a2[v13].x;
      if ( v12 != v7 )
        v9 = v8 + 1;
      v18 = y - a2[v13].y;
      v19 = a2[v9].x - a2[v13].x;
      v20 = a2[v9].y - a2[v13].y;
      v21 = sqrtf_0((float)(v20 * v20) + (float)(v19 * v19));
      if ( v21 == 0.0
        || *(float *)(*((_QWORD *)this + 2) + 4LL) > (float)((float)((float)(v20 * (float)(1.0 / v21)) * v17)
                                                           - (float)((float)(v19 * (float)(1.0 / v21)) * v18)) )
      {
        v13 = (__int64)v92;
        --v14;
      }
      else
      {
        v24 = x - *((float *)this + 10);
        v25 = y - *((float *)this + 11);
        v26 = (float *)detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::reserve_region(
                         &v101,
                         (v6 - v5) >> 3);
        *v26 = v24;
        v26[1] = v25;
        v27 = (_DWORD *)detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::reserve_region(
                          &v106,
                          (v107 - v106) >> 2);
        v28 = (int)v93 < 0;
        *v27 = *(_DWORD *)(v96[0] + 4 * v8);
        v13 = v8;
        v6 = v102;
        v5 = v101;
        v92 = (struct Mesh::MeshVertex *)v8;
        if ( v28 )
        {
          v9 = v8;
          LODWORD(v93) = v12;
          *(_QWORD *)v91 = v8;
          goto LABEL_9;
        }
      }
      v9 = *(_QWORD *)v91;
LABEL_9:
      v8 = (__int64)v95;
      v7 = a4 - 1;
      a2 = (struct D2D_POINT_2F *)v94;
      ++v12;
    }
    while ( v12 < a4 );
  }
  v22 = (v6 - v5) >> 3;
  if ( v22 < 3 )
  {
LABEL_11:
    v23 = 1;
    goto LABEL_47;
  }
  Vertex = Mesh::AllocateVertex(this, v22, v91);
  v23 = Vertex;
  if ( Vertex < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, Vertex, 0x3C5u, 0LL);
  }
  else
  {
    v32 = (Mesh::MeshGraph *)*((_QWORD *)this + 2);
    v92 = 0LL;
    v33 = Mesh::MeshGraph::AllocateVertex(v32, v30, &v92);
    v23 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x3C8u, 0LL);
    }
    else
    {
      v35 = (Mesh::MeshGraph *)*((_QWORD *)this + 2);
      v93 = 0LL;
      v36 = Mesh::MeshGraph::AllocateLine(v35, (v102 - v101) >> 3, &v93);
      v23 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x3CBu, 0LL);
      }
      else
      {
        v38 = (Mesh::MeshGraph *)*((_QWORD *)this + 2);
        v94 = 0LL;
        v39 = Mesh::MeshGraph::AllocateEdge(v38, 2 * (unsigned int)((v102 - v101) >> 3), &v94);
        v23 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x3CEu, 0LL);
        }
        else
        {
          v41 = v102;
          v42 = (__int64)v101;
          if ( (v102 - v101) >> 3 )
          {
            v43 = v91[0];
            v44 = 0LL;
            v45 = v91[0];
            do
            {
              v46 = *(float *)(v42 + 8 * v44);
              v47 = *(float *)(v42 + 8 * v44 + 4);
              v48 = (char *)v92 + 64 * v44;
              a2 = (struct D2D_POINT_2F *)(*(_QWORD *)this + 24LL * v43);
              a2->x = v46;
              a2->y = v47;
              *(struct _D3DCOLORVALUE *)&a2[1].x = *(const struct _D3DCOLORVALUE *)&a5->r;
              *((_QWORD *)v48 + 6) = 0LL;
              *(_DWORD *)v48 = v43++;
              *((_QWORD *)v48 + 1) = a2;
              *((_QWORD *)v48 + 3) = 0LL;
              *((_QWORD *)v48 + 4) = 0LL;
              *((_DWORD *)v48 + 10) = 0;
              v41 = v102;
              v44 = (unsigned int)(v43 - v45);
              v42 = (__int64)v101;
            }
            while ( v44 < (v102 - v101) >> 3 );
          }
          v49 = 0;
          v50 = (__int64)&v41[-v42] >> 3;
          if ( v50 )
          {
            do
            {
              v91[0] = v49 + 1;
              v100 = v49 + 1;
              v51 = (_QWORD *)((char *)v92 + 64 * (v100 % v50));
              v52 = (char *)v93 + 88 * v49;
              v53 = (char *)v92 + 64 * (unsigned __int64)v49;
              v99 = v49;
              if ( v49 )
                v96[0] = (char *)v93 + 88 * v49 - 88;
              else
                v96[0] = (char *)v93 + 88 * v50 - 88;
              v54 = (float *)*((_QWORD *)v53 + 1);
              v55 = *v54;
              v56 = v54[1];
              v98 = (char *)v93 + 88 * (v100 % v50);
              v57 = 2 * v49;
              v58 = (unsigned int)(v57 + 1);
              v59 = 88 * v57;
              v60 = (float *)v51[1];
              v61 = (char *)v94 + v59;
              v62 = *v60;
              v63 = v60[1];
              v64 = v55 - *v60;
              v65 = (char *)v94 + 88 * v58;
              v66 = v56 - v63;
              v67 = sqrtf_0((float)(v66 * v66) + (float)(v64 * v64));
              v68 = 1.0 / v67;
              LODWORD(v69) = LODWORD(v67) & _xmm;
              v70 = **((float **)this + 2);
              *(float *)&v95 = v64 * v68;
              *((float *)&v95 + 1) = v66 * v68;
              if ( v70 > v69 )
                goto LABEL_11;
              Mesh::MeshGraph::ComputeNormalizedLine(&v96[1], v54, &v95);
              if ( (_BYTE)v97 )
              {
                *v54 = v62;
              }
              else
              {
                if ( !BYTE1(v97) )
                  goto LABEL_32;
                v54[1] = v63;
              }
              v96[1] = **((_QWORD **)v53 + 1);
LABEL_32:
              v71 = *(_OWORD *)&v96[1];
              *(_QWORD *)v52 = *((_QWORD *)this + 2);
              v72 = v97;
              *(_OWORD *)(v52 + 8) = v71;
              *((_DWORD *)v52 + 6) = v72;
              *((_DWORD *)v52 + 7) = 0;
              *((_QWORD *)v52 + 6) = 0LL;
              *((_QWORD *)v52 + 7) = 0LL;
              *((_DWORD *)v52 + 16) = 0;
              *(float *)&v71 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)(v52 + 8));
              *((_QWORD *)v52 + 9) = v96[0];
              *((_QWORD *)v52 + 10) = v98;
              *((_DWORD *)v52 + 8) = v71;
              *((_DWORD *)v61 + 4) = v73;
              *((_QWORD *)v61 + 9) = v73;
              *((_QWORD *)v61 + 10) = v73;
              *((_QWORD *)v61 + 7) = v73;
              *((_QWORD *)v61 + 8) = v73;
              *(_QWORD *)v61 = v53;
              *((_QWORD *)v61 + 1) = v52;
              *((_QWORD *)v61 + 4) = v53;
              *((_QWORD *)v61 + 3) = v53;
              *((_QWORD *)v61 + 6) = v53;
              *((_QWORD *)v61 + 5) = v53;
              Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v53 + 16), (struct Mesh::MeshEdge *)v61);
              Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v52 + 40), (struct Mesh::MeshEdge *)v61);
              *(_QWORD *)v65 = v51;
              *((_DWORD *)v65 + 4) = 0;
              *((_QWORD *)v65 + 9) = 0LL;
              *((_QWORD *)v65 + 10) = 0LL;
              *((_QWORD *)v65 + 7) = 0LL;
              *((_QWORD *)v65 + 8) = 0LL;
              *((_QWORD *)v65 + 1) = v52;
              *((_QWORD *)v65 + 4) = v51;
              *((_QWORD *)v65 + 3) = v51;
              *((_QWORD *)v65 + 6) = v51;
              *((_QWORD *)v65 + 5) = v51;
              Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v51 + 2), (struct Mesh::MeshEdge *)v65);
              Mesh::MeshEdgeList::InsertEdge((Mesh::MeshEdgeList *)(v52 + 40), (struct Mesh::MeshEdge *)v65);
              v74 = *((_DWORD *)v52 + 7);
              if ( *((char **)v52 + 6) == v61 )
              {
                *((_DWORD *)v52 + 7) = v74 | 1;
                v75 = *((_QWORD *)this + 2);
                *((_DWORD *)v61 + 4) |= 4u;
                ++*(_DWORD *)(v75 + 100);
                v76 = *((_QWORD *)this + 2);
                *((_DWORD *)v65 + 4) |= 2u;
                ++*(_DWORD *)(v76 + 96);
                if ( (*(_BYTE *)(*((_QWORD *)v53 + 4) + 16LL) & 8) != 0 )
                {
                  v77 = Mesh::MeshGraph::AddPolygon(
                          *((Mesh::MeshGraph **)this + 2),
                          *((struct Mesh::MeshEdge **)v53 + 3));
                  v23 = v77;
                  if ( v77 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v78, 0LL, 0, v77, 0x41Du, 0LL);
                    goto LABEL_47;
                  }
                }
              }
              else
              {
                *((_DWORD *)v52 + 7) = v74 | 2;
                v79 = *((_QWORD *)this + 2);
                *((_DWORD *)v65 + 4) |= 8u;
                ++*(_DWORD *)(v79 + 100);
                v80 = *((_QWORD *)this + 2);
                *((_DWORD *)v61 + 4) |= 2u;
                ++*(_DWORD *)(v80 + 96);
                v81 = v51[3];
                if ( (*(_BYTE *)(v81 + 16) & 4) != 0 )
                {
                  v82 = Mesh::MeshGraph::AddPolygon(*((Mesh::MeshGraph **)this + 2), (struct Mesh::MeshEdge *)v81);
                  v23 = v82;
                  if ( v82 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v82, 0x429u, 0LL);
                    goto LABEL_47;
                  }
                }
              }
              *((_DWORD *)v52 + 7) |= Mesh::ComputeAntialiasBorderFlags<3,1,2>(*(_DWORD *)&v106[4 * v99]);
              if ( (v52[28] & 0xC) != 0 )
                *((_BYTE *)this + 76) |= 0x40u;
              v49 = v91[0];
              v50 = (v102 - v101) >> 3;
            }
            while ( v100 < v50 );
          }
          v23 = 0;
          *(_QWORD *)(*((_QWORD *)this + 2) + 64LL) = v93;
        }
      }
    }
  }
LABEL_47:
  v84 = (v107 - v106) >> 2;
  if ( v84 )
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v106,
      (__int64)a2,
      v84);
  v85 = v106;
  v86 = v106 == v109;
  v106 = 0LL;
  if ( v86 )
    v85 = 0LL;
  operator delete(v85);
  v88 = v101;
  v89 = (v102 - v101) >> 3;
  if ( v89 )
  {
    detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v101,
      v87,
      v89);
    v88 = v101;
  }
  v101 = 0LL;
  if ( v88 == v104 )
    v88 = 0LL;
  operator delete(v88);
  return v23;
}
