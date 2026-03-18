/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@AEBQEAV2@@Z @ 0x18002CE68
 * Callers:
 *     ?AddProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180005EF8 (-AddProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18007C718 (-AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXQEAPEAVCBaseExpression@@_K1@Z @ 0x18001C798 (-_Change_array@-$vector@PEAVCBaseExpression@@V-$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAX.c)
 *     ?_Calculate_growth@?$vector@PEAVCSceneNode@@V?$allocator@PEAVCSceneNode@@@std@@@std@@AEBA_K_K@Z @ 0x18002CF40 (-_Calculate_growth@-$vector@PEAVCSceneNode@@V-$allocator@PEAVCSceneNode@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 */

__int64 __fastcall std::vector<CVisual *>::_Emplace_reallocate<CVisual * const &>(
        __int64 *a1,
        const void *a2,
        _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  SIZE_T v10; // rcx
  unsigned __int64 v11; // r9
  char *v12; // rsi
  char *v13; // rcx
  __int64 v14; // r8
  const void *v15; // rdx
  size_t v16; // r8

  v4 = ((__int64)a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v6 + 1;
  v9 = std::vector<CSceneNode *>::_Calculate_growth(a1, v6 + 1);
  v10 = 8 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  *(_QWORD *)&v12[8 * v4] = *a3;
  v13 = v12;
  v14 = a1[1];
  v15 = (const void *)*a1;
  if ( a2 == (const void *)v14 )
  {
    v16 = v14 - (_QWORD)v15;
  }
  else
  {
    memmove_0(v12, v15, (size_t)a2 - *a1);
    v16 = a1[1] - (_QWORD)a2;
    v13 = &v12[8 * v4 + 8];
    v15 = a2;
  }
  memmove_0(v13, v15, v16);
  std::vector<CBaseExpression *>::_Change_array(a1, (__int64)v12, v8, v9);
  return *a1 + 8 * v4;
}
