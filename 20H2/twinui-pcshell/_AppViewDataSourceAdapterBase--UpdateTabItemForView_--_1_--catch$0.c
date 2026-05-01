/*
 * XREFs of _AppViewDataSourceAdapterBase::UpdateTabItemForView_::_1_::catch$0 @ 0x180340A5A
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801503F8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AppViewDataSourceAdapterBase::UpdateTabItemForView_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0xAC,
                           (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
                           a4);
  return 0LL;
}
