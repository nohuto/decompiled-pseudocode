/*
 * XREFs of ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x1801E254C
 * Callers:
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801E29F0 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 *     ?GetTextureMemoryLayoutData@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801E6370 (-GetTextureMemoryLayoutData@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CConte.c)
 *     ?GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801EDC00 (-GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CConten.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800E6190 (-_Xlength@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@.c)
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x1801B7A68 (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 *     ?_Change_array@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXQEAULayoutData@CContent@@_K1@Z @ 0x1801B7ABC (-_Change_array@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  SIZE_T v10; // rcx
  unsigned __int64 v11; // r10
  __int64 v12; // rbp
  char *v13; // rdi
  char *v14; // rcx
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  size_t v17; // r8

  v6 = (a2 - (_BYTE *)*a1) / 40;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 40;
  if ( v7 == 0x666666666666666LL )
    std::vector<std::unique_ptr<CCheckMPOCache>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v7 + 1);
  v10 = 40 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = 5 * v6;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v14 = v13;
  *(_OWORD *)&v13[8 * v12] = *(_OWORD *)a3;
  *(_OWORD *)&v13[8 * v12 + 16] = *(_OWORD *)(a3 + 16);
  *(_QWORD *)&v13[8 * v12 + 32] = *(_QWORD *)(a3 + 32);
  v15 = a1[1];
  v16 = *a1;
  if ( a2 == v15 )
  {
    v17 = v15 - v16;
  }
  else
  {
    memmove_0(v13, v16, a2 - (_BYTE *)*a1);
    v17 = (_BYTE *)a1[1] - a2;
    v14 = &v13[8 * v12 + 40];
    v16 = a2;
  }
  memmove_0(v14, v16, v17);
  std::vector<CContent::LayoutData>::_Change_array((__int64)a1, (__int64)v13, v8, v9);
  return (__int64)*a1 + 40 * v6;
}
