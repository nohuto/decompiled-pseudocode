/*
 * XREFs of ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x18025D340
 * Callers:
 *     ?SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180247918 (-SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVis.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x18025A904 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UDepthGraphNode@@@std@@@std@@YAXPEAUDepthGraphNode@@QEAU1@AEAV?$allocator@UDepthGraphNode@@@0@@Z @ 0x18025CDC4 (--$_Destroy_range@V-$allocator@UDepthGraphNode@@@std@@@std@@YAXPEAUDepthGraphNode@@QEAU1@AEAV-$a.c)
 *     ??$_Emplace_reallocate@AEBQEAUDepthGraphNode@@@?$vector@PEAUDepthGraphNode@@V?$allocator@PEAUDepthGraphNode@@@std@@@std@@QEAAPEAPEAUDepthGraphNode@@QEAPEAU2@AEBQEAU2@@Z @ 0x18025CE20 (--$_Emplace_reallocate@AEBQEAUDepthGraphNode@@@-$vector@PEAUDepthGraphNode@@V-$allocator@PEAUDep.c)
 *     ??$_Emplace_reallocate@PEAUDepthGraphNode@@@?$vector@PEAUDepthGraphNode@@V?$allocator@PEAUDepthGraphNode@@@std@@@std@@QEAAPEAPEAUDepthGraphNode@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x18025D008 (--$_Emplace_reallocate@PEAUDepthGraphNode@@@-$vector@PEAUDepthGraphNode@@V-$allocator@PEAUDepthG.c)
 *     ??$_Emplace_reallocate@PEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18025D104 (--$_Emplace_reallocate@PEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@.c)
 *     ?_Buy_nonzero@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAX_K@Z @ 0x18025D6E0 (-_Buy_nonzero@-$vector@UDepthGraphNode@@V-$allocator@UDepthGraphNode@@@std@@@std@@AEAAX_K@Z.c)
 *     ?_Tidy@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAXXZ @ 0x18025D7B0 (-_Tidy@-$vector@UDepthGraphNode@@V-$allocator@UDepthGraphNode@@@std@@@std@@AEAAXXZ.c)
 */

