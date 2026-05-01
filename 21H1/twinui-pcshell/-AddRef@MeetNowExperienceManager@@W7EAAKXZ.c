/*
 * XREFs of ?AddRef@MeetNowExperienceManager@@W7EAAKXZ @ 0x1800CE9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MeetNowExperienceManager::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::AddRef(a1 - 8);
}
