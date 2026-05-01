/*
 * XREFs of ??$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009DFFC
 * Callers:
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180291860 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     _lambda_6f7d8edcc79332d2588e530a2e25d22f_::operator() @ 0x1802BC07C (_lambda_6f7d8edcc79332d2588e530a2e25d22f_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelPreview>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_b14636c0_fd94_4ad7_8f2a_159e684a1d25, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a2;
}
