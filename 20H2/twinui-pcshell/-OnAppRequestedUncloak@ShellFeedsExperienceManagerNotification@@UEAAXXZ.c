/*
 * XREFs of ?OnAppRequestedUncloak@ShellFeedsExperienceManagerNotification@@UEAAXXZ @ 0x18009CB40
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnAppRequestedUncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009E500 (-_OnAppRequestedUncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 */

void __fastcall ShellFeedsExperienceManagerNotification::OnAppRequestedUncloak(
        ShellFeedsExperienceManagerNotification *this)
{
  ShellFeedsExperienceManagerImpl *v1; // rcx

  v1 = (ShellFeedsExperienceManagerImpl *)*((_QWORD *)this + 5);
  if ( v1 )
    ShellFeedsExperienceManagerImpl::_OnAppRequestedUncloak(v1);
}
