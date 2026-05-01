/*
 * XREFs of ?OnAppRequestedDismiss@ShellFeedsExperienceManagerNotification@@UEAAXXZ @ 0x18009B8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnAppRequestedDismiss@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009D1E4 (-_OnAppRequestedDismiss@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 */

void __fastcall ShellFeedsExperienceManagerNotification::OnAppRequestedDismiss(
        ShellFeedsExperienceManagerNotification *this)
{
  ShellFeedsExperienceManagerImpl *v1; // rcx

  v1 = (ShellFeedsExperienceManagerImpl *)*((_QWORD *)this + 5);
  if ( v1 )
    ShellFeedsExperienceManagerImpl::_OnAppRequestedDismiss(v1);
}
