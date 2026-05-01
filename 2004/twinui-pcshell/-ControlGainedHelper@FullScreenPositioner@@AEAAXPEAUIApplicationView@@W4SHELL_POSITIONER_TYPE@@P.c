/*
 * XREFs of ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1801A5A20
 * Callers:
 *     ?ControlGained@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1801A57F0 (-ControlGained@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlGainedForActivation@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801A58C0 (-ControlGainedForActivation@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?InitializePosition@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1801A6A90 (-InitializePosition@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180015480 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801A51FC (-AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequestedArgs@@@Z @ 0x1801A5408 (-ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequ.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x1801A6F70 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1801A7800 (-SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801A7AA8 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::ControlGainedHelper(
        __int64 *a1,
        struct IApplicationView *a2,
        int a3,
        struct IPresentationRequestedArgs *a4,
        __int64 a5)
{
  int v9; // eax
  __int64 v10; // rsi
  int v11; // eax
  FullScreenPositioner *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  int v20; // [rsp+60h] [rbp+40h] BYREF
  struct IImmersiveMonitor *v21; // [rsp+68h] [rbp+48h] BYREF
  int v22; // [rsp+70h] [rbp+50h] BYREF

  v22 = 0;
  v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v22);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x484,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v9);
  v21 = 0LL;
  v10 = a5;
  if ( !a5 || v22 )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v21, a1 + 29);
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    v11 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)v10 + 80LL))(v10, &v21);
    v12 = retaddr;
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x489,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v11);
  }
  if ( a4 )
    FullScreenPositioner::ApplyPresentationChanges(v12, a2, a4);
  FullScreenPositioner::SetPositionerMonitor(a2, v21);
  if ( a3 != 3 )
  {
    v13 = FullScreenPositioner::AddView((FullScreenPositioner *)a1, a2);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x49F,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v13);
  }
  FullScreenPositioner::PositionView(a1, a2, 0LL);
  if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 88LL))(a2, &v20) >= 0 && v20 )
    FullScreenPositioner::SetVisibleView((FullScreenPositioner *)a1, a2);
  v14 = a1[36];
  if ( v14 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, __int64 *))(*(_QWORD *)v14 + 72LL))(
            v14,
            a2,
            &a5);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 1418LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_23;
    }
    v15 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)a2 + 432LL))(a2, (unsigned int)a5);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 1419LL;
      goto LABEL_19;
    }
  }
  v16 = 0;
LABEL_23:
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4AF,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v16);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
}
