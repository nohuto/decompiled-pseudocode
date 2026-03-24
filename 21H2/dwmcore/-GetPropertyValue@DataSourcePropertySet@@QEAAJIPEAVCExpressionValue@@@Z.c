/*
 * XREFs of ?GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z @ 0x18018043C
 * Callers:
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x1801808E4 (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800C3A14 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180180A3C (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@_K@Z @ 0x1801812AC (-_End@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-$.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataSourcePropertySet::GetPropertyValue(
        DataSourcePropertySet *this,
        int a2,
        struct CExpressionValue *a3)
{
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r8
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r10
  __int64 v25; // r11
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r10
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r10
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r10
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r10
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r10
  _QWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r10
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r10
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v68; // [rsp+30h] [rbp+8h] BYREF
  int v69; // [rsp+38h] [rbp+10h] BYREF

  v69 = a2;
  v5 = *((_QWORD *)this + 6) & std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v69, 4uLL);
  while ( 1 )
  {
    v6 = (_QWORD *)std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
                     this,
                     &v68,
                     v5);
    if ( v7 == *v6 )
      break;
    if ( *(_DWORD *)(v7 + 16) == a2 )
    {
      v8 = *((_QWORD *)this + 1);
      goto LABEL_6;
    }
  }
  v7 = *((_QWORD *)this + 1);
  v8 = v7;
LABEL_6:
  if ( v7 == v8 )
    return 2147483659LL;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)this + 64) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  v12 = *(_DWORD *)(*v11 + 8 * v10);
  if ( !v12 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v13 = v12 - 17;
  if ( !v13 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v63) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_BYTE *)v25 = *(_BYTE *)((*(_DWORD *)(v66 + 8 * v64 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v65 + 32));
    *(_DWORD *)(v25 + 72) = 17;
    goto LABEL_49;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v59) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_DWORD *)v25 = *(_DWORD *)((*(_DWORD *)(v62 + 8 * v60 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v61 + 32));
    *(_DWORD *)(v25 + 72) = 18;
    goto LABEL_49;
  }
  v15 = v14 - 17;
  if ( !v15 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v54) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v58 = (_QWORD *)(*(_QWORD *)(v56 + 32) + (*(_DWORD *)(v57 + 8 * v55 + 4) & 0x1FFFFFFF));
    *(_DWORD *)(v25 + 72) = 35;
    *(_QWORD *)v25 = *v58;
    goto LABEL_49;
  }
  v16 = v15 - 17;
  if ( !v16 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v48) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v52 = *(_QWORD *)(v50 + 32);
    v53 = *(_DWORD *)(v51 + 8 * v49 + 4) & 0x1FFFFFFF;
    *(_DWORD *)(v25 + 72) = 52;
    *(_QWORD *)v25 = *(_QWORD *)(v53 + v52);
    *(_DWORD *)(v25 + 8) = *(_DWORD *)(v53 + v52 + 8);
    goto LABEL_49;
  }
  v17 = v16 - 17;
  if ( !v17 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v44) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v38 = *(_DWORD *)(v47 + 8 * v45 + 4);
    v39 = *(_QWORD *)(v46 + 32);
    *(_DWORD *)(v25 + 72) = 69;
    goto LABEL_30;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v40) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v38 = *(_DWORD *)(v43 + 8 * v41 + 4);
    v39 = *(_QWORD *)(v42 + 32);
    *(_DWORD *)(v25 + 72) = 70;
    goto LABEL_30;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v34) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v38 = *(_DWORD *)(v37 + 8 * v35 + 4);
    v39 = *(_QWORD *)(v36 + 32);
    *(_DWORD *)(v25 + 72) = 71;
LABEL_30:
    *(_OWORD *)v25 = *(_OWORD *)((v38 & 0x1FFFFFFF) + v39);
    goto LABEL_49;
  }
  v20 = v19 - 33;
  if ( v20 )
  {
    if ( v20 != 161 )
      return 2147500037LL;
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v21) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v26 = *(_DWORD *)(v24 + 8 * v22 + 4);
    v27 = *(_QWORD *)(v23 + 32);
    v26 &= 0x1FFFFFFFu;
    *(_DWORD *)(v25 + 72) = 265;
    *(_OWORD *)v25 = *(_OWORD *)(v26 + v27);
    *(_OWORD *)(v25 + 16) = *(_OWORD *)(v26 + v27 + 16);
    *(_OWORD *)(v25 + 32) = *(_OWORD *)(v26 + v27 + 32);
    *(_OWORD *)(v25 + 48) = *(_OWORD *)(v26 + v27 + 48);
  }
  else
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v28) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v32 = *(_QWORD *)(v30 + 32);
    v33 = *(_DWORD *)(v31 + 8 * v29 + 4) & 0x1FFFFFFF;
    *(_DWORD *)(v25 + 72) = 104;
    *(_OWORD *)v25 = *(_OWORD *)(v33 + v32);
    *(_QWORD *)(v25 + 16) = *(_QWORD *)(v33 + v32 + 16);
  }
LABEL_49:
  *(_BYTE *)(v25 + 76) = 1;
  return 0LL;
}
