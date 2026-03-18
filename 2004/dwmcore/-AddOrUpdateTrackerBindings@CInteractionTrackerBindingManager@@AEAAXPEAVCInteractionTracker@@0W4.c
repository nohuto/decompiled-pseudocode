/*
 * XREFs of ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CF7EC
 * Callers:
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x1801D0E30 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUta.c)
 * Callees:
 *     ?erase@?$list@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@Z @ 0x180029F54 (-erase@-$list@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V-$allocator@U-$pair@QEBV.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18009C220 (-LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV-$CWeakReferenc.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BFC74 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800D637C (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016607C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@_K@Z @ 0x1801824CC (-_End@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-$.c)
 *     ?find@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@2@AEBQEAVCInteractionTracker@@@Z @ 0x18018B8EC (-find@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-.c)
 *     ?GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV?$CWeakReference@VCResource@@@@XZ @ 0x1801CB154 (-GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV-$CWeakReference@VCResource@@@@XZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801CED2C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??$emplace@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CF0CC (--$emplace@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@-$_Hash@V-$_Uma.c)
 *     ??$emplace@AEAPEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTracker@@$$QEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@1@@Z @ 0x1801CF124 (--$emplace@AEAPEAVCInteractionTracker@@V-$unordered_map@PEAVCInteractionTracker@@W4InteractionTr.c)
 *     ??0?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@QEAA@XZ @ 0x1801CF4F0 (--0-$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U-$hash@PEAVCI.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801D0B58 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1801D0FAC (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1801D15E8 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801D2310 (-erase@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@V-$unordered_map@PEAVCInteractionTracker.c)
 *     ?erase@?$list@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801D239C (-erase@-$list@U-$pair@QEAVCInteractionTracker@@V-$unordered_map@PEAVCInteractionTracker@@W4Inter.c)
 */

void __fastcall CInteractionTrackerBindingManager::AddOrUpdateTrackerBindings(
        CInteractionTrackerBindingManager *a1,
        _QWORD *a2,
        struct CInteractionTracker *a3,
        int a4)
{
  _QWORD *v4; // r13
  struct CInteractionTracker *v5; // r12
  _DWORD *v6; // r15
  CInteractionTrackerBindingManager *v7; // rdi
  __int64 appended; // rax
  __int64 v9; // rsi
  __int64 v10; // r10
  __int64 *i; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 *j; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // r11d
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r10
  _QWORD **v26; // rsi
  _QWORD *v27; // rcx
  _QWORD *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r10
  _QWORD **v34; // rsi
  _QWORD *v35; // rcx
  _QWORD *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r11
  __int64 v40; // rdi
  __int64 v41; // r10
  unsigned __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rsi
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // r11
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // rdx
  struct CWeakResourceReference **v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rax
  CInteractionTrackerBindingManager *v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rax
  CInteractionTrackerBindingManager *v64; // r14
  int v65; // ecx
  __int64 **v66; // rax
  struct CWeakResourceReference **v67; // r13
  __int64 v68; // rbx
  struct CWeakResourceReference *WeakRefToSelf; // rax
  __int64 v70; // r15
  __int64 v71; // rbx
  struct CWeakResourceReference *v72; // rax
  __int64 v73; // rbx
  unsigned __int64 v74; // [rsp+38h] [rbp-79h] BYREF
  __int64 *v75[2]; // [rsp+40h] [rbp-71h] BYREF
  _QWORD *v76; // [rsp+50h] [rbp-61h] BYREF
  _QWORD v77[2]; // [rsp+58h] [rbp-59h] BYREF
  __int64 *v78; // [rsp+68h] [rbp-49h]
  _QWORD v79[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v80; // [rsp+80h] [rbp-31h] BYREF
  char v81[8]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD **v82; // [rsp+90h] [rbp-21h]
  _BYTE v83[104]; // [rsp+A0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]
  CInteractionTrackerBindingManager *v85; // [rsp+118h] [rbp+67h] BYREF
  _QWORD *v86; // [rsp+120h] [rbp+6Fh] BYREF
  struct CInteractionTracker *v87; // [rsp+128h] [rbp+77h] BYREF
  int v88; // [rsp+130h] [rbp+7Fh] BYREF

  v88 = a4;
  v87 = a3;
  v86 = a2;
  v85 = a1;
  v4 = (_QWORD *)((char *)a1 + 64);
  v5 = a3;
  v6 = a2;
  v7 = a1;
  appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)&v86, 8uLL);
  v9 = v4[6];
  v74 = appended;
  v10 = appended & v9;
  for ( i = *(__int64 **)(v4[3] + 16 * (appended & v9));
        i != (__int64 *)*std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
                           (__int64)v4,
                           &v76,
                           v10);
        i = (__int64 *)*i )
  {
    if ( (_DWORD *)i[2] == v6 )
      goto LABEL_6;
  }
  i = (__int64 *)v4[1];
