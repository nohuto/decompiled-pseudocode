/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18008016C
 * Callers:
 *     _TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewChanged_::_2_::ShellExperienceViewChangedArg::_scalar_deleting_destructor_ @ 0x180080130 (_TwinUI--ShellFeeds--ShellFeedsShellExperienceView--_FireViewChanged_--_2_--ShellExperienceViewC.c)
 *     _TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::_scalar_deleting_destructor_ @ 0x180080510 (_TwinUI--ShellFeeds--ShellFeedsShellExperienceView--_FireViewEvent_--_2_--ShellExperienceViewEve.c)
 *     _ShellFeedsExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::_scalar_deleting_destructor_ @ 0x180088700 (_ShellFeedsExperienceManagerNotification--OnShown_--_2_--CCortanaShownEventArgs--_scalar_deletin.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801B7660 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIShellExperienceViewEventArg@Experie.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  result = (unsigned __int64)v2 >> 63;
  if ( v2 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
             2 * v2,
             a2);
  return result;
}
