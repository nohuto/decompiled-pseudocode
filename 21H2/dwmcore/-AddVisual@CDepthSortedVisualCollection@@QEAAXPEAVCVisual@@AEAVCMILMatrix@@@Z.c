/*
 * XREFs of ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x1802475EC
 * Callers:
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x1801B67FC (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@VCVisualDepthGeometry@@@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@QEAAPEAVCVisualDepthGeometry@@QEAV2@$$QEAV2@@Z @ 0x1802472BC (--$_Emplace_reallocate@VCVisualDepthGeometry@@@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVi.c)
 *     ??$emplace_back@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAAEAVCDepthSortingLayer@@$$QEAV2@@Z @ 0x180247580 (--$emplace_back@VCDepthSortingLayer@@@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingL.c)
 *     ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x18025A2EC (--0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z.c)
 *     ?AddVisual@CDepthSortingLayer@@QEAAXAEBVCVisualDepthGeometry@@@Z @ 0x18025D200 (-AddVisual@CDepthSortingLayer@@QEAAXAEBVCVisualDepthGeometry@@@Z.c)
 *     ?IsOverlappingInZ@CDepthSortingLayer@@QEBA_NAEBVCVisualDepthGeometry@@@Z @ 0x18025D264 (-IsOverlappingInZ@CDepthSortingLayer@@QEBA_NAEBVCVisualDepthGeometry@@@Z.c)
 *     ?MergeWith@CDepthSortingLayer@@QEAAXAEAV1@@Z @ 0x18025D288 (-MergeWith@CDepthSortingLayer@@QEAAXAEAV1@@Z.c)
 */

