/*
 * XREFs of ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18040F6C8
 * Callers:
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18040DA44 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x18040DE14 (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@@Z @ 0x18040D36C (-AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@.c)
 *     ?DropLocationToArrangementAction@WindowArrangementView@@AEAA?AW4ARRANGEMENT_ACTION@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18040DB1C (-DropLocationToArrangementAction@WindowArrangementView@@AEAA-AW4ARRANGEMENT_ACTION@@W4DropLocati.c)
 *     ?GetAppViewCloseOverrideOperation@WindowArrangementView@@AEAAJPEAUITabletModePositioner@@PEAUIApplicationView@@PEAPEAUIAppLayoutOperation@@@Z @ 0x18040DFA0 (-GetAppViewCloseOverrideOperation@WindowArrangementView@@AEAAJPEAUITabletModePositioner@@PEAUIAp.c)
 *     ?QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrangementViewDragData@@PEAPEAUIAppLayoutOperation@@@Z @ 0x18040F95C (-QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrange.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180471E00 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowArrangementView::ProcessDrop(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // edi
  HRESULT v6; // eax
  HRESULT Service; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  int v12; // [rsp+20h] [rbp-20h]
  struct IAppLayoutOperationBuilder *v13[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *ppvOut; // [rsp+70h] [rbp+30h] BYREF
  struct ITabletModePositioner *v16; // [rsp+78h] [rbp+38h] BYREF

  v5 = WindowArrangementView::DropLocationToArrangementAction(a1, a2);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 72) + 104LL))(*(_QWORD *)(v4 + 72));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 208LL))(*(_QWORD *)(a1 + 80));
    if ( v5 == 6 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v6 = IUnknown_QueryService(
             *(IUnknown **)(a1 + 16),
             &stru_180543360,
             &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
             &ppvOut);
      if ( v6 >= 0 )
      {
        v12 = 23;
        ApplicationViewHelpers::CloseView(*(_QWORD *)(a1 + 88), ppvOut, *(_DWORD *)(a1 + 292) != 0);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5B9,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v6);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    if ( *(_DWORD *)(a1 + 288) != 1 )
    {
      v16 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      Service = IUnknown_QueryService(
                  *(IUnknown **)(a1 + 16),
                  &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
                  &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
                  (void **)&v16);
      v8 = Service;
      if ( Service < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5C4,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)Service);
LABEL_21:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
        return v8;
      }
      ppvOut = 0LL;
      if ( a2 == 6 && *(_DWORD *)(a1 + 288) != 2 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        WindowArrangementView::GetAppViewCloseOverrideOperation(
          (WindowArrangementView *)a1,
          v16,
          *(struct IApplicationView **)(a1 + 88),
          (struct IAppLayoutOperation **)&ppvOut);
      }
      if ( !ppvOut )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        v9 = WindowArrangementView::QueryArrangeView(a1, *(_QWORD *)(a1 + 88), a2, &ppvOut, v12);
        v8 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5D2,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
            (const char *)(unsigned int)v9);
LABEL_20:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
          goto LABEL_21;
        }
      }
      v13[0] = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
      if ( (**(int (__fastcall ***)(void *, GUID *, struct IAppLayoutOperationBuilder **))ppvOut)(
             ppvOut,
             &GUID_521214fe_07d7_470b_b6f3_b9d2354cae32,
             v13) >= 0 )
        WindowArrangementView::AddTempAppVisualsToLayoutOperation((WindowArrangementView *)a1, v13[0]);
      v10 = (*(__int64 (__fastcall **)(struct ITabletModePositioner *, void *))(*(_QWORD *)v16 + 88LL))(v16, ppvOut);
      v8 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5DF,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
        goto LABEL_20;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    }
  }
  return 0LL;
}
