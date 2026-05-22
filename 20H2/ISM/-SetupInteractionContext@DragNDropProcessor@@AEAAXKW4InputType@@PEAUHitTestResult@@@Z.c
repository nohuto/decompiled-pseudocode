/*
 * XREFs of ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@@Z @ 0x1800FA9AC
 * Callers:
 *     ?OnHitTest@DragNDropProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800F9F50 (-OnHitTest@DragNDropProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D64 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800440F8 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x1800451F8 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KUMessageInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800F725C (--$_Try_emplace@AEBK$$V@-$unordered_map@KUMessageInfo@DragNDropProcessor@@U-$hash@K@std@@U-$equa.c)
 *     ??$make_unique@VDragGestureTracker@@AEAPEAUHINTERACTIONCONTEXT__@@$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@AEAPEAUHINTERACTIONCONTEXT__@@@Z @ 0x1800F7A28 (--$make_unique@VDragGestureTracker@@AEAPEAUHINTERACTIONCONTEXT__@@$0A@@std@@YA-AV-$unique_ptr@VD.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800F83F4 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F84A0 (--4-$unique_ptr@VDragGestureTracker@@U-$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV.c)
 *     ?HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_KPEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@9@Z @ 0x1800F9690 (-HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_K.c)
 *     ?ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ @ 0x180144D38 (-ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DragNDropProcessor::SetupInteractionContext(__int64 a1, int a2, unsigned int a3, char *a4)
{
  __int64 v8; // r11
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 result; // rax
  char *v12; // rsi
  int v13; // eax
  _QWORD *v14; // rax
  DragGestureTracker **v15; // r14
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // [rsp+60h] [rbp+7h] BYREF
  __int64 v20; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+70h] [rbp+17h] BYREF
  void *v22; // [rsp+78h] [rbp+1Fh] BYREF
  void *v23[2]; // [rsp+80h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v25; // [rsp+C0h] [rbp+67h] BYREF
  int v26; // [rsp+C8h] [rbp+6Fh] BYREF

  v26 = a2;
  v8 = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v26, 4uLL) & *(_QWORD *)(a1 + 160);
  while ( 1 )
  {
    v9 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           a1 + 112,
           &v25,
           v8);
    if ( v10 == *v9 )
      break;
    if ( *(_DWORD *)(v10 + 16) == a2 )
    {
      result = *(_QWORD *)(a1 + 120);
      goto LABEL_6;
    }
  }
  v10 = *(_QWORD *)(a1 + 120);
  result = v10;
LABEL_6:
  if ( v10 == result )
  {
    v22 = 0LL;
    v25 = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    *(GUID *)v23 = GUID_NULL;
    DragNDropProcessor::HitTest(a1, 0LL, a3, v23, a4, 0LL, 0LL, 0LL, (__int64)&v22, &v25, &v20, &v19);
    std::unordered_map<unsigned long,DragNDropProcessor::MessageInfo>::_Try_emplace<unsigned long const &,>(
      a1 + 112,
      (__int64)v23,
      (const unsigned __int8 *)&v26);
    v12 = (char *)v23[0];
    v13 = CreateInteractionContext(&v21);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        161LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dra"
                 "gndropprocessor.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = std::make_unique<DragGestureTracker,HINTERACTIONCONTEXT__ * &,0>(v23, &v21);
    v15 = (DragGestureTracker **)(v12 + 64);
    std::unique_ptr<DragGestureTracker>::operator=((_QWORD **)v12 + 8, v14);
    v16 = v23[0];
    if ( v23[0] )
    {
      if ( *((_QWORD *)v23[0] + 2) )
        DestroyInteractionContext();
      operator delete(v16, (const struct std::nothrow_t *)0x18);
    }
    if ( v21 )
      DragGestureTracker::ResetAndInitializeInteractionContext(*v15);
    v17 = v22;
    if ( v22 && v25 )
    {
      if ( *((void **)v12 + 3) != v22 )
      {
        v23[0] = v22;
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))v23);
        v18 = *((_QWORD *)v12 + 3);
        *((_QWORD *)v12 + 3) = v17;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      }
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))v12 + 4, &v25);
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)v12 + 6, &v20);
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)v12 + 7, &v19);
      *(_DWORD *)*v15 = 2;
    }
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    result = Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(&v25);
    if ( v17 )
      return (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v17 + 8LL))(v17);
  }
  return result;
}
