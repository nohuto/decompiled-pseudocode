/*
 * XREFs of ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800A2D50
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800A08F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x18006E3F4 (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x18006E570 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800736F0 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800B6ED0 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800BA198 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     ?CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z @ 0x1800BEF90 (-CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z @ 0x1800CC218 (--$ComputeAntialiasBorderFlags@$0DAAAAAA@$0BAAAAAA@$0CAAAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z @ 0x1800CC254 (--$ComputeAntialiasBorderFlags@$0DAA@$0BAA@$0CAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z @ 0x1800CC290 (--$ComputeAntialiasBorderFlags@$0DAAAA@$0BAAAA@$0CAAAA@@Mesh@@CAKK@Z.c)
 *     ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800CD3C8 (--$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019CA84 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
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
  int v11; // edi
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
  unsigned int v25; // edi
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
  int Triangles; // eax
  const struct Mesh::MeshGraph *v52; // rax
  void *v53; // rcx
  bool v54; // zf
  _DWORD *v55; // rcx
  void *v56; // rcx
  _DWORD *v57; // rcx
  _DWORD *v58; // rcx
  _DWORD *v59; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v61; // rax
  _DWORD *v62; // rcx
  Mesh::MeshGraph **v64; // [rsp+40h] [rbp-41h]
  struct Mesh::MeshGraph *v65; // [rsp+48h] [rbp-39h] BYREF
  char v66; // [rsp+50h] [rbp-31h]
  _DWORD *v67; // [rsp+58h] [rbp-29h] BYREF
  LPVOID *v68; // [rsp+60h] [rbp-21h]
  LPVOID *p_lpMem; // [rsp+68h] [rbp-19h]
  _DWORD Mem[2]; // [rsp+70h] [rbp-11h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-9h] BYREF
  char *v72; // [rsp+80h] [rbp-1h]
  _QWORD *v73; // [rsp+88h] [rbp+7h]
  _DWORD v74[2]; // [rsp+90h] [rbp+Fh] BYREF
  _QWORD v75[4]; // [rsp+98h] [rbp+17h] BYREF

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
        goto LABEL_104;
      }
      right = a3->right;
      left = a3->left;
      v16 = (char *)Mem;
      v68 = (LPVOID *)Mem;
      v17 = (char *)v74;
      v67 = Mem;
      p_lpMem = &lpMem;
      v72 = (char *)v74;
      lpMem = v74;
      v73 = v75;
      v18 = this[2];
      if ( (float)(right - left) > *((float *)v18 + 1) )
      {
        *(float *)Mem = left;
        v68 = &lpMem;
        *(float *)&Mem[1] = right;
      }
      bottom = a3->bottom;
      if ( (float)(bottom - a3->top) > *((float *)v18 + 1) )
      {
        v17 = (char *)v75;
        v74[0] = LODWORD(a3->top);
        v72 = (char *)v75;
        *(float *)&v74[1] = bottom;
      }
      v20 = ((char *)v68 - (char *)Mem) >> 2;
      if ( v20 < 2 || (v21 = (v17 - (char *)v74) >> 2, v21 < 2) )
      {
        v11 = 1;
        if ( (v17 - (char *)v74) >> 2 )
LABEL_93:
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&lpMem);
        v62 = lpMem;
LABEL_95:
        lpMem = 0LL;
        if ( v62 == v74 )
          v62 = 0LL;
        operator delete(v62);
        v59 = v67;
        if ( ((char *)v68 - (char *)v67) >> 2 )
        {
LABEL_84:
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&v67);
          v59 = v67;
        }
LABEL_85:
        v67 = 0LL;
        if ( v59 == Mem )
          v59 = 0LL;
        operator delete(v59);
LABEL_104:
        *((_BYTE *)this + 76) &= ~1u;
        return (unsigned int)v11;
      }
      if ( v21 > 0x19 || v20 > 0x19 )
      {
        v11 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024809, 0xCEu, 0LL);
        v62 = lpMem;
        if ( (v72 - (_BYTE *)lpMem) >> 2 )
          goto LABEL_93;
        goto LABEL_95;
      }
      v22 = *((unsigned int *)this + 2);
      if ( v20 * v21 <= v22 )
        break;
      *((_BYTE *)this + 76) |= 4u;
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&lpMem);
      v53 = lpMem;
      v54 = lpMem == v74;
      lpMem = 0LL;
      if ( v54 )
        v53 = 0LL;
      operator delete(v53);
      v55 = v67;
      if ( ((char *)v68 - (char *)v67) >> 2 )
      {
        detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&v67);
        v55 = v67;
      }
      v67 = 0LL;
      if ( v55 == Mem )
        v55 = 0LL;
      operator delete(v55);
    }
    v23 = *((_DWORD *)this + 3);
    v24 = v23 + v20 * v21;
    if ( v24 > (int)v22 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024882, 0xE1u, 0LL);
      v62 = lpMem;
      if ( (v72 - (_BYTE *)lpMem) >> 2 )
        goto LABEL_93;
      goto LABEL_95;
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
          v16 = (char *)v67;
          v20 = ((char *)v68 - (char *)v67) >> 2;
        }
        while ( v27 < v20 );
        v17 = v72;
      }
      v26 = ++v25;
    }
    while ( v25 < (unsigned __int64)((v17 - (_BYTE *)lpMem) >> 2) );
    v34 = (v17 - (_BYTE *)lpMem) >> 2;
    v35 = ((char *)v68 - v16) >> 2;
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
        v64 = this + 4;
        v65 = 0LL;
        v66 = 1;
        v11 = Mesh::MeshGraph::Create(v47[8], v47[14], v47[22], 3 * (v47[25] + 2 * (v47[23] - v47[26])), &v65);
        if ( v66 )
        {
          v48 = *v64;
          *v64 = v65;
          if ( v48 )
            Mesh::MeshGraph::`scalar deleting destructor'(v48);
        }
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v48, 0LL, 0, v11, 0x46Fu, 0LL);
LABEL_63:
          v16 = (char *)v67;
          v17 = v72;
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
        if ( !*(_QWORD *)(v37 + 112) )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        Triangles = Mesh::GenerateTriangles(
                      (Mesh *)this,
                      *(unsigned __int16 **)(v37 + 120),
                      *(_DWORD *)(v37 + 112),
                      (int *)(v37 + 128));
        v11 = Triangles;
        if ( Triangles >= 0 )
        {
          v52 = this[2];
          *((_QWORD *)v52 + 8) = 0LL;
          *((_DWORD *)v52 + 8) = 0;
          *((_DWORD *)v52 + 14) = 0;
          *((_QWORD *)v52 + 11) = 0LL;
          *((_QWORD *)v52 + 12) = 0LL;
          *((_DWORD *)v52 + 26) = 0;
          *((_DWORD *)v52 + 32) = 0;
          v16 = (char *)v67;
          v17 = v72;
LABEL_30:
          this[3] = (const struct Mesh::MeshGraph *)v37;
          v11 = 0;
          goto LABEL_31;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, Triangles, 0x477u, 0LL);
      }
    }
    if ( !v37 )
      goto LABEL_63;
    *(_QWORD *)(v37 + 64) = 0LL;
    *(_DWORD *)(v37 + 32) = 0;
    *(_DWORD *)(v37 + 56) = 0;
    *(_QWORD *)(v37 + 88) = 0LL;
    *(_QWORD *)(v37 + 96) = 0LL;
    *(_DWORD *)(v37 + 104) = 0;
    *(_DWORD *)(v37 + 128) = 0;
    v16 = (char *)v67;
    v17 = v72;
LABEL_31:
    if ( (*((_BYTE *)this + 76) & 4) == 0 )
      break;
    if ( (v17 - (_BYTE *)lpMem) >> 2 )
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&lpMem);
    v56 = lpMem;
    v54 = lpMem == v74;
    lpMem = 0LL;
    if ( v54 )
      v56 = 0LL;
    operator delete(v56);
    v57 = v67;
    if ( ((char *)v68 - (char *)v67) >> 2 )
    {
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&v67);
      v57 = v67;
    }
    v67 = 0LL;
    if ( v57 == Mem )
      v57 = 0LL;
    operator delete(v57);
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v11, 0x128u, 0LL);
    v58 = lpMem;
    if ( (v72 - (_BYTE *)lpMem) >> 2 )
    {
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&lpMem);
      v58 = lpMem;
    }
    lpMem = 0LL;
    if ( v58 == v74 )
      v58 = 0LL;
    operator delete(v58);
    v59 = v67;
    if ( ((char *)v68 - (char *)v67) >> 2 )
      goto LABEL_84;
    goto LABEL_85;
  }
  v11 = 0;
  v39 = (v17 - (_BYTE *)lpMem) >> 2;
  if ( v39 )
    v72 = &v17[-4 * v39];
  v40 = lpMem;
  lpMem = 0LL;
  if ( v40 != v74 && v40 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v40);
    v16 = (char *)v67;
  }
  v41 = ((char *)v68 - v16) >> 2;
  if ( v41 )
    v68 = (LPVOID *)((char *)v68 - 4 * v41);
  v67 = 0LL;
  if ( v16 != (char *)Mem && v16 )
  {
    v61 = GetProcessHeap();
    HeapFree(v61, 0, v16);
  }
  return (unsigned int)v11;
}
