/*
 * XREFs of ??$_Emplace_reallocate@VCVisualDepthGeometry@@@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@QEAAPEAVCVisualDepthGeometry@@QEAV2@$$QEAV2@@Z @ 0x1801FABFC
 * Callers:
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x1801FAF50 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVCVisualDepthGeometry@@PEAV1@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@YAPEAVCVisualDepthGeometry@@QEAV1@0PEAV1@AEAV?$allocator@VCVisualDepthGeometry@@@0@@Z @ 0x1801FAE5C (--$_Uninitialized_move@PEAVCVisualDepthGeometry@@PEAV1@V-$allocator@VCVisualDepthGeometry@@@std@.c)
 *     ?_Change_array@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXQEAVCVisualDepthGeometry@@_K1@Z @ 0x1801FB3A4 (-_Change_array@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVisualDepthGeometry@@@std@@@std@@A.c)
 */

__int64 __fastcall std::vector<CVisualDepthGeometry>::_Emplace_reallocate<CVisualDepthGeometry>(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r15
  _OWORD *v15; // r8
  _OWORD *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx

  v6 = (a2 - *a1) / 176;
  v7 = (a1[1] - *a1) / 176;
  if ( v7 == 0x1745D1745D1745DLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 176;
  v10 = v9 >> 1;
  if ( v9 <= 0x1745D1745D1745DLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 176 * v11;
  if ( v11 > 0x1745D1745D1745DLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 176 * v6;
  v15 = (_OWORD *)v13;
  v16 = (_OWORD *)(v14 + v13);
  *v16 = *a3;
  v16[1] = a3[1];
  v16[2] = a3[2];
  v16[3] = a3[3];
  v16[4] = a3[4];
  v16[5] = a3[5];
  v16[6] = a3[6];
  v16[7] = a3[7];
  v16[8] = a3[8];
  v16[9] = a3[9];
  v16[10] = a3[10];
  v17 = a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<CVisualDepthGeometry *,CVisualDepthGeometry *,std::allocator<CVisualDepthGeometry>>(
      v18,
      a2,
      v13);
    v17 = a1[1];
    v15 = v16 + 11;
    v18 = a2;
  }
  std::_Uninitialized_move<CVisualDepthGeometry *,CVisualDepthGeometry *,std::allocator<CVisualDepthGeometry>>(
    v18,
    v17,
    v15);
  std::vector<CVisualDepthGeometry>::_Change_array(a1, v13, v8, v11);
  return v14 + *a1;
}
