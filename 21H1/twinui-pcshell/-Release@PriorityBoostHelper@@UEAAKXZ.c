/*
 * XREFs of ?Release@PriorityBoostHelper@@UEAAKXZ @ 0x1801B15C0
 * Callers:
 *     ?Release@PriorityBoostHelper@@W7EAAKXZ @ 0x1800CE6C0 (-Release@PriorityBoostHelper@@W7EAAKXZ.c)
 *     ?Release@PriorityBoostHelper@@WBA@EAAKXZ @ 0x1800CE6D0 (-Release@PriorityBoostHelper@@WBA@EAAKXZ.c)
 *     ?Release@PriorityBoostHelper@@WBI@EAAKXZ @ 0x1800CE6E0 (-Release@PriorityBoostHelper@@WBI@EAAKXZ.c)
 *     ?Release@PriorityBoostHelper@@WCA@EAAKXZ @ 0x1800CE6F0 (-Release@PriorityBoostHelper@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall PriorityBoostHelper::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release(this);
}
