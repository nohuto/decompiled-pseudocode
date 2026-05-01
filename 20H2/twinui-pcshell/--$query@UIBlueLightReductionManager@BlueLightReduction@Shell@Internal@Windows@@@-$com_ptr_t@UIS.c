/*
 * XREFs of ??$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800953A4
 * Callers:
 *     _lambda_a0f94ce564b248d96bcce93f9fd6f559_::operator() @ 0x180198910 (_lambda_a0f94ce564b248d96bcce93f9fd6f559_--operator().c)
 *     _lambda_b626ea17c2145bb8baba7a3da573245f_::operator() @ 0x1801989CC (_lambda_b626ea17c2145bb8baba7a3da573245f_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9a5eea2e7cf0ec67372bc9fea48c14bd___::Run @ 0x180199830 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9a5eea2e7cf0ec67372bc9fea48c14bd___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c8e7ca030c93760c97370a6e8d0118fa___::Run @ 0x1801998C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c8e7ca030c93760c97370a6e8d0118fa___--Run.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IServiceHostComponent,wil::err_exception_policy>::query<Windows::Internal::Shell::BlueLightReduction::IBlueLightReductionManager>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_05357b73_71a8_4328_801f_d28e07a3d3ff, a2);
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
