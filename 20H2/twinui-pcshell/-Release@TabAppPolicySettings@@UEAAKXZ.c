/*
 * XREFs of ?Release@TabAppPolicySettings@@UEAAKXZ @ 0x180275FF0
 * Callers:
 *     ?Release@TabAppPolicySettings@@W7EAAKXZ @ 0x1800F71D0 (-Release@TabAppPolicySettings@@W7EAAKXZ.c)
 *     ?Release@TabAppPolicySettings@@WBA@EAAKXZ @ 0x1800F71E0 (-Release@TabAppPolicySettings@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall TabAppPolicySettings::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Tabs::IBrokeredTabAppPolicySettings,Microsoft::WRL::FtmBase>::Release(this);
}
