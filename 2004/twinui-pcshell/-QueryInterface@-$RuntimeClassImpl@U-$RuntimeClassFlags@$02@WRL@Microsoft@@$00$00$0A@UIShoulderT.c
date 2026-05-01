/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShoulderTapExperienceManager@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShoulderTapExperienceManager>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return CShoulderTapExperienceManager::QueryInterface((CShoulderTapExperienceManager *)(a1 - 8), a2, a3);
}
