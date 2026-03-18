/*
 * XREFs of ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180058CC0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180053820 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x180037740 (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x1800378C0 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800A8518 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800AA9C0 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800AD1F8 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     ?CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z @ 0x1800B96B0 (-CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z.c)
 *     ??A?$span@G$0?0@gsl@@QEBAAEAG_J@Z @ 0x1800BE9D4 (--A-$span@G$0-0@gsl@@QEBAAEAG_J@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z @ 0x1800C5DF8 (--$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z @ 0x1800C5E34 (--$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z @ 0x1800C5E70 (--$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800C6A28 (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801A1294 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 */

__int64 __fastcall Mesh::CreateRectangleMesh(
        const struct Mesh::MeshGraph **this,
        const struct Mesh::ContentInfo *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  unsigned int i; // esi
  __int64 v8; // rcx
  const struct Mesh::MeshGraph *v9; // rax
  float *v10; // rdx
  int v11; // ebx
  float v12; // xmm2_4
  float v13; // xmm0_4
  float right; // xmm1_4
  float left; // xmm2_4
  char *v16; // r14
  char *v17; // r9
  const struct Mesh::MeshGraph *v18; // rax
  float bottom; // xmm1_4
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned int v23; // r10d
  int v24; // edx
  unsigned int v25; // ebx
  __int64 v26; // r8
  unsigned int v27; // r11d
  __int64 v28; // r9
  const struct Mesh::MeshGraph *v29; // rcx
  float v30; // xmm1_4
  __int64 v31; // rax
  __int64 v32; // rdx
  float v33; // xmm0_4
  __int64 v34; // r10
  __int64 v35; // r11
  char v36; // al
  __int64 v37; // rsi
  __int64 *v38; // r15
  __int64 v39; // rax
  _DWORD *v40; // rbx
  __int64 v41; // rax
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int *v47; // r10
  Mesh::MeshGraph *v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  int v51; // ebx
  unsigned __int16 *v52; // rax
  int Triangles; // eax
  const struct Mesh::MeshGraph *v54; // rax
  void *v55; // rcx
  bool v56; // zf
  _DWORD *v57; // rcx
  void *v58; // rcx
  _DWORD *v59; // rcx
  _DWORD *v60; // rcx
  _DWORD *v61; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v63; // rax
  _DWORD *v64; // rcx
  Mesh::MeshGraph **v66; // [rsp+40h] [rbp-41h]
  struct Mesh::MeshGraph *v67; // [rsp+48h] [rbp-39h] BYREF
  char v68; // [rsp+50h] [rbp-31h]
  _DWORD *v69; // [rsp+58h] [rbp-29h] BYREF
  LPVOID *v70; // [rsp+60h] [rbp-21h]
  LPVOID *p_lpMem; // [rsp+68h] [rbp-19h]
  _DWORD Mem[2]; // [rsp+70h] [rbp-11h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-9h] BYREF
  char *v74; // [rsp+80h] [rbp-1h]
  _QWORD *v75; // [rsp+88h] [rbp+7h]
  _DWORD v76[2]; // [rsp+90h] [rbp+Fh] BYREF
  _QWORD v77[4]; // [rsp+98h] [rbp+17h] BYREF

  for ( i = a4; ; i = a4 )
  {
    while ( 1 )
    {
      v8 = *((unsigned __int8 *)this + 76);
      if ( (v8 & 4) != 0 )
      {
        v43 = Mesh::PreallocateGraphObjects((Mesh *)this, (v8 & 4) != 0);
        v11 = v43;
        if ( v43 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x36u, 0LL);
          goto LABEL_6;
        }
        *((_BYTE *)this + 76) &= ~4u;
        v8 = *((unsigned __int8 *)this + 76);
      }
      v9 = this[2];
      this[3] = 0LL;
      *((_DWORD *)this + 3) = 0;
      this[6] = 0LL;
      *((_DWORD *)this + 14) = 0;
      if ( v9 )
      {
        *((_QWORD *)v9 + 8) = 0LL;
        *((_DWORD *)v9 + 8) = 0;
        *((_DWORD *)v9 + 14) = 0;
        *((_QWORD *)v9 + 11) = 0LL;
        *((_QWORD *)v9 + 12) = 0LL;
        *((_DWORD *)v9 + 26) = 0;
        *((_DWORD *)v9 + 32) = 0;
        v8 = *((unsigned __int8 *)this + 76);
        v10 = (float *)this[2];
      }
      else
      {
        v10 = 0LL;
      }
      LOBYTE(v8) = v8 & 4 | 1;
      v11 = 0;
      *((_BYTE *)this + 76) = v8;
      *((_BYTE *)this + 76) = v8 | (*((_BYTE *)a2 + 16) << 7);
      v12 = fmaxf(1.0, fmaxf(a3->right - a3->left, a3->bottom - a3->top)) * 0.0000099999997;
      *v10 = v12;
      v10[2] = v12 * v12;
      v10[1] = v12 + v12;
      v13 = (float)(a3->top + a3->bottom) * 0.5;
      *((float *)this + 10) = (float)(a3->left + a3->right) * 0.5;
      *((float *)this + 11) = v13;
LABEL_6:
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v11, 0xA3u, 0LL);
        goto LABEL_102;
      }
      right = a3->right;
      left = a3->left;
      v16 = (char *)Mem;
      v70 = (LPVOID *)Mem;
      v17 = (char *)v76;
      v69 = Mem;
      p_lpMem = &lpMem;
      v74 = (char *)v76;
      lpMem = v76;
      v75 = v77;
      v18 = this[2];
      if ( (float)(right - left) > *((float *)v18 + 1) )
      {
        *(float *)Mem = left;
        v70 = &lpMem;
        *(float *)&Mem[1] = right;
      }
      bottom = a3->bottom;
      if ( (float)(bottom - a3->top) > *((float *)v18 + 1) )
      {
        v17 = (char *)v77;
        v76[0] = LODWORD(a3->top);
        v74 = (char *)v77;
        *(float *)&v76[1] = bottom;
      }
      v20 = ((char *)v70 - (char *)Mem) >> 2;
      if ( v20 < 2 || (v21 = (v17 - (char *)v76) >> 2, v21 < 2) )
      {
        v11 = 1;
        if ( (v17 - (char *)v76) >> 2 )
LABEL_91:
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&lpMem);
        v64 = lpMem;
