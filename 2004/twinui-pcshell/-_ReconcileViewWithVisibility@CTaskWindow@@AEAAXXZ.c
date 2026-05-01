/*
 * XREFs of ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x180020438
 * Callers:
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1800203C0 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 *     ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x180186790 (-Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z.c)
 * Callees:
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x1800204C4 (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTaskWindow::_ReconcileViewWithVisibility(struct IImmersiveApplicationInternal **this)
{
  int v2; // eax
  __int64 v3; // rdx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( this[7] )
  {
    CTaskWindow::s_UpdateNavigationLevel(this[17], (struct CTaskWindow::TASK_WINDOW *)(this + 5));
    v6 = 0LL;
    v2 = (**(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))this[7])(
           this[7],
           &GUID_35f1648c_265f_402c_b575_c9a325451df5,
           &v6);
    if ( v2 < 0 )
    {
      v3 = 1179LL;
    }
    else
    {
      v2 = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v6 + 88LL))(v6, *((_DWORD *)this + 32) == 2);
      if ( v2 >= 0 )
      {
LABEL_4:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
        return;
      }
      v3 = 1183LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
      (const char *)(unsigned int)v2,
      v4);
    goto LABEL_4;
  }
}
