/*
 * XREFs of _lambda_d29dcbd5ea21ea421d385d1150c3a2fa_::operator() @ 0x1800BAB4C
 * Callers:
 *     CVirtualDesktopManager::_OnViewAdded__lambda_d29dcbd5ea21ea421d385d1150c3a2fa___ @ 0x1800BA830 (CVirtualDesktopManager--_OnViewAdded__lambda_d29dcbd5ea21ea421d385d1150c3a2fa___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_d29dcbd5ea21ea421d385d1150c3a2fa_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a1)[13] + 56LL))(
         (*a1)[13],
         *a1[1],
         *a1[2],
         (*a1)[11]);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x228,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
