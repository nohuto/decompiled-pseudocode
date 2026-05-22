/*
 * XREFs of ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoDragAreaClientProxy@@@Z @ 0x1800FB488
 * Callers:
 *     ?StartManualDrag@DragAreaClientProxy@@MEAAJI@Z @ 0x1800F56D0 (-StartManualDrag@DragAreaClientProxy@@MEAAJI@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D2C (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044148 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045248 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KUMessageInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800F72EC (--$_Try_emplace@AEBK$$V@-$unordered_map@KUMessageInfo@DragNDropProcessor@@U-$hash@K@std@@U-$equa.c)
 *     ??$emplace@AEAKAEA_K@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAKAEA_K@Z @ 0x1800F7678 (--$emplace@AEAKAEA_K@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800F8484 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CancelManualDrag@DragNDropProcessor@@AEAAXKPEAVDragAreaClientProxy@@@Z @ 0x1800F88FC (-CancelManualDrag@DragNDropProcessor@@AEAAXKPEAVDragAreaClientProxy@@@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_KPEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@9@Z @ 0x1800F9720 (-HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_K.c)
 *     ?ManualDragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800F9EB4 (-ManualDragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Window.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x180144F54 (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x180144F80 (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall DragNDropProcessor::StartManualDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        struct BamoDragAreaClientProxy *a3)
{
  __int64 appended; // r15
  __int64 v7; // r10
  __int64 *i; // rdi
  DragNDropProcessor *v9; // rcx
  char *v10; // r11
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r10
  struct tagPOINT *v14; // r13
  unsigned int v15; // esi
  struct tagPOINT v16; // rbx
  DragNDropProcessor *v17; // rcx
  struct InputSite *v18; // rsi
  struct InputSite *v19; // r14
  _QWORD *v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 (__fastcall *v26)(__int64, _QWORD, struct tagPOINT *, __int64, int *, struct tagPOINT *, __int64, _DWORD, _DWORD, __int64); // r15
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // r15
  struct BamoDragAreaClientProxy *v30; // rdi
  __int64 v31; // [rsp+68h] [rbp-49h] BYREF
  struct tagPOINT v32; // [rsp+70h] [rbp-41h] BYREF
  __int64 v33; // [rsp+78h] [rbp-39h] BYREF
  struct InputSite *v34; // [rsp+80h] [rbp-31h] BYREF
  struct InputSite *v35; // [rsp+88h] [rbp-29h] BYREF
  _QWORD *v36; // [rsp+90h] [rbp-21h] BYREF
  int v37[2]; // [rsp+98h] [rbp-19h] BYREF
  struct tagPOINT PositionRelativeToSite; // [rsp+A0h] [rbp-11h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v40; // [rsp+B8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]
  DragNDropProcessor *v42; // [rsp+118h] [rbp+67h] BYREF
  unsigned int v43; // [rsp+120h] [rbp+6Fh] BYREF
  struct BamoDragAreaClientProxy *v44; // [rsp+128h] [rbp+77h]
  __int64 v45; // [rsp+130h] [rbp+7Fh] BYREF

  v44 = a3;
  v43 = a2;
  v42 = this;
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v43, 4uLL);
  v7 = appended & *((_QWORD *)this + 12);
  for ( i = *(__int64 **)(*((_QWORD *)this + 9) + 16 * v7);
        i != (__int64 *)*std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                           (__int64)this + 48,
                           &v45,
                           v7);
        i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_6;
  }
  i = (__int64 *)*((_QWORD *)this + 7);
LABEL_6:
  if ( i == *((__int64 **)this + 7) )
    goto LABEL_27;
  v10 = (char *)this + 240;
  v40 = (__int64)this + 240;
  v11 = appended & *((_QWORD *)this + 36);
  while ( 1 )
  {
    v12 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
            (__int64)v10,
            &v45,
            v11);
    if ( v13 == *v12 )
      break;
    if ( *(_DWORD *)(v13 + 16) == a2 )
      goto LABEL_12;
  }
  v13 = *((_QWORD *)v10 + 1);
LABEL_12:
  if ( v13 != *((_QWORD *)this + 31) )
  {
LABEL_27:
    DragNDropProcessor::CancelManualDrag(v9, a2, a3);
  }
  else
  {
    v14 = (struct tagPOINT *)((char *)i + 28);
    v32 = *(struct tagPOINT *)((char *)i + 28);
    v33 = 0LL;
    v36 = 0LL;
    v31 = 0LL;
    v35 = 0LL;
    v34 = 0LL;
    v15 = *((_DWORD *)i + 9);
    v16 = *(struct tagPOINT *)((char *)i + 20);
    v39 = *(_OWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 40LL))((char *)a3 + 8);
    DragNDropProcessor::HitTest(
      (__int64)this,
      v16,
      v15,
      &v39,
      0LL,
      &v32,
      &v33,
      0LL,
      (__int64)&v36,
      &v31,
      (__int64 *)&v35,
      (__int64 *)&v34);
    v18 = v35;
    v19 = v34;
    v20 = v36;
    if ( v36 && (v21 = v31) != 0 )
    {
      PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v34, *v14);
      *(struct tagPOINT *)v37 = PointerManipulationHelper::GetPositionRelativeToSite(v18, *v14);
      LODWORD(v45) = PointerManipulationHelper::GetInputType(*((unsigned int *)i + 9), v22, v23);
      v24 = v33;
      InputETW::DragNDrop::ManualDragStarted(
        v43,
        (int *)&PositionRelativeToSite,
        (int *)&v32,
        v37,
        v33,
        *((_DWORD *)i + 10));
      v32 = 0LL;
      v25 = v21 + 8;
      v26 = *(__int64 (__fastcall **)(__int64, _QWORD, struct tagPOINT *, __int64, int *, struct tagPOINT *, __int64, _DWORD, _DWORD, __int64))(*(_QWORD *)(v21 + 8) + 24LL);
      v27 = (*(__int64 (__fastcall **)(_QWORD *))(v20[1] + 32LL))(v20 + 1);
      v28 = v26(v25, v43, &PositionRelativeToSite, (__int64)i + 28, v37, &v32, v24, *((_DWORD *)i + 10), v45, v27);
      if ( v28 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          528LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\d"
                   "ragndropprocessor.cpp",
          (const char *)(unsigned int)v28);
        __debugbreak();
      }
      std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,unsigned __int64 &>(
        v40,
        (__int64)&v39,
        &v43,
        &v33);
      std::unordered_map<unsigned long,DragNDropProcessor::MessageInfo>::_Try_emplace<unsigned long const &,>(
        (__int64)v42 + 112,
        (__int64)&v39,
        (const unsigned __int8 *)&v43);
      v29 = v39;
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))(v39 + 32), &v31);
      v30 = v44;
      if ( *(struct BamoDragAreaClientProxy **)(v29 + 40) != v44 )
      {
        (**(void (__fastcall ***)(struct BamoDragAreaClientProxy *))v44)(v44);
        v42 = *(DragNDropProcessor **)(v29 + 40);
        *(_QWORD *)(v29 + 40) = v30;
        Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v42);
      }
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)(v29 + 56), (__int64 *)&v34);
      **(_DWORD **)(v29 + 64) = 4;
    }
    else
    {
      DragNDropProcessor::CancelManualDrag(v17, v43, a3);
    }
    if ( v19 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v18 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v18 + 16LL))(v18);
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(&v31);
    if ( v20 )
      (*(void (__fastcall **)(_QWORD *))(*v20 + 8LL))(v20);
  }
}
