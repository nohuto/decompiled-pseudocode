/*
 * XREFs of ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18040F988
 * Callers:
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18040F670 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801849B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_1801849B0.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180184D20 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1803C4C38 (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97__&_ @ 0x18040BE40 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97__-_.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18040D248 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x18040D7A0 (-GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PE.c)
 *     ?GetPrimaryMonitor@WindowArrangementView@@AEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18040DAEC (-GetPrimaryMonitor@WindowArrangementView@@AEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x18040DEFC (-InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18040E6F0 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x18040F7F0 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 *     ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x180411288 (-UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowArrangementView::ShowView(
        IUnknown **this,
        struct tagRECT *a2,
        const struct tagPOINT *a3,
        struct tagRECT *a4)
{
  int PlaceModePoint; // eax
  unsigned int LastError; // ebx
  int PrimaryMonitor; // eax
  __int64 v11; // rdx
  HRESULT v12; // eax
  bool *v13; // r9
  int IsLauncherVisibleOnMonitor; // eax
  int v15; // eax
  volatile int *v16; // rdx
  int v17; // eax
  HWND v18; // rax
  const char *v19; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  struct IUnknown *v25[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct tagPOINT v27; // [rsp+70h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+80h] [rbp+40h] BYREF

  v27 = *a3;
  if ( *((_DWORD *)this + 72) != 2
    || (PlaceModePoint = WindowArrangementView::GetPlaceModePoint((__int64)this, 7, 0xFFFFFFFF, &v27),
        LastError = PlaceModePoint,
        PlaceModePoint >= 0) )
  {
    v25[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
    PrimaryMonitor = WindowArrangementView::GetPrimaryMonitor(this, (struct IImmersiveMonitor **)v25);
    LastError = PrimaryMonitor;
    if ( PrimaryMonitor < 0 )
    {
      v11 = 1141LL;
LABEL_33:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)PrimaryMonitor);
      goto LABEL_25;
    }
    PrimaryMonitor = WindowArrangementView::InitDragVisual((WindowArrangementView *)this, v25[0], a2, &v27, a4);
    LastError = PrimaryMonitor;
    if ( PrimaryMonitor < 0 )
    {
      v11 = 1142LL;
      goto LABEL_33;
    }
    if ( *((_DWORD *)this + 72) == 2 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v12 = IUnknown_QueryService(this[2], &stru_180542A80, &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41, &ppvOut);
      LastError = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x47B,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_25:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
        return LastError;
      }
      ((void (__fastcall *)(IUnknown *))this[10]->lpVtbl[8].QueryInterface)(this[10]);
      LOBYTE(v27.x) = 0;
      IsLauncherVisibleOnMonitor = ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
                                     this[2],
                                     0LL,
                                     (struct IImmersiveLauncher *)&v27,
                                     v13);
      if ( IsLauncherVisibleOnMonitor >= 0 )
      {
        if ( LOBYTE(v27.x) )
          WindowArrangementView::EnablePlaceModeDropFeedback((__int64)this, 1, 0LL, 0LL);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x480,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)IsLauncherVisibleOnMonitor);
      }
      v15 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x487,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    ((void (__fastcall *)(IUnknown *))this[10]->lpVtbl[1].QueryInterface)(this[10]);
    PrimaryMonitor = ((__int64 (__fastcall *)(IUnknown *))this[9]->lpVtbl[1].QueryInterface)(this[9]);
    LastError = PrimaryMonitor;
    if ( PrimaryMonitor < 0 )
    {
      v11 = 1164LL;
      goto LABEL_33;
    }
    v17 = *((_DWORD *)this + 72);
    if ( v17 == 2 )
    {
      v18 = (HWND)((__int64 (__fastcall *)(IUnknown *))this[10]->lpVtbl[4].Release)(this[10]);
      if ( !SetForegroundWindow(v18) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x491,
                      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
                      v19);
        goto LABEL_25;
      }
      WindowArrangementView::ShowPlaceModeFeedback((__int64)(this + 6), 0, 0LL, 0);
    }
    else if ( v17 == 3 )
    {
      *((_BYTE *)this + 315) = 1;
      ppvOut = this;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
        (__int64)this,
        v16);
      v27 = (struct tagPOINT)this;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
      v24 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97____(
              v22,
              v21,
              v23,
              &v27);
      LastError = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4A7,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v24);
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v27);
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_25;
      }
      ((void (__fastcall *)(IUnknown *))this[10]->lpVtbl[7].AddRef)(this[10]);
      ((void (__fastcall *)(IUnknown *, _QWORD))this[10]->lpVtbl[3].AddRef)(this[10], 0LL);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v27);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&ppvOut);
    }
    else
    {
      ((void (__fastcall *)(IUnknown *))this[10]->lpVtbl[7].AddRef)(this[10]);
      v27 = *a3;
      PrimaryMonitor = WindowArrangementView::UpdateView(this, &v27, 0LL);
      LastError = PrimaryMonitor;
      if ( PrimaryMonitor < 0 )
      {
        v11 = 1199LL;
        goto LABEL_33;
      }
    }
    LastError = 0;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x470,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)PlaceModePoint);
  return LastError;
}
