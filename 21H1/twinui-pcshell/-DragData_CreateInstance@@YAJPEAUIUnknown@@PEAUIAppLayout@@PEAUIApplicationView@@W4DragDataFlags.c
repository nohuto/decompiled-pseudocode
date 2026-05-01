/*
 * XREFs of ?DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F4980
 * Callers:
 *     ?InitDragData@WindowArrangementView@@AEAAJXZ @ 0x1803EB9B0 (-InitDragData@WindowArrangementView@@AEAAJXZ.c)
 *     ?InitView@WindowArrangementView@@AEAAJXZ @ 0x1803EBFF8 (-InitView@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x1803E4474 (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Details@WRL@Microsoft@@YAJPEAPEAVDragData@@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1803F45E0 (--$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@U?$ChainInterfaces@UIPlaceModeData@@UIDragData@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803F4900 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1803F4900.c)
 */

__int64 __fastcall DragData_CreateInstance(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, DragData *a6)
{
  DragData *v6; // rdi
  int v7; // eax
  int CanCastTo; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  DragData *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v16; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+58h] [rbp+28h] BYREF
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  int v19; // [rsp+68h] [rbp+38h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v16 = a1;
  v6 = a6;
  a6 = 0LL;
  *(_QWORD *)v6 = 0LL;
  Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease((__int64 *)&a6);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<DragData,DragData,IUnknown * &,IAppLayout * &,IApplicationView * &,enum WindowArrangementViewDragData::DragDataFlags &>(
         &a6,
         &v16,
         &v17,
         &v18,
         &v19);
  CanCastTo = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 474LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
      (const char *)v9);
    goto LABEL_10;
  }
  v11 = a5;
  *(_QWORD *)v6 = 0LL;
  if ( InlineIsEqualGUID(v11, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v13 = a6;
    *(_QWORD *)v6 = a6;
    (*(void (__fastcall **)(DragData *))(*(_QWORD *)v13 + 8LL))(v13);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,Microsoft::WRL::ChainInterfaces<IPlaceModeData,IDragData,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::CanCastTo(
                  (__int64)a6,
                  v12,
                  v6);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6);
  }
  if ( CanCastTo < 0 )
  {
    v9 = (unsigned int)CanCastTo;
    v10 = 475LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease((__int64 *)&a6);
  return (unsigned int)CanCastTo;
}
