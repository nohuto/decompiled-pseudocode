/*
 * XREFs of ?Release@ShellFeedsExperienceManagerImpl@@UEAAKXZ @ 0x18009D140
 * Callers:
 *     ?Release@ShellFeedsExperienceManagerImpl@@W7EAAKXZ @ 0x1800F4A60 (-Release@ShellFeedsExperienceManagerImpl@@W7EAAKXZ.c)
 *     ?Release@ShellFeedsExperienceManagerImpl@@WBA@EAAKXZ @ 0x1800F4A70 (-Release@ShellFeedsExperienceManagerImpl@@WBA@EAAKXZ.c)
 *     ?Release@ShellFeedsExperienceManagerImpl@@WBI@EAAKXZ @ 0x1800F4A80 (-Release@ShellFeedsExperienceManagerImpl@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ShellFeedsExperienceManagerImpl::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellFeedsExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release(this);
}
