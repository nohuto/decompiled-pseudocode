/*
 * XREFs of ?PauseNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x18011D574
 * Callers:
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18011E224 (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180028D04 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x1800295B0 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035068 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180123C00 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

void __fastcall ControllerNavigationManager::PauseNavigation(ControllerNavigationManager *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  LPVOID v5; // rax
  __int64 v6; // r10
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, a2);
  if ( InputETW::IsEnabled(v3) )
  {
    v5 = wil::details::static_lazy<InputETW>::get(v4, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v5 + 1) > 5u && tlgKeywordOn(*((_QWORD *)v5 + 1), 1LL) )
      tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1801CEF04, 0LL, 0LL, 2u, &v9);
  }
  v7 = (_QWORD *)*((_QWORD *)this + 9);
  for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
    ControllerProcessor::UpdateNavigationState(i[3], 1LL, 0LL);
}