void __fastcall CDepthSortedVisualCollection::AddVisual(
        CDepthSortedVisualCollection *this,
        struct CVisual *a2,
        struct CMILMatrix *a3)
{
  CVisualDepthGeometry *v4; // rax
  _OWORD *v5; // rdx
  _OWORD *v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  float *v9; // rdi
  __int64 v10; // r8
  float v11; // xmm1_4
  int v12; // r15d
  int v13; // r12d
  float v14; // xmm1_4
  __int64 v15; // r14
  const struct CVisualDepthGeometry *v16; // rdx
  CDepthSortingLayer *v17; // rcx
  float v18; // xmm1_4
  struct CDepthSortingLayer *v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  int v22; // edx
  __int128 v23; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+30h] [rbp-D0h]
  int v25; // [rsp+38h] [rbp-C8h]
  float v26; // [rsp+3Ch] [rbp-C4h]
  int v27; // [rsp+40h] [rbp-C0h]
  char v28[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = CVisualDepthGeometry::CVisualDepthGeometry((CVisualDepthGeometry *)v28, a2, a3);
  v5 = (_OWORD *)*((_QWORD *)this + 5);
  if ( v5 == *((_OWORD **)this + 6) )
  {
    std::vector<CVisualDepthGeometry>::_Emplace_reallocate<CVisualDepthGeometry>((__int64 *)this + 4, (__int64)v5, v4);
  }
  else
  {
    *v5 = *(_OWORD *)v4;
    v5[1] = *((_OWORD *)v4 + 1);
    v5[2] = *((_OWORD *)v4 + 2);
    v5[3] = *((_OWORD *)v4 + 3);
    v5[4] = *((_OWORD *)v4 + 4);
    v5[5] = *((_OWORD *)v4 + 5);
    v5[6] = *((_OWORD *)v4 + 6);
    v6 = v5 + 8;
    *(v6 - 1) = *((_OWORD *)v4 + 7);
    *v6 = *((_OWORD *)v4 + 8);
    v6[1] = *((_OWORD *)v4 + 9);
    v6[2] = *((_OWORD *)v4 + 10);
    *((_QWORD *)this + 5) += 176LL;
  }
  v7 = *((_QWORD *)this + 5);
  v8 = v7 - *((_QWORD *)this + 4);
  v9 = (float *)(v7 - 176);
  *((_DWORD *)v9 + 8) = -1171354717 * (v8 >> 4) - 1;
  v10 = *(_QWORD *)this;
  if ( *(_QWORD *)this == *((_QWORD *)this + 1) )
  {
    v11 = v9[7];
    v24 = 0LL;
    v23 = 0LL;
    v27 = -1;
    v25 = *((_DWORD *)v9 + 4);
    v26 = v11;
    std::vector<CDepthSortingLayer>::emplace_back<CDepthSortingLayer>((__int64 *)this, (__int64)&v23);
    if ( (_QWORD)v23 )
      std::_Deallocate<16,0>((void *)v23, (v24 - v23) & 0xFFFFFFFFFFFFFFFCuLL);
    CDepthSortingLayer::AddVisual(
      (CDepthSortingLayer *)(*((_QWORD *)this + 1) - 40LL),
      (const struct CVisualDepthGeometry *)v9);
    *((_DWORD *)this + 6) = 0;
  }
  else
  {
    v12 = *((_DWORD *)this + 6);
    v13 = -1;
    if ( v12 == -1 )
    {
LABEL_13:
      v18 = v9[7];
      v24 = 0LL;
      v23 = 0LL;
      v27 = -1;
      v25 = *((_DWORD *)v9 + 4);
      v26 = v18;
      std::vector<CDepthSortingLayer>::emplace_back<CDepthSortingLayer>((__int64 *)this, (__int64)&v23);
      if ( (_QWORD)v23 )
        std::_Deallocate<16,0>((void *)v23, (v24 - v23) & 0xFFFFFFFFFFFFFFFCuLL);
      CDepthSortingLayer::AddVisual(
        (CDepthSortingLayer *)(*((_QWORD *)this + 1) - 40LL),
        (const struct CVisualDepthGeometry *)v9);
      *(_DWORD *)(*(_QWORD *)this + 40LL * v13 + 32) = -858993459
                                                     * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3)
                                                     - 1;
    }
    else
    {
      v14 = v9[7];
      while ( 1 )
      {
        v15 = v10 + 40LL * v12;
        if ( *(float *)(v15 + 24) > v14 )
          break;
        if ( CDepthSortingLayer::IsOverlappingInZ(
               (CDepthSortingLayer *)(v10 + 40LL * v12),
               (const struct CVisualDepthGeometry *)v9) )
        {
          CDepthSortingLayer::AddVisual(v17, v16);
          while ( 1 )
          {
            v20 = *(_DWORD *)(v15 + 32);
            if ( v20 == -1
              || !CDepthSortingLayer::IsOverlappingInZ(
                    (CDepthSortingLayer *)(*(_QWORD *)this + 40LL * v20),
                    (const struct CVisualDepthGeometry *)v9) )
            {
              break;
            }
            CDepthSortingLayer::MergeWith((CDepthSortingLayer *)v15, v19);
          }
          return;
        }
        v13 = v12;
        v12 = *(_DWORD *)(v15 + 32);
        if ( v12 == -1 )
          goto LABEL_13;
      }
      v24 = 0LL;
      v26 = v14;
      v23 = 0LL;
      v27 = -1;
      v25 = *((_DWORD *)v9 + 4);
      std::vector<CDepthSortingLayer>::emplace_back<CDepthSortingLayer>((__int64 *)this, (__int64)&v23);
      if ( (_QWORD)v23 )
        std::_Deallocate<16,0>((void *)v23, (v24 - v23) & 0xFFFFFFFFFFFFFFFCuLL);
      *(_DWORD *)(*((_QWORD *)this + 1) - 8LL) = v12;
      v21 = *(_QWORD *)this;
      v22 = -858993459 * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3) - 1;
      if ( v13 == -1 )
      {
        *((_DWORD *)this + 6) = v22;
      }
      else
      {
        *(_DWORD *)(v21 + 40LL * v13 + 32) = v22;
        v21 = *(_QWORD *)this;
      }
      CDepthSortingLayer::AddVisual((CDepthSortingLayer *)(v21 + 40LL * v12), (const struct CVisualDepthGeometry *)v9);
    }
  }
}
