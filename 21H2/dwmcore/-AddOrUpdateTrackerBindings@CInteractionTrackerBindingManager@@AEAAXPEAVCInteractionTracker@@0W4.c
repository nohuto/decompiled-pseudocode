/*
 * XREFs of ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x18021F8EC
 * Callers:
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x180220D50 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUta.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800B7328 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D38B0 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180191EAC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1801FDD14 (-LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV-$CWeakReferenc.c)
 *     ?GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV?$CWeakReference@VCResource@@@@XZ @ 0x18021B274 (-GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV-$CWeakReference@VCResource@@@@XZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x18021ED40 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??$_Find_lower_bound@PEAVCInteractionTracker@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@PEAVCInteractionTracker@@PEAX@std@@@1@AEBQEAVCInteractionTracker@@@Z @ 0x18021EDF4 (--$_Find_lower_bound@PEAVCInteractionTracker@@@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@.c)
 *     ??$emplace@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x18021EEC4 (--$emplace@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@-$_Hash@V-$_Uma.c)
 *     ??$emplace@AEAPEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCInteractionTracker@@$$QEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@1@@Z @ 0x18021EFBC (--$emplace@AEAPEAVCInteractionTracker@@V-$unordered_map@PEAVCInteractionTracker@@W4InteractionTr.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@1@AEBQEAVCInteractionTracker@@@Z @ 0x18021F31C (--$find@X@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@.c)
 *     ??0?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@QEAA@XZ @ 0x18021F500 (--0-$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U-$hash@PEAVCI.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x180220B54 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x180220EF4 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1802213C8 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@PEAX@2@PEAU32@@Z @ 0x180222048 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@V-$unordered_map@PEAVCInterac.c)
 */

