/*
 * XREFs of ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x1800FB5BC
 * Callers:
 *     ?StartDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@I_KPEAVBamoDragManagerClientProxy@@@Z @ 0x1800F6550 (-StartDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@I_KPEAVBamoDragManage.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E60 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D2C (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044758 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045858 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KUMessageInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800F77AC (--$_Try_emplace@AEBK$$V@-$unordered_map@KUMessageInfo@DragNDropProcessor@@U-$hash@K@std@@U-$equa.c)
 *     ??$emplace@AEAKAEA_K@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAKAEA_K@Z @ 0x1800F7B38 (--$emplace@AEAKAEA_K@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800F8944 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800F8F10 (-DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@.c)
 *     ?DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800F9294 (-DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800F97F8 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800F990C (-GetDragSourceInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOIN.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x1800F9B44 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_KPEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@9@Z @ 0x1800F9BE0 (-HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_K.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800FC930 (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ_ea_1800FC930.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x180145414 (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x180145440 (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DragNDropProcessor::StartDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        __int64 a3,
        struct BamoDragManagerClientProxy *a4)
{
  char v6; // r12
  __int64 v7; // rcx
  __int64 appended; // r13
  __int64 v9; // rbx
  unsigned int v10; // r15d
  _QWORD *v11; // rax
  __int64 v12; // r10
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // r11
  __int64 v16; // rbx
  unsigned int v17; // r15d
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r8
  int InputType; // ebx
  __int64 v22; // rdi
  int v23; // ebx
  __int64 v24; // rbx
  struct InputSite *v25; // rcx
  struct InputSite *v26; // rcx
  struct tagPOINT v28; // [rsp+60h] [rbp-29h] BYREF
  __int128 v29; // [rsp+68h] [rbp-21h] BYREF
  struct InputSite *v30; // [rsp+78h] [rbp-11h] BYREF
  struct InputSite *v31; // [rsp+80h] [rbp-9h] BYREF
  __int64 (__fastcall ***v32)(_QWORD); // [rsp+88h] [rbp-1h] BYREF
  unsigned int v33[4]; // [rsp+90h] [rbp+7h] BYREF
  struct tagPOINT v34; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v35; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v36; // [rsp+100h] [rbp+77h]
  struct tagPOINT PositionRelativeToSite; // [rsp+108h] [rbp+7Fh] BYREF

  v36 = a3;
  v35 = a2;
  v32 = (__int64 (__fastcall ***)(_QWORD))a4;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v32);
  v6 = 0;
  appended = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)&v35, 4uLL);
  v9 = appended & *((_QWORD *)this + 12);
  v10 = v35;
  while ( 1 )
  {
    v11 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
            (__int64)this + 48,
            (_QWORD *)&v29 + 1,
            v9);
    if ( v12 == *v11 )
      break;
    if ( *(_DWORD *)(v12 + 16) == v10 )
      goto LABEL_6;
  }
  v12 = *((_QWORD *)this + 7);
LABEL_6:
  if ( v12 == *((_QWORD *)this + 7) )
    goto LABEL_13;
  v13 = appended & *((_QWORD *)this + 36);
  while ( 1 )
  {
    v14 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
            (__int64)this + 240,
            (_QWORD *)&v29 + 1,
            v13);
    if ( v15 == *v14 )
      break;
    if ( *(_DWORD *)(v15 + 16) == v10 )
      goto LABEL_12;
  }
  v15 = *((_QWORD *)this + 31);
LABEL_12:
  if ( v15 != *((_QWORD *)this + 31) )
LABEL_13:
    v6 = 1;
  v29 = 0uLL;
  v34 = 0LL;
  v28 = 0LL;
  PositionRelativeToSite = 0LL;
  if ( v6 )
  {
    InputETW::DragNDrop::DragCancelled(v10, (int *)&PositionRelativeToSite, (int *)&v28, (int *)&v34, 0LL);
    (*(void (__fastcall **)(char *, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, __int128 *, _QWORD, _DWORD))(*((_QWORD *)a4 + 1) + 48LL))(
      (char *)a4 + 8,
      v35,
      &PositionRelativeToSite,
      &v28,
      &v34,
      &v29,
      0LL,
      0);
    std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
      (char *)this + 304,
      &v35);
  }
  else
  {
    v16 = *(_QWORD *)(v12 + 28);
    v17 = *(_DWORD *)(v12 + 40);
    v18 = *(_DWORD *)(v12 + 36);
    DragNDropProcessor::GetDragManagerInputSite((__int64)this, (__int64 *)&v30, v16, v18, (__int64)a4);
    if ( v30 )
      PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v30, (struct tagPOINT)v16);
    DragNDropProcessor::GetDragSourceInputSite((__int64)this, (__int64 *)&v31, v16, v18, (__int64)a4);
    if ( v31 )
      v34 = PointerManipulationHelper::GetPositionRelativeToSite(v31, (struct tagPOINT)v16);
    *(_QWORD *)&v29 = **(_QWORD **)&DragNDropProcessor::GetVelocityForPointerId(this, v33, v35);
    *(_OWORD *)v33 = *(_OWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a4 + 1) + 72LL))((char *)a4 + 8);
    DragNDropProcessor::HitTest(
      (__int64)this,
      (struct tagPOINT)v16,
      v18,
      v33,
      0LL,
      &v28,
      (__int64 *)&v29 + 1,
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    InputType = PointerManipulationHelper::GetInputType(v18, v19, v20);
    v22 = *((_QWORD *)&v29 + 1);
    InputETW::DragNDrop::DragStarted(
      v35,
      (int *)&PositionRelativeToSite,
      (int *)&v28,
      (int *)&v34,
      *((__int64 *)&v29 + 1),
      v17);
    v23 = (*(__int64 (__fastcall **)(char *, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, __int128 *, __int64, unsigned int, int, __int64))(*((_QWORD *)a4 + 1) + 24LL))(
            (char *)a4 + 8,
            v35,
            &PositionRelativeToSite,
            &v28,
            &v34,
            &v29,
            v22,
            v17,
            InputType,
            v36);
    *((_QWORD *)&v29 + 1) = 0LL;
    std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,unsigned __int64 &>(
      (__int64)this + 240,
      (__int64)v33,
      &v35,
      (_QWORD *)&v29 + 1);
    if ( v23 >= 0 )
    {
      std::unordered_map<unsigned long,DragNDropProcessor::MessageInfo>::_Try_emplace<unsigned long const &,>(
        (__int64)this + 112,
        (__int64)v33,
        (const unsigned __int8 *)&v35);
      v24 = *(_QWORD *)v33;
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=(
        (__int64 (__fastcall ****)(_QWORD))(*(_QWORD *)v33 + 32LL),
        &v32);
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)(v24 + 56), (__int64 *)&v30);
      **(_DWORD **)(v24 + 64) = 4;
    }
    v25 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v26 + 16LL))(v26);
    }
  }
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v32);
  return 0LL;
}