LABEL_6:
  v13 = std::_Fnv1a_append_bytes(v12, (const unsigned __int8 *const)&v87, 8uLL);
  v14 = v4[3];
  v15 = v13 & v9;
  v75[0] = (__int64 *)v13;
  for ( j = *(__int64 **)(v14 + 16 * v15);
        j != (__int64 *)*std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
                           (__int64)v4,
                           &v76,
                           v15);
        j = (__int64 *)*j )
  {
    if ( (struct CInteractionTracker *)j[2] == v5 )
      goto LABEL_11;
  }
  j = (__int64 *)v4[1];
LABEL_11:
  v20 = (__int64 *)*((_QWORD *)v7 + 9);
  if ( j == v20 )
  {
    if ( !v19 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6A,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)0x80070057LL);
      __debugbreak();
    }
    std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>(
      (__int64)v81,
      v17,
      v18);
    std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::emplace<CInteractionTracker * &,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>(
      (__int64)v4,
      (__int64)v79,
      (__int64)&v87,
      (__int64)v81);
    v5 = v87;
    if ( *((CInteractionTrackerBindingManager **)v87 + 79) != v7 )
    {
      (*(void (__fastcall **)(CInteractionTrackerBindingManager *))(*(_QWORD *)v7 + 8LL))(v7);
      v21 = *((_QWORD *)v5 + 79);
      *((_QWORD *)v5 + 79) = v7;
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v5 + 8LL))(v5);
    v23 = std::_Fnv1a_append_bytes(v22, (const unsigned __int8 *const)&v87, 8uLL);
    v24 = v4[3];
    v25 = v23 & v4[6];
    v75[0] = (__int64 *)v23;
    for ( j = *(__int64 **)(v24 + 16 * v25);
          j != (__int64 *)*std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
                             (__int64)v4,
                             &v80,
                             v25);
          j = (__int64 *)*j )
    {
      if ( (struct CInteractionTracker *)j[2] == v5 )
        goto LABEL_22;
    }
    j = (__int64 *)v4[1];
LABEL_22:
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)v83);
    v26 = v82;
    *v82[1] = 0LL;
    v27 = *v26;
    if ( *v26 )
    {
      do
      {
        v28 = (_QWORD *)*v27;
        std::_Deallocate<16,0>(v27, 0x20uLL);
        v27 = v28;
      }
      while ( v28 );
      v7 = v85;
    }
    std::_Deallocate<16,0>(v26, 0x20uLL);
    v20 = (__int64 *)*((_QWORD *)v7 + 9);
    v19 = v88;
  }
  if ( i == v20 )
  {
    if ( !v19 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x79,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)0x80070057LL);
      __debugbreak();
    }
    std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>(
      (__int64)v81,
      v17,
      v18);
    std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::emplace<CInteractionTracker * &,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>(
      (__int64)v4,
      (__int64)v79,
      (__int64)&v86,
      (__int64)v81);
    v6 = v86;
    if ( (CInteractionTrackerBindingManager *)v86[79] != v7 )
    {
      (*(void (__fastcall **)(CInteractionTrackerBindingManager *))(*(_QWORD *)v7 + 8LL))(v7);
      v29 = *((_QWORD *)v6 + 79);
      *((_QWORD *)v6 + 79) = v7;
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    v31 = std::_Fnv1a_append_bytes(v30, (const unsigned __int8 *const)&v86, 8uLL);
    v32 = v4[3];
    v33 = v31 & v4[6];
    v74 = v31;
    for ( i = *(__int64 **)(v32 + 16 * v33);
          i != (__int64 *)*std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
                             (__int64)v4,
                             v79,
                             v33);
          i = (__int64 *)*i )
    {
      if ( (_DWORD *)i[2] == v6 )
        goto LABEL_37;
    }
    i = (__int64 *)v4[1];
