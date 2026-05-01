/*
 * XREFs of wil::details::ScopeExitFn__lambda_92a6825c93b1270d93409bdb723f7059___::_ScopeExitFn__lambda_92a6825c93b1270d93409bdb723f7059___ @ 0x18009E1E0
 * Callers:
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18005E520 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     _WindowEventDispatcher::AppViewActivationShowRequested_::_1_::dtor$6 @ 0x1800DE61C (_WindowEventDispatcher--AppViewActivationShowRequested_--_1_--dtor$6.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_92a6825c93b1270d93409bdb723f7059___::_ScopeExitFn__lambda_92a6825c93b1270d93409bdb723f7059___(
        __int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v1 + 24LL))(*v1, 2147500037LL);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3C2,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v2);
  }
}
