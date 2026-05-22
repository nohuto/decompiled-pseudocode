/*
 * XREFs of ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x18011C9DC
 * Callers:
 *     ?ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011C63C (-ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011DC88 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180028D94 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029640 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1801236B0 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

void __fastcall ControllerNavigationManager::DisableNavigation(ControllerNavigationManager *this)
{
  __int64 v2; // rcx
  LPVOID v3; // rax
  __int64 v4; // r10
  _QWORD *v5; // rdi
  _QWORD *i; // rbx
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF

  if ( InputETW::IsEnabled((__int64)this) )
  {
    v3 = wil::details::static_lazy<InputETW>::get(v2, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v3 + 1) > 5u && tlgKeywordOn(*((_QWORD *)v3 + 1), 1LL) )
      tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1801CE004, 0LL, 0LL, 2u, &v7);
  }
  v5 = (_QWORD *)*((_QWORD *)this + 9);
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
    ControllerProcessor::UpdateNavigationState(i[3], 2LL, 0LL);
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8, 0LL);
}
