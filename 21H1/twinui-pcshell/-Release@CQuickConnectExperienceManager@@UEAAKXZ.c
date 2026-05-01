/*
 * XREFs of ?Release@CQuickConnectExperienceManager@@UEAAKXZ @ 0x1801BB8D0
 * Callers:
 *     ?Release@CQuickConnectExperienceManager@@W7EAAKXZ @ 0x1800CE3C0 (-Release@CQuickConnectExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CQuickConnectExperienceManager@@WBA@EAAKXZ @ 0x1800CE3D0 (-Release@CQuickConnectExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CQuickConnectExperienceManager@@WBI@EAAKXZ @ 0x1800CE3E0 (-Release@CQuickConnectExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CQuickConnectExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release(this);
}
