/*
 * XREFs of ?DismissAllLightDismiss@TabletModeViewManager@@AEAAJXZ @ 0x1803E0574
 * Callers:
 *     ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1803E171C (-StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeViewManager::DismissAllLightDismiss(TabletModeViewManager *this)
{
  IUnknown *v1; // rcx
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  void *v5; // rcx
  void *ppvOut; // [rsp+20h] [rbp-78h] BYREF
  struct tagGUITHREADINFO pgui; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v1 = (IUnknown *)*((_QWORD *)this + 2);
  ppvOut = 0LL;
  v2 = IUnknown_QueryService(
         v1,
         &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
         &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
         &ppvOut);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 608LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_10;
  }
  v2 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 609LL;
    goto LABEL_5;
  }
  pgui.cbSize = 72;
  memset_0(&pgui.flags, 0, 0x44uLL);
  if ( GetGUIThreadInfo(0, &pgui) && (pgui.flags & 4) != 0 )
    SendNotifyMessageW(pgui.hwndMenuOwner, 0x1Fu, 0LL, 0LL);
  v3 = 0;
LABEL_10:
  v5 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v3;
}