LABEL_37:
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)v83);
    v34 = v82;
    *v82[1] = 0LL;
    v35 = *v34;
    if ( *v34 )
    {
      do
      {
        v36 = (_QWORD *)*v35;
        std::_Deallocate<16,0>(v35, 0x20uLL);
        v35 = v36;
      }
      while ( v36 );
    }
    std::_Deallocate<16,0>(v34, 0x20uLL);
  }
  v37 = (__int64)(i + 3);
  v38 = i[9] & (__int64)v75[0];
  v39 = i[6];
  v78 = i + 3;
  v76 = j + 3;
  v75[0] = (__int64 *)v38;
  v40 = *(_QWORD *)(v39 + 16 * v38);
  while ( v40 != *std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
                    v37,
                    v77,
                    v38) )
  {
    if ( *(struct CInteractionTracker **)(v40 + 16) == v5 )
      goto LABEL_45;
    v40 = *(_QWORD *)v40;
    v37 = (__int64)(i + 3);
    v38 = (__int64)v75[0];
  }
  v40 = i[4];
LABEL_45:
  v42 = *(_QWORD *)(v41 + 48) & v74;
  v43 = *(_QWORD *)(v41 + 24);
  v74 = v42;
  v44 = *(_QWORD *)(v43 + 16 * v42);
  while ( v44 != *std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
                    v41,
                    v77,
                    v42) )
  {
    if ( *(_DWORD **)(v44 + 16) == v6 )
      goto LABEL_50;
    v44 = *(_QWORD *)v44;
    v42 = v74;
  }
  v44 = *(_QWORD *)(v41 + 8);
