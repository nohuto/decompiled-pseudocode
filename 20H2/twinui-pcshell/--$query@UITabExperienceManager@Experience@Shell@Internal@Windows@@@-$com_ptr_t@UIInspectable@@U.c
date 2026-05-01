/*
 * XREFs of ??$query@UITabExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800AD0FC
 * Callers:
 *     ?SubscribeToServices@TitleBarController@@UEAAJPEAUIServiceProvider@@@Z @ 0x180288080 (-SubscribeToServices@TitleBarController@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Internal::Shell::Experience::ITabExperienceManager>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_cfd1fc22_acb7_4036_88b9_5ed4362a1186, a2);
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
