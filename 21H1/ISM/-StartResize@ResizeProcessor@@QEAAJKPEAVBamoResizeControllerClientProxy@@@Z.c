/*
 * XREFs of ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FF4BC
 * Callers:
 *     ?StartResize@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FD270 (-StartResize@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeCo.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E60 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18003B224 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044758 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??B?$ComPtr@VInputSite@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x1800447AC (--B-$ComPtr@VInputSite@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ.c)
 *     ?CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2@Z @ 0x1800453D8 (-CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2.c)
 *     ?GetResizeControllerInputSite@ResizeProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x18004555C (-GetResizeControllerInputSite@ResizeProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVB.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180069614 (--1-$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800F8944 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F89F0 (--4-$unique_ptr@VDragGestureTracker@@U-$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800FCC58 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KUMessageInfo@ResizeProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800FD7DC (--$_Try_emplace@AEBK$$V@-$unordered_map@KUMessageInfo@ResizeProcessor@@U-$hash@K@std@@U-$equal_t.c)
 *     ??A?$unordered_map@KUtagPOINT@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@@std@@QEAAAEAUtagPOINT@@AEBK@Z @ 0x1800FDC50 (--A-$unordered_map@KUtagPOINT@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$pair@$$CBKUtagPOIN.c)
 *     ?ResizeCancelled@Resize@InputETW@@SAXKPEAUtagPOINT@@0I@Z @ 0x1800FEB1C (-ResizeCancelled@Resize@InputETW@@SAXKPEAUtagPOINT@@0I@Z.c)
 *     ?ResizeStarted@Resize@InputETW@@SAXKPEAUtagPOINT@@0I@Z @ 0x1800FEDE0 (-ResizeStarted@Resize@InputETW@@SAXKPEAUtagPOINT@@0I@Z.c)
 *     ?StartResize@Resize@InputETW@@SAXK@Z @ 0x1800FF410 (-StartResize@Resize@InputETW@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ResizeProcessor::StartResize(
        void **this,
        unsigned int a2,
        struct BamoResizeControllerClientProxy *a3)
{
  char *v5; // rbx
  bool v6; // di
  __int64 v7; // rcx
  int v8; // eax
  char v9; // cl
  unsigned int v10; // edi
  struct tagPOINT v11; // rbx
  char *v12; // rbx
  _DWORD *v13; // rax
  _DWORD **v14; // rdi
  void *v15; // rbx
  __int64 (__fastcall ***v17)(_QWORD); // [rsp+30h] [rbp-20h] BYREF
  void *v18[3]; // [rsp+38h] [rbp-18h] BYREF
  struct tagPOINT v19; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+38h] BYREF
  struct tagPOINT v21; // [rsp+90h] [rbp+40h] BYREF
  struct InputSite *v22; // [rsp+98h] [rbp+48h] BYREF

  v20 = a2;
  InputETW::Resize::StartResize(a2);
  v17 = (__int64 (__fastcall ***)(_QWORD))a3;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v17);
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (__int64)(this + 11),
    (__int64)v18,
    (const unsigned __int8 *)&v20);
  v5 = (char *)v18[0];
  v6 = v18[0] == this[12];
  ResizeProcessor::GetResizeControllerInputSite(v7, &v22, a3);
  v8 = Microsoft::WRL::ComPtr<InputSite>::operator int Microsoft::WRL::Details::BoolStruct::*(&v22);
  v9 = v6;
  if ( v8 == -1 )
    v9 = 1;
  v21.x = 0;
  v21.y = 0;
  v19.x = 0;
  v19.y = 0;
  if ( v9 )
  {
    InputETW::Resize::ResizeCancelled(v20, &v21, &v19);
    (*(void (__fastcall **)(char *, _QWORD, struct tagPOINT *, struct tagPOINT *, _DWORD))(*((_QWORD *)a3 + 1) + 48LL))(
      (char *)a3 + 8,
      v20,
      &v21,
      &v19,
      0);
  }
  else
  {
    v10 = *((_DWORD *)v5 + 7);
    v11 = *(struct tagPOINT *)(v5 + 20);
    *(struct tagPOINT *)std::unordered_map<unsigned long,tagPOINT>::operator[](
                          (__int64)(this + 29),
                          (const unsigned __int8 *)&v20) = v11;
    ResizeProcessor::CreatePointerInfoAndUpdatePositionData((ResizeProcessor *)this, v20, v11, v22, &v21, &v19);
    InputETW::Resize::ResizeStarted(v20, &v21, &v19, v10);
    if ( (*(int (__fastcall **)(char *, _QWORD, struct tagPOINT *, struct tagPOINT *, unsigned int))(*((_QWORD *)a3 + 1) + 24LL))(
           (char *)a3 + 8,
           v20,
           &v21,
           &v19,
           v10) >= 0 )
    {
      std::unordered_map<unsigned long,ResizeProcessor::MessageInfo>::_Try_emplace<unsigned long const &,>(
        (__int64)(this + 3),
        (__int64)v18,
        (const unsigned __int8 *)&v20);
      v12 = (char *)v18[0];
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))v18[0] + 3, &v17);
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)v12 + 4, (__int64 *)&v22);
      v13 = operator new(0x18uLL);
      *v13 = 0;
      v13[1] = 0;
      v13[2] = 0;
      *((_QWORD *)v13 + 2) = 0LL;
      v18[0] = v13;
      v14 = (_DWORD **)(v12 + 40);
      std::unique_ptr<DragGestureTracker>::operator=((_QWORD **)v12 + 5, v18);
      v15 = v18[0];
      if ( v18[0] )
      {
        if ( *((_QWORD *)v18[0] + 2) )
          DestroyInteractionContext();
        operator delete(v15, (const struct std::nothrow_t *)0x18);
      }
      **v14 = 4;
    }
  }
  Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v22);
  Microsoft::WRL::ComPtr<MPCRemoteStateManager>::~ComPtr<MPCRemoteStateManager>((__int64 *)&v17);
  return 0LL;
}
