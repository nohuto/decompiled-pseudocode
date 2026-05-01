/*
 * XREFs of ?IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ @ 0x1803F8CEC
 * Callers:
 *     ?BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z @ 0x1803F4620 (-BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z.c)
 *     ?CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z @ 0x1803F4768 (-CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TabletModePositioner::IsFullScreenViewVisible(TabletModePositioner *this)
{
  int v1; // eax
  char v2; // bl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 52) + 72LL))(*((_QWORD *)this + 52), &v5);
  v2 = 0;
  if ( v1 >= 0 )
    return v5 != 0;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xC62,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
