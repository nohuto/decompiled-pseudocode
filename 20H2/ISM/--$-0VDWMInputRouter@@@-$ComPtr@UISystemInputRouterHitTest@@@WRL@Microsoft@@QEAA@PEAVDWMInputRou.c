/*
 * XREFs of ??$?0VDWMInputRouter@@@?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@QEAA@PEAVDWMInputRouter@@@Z @ 0x180136B80
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180027504 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ISystemInputRouterHitTest>::ComPtr<ISystemInputRouterHitTest>(
        __int64 *a1,
        __int64 a2)
{
  *a1 = (a2 + 8) & -(__int64)(a2 != 0);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a1);
  return a1;
}
