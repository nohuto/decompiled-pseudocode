/*
 * XREFs of _TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_ValueSet @ 0x180084210
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_ValueSet(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx

  v2 = (_QWORD *)(a1 + 40);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 40));
  *a2 = *v2;
  return 0LL;
}
