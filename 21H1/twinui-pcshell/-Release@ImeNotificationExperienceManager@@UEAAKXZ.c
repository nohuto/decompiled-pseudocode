/*
 * XREFs of ?Release@ImeNotificationExperienceManager@@UEAAKXZ @ 0x18019BA60
 * Callers:
 *     ?Release@ImeNotificationExperienceManager@@W7EAAKXZ @ 0x1800CDC10 (-Release@ImeNotificationExperienceManager@@W7EAAKXZ.c)
 *     ?Release@ImeNotificationExperienceManager@@WBA@EAAKXZ @ 0x1800CDC20 (-Release@ImeNotificationExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ImeNotificationExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IImeStatusNotificationExperienceManager,Windows::Foundation::IClosable>::Release(this);
}