LABEL_93:
        lpMem = 0LL;
        if ( v64 == v76 )
          v64 = 0LL;
        operator delete(v64);
        v61 = v69;
        if ( ((char *)v70 - (char *)v69) >> 2 )
        {
LABEL_82:
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&v69);
          v61 = v69;
        }
LABEL_83:
        v69 = 0LL;
        if ( v61 == Mem )
          v61 = 0LL;
        operator delete(v61);
LABEL_102:
        *((_BYTE *)this + 76) &= ~1u;
        return (unsigned int)v11;
      }
      if ( v21 > 0x19 || v20 > 0x19 )
      {
        v11 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024809, 0xCEu, 0LL);
        v64 = lpMem;
        if ( (v74 - (_BYTE *)lpMem) >> 2 )
          goto LABEL_91;
        goto LABEL_93;
      }
      v22 = *((unsigned int *)this + 2);
      if ( v20 * v21 <= v22 )
        break;
      *((_BYTE *)this + 76) |= 4u;
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&lpMem);
      v55 = lpMem;
      v56 = lpMem == v76;
      lpMem = 0LL;
      if ( v56 )
        v55 = 0LL;
      operator delete(v55);
      v57 = v69;
      if ( ((char *)v70 - (char *)v69) >> 2 )
      {
        detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&v69);
        v57 = v69;
      }
      v69 = 0LL;
      if ( v57 == Mem )
        v57 = 0LL;
      operator delete(v57);
    }
    v23 = *((_DWORD *)this + 3);
    v24 = v23 + v20 * v21;
    if ( v24 > (int)v22 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024882, 0xE1u, 0LL);
      v64 = lpMem;
      if ( (v74 - (_BYTE *)lpMem) >> 2 )
        goto LABEL_91;
      goto LABEL_93;
    }
    *((_DWORD *)this + 3) = v24;
    v25 = 0;
    v26 = 0LL;
    do
    {
      v27 = 0;
      if ( v20 )
      {
        v28 = 0LL;
        do
        {
          ++v27;
          v29 = *this;
          v30 = *(float *)&v16[4 * v28] - *((float *)this + 10);
          v31 = v23++;
          v28 = v27;
          v32 = 3 * v31;
          v33 = *((float *)lpMem + v26) - *((float *)this + 11);
          *((float *)v29 + 2 * v32) = v30;
          *((float *)v29 + 2 * v32 + 1) = v33;
          *(_OWORD *)((char *)v29 + 8 * v32 + 8) = *(_OWORD *)a2;
          v16 = (char *)v69;
          v20 = ((char *)v70 - (char *)v69) >> 2;
        }
        while ( v27 < v20 );
        v17 = v74;
      }
      v26 = ++v25;
    }
    while ( v25 < (unsigned __int64)((v17 - (_BYTE *)lpMem) >> 2) );
    v34 = (v17 - (_BYTE *)lpMem) >> 2;
    v35 = ((char *)v70 - v16) >> 2;
    v36 = *((_BYTE *)this + 76) | 0x22;
    *((_BYTE *)this + 76) = v36;
    *((_DWORD *)this + 13) = v35;
    *((_DWORD *)this + 12) = v34;
    if ( i )
    {
      *((_BYTE *)this + 76) = v36 | 0x40;
      *((_DWORD *)this + 15) = Mesh::ComputeAntialiasBorderFlags<50331648,16777216,33554432>(i);
      *((_DWORD *)this + 16) = Mesh::ComputeAntialiasBorderFlags<3,1,2>(i);
      *((_DWORD *)this + 17) = Mesh::ComputeAntialiasBorderFlags<768,256,512>(i);
      *((_DWORD *)this + 18) = Mesh::ComputeAntialiasBorderFlags<196608,65536,131072>(i);
    }
    v37 = 0LL;
    if ( (_DWORD)v34 != 2 )
      goto LABEL_30;
    if ( (_DWORD)v35 != 2 )
      goto LABEL_30;
    v38 = (__int64 *)(this + 4);
    if ( this == (const struct Mesh::MeshGraph **)-32LL )
      goto LABEL_30;
    v37 = *v38;
    if ( *v38 )
    {
      if ( *(_DWORD *)(v37 + 128) )
        goto LABEL_30;
    }
    v45 = Mesh::BuildGrid((Mesh *)this, 0, 2, 2);
    v11 = v45;
    if ( v45 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x466u, 0LL);
    }
    else
    {
      if ( !v37 )
      {
        v47 = (int *)this[2];
        v66 = this + 4;
        v67 = 0LL;
        v68 = 1;
        v11 = Mesh::MeshGraph::Create(v47[8], v47[14], v47[22], 3 * (v47[25] + 2 * (v47[23] - v47[26])), &v67);
        if ( v68 )
        {
          v48 = *v66;
          *v66 = v67;
          if ( v48 )
            Mesh::MeshGraph::`scalar deleting destructor'(v48, (unsigned int)v66);
        }
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v48, 0LL, 0, v11, 0x46Fu, 0LL);
LABEL_62:
          v16 = (char *)v69;
          v17 = v74;
          goto LABEL_31;
        }
        v37 = *v38;
      }
      v49 = Mesh::CopyGraph(this[2], (struct Mesh::MeshGraph *)v37);
      v11 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x474u, 0LL);
      }
      else
      {
        v51 = *(_DWORD *)(v37 + 112);
        v52 = (unsigned __int16 *)gsl::span<unsigned short,-1>::operator[](v37 + 112);
        Triangles = Mesh::GenerateTriangles((Mesh *)this, v52, v51, (int *)(v37 + 128));
        v11 = Triangles;
        if ( Triangles >= 0 )
        {
          v54 = this[2];
          *((_QWORD *)v54 + 8) = 0LL;
          *((_DWORD *)v54 + 8) = 0;
          *((_DWORD *)v54 + 14) = 0;
          *((_QWORD *)v54 + 11) = 0LL;
          *((_QWORD *)v54 + 12) = 0LL;
          *((_DWORD *)v54 + 26) = 0;
          *((_DWORD *)v54 + 32) = 0;
          v16 = (char *)v69;
          v17 = v74;
LABEL_30:
          this[3] = (const struct Mesh::MeshGraph *)v37;
          v11 = 0;
          goto LABEL_31;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, Triangles, 0x477u, 0LL);
      }
    }
    if ( !v37 )
      goto LABEL_62;
    *(_QWORD *)(v37 + 64) = 0LL;
    *(_DWORD *)(v37 + 32) = 0;
    *(_DWORD *)(v37 + 56) = 0;
    *(_QWORD *)(v37 + 88) = 0LL;
    *(_QWORD *)(v37 + 96) = 0LL;
    *(_DWORD *)(v37 + 104) = 0;
    *(_DWORD *)(v37 + 128) = 0;
    v16 = (char *)v69;
    v17 = v74;
LABEL_31:
    if ( (*((_BYTE *)this + 76) & 4) == 0 )
      break;
    if ( (v17 - (_BYTE *)lpMem) >> 2 )
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&lpMem);
    v58 = lpMem;
    v56 = lpMem == v76;
    lpMem = 0LL;
    if ( v56 )
      v58 = 0LL;
    operator delete(v58);
    v59 = v69;
    if ( ((char *)v70 - (char *)v69) >> 2 )
    {
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&v69);
      v59 = v69;
    }
    v69 = 0LL;
    if ( v59 == Mem )
      v59 = 0LL;
    operator delete(v59);
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v11, 0x128u, 0LL);
    v60 = lpMem;
    if ( (v74 - (_BYTE *)lpMem) >> 2 )
    {
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&lpMem);
      v60 = lpMem;
    }
    lpMem = 0LL;
    if ( v60 == v76 )
      v60 = 0LL;
    operator delete(v60);
    v61 = v69;
    if ( ((char *)v70 - (char *)v69) >> 2 )
      goto LABEL_82;
    goto LABEL_83;
  }
  v39 = (v17 - (_BYTE *)lpMem) >> 2;
  if ( v39 )
    v74 = &v17[-4 * v39];
  v40 = lpMem;
  lpMem = 0LL;
  if ( v40 != v76 && v40 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v40);
    v16 = (char *)v69;
  }
  v41 = ((char *)v70 - v16) >> 2;
  if ( v41 )
    v70 = (LPVOID *)((char *)v70 - 4 * v41);
  v69 = 0LL;
  if ( v16 != (char *)Mem )
  {
    if ( v16 )
    {
      v63 = GetProcessHeap();
      HeapFree(v63, 0, v16);
    }
  }
  return 0LL;
}
