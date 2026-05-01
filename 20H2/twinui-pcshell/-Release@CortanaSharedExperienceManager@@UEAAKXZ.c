/*
 * XREFs of ?Release@CortanaSharedExperienceManager@@UEAAKXZ @ 0x180086D50
 * Callers:
 *     ?Release@SearchAppExperienceManager@@W7EAAKXZ @ 0x1800F3B60 (-Release@SearchAppExperienceManager@@W7EAAKXZ.c)
 *     ?Release@SearchAppExperienceManager@@WBA@EAAKXZ @ 0x1800F3B70 (-Release@SearchAppExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@SearchAppExperienceManager@@WBI@EAAKXZ @ 0x1800F3B80 (-Release@SearchAppExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CortanaSharedExperienceManager::Release(CortanaSharedExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::Release(this);
}
