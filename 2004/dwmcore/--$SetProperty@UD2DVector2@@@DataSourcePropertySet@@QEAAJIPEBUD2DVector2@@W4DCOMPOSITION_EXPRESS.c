/*
 * XREFs of ??$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector2@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180180DA0
 * Callers:
 *     ?SetVector2Value@DataSourceProxy@@MEAAJIMM@Z @ 0x180182250 (-SetVector2Value@DataSourceProxy@@MEAAJIMM@Z.c)
 * Callees:
 *     ??$AddProperty@UD2DVector2@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@PEAI@Z @ 0x18001FD68 (--$AddProperty@UD2DVector2@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BFC74 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x1801815A0 (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@_K@Z @ 0x1801824CC (-_End@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-$.c)
 */

__int64 __fastcall DataSourcePropertySet::SetProperty<D2DVector2>(_QWORD *a1, int a2, __int64 *a3)
{
  __int64 v6; // r11
  _QWORD *v7; // rax
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 *v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ecx
  __int64 v17; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF
  int v21; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+68h] [rbp+20h] BYREF

  v21 = a2;
  v22 = 0;
  v6 = a1[6] & std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)&v21, 4uLL);
  while ( 1 )
  {
    v7 = (_QWORD *)std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
                     a1,
                     &v20,
                     v6);
    if ( v8 == *v7 )
      break;
    if ( *(_DWORD *)(v8 + 16) == a2 )
    {
      v9 = a1[1];
      goto LABEL_6;
    }
  }
  v8 = a1[1];
  v9 = v8;
LABEL_6:
  v10 = a1 + 8;
  if ( v8 == v9 )
  {
    v11 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector2>(
            (__int64)v10,
            35,
            a3,
            &v22);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
        (const char *)(unsigned int)v11);
      return v12;
    }
    std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace<unsigned int &,unsigned int &>(
      a1,
      v18,
      &v21,
      &v22);
  }
  else
  {
    v14 = *(unsigned int *)(v8 + 20);
    v15 = *v10;
    if ( *(_DWORD *)(v15 + 8 * v14) != 35 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v16 = *(_DWORD *)(v15 + 8 * v14 + 4) & 0x1FFFFFFF;
    v17 = a1[12];
    v20 = *a3;
    *(_QWORD *)(v16 + v17) = v20;
  }
  return 0LL;
}