void __fastcall CInteractionTrackerBindingManager::AddOrUpdateTrackerBindings(
        CInteractionTrackerBindingManager *a1,
        _QWORD *a2,
        struct CInteractionTracker *a3,
        int a4)
{
  float *v4; // rdi
  struct CInteractionTracker *v5; // r12
  _DWORD *v6; // r15
  struct CWeakResourceReference **v9; // rax
  struct CWeakResourceReference **v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _DWORD *v17; // rbx
  struct CWeakResourceReference **v18; // rdi
  int v19; // eax
  __int64 appended; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  struct CWeakResourceReference *v27; // rcx
  __int64 v28; // rdx
  struct CWeakResourceReference *v29; // rax
  struct CWeakResourceReference *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  SIZE_T size_of; // rax
  _QWORD *v34; // rax
  void *v35; // rdx
  __int64 v36; // rsi
  struct CWeakResourceReference *WeakRefToSelf; // rax
  _QWORD *v38; // r15
  __int64 v39; // rsi
  struct CWeakResourceReference *v40; // rax
  _QWORD *v41; // rsi
  int v42; // [rsp+28h] [rbp-89h]
  void *v43[2]; // [rsp+38h] [rbp-79h] BYREF
  __int64 v44; // [rsp+48h] [rbp-69h] BYREF
  _QWORD *v45[3]; // [rsp+50h] [rbp-61h] BYREF
  char v46[8]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD **v47; // [rsp+70h] [rbp-41h]
  void *v48; // [rsp+80h] [rbp-31h]
  __int64 v49; // [rsp+88h] [rbp-29h]
  char v50[16]; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v51; // [rsp+B8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]
  struct CWeakResourceReference **v53; // [rsp+118h] [rbp+67h] BYREF
  _QWORD *v54; // [rsp+120h] [rbp+6Fh] BYREF
  struct CInteractionTracker *v55; // [rsp+128h] [rbp+77h] BYREF
  int v56; // [rsp+130h] [rbp+7Fh] BYREF

  v56 = a4;
  v55 = a3;
  v54 = a2;
  v4 = (float *)((char *)a1 + 72);
  v5 = a3;
  v6 = a2;
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
    (_QWORD *)a1 + 9,
    &v44,
    (const unsigned __int8 *)&v54);
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
    v4,
    &v53,
    (const unsigned __int8 *)&v55);
  v9 = (struct CWeakResourceReference **)*((_QWORD *)a1 + 10);
  v10 = v53;
  if ( v53 == v9 )
  {
    if ( !a4 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        104LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)0x80070057LL,
        v42);
    std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>((__int64)v46);
    std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::emplace<CInteractionTracker * &,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>(
      v4,
      (__int64)v45,
      (unsigned __int8 *)&v55,
      (__int64)v46);
    v5 = v55;
    if ( *((CInteractionTrackerBindingManager **)v55 + 80) != a1 )
    {
      (*(void (__fastcall **)(CInteractionTrackerBindingManager *))(*(_QWORD *)a1 + 8LL))(a1);
      v11 = *((_QWORD *)v5 + 80);
      *((_QWORD *)v5 + 80) = a1;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v5 + 8LL))(v5);
    v10 = (struct CWeakResourceReference **)*std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
                                               v4,
                                               &v53,
                                               (const unsigned __int8 *)&v55);
    std::_Deallocate<16,0>(v48, (v49 - (_QWORD)v48) & 0xFFFFFFFFFFFFFFF8uLL);
    std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>>>(
      v12,
      v47);
    std::_Deallocate<16,0>(v47, 0x20uLL);
    v9 = (struct CWeakResourceReference **)*((_QWORD *)a1 + 10);
  }
  v13 = v44;
  if ( (struct CWeakResourceReference **)v44 == v9 )
  {
    if ( !a4 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        119LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)0x80070057LL,
        v42);
    std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>((__int64)v46);
    std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::emplace<CInteractionTracker * &,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>(
      v4,
      (__int64)v45,
      (unsigned __int8 *)&v54,
      (__int64)v46);
    v6 = v54;
    if ( (CInteractionTrackerBindingManager *)v54[80] != a1 )
    {
      (*(void (__fastcall **)(CInteractionTrackerBindingManager *))(*(_QWORD *)a1 + 8LL))(a1);
      v14 = *((_QWORD *)v6 + 80);
      *((_QWORD *)v6 + 80) = a1;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    v13 = *std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
             v4,
             &v53,
             (const unsigned __int8 *)&v54);
    std::_Deallocate<16,0>(v48, (v49 - (_QWORD)v48) & 0xFFFFFFFFFFFFFFF8uLL);
    std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>>>(
      v15,
      v47);
    std::_Deallocate<16,0>(v47, 0x20uLL);
  }
  v45[0] = (_QWORD *)(v13 + 24);
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
    (_QWORD *)(v13 + 24),
    &v44,
    (const unsigned __int8 *)&v55);
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
    v10 + 3,
    &v53,
    (const unsigned __int8 *)&v54);
  v17 = (_DWORD *)v44;
  v18 = v53;
  v43[0] = *(void **)(v13 + 32);
  if ( (void *)v44 == v43[0] || v53 == (struct CWeakResourceReference **)v10[4] )
  {
    if ( !v56 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        188LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)0x80070057LL,
        v42);
    v43[1] = 0LL;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v34 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v53 = 0LL;
    *v34 = v34;
    v34[1] = v34;
    v34[2] = v34;
    *((_WORD *)v34 + 12) = 257;
    v43[0] = v34;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
      (_DWORD)a1,
      (_DWORD)v6,
      7,
      (unsigned int)v43,
      (__int64)&v53);
    std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::_Find_lower_bound<CInteractionTracker *>(
      (__int64 *)v43,
      (__int64)v50,
      (unsigned __int64 *)&v55);
    v35 = (void *)v51;
    if ( *(_BYTE *)(v51 + 25) || (unsigned __int64)v5 < *(_QWORD *)(v51 + 32) )
      v35 = v43[0];
    if ( v35 == v43[0] && v53 )
    {
      v36 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      WeakRefToSelf = CInteractionTracker::GetWeakRefToSelf(v53);
      v38 = CExpressionManager::LookupExpressionsForTarget(v36, (__int64)WeakRefToSelf, 1);
      v39 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      v40 = CInteractionTracker::GetWeakRefToSelf(v53);
      v41 = CExpressionManager::LookupExpressionsForTarget(v39, (__int64)v40, 2);
      while ( v38 )
      {
        CInteractionTrackerBindingManager::RegisterIndirectTargetsForBoundTrackers(a1, v5, v38[1], 1LL);
        v38 = (_QWORD *)v38[2];
      }
      while ( v41 )
      {
        CInteractionTrackerBindingManager::RegisterIndirectTargetsForBoundTrackers(a1, v5, v41[1], 2LL);
        v41 = (_QWORD *)v41[2];
      }
    }
    if ( v17 == *((_DWORD **)v45[0] + 1) )
    {
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::emplace<CInteractionTracker * &,enum InteractionTrackerBindingModeFlags &>(
        v45[0],
        (__int64)v45,
        (unsigned __int8 *)&v55,
        &v56);
      (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v55 + 8LL))(v55);
    }
    if ( v18 == (struct CWeakResourceReference **)v10[4] )
    {
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::emplace<CInteractionTracker * &,enum InteractionTrackerBindingModeFlags &>(
        v10 + 3,
        (__int64)v45,
        (unsigned __int8 *)&v54,
        &v56);
      (*(void (__fastcall **)(_QWORD *))(*v54 + 8LL))(v54);
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)v43,
      (__int64)v43,
      *((_QWORD *)v43[0] + 1));
    std::_Deallocate<16,0>(v43[0], 0x28uLL);
  }
  else
  {
    v19 = v56;
    if ( v56 )
    {
      if ( v56 != *(_DWORD *)(v44 + 24) )
      {
        *((_DWORD *)v53 + 6) = v56;
        v17[6] = v19;
      }
    }
    else
    {
      appended = std::_Fnv1a_append_bytes(v16, (const unsigned __int8 *const)(v44 + 16), 8uLL);
      v21 = *(_QWORD *)(v13 + 48);
      v22 = 2 * (*(_QWORD *)(v13 + 72) & appended);
      if ( *(_DWORD **)(v21 + 16 * (*(_QWORD *)(v13 + 72) & appended) + 8) == v17 )
      {
        if ( *(_DWORD **)(v21 + 16 * (*(_QWORD *)(v13 + 72) & appended)) == v17 )
        {
          v23 = v43[0];
          *(void **)(v21 + 8 * v22) = v43[0];
        }
        else
        {
          v23 = (void *)*((_QWORD *)v17 + 1);
        }
        *(_QWORD *)(v21 + 8 * v22 + 8) = v23;
      }
      else if ( *(_DWORD **)(v21 + 16 * (*(_QWORD *)(v13 + 72) & appended)) == v17 )
      {
        *(_QWORD *)(v21 + 16 * (*(_QWORD *)(v13 + 72) & appended)) = *(_QWORD *)v17;
      }
      v24 = *(_QWORD *)v17;
      --*(_QWORD *)(v13 + 40);
      **((_QWORD **)v17 + 1) = v24;
      *(_QWORD *)(v24 + 8) = *((_QWORD *)v17 + 1);
      std::_Deallocate<16,0>(v17, 0x20uLL);
      (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v5 + 16LL))(v5);
      v26 = std::_Fnv1a_append_bytes(v25, (const unsigned __int8 *const)v18 + 16, 8uLL);
      v27 = v10[6];
      v28 = 2 * ((unsigned __int64)v10[9] & v26);
      if ( *((struct CWeakResourceReference ***)v27 + 2 * ((unsigned __int64)v10[9] & v26) + 1) == v18 )
      {
        if ( *((struct CWeakResourceReference ***)v27 + 2 * ((unsigned __int64)v10[9] & v26)) == v18 )
        {
          v29 = v10[4];
          *((_QWORD *)v27 + v28) = v29;
        }
        else
        {
          v29 = v18[1];
        }
        *((_QWORD *)v27 + v28 + 1) = v29;
      }
      else if ( *((struct CWeakResourceReference ***)v27 + 2 * ((unsigned __int64)v10[9] & v26)) == v18 )
      {
        *((_QWORD *)v27 + 2 * ((unsigned __int64)v10[9] & v26)) = *v18;
      }
      v30 = *v18;
      v10[5] = (struct CWeakResourceReference *)((char *)v10[5] - 1);
      *(_QWORD *)v18[1] = v30;
      *((_QWORD *)v30 + 1) = v18[1];
      std::_Deallocate<16,0>(v18, 0x20uLL);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
      if ( !*(_QWORD *)(v13 + 40) )
      {
        std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::_Unchecked_erase(
          (char *)a1 + 72,
          v13);
        v31 = *((_QWORD *)v6 + 80);
        if ( v31 )
        {
          *((_QWORD *)v6 + 80) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        }
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
      }
      if ( !v10[5] )
      {
        std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::_Unchecked_erase(
          (char *)a1 + 72,
          v10);
        v32 = *((_QWORD *)v5 + 80);
        if ( v32 )
        {
          *((_QWORD *)v5 + 80) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        }
        (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v5 + 16LL))(v5);
      }
      if ( v6[44] )
        CInteractionTrackerBindingManager::TransitionDisconnectedTrackersToIdle(
          a1,
          (struct CInteractionTracker *)v6,
          v5);
    }
  }
}
