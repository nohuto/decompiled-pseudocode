/*
 * XREFs of ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x1800FED0C
 * Callers:
 *     ?OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800FDF20 (-OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIniti.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D64 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800440F8 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x1800451F8 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$make_unique@VDragGestureTracker@@AEAPEAUHINTERACTIONCONTEXT__@@$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@AEAPEAUHINTERACTIONCONTEXT__@@@Z @ 0x1800F7A28 (--$make_unique@VDragGestureTracker@@AEAPEAUHINTERACTIONCONTEXT__@@$0A@@std@@YA-AV-$unique_ptr@VD.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800F83F4 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F84A0 (--4-$unique_ptr@VDragGestureTracker@@U-$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV.c)
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KUMessageInfo@ResizeProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800FD28C (--$_Try_emplace@AEBK$$V@-$unordered_map@KUMessageInfo@ResizeProcessor@@U-$hash@K@std@@U-$equal_t.c)
 *     ?HitTest@ResizeProcessor@@AEAAJPEAUHitTestResult@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x1800FDDB4 (-HitTest@ResizeProcessor@@AEAAJPEAUHitTestResult@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEA.c)
 *     ?ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ @ 0x180144D38 (-ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ResizeProcessor::StartGestureRecognition(ResizeProcessor *this, struct HitTestResult *a2, int a3)
{
  char *v5; // rbx
  __int64 v6; // r11
  _QWORD *v7; // rax
  ResizeProcessor *v8; // rcx
  __int64 v9; // r10
  __int64 v10; // rax
  void *v11; // rdi
  int v12; // eax
  _QWORD *v13; // rax
  void *v14; // rbx
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  void *v16[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct BamoResizeControllerClientProxy *v18; // [rsp+60h] [rbp+20h] BYREF
  int v19; // [rsp+70h] [rbp+30h] BYREF
  struct InputSite *v20; // [rsp+78h] [rbp+38h] BYREF

  v19 = a3;
  v5 = (char *)this + 24;
  v6 = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v19, 4uLL) & *((_QWORD *)this + 9);
  while ( 1 )
  {
    v7 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           (__int64)v5,
           &v18,
           v6);
    if ( v9 == *v7 )
      break;
    if ( *(_DWORD *)(v9 + 16) == a3 )
    {
      v10 = *((_QWORD *)v5 + 1);
      goto LABEL_6;
    }
  }
  v9 = *((_QWORD *)v5 + 1);
  v10 = v9;
LABEL_6:
  if ( v9 == v10 )
  {
    v18 = 0LL;
    v20 = 0LL;
    ResizeProcessor::HitTest(v8, a2, &v18, &v20);
    std::unordered_map<unsigned long,ResizeProcessor::MessageInfo>::_Try_emplace<unsigned long const &,>(
      (__int64)v5,
      (__int64)v16,
      (const unsigned __int8 *)&v19);
    if ( v18 )
    {
      v11 = v16[0];
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))v16[0] + 3, &v18);
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)v11 + 4, (__int64 *)&v20);
      v12 = CreateInteractionContext(&v15);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          362LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeprocessor.cpp",
          (const char *)(unsigned int)v12);
        __debugbreak();
      }
      v13 = std::make_unique<DragGestureTracker,HINTERACTIONCONTEXT__ * &,0>(v16, &v15);
      std::unique_ptr<DragGestureTracker>::operator=((_QWORD **)v11 + 5, v13);
      v14 = v16[0];
      if ( v16[0] )
      {
        if ( *((_QWORD *)v16[0] + 2) )
          DestroyInteractionContext();
        operator delete(v14, (const struct std::nothrow_t *)0x18);
      }
      if ( v15 )
        DragGestureTracker::ResetAndInitializeInteractionContext(*((DragGestureTracker **)v11 + 5));
      **((_DWORD **)v11 + 5) = 2;
    }
    else
    {
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)v16[0] + 3);
    }
    if ( v20 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v20 + 16LL))(v20);
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v18);
  }
}
