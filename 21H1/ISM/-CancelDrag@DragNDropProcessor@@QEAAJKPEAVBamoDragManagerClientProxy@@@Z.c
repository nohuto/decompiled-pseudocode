/*
 * XREFs of ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1800F8B64
 * Callers:
 *     ?CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManagerClientProxy@@@Z @ 0x1800F5F80 (-CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManager.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FA4F0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E60 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011D2C (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180069614 (--1-$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?OnManualDragEnded@DragAreaClientProxy@@QEAAXI@Z @ 0x1800F5A30 (-OnManualDragEnded@DragAreaClientProxy@@QEAAXI@Z.c)
 *     ??$_Insert_unverified@$$CBKU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@$$QEBKU_Not_a_node_tag@1@@Z @ 0x1800F6E24 (--$_Insert_unverified@$$CBKU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-.c)
 *     ?DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800F903C (-DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800F97F8 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x1800F9B44 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_KPEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@9@Z @ 0x1800F9BE0 (-HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_K.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800FC930 (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ_ea_1800FC930.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800FCC58 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x180145440 (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessor::CancelDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  __int64 v6; // rbx
  struct BamoDragManagerClientProxy *v7; // rdi
  struct tagPOINT v8; // rsi
  unsigned int v9; // r14d
  int v10; // esi
  __int64 v11; // rdi
  DragAreaClientProxy *v12; // rcx
  struct InputSite *v13; // rcx
  struct tagPOINT v15; // [rsp+60h] [rbp-29h] BYREF
  struct tagPOINT PositionRelativeToSite; // [rsp+68h] [rbp-21h] BYREF
  struct InputSite *v17; // [rsp+70h] [rbp-19h] BYREF
  __int64 v18; // [rsp+78h] [rbp-11h] BYREF
  struct BamoDragManagerClientProxy *v19; // [rsp+80h] [rbp-9h] BYREF
  __int64 (__fastcall ***v20)(_QWORD); // [rsp+88h] [rbp-1h]
  unsigned int v21[4]; // [rsp+90h] [rbp+7h] BYREF
  _OWORD v22[4]; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v23; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v24; // [rsp+F8h] [rbp+6Fh] BYREF
  int v25; // [rsp+108h] [rbp+7Fh] BYREF
  int v26; // [rsp+10Ch] [rbp+83h]

  v24 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (char *)this + 112,
    &v23,
    &v24);
  v6 = v23;
  if ( v23 != *((_QWORD *)this + 15) )
  {
    v19 = *(struct BamoDragManagerClientProxy **)(v23 + 32);
    v7 = v19;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v19);
    if ( v7 == a3 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
        (char *)this + 48,
        &v23,
        &v24);
      if ( v23 != *((_QWORD *)this + 7) )
      {
        v8 = *(struct tagPOINT *)(v23 + 28);
        v9 = *(_DWORD *)(v23 + 36);
        LODWORD(v23) = *(_DWORD *)(v23 + 40);
        DragNDropProcessor::GetVelocityForPointerId(this, (unsigned int)v21);
        v15 = v8;
        v18 = 0LL;
        v20 = (__int64 (__fastcall ***)(_QWORD))((char *)v7 + 8);
        v22[0] = *(_OWORD *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v7 + 1) + 72LL))((__int64)v7 + 8);
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))DragNDropProcessor::HitTest)(
          this,
          v8,
          v9,
          v22,
          0LL,
          &v15,
          &v18,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v25 = 0;
        v26 = 0;
        PositionRelativeToSite = v8;
        DragNDropProcessor::GetDragManagerInputSite((_DWORD)this, (unsigned int)&v17, v8.x, v9, (__int64)v7);
        if ( v17 )
          PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v17, v8);
        v10 = v23;
        v11 = v18;
        InputETW::DragNDrop::DragEnded(a2, &PositionRelativeToSite, &v15, &v25, v18, v23);
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, struct tagPOINT *, struct tagPOINT *, int *, unsigned int *, __int64, int))(*v20)[5])(
          v20,
          a2,
          &PositionRelativeToSite,
          &v15,
          &v25,
          v21,
          v11,
          v10);
        std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
          (char *)this + 304,
          &v24);
        Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)(v6 + 32));
        v12 = *(DragAreaClientProxy **)(v6 + 40);
        if ( v12 )
        {
          DragAreaClientProxy::OnManualDragEnded(v12);
          Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)(v6 + 40));
        }
        if ( v6 != *((_QWORD *)this + 15) && **(_DWORD **)(v6 + 64) != 1 )
          std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Insert_unverified<unsigned long const,std::_Not_a_node_tag>(
            (__int64)this + 432,
            (__int64)v22,
            (const unsigned __int8 *)&v24);
        v13 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    Microsoft::WRL::ComPtr<MPCRemoteStateManager>::~ComPtr<MPCRemoteStateManager>((__int64 *)&v19);
  }
  return 0LL;
}