LABEL_50:
  v77[0] = i + 4;
  v75[0] = (__int64 *)i[4];
  if ( (__int64 *)v40 != v75[0] )
  {
    v74 = v41 + 8;
    if ( v44 != *(_QWORD *)(v41 + 8) )
    {
      v46 = v88;
      if ( v88 )
      {
        if ( v88 != *(_DWORD *)(v40 + 24) )
        {
          *(_DWORD *)(v44 + 24) = v88;
          *(_DWORD *)(v40 + 24) = v46;
        }
        return;
      }
      v47 = std::_Fnv1a_append_bytes(v45, (const unsigned __int8 *const)(v40 + 16), 8uLL);
      v49 = 2 * (i[9] & v47);
      if ( *(_QWORD *)(v48 + 16 * (i[9] & v47) + 8) == v40 )
      {
        if ( *(_QWORD *)(v48 + 16 * (i[9] & v47)) == v40 )
        {
          *(__int64 **)(v48 + 16 * (i[9] & v47)) = v75[0];
          *(_QWORD *)(i[6] + 8 * v49 + 8) = i[4];
        }
        else
        {
          *(_QWORD *)(v48 + 16 * (i[9] & v47) + 8) = *(_QWORD *)(v40 + 8);
        }
      }
      else if ( *(_QWORD *)(v48 + 16 * (i[9] & v47)) == v40 )
      {
        *(_QWORD *)(v48 + 16 * (i[9] & v47)) = *(_QWORD *)v40;
      }
      std::list<std::pair<CResource const * const,CWeakResourceReference *>>::erase(
        (__int64)(i + 4),
        &v76,
        (__int64 *)v40);
      (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v5 + 16LL))(v5);
      v51 = std::_Fnv1a_append_bytes(v50, (const unsigned __int8 *const)(v44 + 16), 8uLL);
      v52 = j[6];
      v53 = 2 * (j[9] & v51);
      if ( *(_QWORD *)(v52 + 16 * (j[9] & v51) + 8) == v44 )
      {
        if ( *(_QWORD *)(v52 + 16 * (j[9] & v51)) == v44 )
        {
          v54 = (struct CWeakResourceReference **)(j + 4);
          *(_QWORD *)(v52 + 16 * (j[9] & v51)) = j[4];
          *(_QWORD *)(j[6] + 8 * v53 + 8) = j[4];
LABEL_68:
          std::list<std::pair<CResource const * const,CWeakResourceReference *>>::erase(
            (__int64)v54,
            &v76,
            (__int64 *)v44);
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
          if ( i[5] )
          {
            v57 = v85;
          }
          else
          {
            v56 = std::_Fnv1a_append_bytes(v55, (const unsigned __int8 *const)i + 16, 8uLL);
            v57 = v85;
            v58 = *((_QWORD *)v85 + 11);
            v59 = 2 * (*((_QWORD *)v85 + 14) & v56);
            if ( *(__int64 **)(v58 + 16 * (*((_QWORD *)v85 + 14) & v56) + 8) == i )
            {
              if ( *(__int64 **)(v58 + 16 * (*((_QWORD *)v85 + 14) & v56)) == i )
              {
                *(_QWORD *)(v58 + 16 * (*((_QWORD *)v85 + 14) & v56)) = *((_QWORD *)v85 + 9);
                v58 = *((_QWORD *)v57 + 11);
                v60 = *((_QWORD *)v57 + 9);
              }
              else
              {
                v60 = i[1];
              }
              *(_QWORD *)(v58 + 8 * v59 + 8) = v60;
            }
            else if ( *(__int64 **)(v58 + 16 * (*((_QWORD *)v85 + 14) & v56)) == i )
            {
              *(_QWORD *)(v58 + 16 * (*((_QWORD *)v85 + 14) & v56)) = *i;
            }
            std::list<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>::erase(
              (char *)v57 + 72,
              &v85,
              i);
            v61 = *((_QWORD *)v6 + 79);
            if ( v61 )
            {
              *((_QWORD *)v6 + 79) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
            }
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
          }
          if ( !j[5] )
          {
            std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::erase(
              v4,
              &v85,
              j);
            v62 = *((_QWORD *)v5 + 79);
            if ( v62 )
            {
              *((_QWORD *)v5 + 79) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
            }
            (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v5 + 16LL))(v5);
          }
          if ( v6[42] )
            CInteractionTrackerBindingManager::TransitionDisconnectedTrackersToIdle(
              v57,
              (struct CInteractionTracker *)v6,
              v5);
          return;
        }
        *(_QWORD *)(v52 + 16 * (j[9] & v51) + 8) = *(_QWORD *)(v44 + 8);
      }
      else if ( *(_QWORD *)(v52 + 16 * (j[9] & v51)) == v44 )
      {
        *(_QWORD *)(v52 + 16 * (j[9] & v51)) = *(_QWORD *)v44;
      }
      v54 = (struct CWeakResourceReference **)v74;
      goto LABEL_68;
    }
  }
  if ( !v88 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBE,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  v75[1] = 0LL;
  v63 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  v64 = v85;
  v74 = 0LL;
  v65 = (int)v85;
  *(_QWORD *)v63 = v63;
  *(_QWORD *)(v63 + 8) = v63;
  *(_QWORD *)(v63 + 16) = v63;
  *(_WORD *)(v63 + 24) = 257;
  v75[0] = (__int64 *)v63;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
    v65,
    (_DWORD)v6,
    7,
    (unsigned int)v75,
    (unsigned __int8)&v74);
  v66 = std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::find(
          v75,
          (__int64 **)&v85,
          &v87);
  if ( *v66 == v75[0] )
  {
    v67 = (struct CWeakResourceReference **)v74;
    if ( v74 )
    {
      v68 = *(_QWORD *)(*((_QWORD *)v64 + 2) + 272LL);
      WeakRefToSelf = CInteractionTracker::GetWeakRefToSelf((struct CWeakResourceReference **)v74);
      v70 = CExpressionManager::LookupExpressionsForTarget(v68, (__int64)WeakRefToSelf, 1);
      v71 = *(_QWORD *)(*((_QWORD *)v64 + 2) + 272LL);
      v72 = CInteractionTracker::GetWeakRefToSelf(v67);
      v73 = CExpressionManager::LookupExpressionsForTarget(v71, (__int64)v72, 2);
      while ( v70 )
      {
        CInteractionTrackerBindingManager::RegisterIndirectTargetsForBoundTrackers(v64, v5, *(_QWORD *)(v70 + 8), 1LL);
        v70 = *(_QWORD *)(v70 + 16);
      }
      while ( v73 )
      {
        CInteractionTrackerBindingManager::RegisterIndirectTargetsForBoundTrackers(v64, v5, *(_QWORD *)(v73 + 8), 2LL);
        v73 = *(_QWORD *)(v73 + 16);
      }
    }
  }
  if ( v40 == *(_QWORD *)v77[0] )
  {
    std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::emplace<CInteractionTracker * &,enum InteractionTrackerBindingModeFlags &>(
      (__int64)v78,
      (__int64)v77,
      (__int64)&v87,
      (__int64)&v88);
    (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v87 + 8LL))(v87);
  }
  if ( v44 == v76[1] )
  {
    std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::emplace<CInteractionTracker * &,enum InteractionTrackerBindingModeFlags &>(
      (__int64)v76,
      (__int64)v79,
      (__int64)&v86,
      (__int64)&v88);
    (*(void (__fastcall **)(_QWORD *))(*v86 + 8LL))(v86);
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)v75,
    (__int64)v75,
    v75[0][1]);
  std::_Deallocate<16,0>(v75[0], 0x28uLL);
}