bool __fastcall CDepthSortingLayer::SortVisuals(unsigned int **a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // r15
  _QWORD *v5; // r12
  __int64 v6; // r14
  _BYTE *v7; // rdx
  _QWORD *v8; // r8
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rdi
  _BYTE *v14; // rbx
  _BYTE *v15; // rsi
  __int64 v16; // rdi
  unsigned int v17; // r15d
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  _QWORD *v24; // rsi
  __int64 v25; // r12
  int RelativeOrder; // eax
  _QWORD *v27; // rcx
  unsigned int v28; // r12d
  __int64 v29; // r13
  _BYTE *v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // [rsp+28h] [rbp-49h] BYREF
  _BYTE *v38; // [rsp+30h] [rbp-41h]
  _BYTE *v39; // [rsp+38h] [rbp-39h]
  unsigned int v40; // [rsp+40h] [rbp-31h]
  __int64 v41; // [rsp+48h] [rbp-29h]
  _BYTE *v42; // [rsp+50h] [rbp-21h]
  __int64 v43; // [rsp+58h] [rbp-19h]
  __int128 v44; // [rsp+60h] [rbp-11h] BYREF
  __int64 v45; // [rsp+70h] [rbp-1h]
  __int64 v46; // [rsp+78h] [rbp+7h]
  _QWORD *v47; // [rsp+D8h] [rbp+67h] BYREF
  _QWORD *v48; // [rsp+E0h] [rbp+6Fh]
  _QWORD *v49; // [rsp+E8h] [rbp+77h]
  __int64 v50; // [rsp+F0h] [rbp+7Fh] BYREF

  v49 = (_QWORD *)a3;
  v48 = (_QWORD *)a2;
  v47 = a1;
  v3 = (_QWORD *)a3;
  v4 = (_QWORD *)a2;
  v5 = a1;
  v6 = a1[1] - *a1;
  if ( (_DWORD)v6 == 1 )
  {
    v7 = *(_BYTE **)(a2 + 8);
    v8 = *(_QWORD **)(176LL * **a1 + *(_QWORD *)a3);
    v47 = v8;
    if ( v7 == (_BYTE *)v4[2] )
    {
      std::vector<CVisual *>::_Emplace_reallocate<CVisual *>(v4, v7, &v47);
    }
    else
    {
      *(_QWORD *)v7 = v8;
      v4[1] += 8LL;
    }
    return 1;
  }
  v45 = 0LL;
  v10 = (unsigned int)v6;
  v44 = 0LL;
  if ( (_DWORD)v6 )
  {
    std::vector<DepthGraphNode>::_Buy_nonzero(&v44, (unsigned int)v6, a3, a3);
    v11 = v44;
    v12 = v44 + 40;
    v13 = (_QWORD *)(v44 + 56LL * (unsigned int)v6);
    do
    {
      *(_QWORD *)(v12 - 16) = 0LL;
      *(_QWORD *)(v12 - 8) = 0LL;
      *(_QWORD *)v12 = 0LL;
      *(_BYTE *)(v12 - 24) = 1;
      *(_DWORD *)(v12 + 8) = 0;
      v12 += 56LL;
      --v10;
    }
    while ( v10 );
    std::_Destroy_range<std::allocator<DepthGraphNode>>(v13, v13);
    v3 = v49;
    *((_QWORD *)&v44 + 1) = v13;
  }
  else
  {
    v11 = v44;
  }
  v14 = 0LL;
  v15 = 0LL;
  LODWORD(v50) = 0;
  v16 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v42 = 0LL;
  v39 = 0LL;
  if ( !(_DWORD)v6 )
    goto LABEL_32;
  v17 = v50;
  v18 = v11 + 32;
  v19 = 0LL;
  v43 = 0LL;
  do
  {
    v20 = *(unsigned int *)(v19 + *v5);
    v21 = v17 + 1;
    v40 = v17 + 1;
    a3 = *v3 + 176 * v20;
    *(_DWORD *)(v18 - 32) = v17;
    v46 = a3;
    *(_QWORD *)(v18 - 24) = a3;
    LODWORD(v50) = v21;
    if ( (unsigned int)v21 >= (unsigned int)v6 )
      goto LABEL_26;
    v22 = v50;
    v23 = 4 * v21;
    v24 = v47;
    v41 = 4 * v21;
    v25 = 56 * v21 + v11 + 32;
    do
    {
      RelativeOrder = CVisualDepthGeometry::GetRelativeOrder(a3, *v3 + 176LL * *(unsigned int *)(v23 + *v24));
      if ( RelativeOrder )
      {
        if ( RelativeOrder != 1 )
          goto LABEL_24;
        *(_BYTE *)(v25 - 16) = 0;
        ++*(_DWORD *)(v25 + 16);
        a2 = *(_QWORD *)v18;
        v50 = v11 + 56LL * v22;
        if ( a2 != *(_QWORD *)(v18 + 8) )
        {
          *(_QWORD *)a2 = v11 + 56LL * v22;
          *(_QWORD *)v18 += 8LL;
          goto LABEL_24;
        }
        v27 = (_QWORD *)(v18 - 8);
      }
      else
      {
        *(_BYTE *)(v18 - 16) = 0;
        ++*(_DWORD *)(v18 + 16);
        a2 = *(_QWORD *)v25;
        v50 = v11 + 56LL * v17;
        if ( a2 != *(_QWORD *)(v25 + 8) )
        {
          *(_QWORD *)a2 = v11 + 56LL * v17;
          *(_QWORD *)v25 += 8LL;
          goto LABEL_24;
        }
        v27 = (_QWORD *)(v25 - 8);
      }
      std::vector<DepthGraphNode *>::_Emplace_reallocate<DepthGraphNode *>(v27, (_BYTE *)a2, &v50);
LABEL_24:
      ++v22;
      a3 = v46;
      v23 = v41 + 4;
      v3 = v49;
      v25 += 56LL;
      v41 += 4LL;
    }
    while ( v22 < (unsigned int)v6 );
    v14 = v38;
    v15 = v42;
    v5 = v47;
LABEL_26:
    if ( *(_BYTE *)(v18 - 16) )
    {
      v50 = v11 + 56LL * v17;
      if ( v14 == v15 )
      {
        std::vector<DepthGraphNode *>::_Emplace_reallocate<DepthGraphNode *>(&v37, v14, &v50);
        v15 = v39;
        v14 = v38;
        v42 = v39;
      }
      else
      {
        *(_QWORD *)v14 = v11 + 56LL * v17;
        v14 += 8;
        v38 = v14;
      }
    }
    v18 += 56LL;
    v17 = v40;
    v19 = v43 + 4;
    v3 = v49;
    v43 += 4LL;
  }
  while ( v40 < (unsigned int)v6 );
  v16 = v37;
  v4 = v48;
LABEL_32:
  v28 = 0;
  while ( (_BYTE *)v16 != v14 )
  {
    v29 = *(_QWORD *)v16;
    v30 = (_BYTE *)v4[1];
    v31 = **(_QWORD ***)(*(_QWORD *)v16 + 8LL);
    v47 = v31;
    if ( v30 == (_BYTE *)v4[2] )
    {
      std::vector<CVisual *>::_Emplace_reallocate<CVisual *>(v4, v30, &v47);
    }
    else
    {
      *(_QWORD *)v30 = v31;
      v4[1] += 8LL;
    }
    memmove_0((void *)v16, (const void *)(v16 + 8), (size_t)&v14[-v16 - 8]);
    v32 = *(_QWORD *)(v29 + 24);
    v14 -= 8;
    a3 = 0LL;
    v33 = *(_QWORD *)(v29 + 32) - v32;
    v38 = v14;
    ++v28;
    LODWORD(v47) = 0;
    if ( v33 >> 3 )
    {
      a2 = 0LL;
      do
      {
        v34 = *(_QWORD *)(v32 + 8 * a2);
        v50 = v34;
        if ( (*(_DWORD *)(v34 + 48))-- == 1 )
        {
          if ( v14 == v15 )
          {
            std::vector<DepthGraphNode *>::_Emplace_reallocate<DepthGraphNode * const &>(&v37, v14, &v50);
            LODWORD(a3) = (_DWORD)v47;
            v15 = v39;
            v14 = v38;
          }
          else
          {
            *(_QWORD *)v14 = v34;
            v14 += 8;
            v38 = v14;
          }
        }
        v32 = *(_QWORD *)(v29 + 24);
        a3 = (unsigned int)(a3 + 1);
        a2 = (unsigned int)a3;
        v36 = (*(_QWORD *)(v29 + 32) - v32) >> 3;
        LODWORD(v47) = a3;
      }
      while ( (unsigned int)a3 < v36 );
      v16 = v37;
    }
  }
  if ( v16 )
    std::_Deallocate<16,0>((void *)v16, (unsigned __int64)&v15[-v16] & 0xFFFFFFFFFFFFFFF8uLL);
  std::vector<DepthGraphNode>::_Tidy(&v44, a2, a3, v3);
  return v28 >= (unsigned int)v6;
}
