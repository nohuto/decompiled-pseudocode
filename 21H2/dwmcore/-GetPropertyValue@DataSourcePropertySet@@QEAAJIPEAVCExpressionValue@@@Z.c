/*
 * XREFs of ?GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z @ 0x1801BC50C
 * Callers:
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x1801BC95C (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@AEBI@Z @ 0x1801BC270 (--$find@X@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$a.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801BCAB8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataSourcePropertySet::GetPropertyValue(
        DataSourcePropertySet *this,
        int a2,
        struct CExpressionValue *a3)
{
  __int64 v6; // rdx
  _QWORD *v7; // r8
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r10
  _OWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r10
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r10
  _OWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r10
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r10
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r10
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r10
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r10
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r10
  int v67; // r11d
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v69; // [rsp+30h] [rbp+8h] BYREF
  int v70; // [rsp+38h] [rbp+10h] BYREF

  v70 = a2;
  std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::find<void>(
    this,
    &v69,
    (const unsigned __int8 *)&v70);
  if ( v69 == *((_QWORD *)this + 1) )
    return 2147483659LL;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                           (char *)this + 64,
                           *(unsigned int *)(v69 + 20)) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  v8 = *(_DWORD *)(*v7 + 8 * v6);
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v9 = v8 - 17;
  if ( !v9 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v63, v62) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_BYTE *)a3 = *(_BYTE *)((*(_DWORD *)(v66 + 8 * v64 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v65 + 32));
    *((_DWORD *)a3 + 18) = v67;
    goto LABEL_44;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v58, v57) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_DWORD *)a3 = *(_DWORD *)((*(_DWORD *)(v61 + 8 * v59 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v60 + 32));
    *((_DWORD *)a3 + 18) = 18;
    goto LABEL_44;
  }
  v11 = v10 - 17;
  if ( !v11 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v52, v51) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v56 = (_QWORD *)(*(_QWORD *)(v54 + 32) + (*(_DWORD *)(v55 + 8 * v53 + 4) & 0x1FFFFFFF));
    *((_DWORD *)a3 + 18) = 35;
    *(_QWORD *)a3 = *v56;
    goto LABEL_44;
  }
  v12 = v11 - 17;
  if ( !v12 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v46, v45) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v50 = *(_QWORD *)(v48 + 32) + (*(_DWORD *)(v49 + 8 * v47 + 4) & 0x1FFFFFFF);
    *((_DWORD *)a3 + 18) = 52;
    *(_QWORD *)a3 = *(_QWORD *)v50;
    *((_DWORD *)a3 + 2) = *(_DWORD *)(v50 + 8);
    goto LABEL_44;
  }
  v13 = v12 - 17;
  if ( !v13 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v41, v40) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v34 = (_OWORD *)(*(_QWORD *)(v43 + 32) + (*(_DWORD *)(v44 + 8 * v42 + 4) & 0x1FFFFFFF));
    *((_DWORD *)a3 + 18) = 69;
    goto LABEL_25;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v36, v35) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v34 = (_OWORD *)(*(_QWORD *)(v38 + 32) + (*(_DWORD *)(v39 + 8 * v37 + 4) & 0x1FFFFFFF));
    *((_DWORD *)a3 + 18) = 70;
    goto LABEL_25;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v30, v29) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v34 = (_OWORD *)(*(_QWORD *)(v32 + 32) + (*(_DWORD *)(v33 + 8 * v31 + 4) & 0x1FFFFFFF));
    *((_DWORD *)a3 + 18) = 71;
LABEL_25:
    *(_OWORD *)a3 = *v34;
    goto LABEL_44;
  }
  v16 = v15 - 33;
  if ( v16 )
  {
    if ( v16 != 161 )
      return 2147500037LL;
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v18, v17) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v22 = (_OWORD *)(*(_QWORD *)(v20 + 32) + (*(_DWORD *)(v21 + 8 * v19 + 4) & 0x1FFFFFFF));
    *((_DWORD *)a3 + 18) = 265;
    *(_OWORD *)a3 = *v22;
    *((_OWORD *)a3 + 1) = v22[1];
    *((_OWORD *)a3 + 2) = v22[2];
    *((_OWORD *)a3 + 3) = v22[3];
  }
  else
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v24, v23) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v28 = *(_QWORD *)(v26 + 32) + (*(_DWORD *)(v27 + 8 * v25 + 4) & 0x1FFFFFFF);
    *((_DWORD *)a3 + 18) = 104;
    *(_OWORD *)a3 = *(_OWORD *)v28;
    *((_QWORD *)a3 + 2) = *(_QWORD *)(v28 + 16);
  }
LABEL_44:
  *((_BYTE *)a3 + 76) = 1;
  return 0LL;
}
