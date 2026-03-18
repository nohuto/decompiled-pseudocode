/*
 * XREFs of ??$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector2@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801BB7EC
 * Callers:
 *     ?SetVector2Value@DataSourceProxy@@MEAAJIMM@Z @ 0x1801BD190 (-SetVector2Value@DataSourceProxy@@MEAAJIMM@Z.c)
 * Callees:
 *     ??$AddProperty@UD2DVector2@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@PEAI@Z @ 0x1800193DC (--$AddProperty@UD2DVector2@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x1801BC104 (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@AEBI@Z @ 0x1801BC270 (--$find@X@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$a.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801BCAB8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataSourcePropertySet::SetProperty<D2DVector2>(__int64 a1, int a2, __int64 *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // xmm1_4
  _BYTE v20[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF
  int v23; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+58h] [rbp+20h] BYREF

  v23 = a2;
  v24 = 0;
  std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::find<void>(
    a1,
    &v22,
    &v23);
  v5 = a1 + 64;
  if ( v22 == *(_QWORD *)(a1 + 8) )
  {
    v6 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector2>(v5, 35, a3, &v24);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
    std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace<unsigned int &,unsigned int &>(
      a1,
      v20,
      &v23,
      &v24);
  }
  else
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             v5,
                             *(unsigned int *)(v22 + 20)) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( *(_DWORD *)(*v11 + 8 * v9) != 35 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v22 = *a3;
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v10, v9) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v13, v12) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v17 = *(_QWORD *)(v16 + 32);
    v18 = *(_DWORD *)(v15 + 8 * v14 + 4) & 0x1FFFFFFF;
    v19 = HIDWORD(v22);
    *(_DWORD *)(v18 + v17) = v22;
    *(_DWORD *)(v18 + v17 + 4) = v19;
  }
  return 0LL;
}
