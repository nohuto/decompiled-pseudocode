/*
 * XREFs of ?OnSetForegroundFailed@ShellFeedsExperienceManagerNotification@@UEAAXXZ @ 0x18009B950
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnSetForegroundFailed@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009D440 (-_OnSetForegroundFailed@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 */

void __fastcall ShellFeedsExperienceManagerNotification::OnSetForegroundFailed(
        ShellFeedsExperienceManagerNotification *this)
{
  ShellFeedsExperienceManagerImpl *v1; // rcx

  v1 = (ShellFeedsExperienceManagerImpl *)*((_QWORD *)this + 5);
  if ( v1 )
    ShellFeedsExperienceManagerImpl::_OnSetForegroundFailed(v1);
}
