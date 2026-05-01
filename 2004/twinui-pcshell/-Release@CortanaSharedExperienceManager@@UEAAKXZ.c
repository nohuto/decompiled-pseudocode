/*
 * XREFs of ?Release@CortanaSharedExperienceManager@@UEAAKXZ @ 0x1800871C0
 * Callers:
 *     ?Release@SearchAppExperienceManager@@W7EAAKXZ @ 0x1800F25A0 (-Release@SearchAppExperienceManager@@W7EAAKXZ.c)
 *     ?Release@SearchAppExperienceManager@@WBA@EAAKXZ @ 0x1800F25B0 (-Release@SearchAppExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@SearchAppExperienceManager@@WBI@EAAKXZ @ 0x1800F25C0 (-Release@SearchAppExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CortanaSharedExperienceManager::Release(CortanaSharedExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::Release(this);
}
